//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Praveen Jain                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#define NUM_AGENTS 3

namespace
{
  namespace Development
  {
    namespace EventBasedConsensus
    {
      using DUNE_NAMESPACES;

      struct Task: public DUNE::Tasks::Periodic
      {
        bool m_leader_flag;
        bool m_start_flag;
        bool m_first_iter;
        bool m_new_data;
        fp64_t m_receive_buffer[NUM_AGENTS] = {0.0};
        bool m_receive_flag[NUM_AGENTS] = {0};

        struct EBC_params
        {
          uint8_t num_agents;
          fp64_t  sigma;
          fp64_t  dt;
          uint8_t id;
        } m_ebc_params;

        struct EBC_State
        {
          fp64_t x;
          fp64_t x_event;
          fp64_t t_event;
          fp64_t x_prev;
          fp64_t start_time;
          fp64_t u_event;
          fp64_t err;
          fp64_t phi;
        }m_ebc_state;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Periodic(name, ctx)
        {
          //  Set the parameters necessary for the EventBasedConsensus Controller
          param("Leader", m_leader_flag)
          .defaultValue("0")
          .description("If agent is a Leader");

          param("Number Agents", m_ebc_params.num_agents)
          .defaultValue("0")
          .description("Number of agents in network");

          param("Agent ID", m_ebc_params.id)
          .defaultValue("0")
          .description("ID of the agent");

          param("Initial Value", m_ebc_state.x)
          .defaultValue("0")
          .description("Initial condition");

          param("Sigma", m_ebc_params.sigma)
          .defaultValue("0")
          .description("Constant for ETC");

          // Bind the IMC messages here
          bind<IMC::EBCInitiate>(this);
          bind<IMC::EBCState>(this);

        }

        //! Update internal state with new parameter values.
        void
        onUpdateParameters(void)
        {
          // update parameters
          m_ebc_params.dt = 1/getFrequency();

          // update states
          m_ebc_state.x_prev = m_ebc_state.x;
          m_ebc_state.x_event = m_ebc_state.x;
          m_ebc_state.t_event = 0.0;
          m_ebc_state.start_time = 0.0;
          m_ebc_state.u_event = 0.0;
          m_ebc_state.err = 0.0;

          m_start_flag = 0;
          m_first_iter = 1;
          m_new_data = 0;
        }

        //>> Consume Functions
        void
        consume(const IMC::EBCInitiate* msg)
        {
          if(m_leader_flag == 0) // check needed in case of loopback messages
            {
              m_start_flag = 1;
              inf("Entering STCInitiate");
            }
        }

        void
        consume(const IMC::EBCState* msg)
        {
          uint8_t id = msg->getSource();
          m_receive_buffer[id-1] = msg->value;
          m_receive_flag[id-1] = 1;
          m_new_data = 1;
          // inf("Received state");
        }

        // >> Functions needed for implementation of
        void
        InitializeEBC(void)
        {
          IMC::EBCInitiate init_msg;
          init_msg.setSource(m_ebc_params.id);
          init_msg.value = 1;
          dispatch(init_msg);
        }

        void
        broadcastState(void)
        {
          IMC::EBCState state_msg;
          state_msg.setSource(m_ebc_params.id);
          state_msg.value = m_ebc_state.x_event;
          dispatch(state_msg);
        }

        void
        computeEBCInput()
        {
          double temp_inp = 0.0;
          double temp_phi = 0.0;
          for(uint8_t ii = 0; ii < m_ebc_params.num_agents; ii++)
          {
            if(ii != m_ebc_params.id-1)
            {
              temp_inp += m_ebc_state.x_event - m_receive_buffer[ii];
              temp_phi += pow((m_ebc_state.x_event - m_receive_buffer[ii]),2);
            }
          }
          m_ebc_state.u_event = -temp_inp;
          m_ebc_state.phi = temp_phi;
          m_new_data = 0;
        }

        //! Periodic loop.
        void
        task(void)
        {
          double ebc_now = Time::Clock::get();
          if(m_start_flag)
          {
            if(m_first_iter)
            {
              // Generate event
              m_ebc_state.start_time = ebc_now;
              m_ebc_state.t_event = ebc_now;
              m_ebc_state.x_event = m_ebc_state.x;
              m_ebc_state.err = 0.0;
              broadcastState();

              m_receive_buffer[m_ebc_params.id-1] = m_ebc_state.x_event;
              // receive_flag[m_ebc_params.id-1] = 1;
              computeEBCInput();
              m_first_iter = 0;
              inf("Initial value %f",m_ebc_state.x);
            }

            m_ebc_state.err = m_ebc_state.x_event - m_ebc_state.x;
            double f_e = pow(m_ebc_state.err,2) - (m_ebc_params.sigma/(4*(m_ebc_params.num_agents-1)))*m_ebc_state.phi;
            if(f_e > 0.0 || ((f_e == 0.0) && m_ebc_state.phi != 0.0))
            {
              // Generate event
              m_ebc_state.t_event = ebc_now;
              m_ebc_state.x_event = m_ebc_state.x;
              m_ebc_state.err = 0.0;
              broadcastState();

              m_receive_buffer[m_ebc_params.id-1] = m_ebc_state.x_event;
              m_receive_flag[m_ebc_params.id-1] = 1;
              computeEBCInput();
              inf("Event generated: %f  computed input: %f", m_ebc_state.x, m_ebc_state.u_event);
            }

            if(m_new_data)
            {
              inf("Received new data");
              computeEBCInput();
            }

            // Integrate
            m_ebc_state.x += m_ebc_params.dt*m_ebc_state.u_event;
            // inf("state: %f", m_ebc_state.x);
          }

          // These checks are put at the end, as consumeMessages are computed start of next time step.
          // See implementation of Periodic::onMain() function in DUNE/Tasks/Periodic.cpp
          if(m_leader_flag == 1 && !m_start_flag)
          {
            InitializeEBC();
            m_start_flag = 1;
          }
        } // End of Periodic task
      };
    }
  }
}

DUNE_TASK
