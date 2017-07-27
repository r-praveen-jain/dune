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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: fab943b113b6390fce8e790d1f0e9dea                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.291486462789);
    msg.setSource(20779U);
    msg.setSourceEntity(85U);
    msg.setDestination(26196U);
    msg.setDestinationEntity(36U);
    msg.state = 138U;
    msg.flags = 171U;
    msg.description.assign("YUNWBVRCVIFFESIQSBFTEVPNIXHNMAJMXTJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.181064121434);
    msg.setSource(35762U);
    msg.setSourceEntity(66U);
    msg.setDestination(28648U);
    msg.setDestinationEntity(56U);
    msg.state = 13U;
    msg.flags = 213U;
    msg.description.assign("YBWJWMGULPXGIHVJTSLNHXVZWFVXDGZHDDYIGWPIMMLSBRBHAR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.544453694035);
    msg.setSource(17439U);
    msg.setSourceEntity(105U);
    msg.setDestination(34904U);
    msg.setDestinationEntity(185U);
    msg.state = 202U;
    msg.flags = 234U;
    msg.description.assign("RGSTLUIRRLOBGZVTCAZKPACLUBGYMUYIOBVNJYEESPZCASFICQEGGJDVUIYGCIAVNKRZTXDEUHTIQWZIFDUROEBOJOFSJNWYFWG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.546194984096);
    msg.setSource(39614U);
    msg.setSourceEntity(234U);
    msg.setDestination(17857U);
    msg.setDestinationEntity(180U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.737613869008);
    msg.setSource(2499U);
    msg.setSourceEntity(137U);
    msg.setDestination(41065U);
    msg.setDestinationEntity(56U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.521941040577);
    msg.setSource(64184U);
    msg.setSourceEntity(234U);
    msg.setDestination(49954U);
    msg.setDestinationEntity(187U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.291031583586);
    msg.setSource(39663U);
    msg.setSourceEntity(79U);
    msg.setDestination(32477U);
    msg.setDestinationEntity(86U);
    msg.id = 159U;
    msg.label.assign("BQTVUPRNPZSTXWOOCKFSGYRCQOLGRVCZEXZHEEZSVWHLOIG");
    msg.component.assign("KNTXYFIADXCZODQLLRAIRDBBFXOQBSJGWELTEWOGOVBCQQIXTMLDCJDOILMHRFPMPJIGDYHUXUAKJYNUYEMPZGRHWXJYVEVPODBTNGQWDQUKBGKXJKLDTNZGUZSSMRLVTIKCODNCTYZWFP");
    msg.act_time = 31475U;
    msg.deact_time = 33559U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.372556798894);
    msg.setSource(60846U);
    msg.setSourceEntity(55U);
    msg.setDestination(35222U);
    msg.setDestinationEntity(146U);
    msg.id = 83U;
    msg.label.assign("ORHEZTFPVJBOGHWJYUFRJGMCRDONJHPFZSEKGNEPJUBXKKOUTCNITWFWWGHQCSLCPYFQXMXVMHKYVXTGJNRQOEJJIHORZQNFBNZVCQABISEFBAZPQWXWFLSNDJLCDLEDSWIDCAZEYOLYW");
    msg.component.assign("VNYSXUQOTZTZJCHZONLYGPPMBKCDCOESCAVAZSVVUDOSTTTQWDOUZKYOIZTJBEDYYIALLMUEIXHZLAGFHEQQVASVGERPBNKK");
    msg.act_time = 34877U;
    msg.deact_time = 51746U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.0239405682974);
    msg.setSource(43743U);
    msg.setSourceEntity(145U);
    msg.setDestination(5785U);
    msg.setDestinationEntity(57U);
    msg.id = 209U;
    msg.label.assign("EBSWWTBMKPEMKWEYMYQGBUOQPVLHAKUKUVRARVBXSRYYP");
    msg.component.assign("CJTPHLRSBXWQBPRQRBVTLEJZNVJDMSCKGYPIFMWTNGFSHTHANSEGWWCNYFOXDUJNIEOESFEUQCODCDCZATONKRAOQCDWRBELHONEMBVWJBKKIMUZQJLIMTMPY");
    msg.act_time = 17355U;
    msg.deact_time = 35918U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.940798673051);
    msg.setSource(24691U);
    msg.setSourceEntity(129U);
    msg.setDestination(29811U);
    msg.setDestinationEntity(7U);
    msg.id = 230U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.945180805663);
    msg.setSource(49214U);
    msg.setSourceEntity(192U);
    msg.setDestination(32819U);
    msg.setDestinationEntity(18U);
    msg.id = 100U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.129852216482);
    msg.setSource(41824U);
    msg.setSourceEntity(148U);
    msg.setDestination(35076U);
    msg.setDestinationEntity(251U);
    msg.id = 145U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.659699990344);
    msg.setSource(58531U);
    msg.setSourceEntity(213U);
    msg.setDestination(61504U);
    msg.setDestinationEntity(57U);
    msg.op = 75U;
    msg.list.assign("VZOJWGXNOCQSYXOKAGQWSETPMKHLJZWHYJMHLPADHBVXBYFR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.353405133498);
    msg.setSource(40338U);
    msg.setSourceEntity(41U);
    msg.setDestination(3012U);
    msg.setDestinationEntity(174U);
    msg.op = 58U;
    msg.list.assign("WNZGHGFAUPDAPOOFGKDXLQARICSTOMNWBJS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.0782479867108);
    msg.setSource(46653U);
    msg.setSourceEntity(20U);
    msg.setDestination(4153U);
    msg.setDestinationEntity(220U);
    msg.op = 130U;
    msg.list.assign("OUZCWHFZPFLREKULRCMDFUJKUPBKISOPUQYQYPHJIASGGZRUDGSDQSVDZNKWXKCTXNJJFEBEWJMVXTYVMCXIGNQTYTNTOHMQGIIZBYWVMGRSNDVRNLZQHAWGGNQAFXKXALWLGRNXELHZREJMTUDYBULSEPPNLDC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.171292082093);
    msg.setSource(30505U);
    msg.setSourceEntity(195U);
    msg.setDestination(56767U);
    msg.setDestinationEntity(71U);
    msg.value = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.0172372285372);
    msg.setSource(60872U);
    msg.setSourceEntity(175U);
    msg.setDestination(46249U);
    msg.setDestinationEntity(85U);
    msg.value = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.46018393238);
    msg.setSource(12820U);
    msg.setSourceEntity(153U);
    msg.setDestination(60992U);
    msg.setDestinationEntity(148U);
    msg.value = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.209071594596);
    msg.setSource(42674U);
    msg.setSourceEntity(196U);
    msg.setDestination(10708U);
    msg.setDestinationEntity(146U);
    msg.consumer.assign("DNJXSMQCOHTMEPAZWAMUGAOYZPRIVWMRBCGGNVJUGHXJBQHADSNVHAAEQBLMVZYXDYZDHVZWPUCKYDSVCYLKLMTXFQJPERSUQOKWFUWZXSSCRGHPKAFGXGZEAIQDMSZGJHNCJPNBWBLMCNTOBUFOWTKRMFPLPOTBKVFFSJSETDREKRYXLEIYVMONIDKEDEOLFXHCPTHRIKUTWRYQVRIPAIBWQJNFBXXCZSNVGEKICYUWLAJHQIDGOYL");
    msg.message_id = 10185U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.587988960108);
    msg.setSource(39150U);
    msg.setSourceEntity(201U);
    msg.setDestination(60755U);
    msg.setDestinationEntity(178U);
    msg.consumer.assign("KEMWECBMSWIPYEAETJKOVPHEJNVYLECDLXIBQRHAHDPUUIRJETDFTBMMDGTFJLFOUEYVCSZQGJHQTOHPPNHFOKUKQROCWJMYWNJYDWBTGIZUKTJGNLCBZDTXBVKAOOARAYAZYHNEAJXPAFFSXQPIAWGYAFQUWHQBQNVRYQICVXRTPVWVNNDFXPUDSXBKZXKRPXLBMZCGHKSSGR");
    msg.message_id = 38222U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.23959720693);
    msg.setSource(54846U);
    msg.setSourceEntity(195U);
    msg.setDestination(19121U);
    msg.setDestinationEntity(140U);
    msg.consumer.assign("JTXCOLIVCRIQQEPYQFTCLJBE");
    msg.message_id = 2567U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.829608621848);
    msg.setSource(5440U);
    msg.setSourceEntity(170U);
    msg.setDestination(46850U);
    msg.setDestinationEntity(121U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.650548601224);
    msg.setSource(13085U);
    msg.setSourceEntity(134U);
    msg.setDestination(22697U);
    msg.setDestinationEntity(182U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.215657112446);
    msg.setSource(51122U);
    msg.setSourceEntity(24U);
    msg.setDestination(29630U);
    msg.setDestinationEntity(31U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.352419080423);
    msg.setSource(36375U);
    msg.setSourceEntity(7U);
    msg.setDestination(48736U);
    msg.setDestinationEntity(200U);
    msg.op = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.889379658782);
    msg.setSource(41606U);
    msg.setSourceEntity(232U);
    msg.setDestination(41754U);
    msg.setDestinationEntity(0U);
    msg.op = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.4366403401);
    msg.setSource(19426U);
    msg.setSourceEntity(5U);
    msg.setDestination(7815U);
    msg.setDestinationEntity(80U);
    msg.op = 50U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.572942907041);
    msg.setSource(29698U);
    msg.setSourceEntity(114U);
    msg.setDestination(4917U);
    msg.setDestinationEntity(154U);
    msg.total_steps = 63U;
    msg.step_number = 37U;
    msg.step.assign("KOAOACWDYXRNBMTBMHOULUIGOGMIS");
    msg.flags = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.782778809388);
    msg.setSource(24581U);
    msg.setSourceEntity(87U);
    msg.setDestination(39863U);
    msg.setDestinationEntity(110U);
    msg.total_steps = 55U;
    msg.step_number = 26U;
    msg.step.assign("IVMSMYYLKGQYGXLPGGKYGIIMZPWSCJCYWEHJHUVTFFEQAVPUQHRAZKUDUJYILPXWCOFASOXDVDFIQJNAOLOEPPDBHPNZOUGAXWYCARBUZTVUFJOHMMBJNFMLMQKNZASUOVWLFRBJTBWTRZBZMSNLWPFDICXJJSHDZNREITCUOZXGERPQKGYKBVTWYP");
    msg.flags = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.984987620925);
    msg.setSource(12474U);
    msg.setSourceEntity(162U);
    msg.setDestination(36991U);
    msg.setDestinationEntity(240U);
    msg.total_steps = 208U;
    msg.step_number = 55U;
    msg.step.assign("ICFEITUNBVHOELOBULZSDNGAYWBSPVDGXBH");
    msg.flags = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.61688400051);
    msg.setSource(63971U);
    msg.setSourceEntity(130U);
    msg.setDestination(21352U);
    msg.setDestinationEntity(33U);
    msg.state = 209U;
    msg.error.assign("IJTVAWAYAINRBELYUHPKFVRTGLVZRUVEGGDZHY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.282057857416);
    msg.setSource(5334U);
    msg.setSourceEntity(14U);
    msg.setDestination(24051U);
    msg.setDestinationEntity(79U);
    msg.state = 125U;
    msg.error.assign("SCMNTXZPJIPKIOQTKBAOKXFGLDFTAYEYRVUDRMBVCHOEFDRRSAOFEZOIZDMSDSZQHFTYYLUDZBPQIKAQPLQJMFILDZJPAIIBOCTAUXQCKNQKUWGRYYPEZWYFMFYJVEOGXJQIMUPNNOALLAGWGDHJOBJRWWZSJCTSNVGHXWBMVHGZEUMHCBPCZREKNODUGBTSVMWHREBSKWWQEXHVVKTANLLWRXHR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.166148412579);
    msg.setSource(24651U);
    msg.setSourceEntity(252U);
    msg.setDestination(22944U);
    msg.setDestinationEntity(26U);
    msg.state = 223U;
    msg.error.assign("MGXASQVFAJYWADEOYTKUQKCPDPZHAVUPSHYSLFBSXCVCOJDVNQPADZHEXOKRSTFDCITZNNZGYUEGBMMJO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.0424159637429);
    msg.setSource(61259U);
    msg.setSourceEntity(53U);
    msg.setDestination(25510U);
    msg.setDestinationEntity(167U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.881005644144);
    msg.setSource(39117U);
    msg.setSourceEntity(134U);
    msg.setDestination(38823U);
    msg.setDestinationEntity(176U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.671387813292);
    msg.setSource(25357U);
    msg.setSourceEntity(26U);
    msg.setDestination(20047U);
    msg.setDestinationEntity(233U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.880588800393);
    msg.setSource(2886U);
    msg.setSourceEntity(14U);
    msg.setDestination(20474U);
    msg.setDestinationEntity(68U);
    msg.op = 73U;
    msg.speed_min = 0.405607275007;
    msg.speed_max = 0.123018473137;
    msg.long_accel = 0.76117744496;
    msg.alt_max_msl = 0.876307634711;
    msg.dive_fraction_max = 0.371295302164;
    msg.climb_fraction_max = 0.75651481327;
    msg.bank_max = 0.701525529689;
    msg.p_max = 0.125167161459;
    msg.pitch_min = 0.108250120368;
    msg.pitch_max = 0.850413588457;
    msg.q_max = 0.933489166446;
    msg.g_min = 0.514732430814;
    msg.g_max = 0.0328198682293;
    msg.g_lat_max = 0.29536303312;
    msg.rpm_min = 0.691865222732;
    msg.rpm_max = 0.404195755215;
    msg.rpm_rate_max = 0.376039477553;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.779577577454);
    msg.setSource(41164U);
    msg.setSourceEntity(195U);
    msg.setDestination(48601U);
    msg.setDestinationEntity(28U);
    msg.op = 217U;
    msg.speed_min = 0.761813124441;
    msg.speed_max = 0.0602293275073;
    msg.long_accel = 0.76189281132;
    msg.alt_max_msl = 0.410557905192;
    msg.dive_fraction_max = 0.733373338692;
    msg.climb_fraction_max = 0.351545434085;
    msg.bank_max = 0.13938373692;
    msg.p_max = 0.752259813884;
    msg.pitch_min = 0.0191393259419;
    msg.pitch_max = 0.330047685637;
    msg.q_max = 0.66112078173;
    msg.g_min = 0.457237756837;
    msg.g_max = 0.236671248776;
    msg.g_lat_max = 0.712694251356;
    msg.rpm_min = 0.177478072391;
    msg.rpm_max = 0.883672086194;
    msg.rpm_rate_max = 0.552030220637;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.231950747846);
    msg.setSource(11933U);
    msg.setSourceEntity(8U);
    msg.setDestination(18910U);
    msg.setDestinationEntity(157U);
    msg.op = 43U;
    msg.speed_min = 0.00276058680012;
    msg.speed_max = 0.880349841878;
    msg.long_accel = 0.917568842788;
    msg.alt_max_msl = 0.710289920259;
    msg.dive_fraction_max = 0.909402531231;
    msg.climb_fraction_max = 0.108705040785;
    msg.bank_max = 0.89795616108;
    msg.p_max = 0.30012947061;
    msg.pitch_min = 0.652324084531;
    msg.pitch_max = 0.0397093573581;
    msg.q_max = 0.538490463239;
    msg.g_min = 0.0034492639244;
    msg.g_max = 0.68203890957;
    msg.g_lat_max = 0.707901081061;
    msg.rpm_min = 0.706347439172;
    msg.rpm_max = 0.720852652278;
    msg.rpm_rate_max = 0.973586907067;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.432808497177);
    msg.setSource(18085U);
    msg.setSourceEntity(200U);
    msg.setDestination(53458U);
    msg.setDestinationEntity(232U);
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.431088741194;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.877815753068);
    msg.setSource(48839U);
    msg.setSourceEntity(228U);
    msg.setDestination(61180U);
    msg.setDestinationEntity(31U);
    IMC::ImageTracking tmp_msg_0;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.120699375398);
    msg.setSource(46923U);
    msg.setSourceEntity(8U);
    msg.setDestination(48970U);
    msg.setDestinationEntity(250U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.314666192683);
    msg.setSource(23043U);
    msg.setSourceEntity(141U);
    msg.setDestination(17675U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.586253096655;
    msg.lon = 0.98244441765;
    msg.height = 0.397385916842;
    msg.x = 0.711845179067;
    msg.y = 0.0447029179906;
    msg.z = 0.533900304544;
    msg.phi = 0.739382027451;
    msg.theta = 0.220789638147;
    msg.psi = 0.10370312958;
    msg.u = 0.469275296704;
    msg.v = 0.366910505214;
    msg.w = 0.509866627289;
    msg.p = 0.698126993035;
    msg.q = 0.623246763614;
    msg.r = 0.836248512353;
    msg.svx = 0.256033209541;
    msg.svy = 0.942571294768;
    msg.svz = 0.928521538582;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.598480466336);
    msg.setSource(26684U);
    msg.setSourceEntity(91U);
    msg.setDestination(33352U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.695984608979;
    msg.lon = 0.235059426798;
    msg.height = 0.341338709818;
    msg.x = 0.13523086544;
    msg.y = 0.149080584393;
    msg.z = 0.866745743643;
    msg.phi = 0.399180424768;
    msg.theta = 0.684931345036;
    msg.psi = 0.0391913544238;
    msg.u = 0.661128523665;
    msg.v = 0.161416341395;
    msg.w = 0.141048893581;
    msg.p = 0.237552529274;
    msg.q = 0.594211510102;
    msg.r = 0.244418687516;
    msg.svx = 0.654046455622;
    msg.svy = 0.748666906787;
    msg.svz = 0.971137129953;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.000929248818411);
    msg.setSource(28489U);
    msg.setSourceEntity(130U);
    msg.setDestination(39717U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.543712695028;
    msg.lon = 0.991921042791;
    msg.height = 0.6877722389;
    msg.x = 0.570471260449;
    msg.y = 0.55897061306;
    msg.z = 0.0800833835823;
    msg.phi = 0.34093806752;
    msg.theta = 0.772779447637;
    msg.psi = 0.892389682628;
    msg.u = 0.80696993407;
    msg.v = 0.941137076812;
    msg.w = 0.636623767883;
    msg.p = 0.755996220337;
    msg.q = 0.0724911371827;
    msg.r = 0.982126287375;
    msg.svx = 0.319196959195;
    msg.svy = 0.992779879752;
    msg.svz = 0.937272027619;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.173730600694);
    msg.setSource(42336U);
    msg.setSourceEntity(60U);
    msg.setDestination(12583U);
    msg.setDestinationEntity(118U);
    msg.op = 92U;
    msg.entities.assign("MSLCDVRAPACYXGIWSNNXVXWNOQRDFGPWTSPPQNTPACPJBTXYZHFLQHWKBMADQJODXYZIMEPLZVEIGFVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.584201263809);
    msg.setSource(46808U);
    msg.setSourceEntity(167U);
    msg.setDestination(46992U);
    msg.setDestinationEntity(55U);
    msg.op = 39U;
    msg.entities.assign("TNAGUMSQFYMI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.24069698287);
    msg.setSource(10147U);
    msg.setSourceEntity(206U);
    msg.setDestination(37529U);
    msg.setDestinationEntity(115U);
    msg.op = 50U;
    msg.entities.assign("HERDPLFIQTUCUPQNQADWAITNJGYQOOVETJRVKHWCHDTIEGTIATIVHBYFMBSEGDWBVJAMZKGBREPEQFYZZPPBBZHYFBFSIXF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.406761710542);
    msg.setSource(51411U);
    msg.setSourceEntity(33U);
    msg.setDestination(23646U);
    msg.setDestinationEntity(195U);
    msg.type = 230U;
    msg.speed = 31205U;
    const char tmp_msg_0[] = {-77, 46, 103, 68, -122, -6, 41, -38, -25, 91, 64, 16, -7, 5, 12, 106, 49, -87, 8, 56, 30, 25, 9, -56, 82, 3, 0, -53, 117, -40, 20, 40, 105, 122, 101, -87, -60, 38, 24, 27, 42, 85, -65, 118, 101, -107, 103, -109, -108, -19, -112, -40, 111, -36, 57, 76, -22, -64, -10, 15, -47, 92, 75, -54, -69, 33, -52, -93, -75, -24, -59, -75, -55, 26, 20, -10, -70, -106, -84, -30, 100, -106, -117, 110, 14, 94, 91, -24, 18, 22, -10, -20, -72, -30, -108, -12, -128, 67, -53, -60, -102, 11, -94, -41, 56, -26, 52, -81, 81, 116, -56, -99, -100, 25, -108, -9, -73, 65, -79, 96, 109, 104, -86, 113, 126, 49, -105, 50, 124, -9, 62, 116, -72, 90, -98, 92, -115, -123, 15, 61, 17, 106, 31, -87, 96, -9, 106, 103, -111, -50, -4, 92, 42};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.281070902248);
    msg.setSource(6309U);
    msg.setSourceEntity(7U);
    msg.setDestination(38510U);
    msg.setDestinationEntity(40U);
    msg.type = 165U;
    msg.speed = 35371U;
    const char tmp_msg_0[] = {-105, 6, 40, 89, 73, -127, 103, 43, -17, -20, -26, -90, 29, 73, -33, 35, 15, -108, 13, -14, -119, -57, -82, -5, -71, 68, -1, -82, -43, 109, 38, -16, 51, -56, -125, -117, 84, 96, -69, 102, 50, 15, 32, 38, -83, 28, -19, -38, 33, -70, 9, 84, 24, -44, 91, -116, -83, -103, -77, 122, 97, 71, -7, -30, -45, -91, 43, 51, -102, -117, -127, 106, 52, -88, 85, -53, 6, 20, 80, 42, 23, 28, -109, -87, -36, -100, -40, -94, -59, -16, -12, -119, 31, 49, 23, 13, -110, 39, 67, 2, 22, -77, 109, 52, -56, 39, -125, -128, -123, -101, 73, 81, -56, 56, 101, -114, 27, -50, -88, -24, -99, 49, -39, 117, 22, 43, 26, 17, -84, 99, 42, 58, -65, 112, -98, -53, -78, -93, 119, -17, -90, 122, -71, 22, 96, 22, -51, 114, -60, -82, 39, -32, -42, 108, -117, -121, -92, 60, -78, 104, -17, -15, -85, 114, 112, -63, -64, 96, -49, 109, -94, -86, 19, 69, -67, -78, 58, 100, 100, -121, 71, 58, 16, -97, -28, 82, 104, -39, 93, -15, 5, -104, 46, -55, 91, -86, -89, -22, -45, 71, -6, 11, -55, -15, 10, -5, -25, 111, -3, -76, -73, 68, 117, 36, 109};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.323657535257);
    msg.setSource(53502U);
    msg.setSourceEntity(220U);
    msg.setDestination(10050U);
    msg.setDestinationEntity(86U);
    msg.type = 3U;
    msg.speed = 61274U;
    const char tmp_msg_0[] = {64, 94, 32, 66, 70, -112, -119, -77, -101, 99, 75, 23, -8, 94, 6, 97, 77, -100, 70, -4, -8, 119, -7, -118};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.854750449885);
    msg.setSource(28741U);
    msg.setSourceEntity(164U);
    msg.setDestination(55259U);
    msg.setDestinationEntity(0U);
    msg.op = 181U;
    msg.tas2acc_pgain = 0.409349542765;
    msg.bank2p_pgain = 0.651406344632;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.940519834244);
    msg.setSource(3923U);
    msg.setSourceEntity(129U);
    msg.setDestination(6276U);
    msg.setDestinationEntity(14U);
    msg.op = 159U;
    msg.tas2acc_pgain = 0.176593515038;
    msg.bank2p_pgain = 0.587191177851;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.767305170797);
    msg.setSource(14299U);
    msg.setSourceEntity(240U);
    msg.setDestination(21566U);
    msg.setDestinationEntity(160U);
    msg.op = 50U;
    msg.tas2acc_pgain = 0.668415193846;
    msg.bank2p_pgain = 0.0512337173163;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.749251591296);
    msg.setSource(62745U);
    msg.setSourceEntity(217U);
    msg.setDestination(14097U);
    msg.setDestinationEntity(216U);
    msg.available = 1127697593U;
    msg.value = 172U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.565409011889);
    msg.setSource(21048U);
    msg.setSourceEntity(2U);
    msg.setDestination(4583U);
    msg.setDestinationEntity(251U);
    msg.available = 774436738U;
    msg.value = 88U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.787703583842);
    msg.setSource(36127U);
    msg.setSourceEntity(229U);
    msg.setDestination(10212U);
    msg.setDestinationEntity(126U);
    msg.available = 554597130U;
    msg.value = 106U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.603960399291);
    msg.setSource(14376U);
    msg.setSourceEntity(194U);
    msg.setDestination(8626U);
    msg.setDestinationEntity(209U);
    msg.op = 242U;
    msg.snapshot.assign("UYPPJABWZMTHXNZPNXJIJWCGUSPWGHQOQTYDLHBGKLYAWEBORTDZFGQYVFFDWZAMVMQEKSMHSQCMYNHBZBZGFTAPPXCYSIYXBOGU");
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.289011917866;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.569788658011);
    msg.setSource(20047U);
    msg.setSourceEntity(82U);
    msg.setDestination(29469U);
    msg.setDestinationEntity(19U);
    msg.op = 207U;
    msg.snapshot.assign("XHNTSJGIQVDLHNMXNPTBKITSTETWBFSFMVEGSIMFWVAQAJZWJLTCVFRKRAZQCOCAYXJPNXOSOEAIKNRRYOQ");
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.275243629791;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.888420542164);
    msg.setSource(28357U);
    msg.setSourceEntity(252U);
    msg.setDestination(9051U);
    msg.setDestinationEntity(98U);
    msg.op = 88U;
    msg.snapshot.assign("FUXJZAGPQQNFACVPFKOQAVZULLAYEJHXHUXYPNCVRIJVHGXSNIEMWBKBKRQPSDLUWUEWYBTMKIFXVIOMPZNILKYYYTEPRQSYMGLZXRNVSTNEGFDZ");
    IMC::StopManeuver tmp_msg_0;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.682619240322);
    msg.setSource(62670U);
    msg.setSourceEntity(192U);
    msg.setDestination(24999U);
    msg.setDestinationEntity(238U);
    msg.op = 23U;
    msg.name.assign("MXBNUPSGFUEZHFDXMODJVULWVGDJGJXEJYLFGIICZJJHXBFCXXHITCCSEOUQGOUNBDVJOCQANVOCTZNLJOBOSWGVTRHVREEEQZKMRPCKFLSUHYADYLHE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.271267304195);
    msg.setSource(41033U);
    msg.setSourceEntity(10U);
    msg.setDestination(63090U);
    msg.setDestinationEntity(155U);
    msg.op = 79U;
    msg.name.assign("OGSDTFTKMCXDKT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.714100615991);
    msg.setSource(23534U);
    msg.setSourceEntity(46U);
    msg.setDestination(36404U);
    msg.setDestinationEntity(77U);
    msg.op = 68U;
    msg.name.assign("JVAHLIEQOISVZBGWWGRGRYRYJJNPY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.832617754484);
    msg.setSource(1282U);
    msg.setSourceEntity(144U);
    msg.setDestination(55958U);
    msg.setDestinationEntity(80U);
    msg.type = 159U;
    msg.htime = 0.0506020817055;
    msg.context.assign("SCGXZFWSFKVPEIVMICFIHNENKFFOJRWQAUQOPBSZKTGZVUTQGGLBMPUKWSAGYVCWTEKPVBXUWTKFSAOWLCFPYYGONIQQWOXMYLZEXUDLRVKTYRKMOONDQCLACRTWPDGHJSLAJEAGEADMVYXHNZZHRNRNNIRTAVQRBPBCUPILJEQBQCUXYISUJYMHQOHJAKXTJMFDXDZBRY");
    msg.text.assign("HZLUVXLZBCFHXQRGTDSLBBQFPHRKIJVGTFTHCDO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.985564283311);
    msg.setSource(26958U);
    msg.setSourceEntity(234U);
    msg.setDestination(5943U);
    msg.setDestinationEntity(221U);
    msg.type = 131U;
    msg.htime = 0.68388969714;
    msg.context.assign("NSFVCUOXDUYTDHYNCQJZGGDBYASMOTQJBFPTIHHBWXHUXBUPUQN");
    msg.text.assign("OEWFRQCZKNQNLWDAYBXGHJICLCXQKULHEESBPSBZDLGNAHFURYBIKJTPHZGCARDDRXQSQOAHTUEJZEUMGWDKRFVPDRVXGMQAPCXBFFFZKAZINWYOIBI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.90632748643);
    msg.setSource(50226U);
    msg.setSourceEntity(81U);
    msg.setDestination(18395U);
    msg.setDestinationEntity(171U);
    msg.type = 43U;
    msg.htime = 0.325938305609;
    msg.context.assign("OOBQGPONLHAQYBIMXYFRPPCIIWUUSONFHLPHTUAQREIZLCFVCKQCURMAYVQJGBJDYWOZZFBMTZBUDXOQDUHHAYUZZNFTMWEVOIIZLYFQXEMHPVOLJHJGGJFBJNHVOMTEUSRBZVWXSXDIVKIPNXXYIYUIAGJYVHESGGPAELMSEBWNMKWKTFCNNWXCG");
    msg.text.assign("EMKFEAJUTZKSUHFZJLWTOVBIXOKAUVAMQNCTUMRKUSNQARMKCGBJXM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.25990025345);
    msg.setSource(62153U);
    msg.setSourceEntity(249U);
    msg.setDestination(156U);
    msg.setDestinationEntity(165U);
    msg.command = 97U;
    msg.htime = 0.0508953827938;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 205U;
    tmp_msg_0.htime = 0.406854139116;
    tmp_msg_0.context.assign("CWKJLPDABUHSVZJIKILVKOEMYTHTLIBFZQOPOFANQAUZMCLEVOXIXOQ");
    tmp_msg_0.text.assign("NTIUEWMDAMEYNTUOAFDJWBFSXNGSDGULOUHOAAHKLCZEIZBHPXHAFTZBIOBZRIL");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.51882795435);
    msg.setSource(22487U);
    msg.setSourceEntity(192U);
    msg.setDestination(60966U);
    msg.setDestinationEntity(55U);
    msg.command = 224U;
    msg.htime = 0.633154508894;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 173U;
    tmp_msg_0.htime = 0.132965804801;
    tmp_msg_0.context.assign("ZUSQNEWSVLTNEIRRHPDHKVCRCFTHEHIZGRYBRGVKOONJUBUWUDFUELTKGFVPMYHSOITIOCYHLMZDQNAPELMUYCAREQYTJZWDZIAXHRLAGNAABDPOXEUNBSIVGDNCISEQPFSWSXWQJBDOUXXQCTRKXOCXKSMIPUBAXD");
    tmp_msg_0.text.assign("VTECAMLNIP");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.894268362592);
    msg.setSource(36185U);
    msg.setSourceEntity(85U);
    msg.setDestination(16917U);
    msg.setDestinationEntity(190U);
    msg.command = 88U;
    msg.htime = 0.694198990156;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.95889208081);
    msg.setSource(43133U);
    msg.setSourceEntity(147U);
    msg.setDestination(34574U);
    msg.setDestinationEntity(156U);
    msg.op = 196U;
    msg.file.assign("RWWXARUVYVPIFDNKWTRGHEOZAXWGWAZTFIMHDUGWHQJIACFZXZELXTWLMPVYVUATBQVBDECANCJNPFPOXRCQNORHDTZPSSCYZOTONKDNQQYIDABFXMJPTMXHQROLMAZAKBEOJSRIIJLKBOUMKJVXMLYBVTJQSWXHMFNQZEUSSLTRODFCCPETURGVDSIDYRLXKFUUEPZOCEJKNVILBGM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.8443117504);
    msg.setSource(15376U);
    msg.setSourceEntity(64U);
    msg.setDestination(62240U);
    msg.setDestinationEntity(142U);
    msg.op = 79U;
    msg.file.assign("PUPXBALDWKGJSGFWOMZGFNRTKYGOJQOCRGMTOETRBEBASQZEDTLSZPBXNRQOAPBHYDSVLISXXX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.297303842512);
    msg.setSource(2682U);
    msg.setSourceEntity(247U);
    msg.setDestination(12605U);
    msg.setDestinationEntity(168U);
    msg.op = 85U;
    msg.file.assign("HLXWYQCIGJBCHVHQQPSAREIOLAQKBVNJDWEVMCXHLYYPZMSVBIYODPCZDOIXMFVTKFZCJJPWMMTSKZATSNIUAAZZEFCLMQXJGAGLDIPCXGXUMKAVUBSOQBIYOABMKRFJFGEQJZVWSHLTBFHCRFKHYXOIVKRHLEHI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.977143847717);
    msg.setSource(41933U);
    msg.setSourceEntity(53U);
    msg.setDestination(25895U);
    msg.setDestinationEntity(44U);
    msg.op = 240U;
    msg.clock = 0.465561027871;
    msg.tz = 92;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.508351507335);
    msg.setSource(14563U);
    msg.setSourceEntity(95U);
    msg.setDestination(51435U);
    msg.setDestinationEntity(140U);
    msg.op = 248U;
    msg.clock = 0.729337451946;
    msg.tz = 116;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.848308997464);
    msg.setSource(38947U);
    msg.setSourceEntity(50U);
    msg.setDestination(34191U);
    msg.setDestinationEntity(194U);
    msg.op = 112U;
    msg.clock = 0.895586880801;
    msg.tz = -64;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.164942747622);
    msg.setSource(23369U);
    msg.setSourceEntity(93U);
    msg.setDestination(10717U);
    msg.setDestinationEntity(202U);
    msg.conductivity = 0.211659960677;
    msg.temperature = 0.710548224418;
    msg.depth = 0.108567972623;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.136229587188);
    msg.setSource(23671U);
    msg.setSourceEntity(180U);
    msg.setDestination(23644U);
    msg.setDestinationEntity(116U);
    msg.conductivity = 0.208507061386;
    msg.temperature = 0.707546112824;
    msg.depth = 0.400263572543;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.196415143326);
    msg.setSource(30846U);
    msg.setSourceEntity(74U);
    msg.setDestination(43748U);
    msg.setDestinationEntity(137U);
    msg.conductivity = 0.765013050723;
    msg.temperature = 0.711199706677;
    msg.depth = 0.701405099397;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.729585828147);
    msg.setSource(30492U);
    msg.setSourceEntity(22U);
    msg.setDestination(9593U);
    msg.setDestinationEntity(109U);
    msg.altitude = 0.26738200679;
    msg.roll = 56808U;
    msg.pitch = 25521U;
    msg.yaw = 40591U;
    msg.speed = -30598;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.979532184202);
    msg.setSource(14353U);
    msg.setSourceEntity(21U);
    msg.setDestination(27743U);
    msg.setDestinationEntity(195U);
    msg.altitude = 0.903096267029;
    msg.roll = 34590U;
    msg.pitch = 25269U;
    msg.yaw = 55291U;
    msg.speed = -1482;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.745880277467);
    msg.setSource(11986U);
    msg.setSourceEntity(234U);
    msg.setDestination(29136U);
    msg.setDestinationEntity(134U);
    msg.altitude = 0.617047075966;
    msg.roll = 53107U;
    msg.pitch = 45583U;
    msg.yaw = 15668U;
    msg.speed = 6630;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.229641921277);
    msg.setSource(44861U);
    msg.setSourceEntity(197U);
    msg.setDestination(22681U);
    msg.setDestinationEntity(140U);
    msg.altitude = 0.571070530347;
    msg.width = 0.150814960425;
    msg.length = 0.237768059623;
    msg.bearing = 0.212786032808;
    msg.pxl = -28681;
    msg.encoding = 133U;
    const char tmp_msg_0[] = {-73, -105, -123, 5, -34, 81, 54, -56, 120, 61, -92, -31, 96, -46, -120, 68};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.0734228825814);
    msg.setSource(24268U);
    msg.setSourceEntity(253U);
    msg.setDestination(61822U);
    msg.setDestinationEntity(21U);
    msg.altitude = 0.427825797915;
    msg.width = 0.847009821217;
    msg.length = 0.4572763639;
    msg.bearing = 0.585304122924;
    msg.pxl = 16596;
    msg.encoding = 145U;
    const char tmp_msg_0[] = {-3, 6, 7, 79, 98, -62, -112, -90, 9, 95, -93, 125, 4, 105, 14, 9, 48, 116, 86, 43, -30, 42, 45, -27, -35, -115, 13, -52, -71, 100, -119, -52, -30, 115, -18, 70, -57, 112, 53, 18, 55, -106, 11, 20, 102, 120, 15, 49, -90, 33, -56, 109, 78, 71, 121, -14, 51, -13, 8, -72, 111, -58, 57, -39, 12, -128, 120, -60, -88, -104, 110, 38, 25, 114, -117, 61, -41, -9, 49, 84, -29, -40, -125, 26, 101, 29, -94, 27, -25, -26, 79, -36, -10, 111, -121, 69, -87, 38, 54, 17, -43, 97, 94, 39, 111, -36, 8, 97, 106, 107, 23, -105, -102, -119, 116, -29, -40, 123, -88, 94, 45, -54, -25, -61, 69, 17, 108, 0, -62, 122, -89, -24, -15, 108, 113, 35, 114, -116, 120, -97, 46, 57, -94, -108, 112, 110, 28, -53, 35, 105, 48, 117, 7, -31, 32, 115, 34};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.863078958714);
    msg.setSource(20764U);
    msg.setSourceEntity(116U);
    msg.setDestination(36796U);
    msg.setDestinationEntity(234U);
    msg.altitude = 0.0702299485782;
    msg.width = 0.576657205741;
    msg.length = 0.993076082964;
    msg.bearing = 0.229214603543;
    msg.pxl = 3327;
    msg.encoding = 71U;
    const char tmp_msg_0[] = {-81, -97, 109, -124, -4, 19, -83, 69, -88, -74, 39, -14, 75, 103, -17, -112, -80, 44, -84, -89, -87, 122, 101, -64, -44, 117, 67, 112, -64, 13, 21, -84, 79, -35, -114, -74, -33, 112, 71, -62, -37, 97, 16, 83, 56, -27, 121, -51, 47, -109, 45, -20, -119, 18, -95, 22, 52, 115, -32, -21, 76, 31, 84, 6, 7, 27, -106, -61, 91, -46, 3, -37, -60, 79, -35, 46, 39, -66, 115, -16, -51, 94, -1, 37, -105, 4, -78, 88, -35, -52, -20, -123, 39, 120, -81, 42, -48, 5, -49, 93, 38, 80, -65, -34, 56, -47, 101, 77, -79, 77, 17, -113, 13, 57, 37, 24, 118, 6, 89, -116, -47, 24, 77, 8, 21, -55, -15, 103, -78, -108, -100, 61, 4, 85, 40, 82, -123, -34, 18, 90, -38, 62, 34, 1, -13, 51, -33, -102, -92, 39, -115, -9, 112, 3};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.352694259866);
    msg.setSource(65529U);
    msg.setSourceEntity(198U);
    msg.setDestination(35027U);
    msg.setDestinationEntity(12U);
    msg.text.assign("ZISQURXQLJYKWRHUTXNMLSZGUEJRUCOASVQTVZCEBDTOZVVAGRGLZKAFYUYSYRIHRCCNFKGZYKKJCGTZQKLIGXDALBJTBWPBJQYLNBCTAFDGFRWZBLPMGHPWPXJRIJVBJSDFVZHQXWKX");
    msg.type = 196U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.589212663936);
    msg.setSource(14257U);
    msg.setSourceEntity(10U);
    msg.setDestination(20796U);
    msg.setDestinationEntity(17U);
    msg.text.assign("RRXVINLMPSSYRCWMZHAMBKYUDCVLORSNROWEEJVSBOATKGGIOBIKNFHZZWICJLJPP");
    msg.type = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.230610841781);
    msg.setSource(29150U);
    msg.setSourceEntity(33U);
    msg.setDestination(8057U);
    msg.setDestinationEntity(51U);
    msg.text.assign("YDAHXIVVZQBUIBOGTWSTEULYEEHSZBZNNAMGLYJATPRUMOGQFVPKFVRIPHCLSMDDPMGTDJMNGEZBJEHOWZLAGYRYCXTOTDCBLXDKSAWHFYLQBVKKJNVQMUFUVH");
    msg.type = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.704602515442);
    msg.setSource(12423U);
    msg.setSourceEntity(192U);
    msg.setDestination(1884U);
    msg.setDestinationEntity(222U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.408004366304);
    msg.setSource(7795U);
    msg.setSourceEntity(251U);
    msg.setDestination(59804U);
    msg.setDestinationEntity(145U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.0451013627658);
    msg.setSource(55599U);
    msg.setSourceEntity(67U);
    msg.setDestination(1403U);
    msg.setDestinationEntity(174U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.275970133745);
    msg.setSource(49946U);
    msg.setSourceEntity(202U);
    msg.setDestination(13601U);
    msg.setDestinationEntity(171U);
    msg.sys_name.assign("GOQWMKTHSDYCEMEQOTQENWMNEJUFGPFDDLKBIVHWPWZRXCITSGRBWQHUZBGPSUBAZRGANTRSBIJSBFORIBPVFQGVOCQYHKYIYSRFHMANDUTZWXUPGPXXNDOOMQRZLRXFTJLMTKJQVSBYAYIHAYEMJPXKOWJHFNFDAJQOVVTYXICLZCDNSKCYIUVIFDJPCSLGAUAUDHKGPJEZMSODCNLLRZKVUTKXEBLWWNLOAFZULCZV");
    msg.sys_type = 95U;
    msg.owner = 44025U;
    msg.lat = 0.812682357712;
    msg.lon = 0.305273424906;
    msg.height = 0.15984080623;
    msg.services.assign("HZTBKYOCTLIJFMXCMGZKROORXLNMXOSYXYNGZMGDROYZIRDVRCUJKKYVUWZJOABVTFDFXJHCBRUNTQELGMDXUEUYOWQETHKGWFCFJAMZQPHHOIJP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.59310413672);
    msg.setSource(62898U);
    msg.setSourceEntity(97U);
    msg.setDestination(54179U);
    msg.setDestinationEntity(240U);
    msg.sys_name.assign("XTCRZDISTZUPOLNJTZLPGOWCDKXWXRLUSPZPWMOJNPBSXNQGGTCRDIEPCXKNCSBYHYKRJCEMWEUMOBMRWXLXHZUVDGFPVIEROQFYLEXEKWHCZDYMKRPQSIBBRLJFQBIYMLVHHIKFHIBFHAAFJFUTUFXUVAUBQTOUJAYYOQRTWEHVVTMYASWESCGS");
    msg.sys_type = 211U;
    msg.owner = 14407U;
    msg.lat = 0.0111514258532;
    msg.lon = 0.690597747585;
    msg.height = 0.160978799933;
    msg.services.assign("PRBMGDXQWLAURLQQHSMGIXZUCCSIQYGXCJISOCWKIFOHDTOLWUHMKMZLANZKYVFEWPFNXGXMFDATZUDDNTHFOQWIYGNFGLIJITRTEMNOUKKWKABLVABLTKHBLMHRRSTINKQQPTPQBZUKSAYOUQBRXVRBFMXPEZZBZYPSOZOFJMTVIHCVXPCJECZDEFXYLORWKUYMARFWAXUWEPGYBEDVVUNJTJSHGVLYBGQHVEGDWSPSNORVESJY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.443957324215);
    msg.setSource(17341U);
    msg.setSourceEntity(42U);
    msg.setDestination(33428U);
    msg.setDestinationEntity(119U);
    msg.sys_name.assign("BAVPUOIGPEDHISEOBFPRWBUYWWCKUAXWFJPRKGIIDCXOSCESFJKYELFGOOTNOWUWNFKNXQBCJEDDGQVJBYLLVRJRWFRGZHNJYTSZAMZSHFQSOHLMAYSEXVAGUVGMHTXZSEFQCEIYVUTPDCIMTUTBHWXKPZGQWXEOVTJMRXHRCNTENGLQOCDYZBV");
    msg.sys_type = 5U;
    msg.owner = 7399U;
    msg.lat = 0.188263955702;
    msg.lon = 0.463388034566;
    msg.height = 0.755400688648;
    msg.services.assign("GJVXGGPFSIOUVJXENXUQLLNVZCSZTXCWRAIQMJKMZVKHPEJPLOFMGXIYOZBVNTYOTNGXJPMMNOUFWZYXHDUQRRINBZUPKSTYBTEHNRAZVXDNESBFTEACKHDBUTVICEKGBWQMLSDLQODCQMPREGQJUBUKAXJHDKLFTJJSCTOQSIHZRDZAYODHFBDLPWRRCWNYDKILRUIYXEAKMSWMGWICOIGO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.165875949148);
    msg.setSource(42879U);
    msg.setSourceEntity(227U);
    msg.setDestination(38992U);
    msg.setDestinationEntity(129U);
    msg.service.assign("YIRBJHAWBZZAQMJZYZDSKKGOFMLQEDTE");
    msg.service_type = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.798913594798);
    msg.setSource(49257U);
    msg.setSourceEntity(242U);
    msg.setDestination(13929U);
    msg.setDestinationEntity(140U);
    msg.service.assign("QBHKGEOJGKAOJFRMGSGAPWGPSZJHWHPEPBOURKPAADDZKTMPKRRAUDFLNNEBQSNCUWUGNDXWLNZGORBVITYYJHVQELUCBJZOLOYZHLXQIKBJRSZV");
    msg.service_type = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.185316971083);
    msg.setSource(56744U);
    msg.setSourceEntity(204U);
    msg.setDestination(62243U);
    msg.setDestinationEntity(58U);
    msg.service.assign("SMABLYSYZPBWUYVXEOOWEFCNAWIGGHETFZRXMHJHDERANAKTOPIUCVBTEBXZSRCDSVXKDHNOXGCQC");
    msg.service_type = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.942648758421);
    msg.setSource(16253U);
    msg.setSourceEntity(33U);
    msg.setDestination(14081U);
    msg.setDestinationEntity(148U);
    msg.value = 0.807938537312;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.942262212576);
    msg.setSource(18465U);
    msg.setSourceEntity(29U);
    msg.setDestination(36758U);
    msg.setDestinationEntity(68U);
    msg.value = 0.619191793561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.0106127239767);
    msg.setSource(12538U);
    msg.setSourceEntity(97U);
    msg.setDestination(61093U);
    msg.setDestinationEntity(84U);
    msg.value = 0.651011530974;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.607988452528);
    msg.setSource(41231U);
    msg.setSourceEntity(55U);
    msg.setDestination(47371U);
    msg.setDestinationEntity(198U);
    msg.value = 0.0709699453633;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.0574753879817);
    msg.setSource(26910U);
    msg.setSourceEntity(120U);
    msg.setDestination(31489U);
    msg.setDestinationEntity(240U);
    msg.value = 0.120692135915;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.829952887924);
    msg.setSource(49199U);
    msg.setSourceEntity(186U);
    msg.setDestination(28046U);
    msg.setDestinationEntity(49U);
    msg.value = 0.703954664578;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.679884644302);
    msg.setSource(2968U);
    msg.setSourceEntity(193U);
    msg.setDestination(59002U);
    msg.setDestinationEntity(231U);
    msg.value = 0.640583030224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.601708106021);
    msg.setSource(14293U);
    msg.setSourceEntity(115U);
    msg.setDestination(45557U);
    msg.setDestinationEntity(67U);
    msg.value = 0.377198601;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.492761448939);
    msg.setSource(24996U);
    msg.setSourceEntity(124U);
    msg.setDestination(14310U);
    msg.setDestinationEntity(27U);
    msg.value = 0.727369854428;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.891873051799);
    msg.setSource(48716U);
    msg.setSourceEntity(201U);
    msg.setDestination(47269U);
    msg.setDestinationEntity(116U);
    msg.number.assign("OUUGQAYCJIKPHCBNRUSFELWTQRDSXFIYUZPQEZPEHJNZAIIDLLFFVXNBIYGPKVQHAZCJBMSIFXOWVXKPJHMNEYTMJWADCUPBJDYXEKJQOGONOYVJIZLRBCPNVQWCGPOSQCSGEYEXVLFITLALKTMAECRZUSYCUGAM");
    msg.timeout = 55294U;
    msg.contents.assign("WNHPAXCZWNPWBZOIVIQHQFVFSFYNMTVZKOHOZRRJAJSEBJZKGACDKSGBFPJVBZECTIYEFPLTTPKPBCYQHNAXEFLESGKINTRCQYVMSDREJLHAUPPNUMXYOLYNHWCRRWDZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.871083745803);
    msg.setSource(40366U);
    msg.setSourceEntity(140U);
    msg.setDestination(15847U);
    msg.setDestinationEntity(226U);
    msg.number.assign("UVWEYKXNUOLZJCNAFAJMHEDZLFIMKNFDZFZMHQJAGAYK");
    msg.timeout = 4969U;
    msg.contents.assign("VRQNBXDXNNRSJUSNUVCYYGOHEIFQDUUAYCKGIQSCEVJOSPTPMQLOZHOAKZSSPDGPLOWDSVMLTYZEXCJFNCTAJXWKGFYBFJAVEFHUTAOJXBRKEKLWEIZKOXHKYOLMERWCGVBAITMYUZQMPIGQUXIZTNHIQPYIJCLVGEBIVRZPORHATWYRHXFZRTM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.743738235298);
    msg.setSource(12516U);
    msg.setSourceEntity(69U);
    msg.setDestination(32199U);
    msg.setDestinationEntity(86U);
    msg.number.assign("LZRFHWUDTQKENXAHAMKEIKEPEHHSMZRDQTRCSZHNFSCCDYPFAJGAAZNZSUEBXNQCOFOSNKYRWPRQTMYDKDIIXBKWLXGCRQKVQUBQFJONCLAUZORMMRPREAGGWACLCYSWYTIFTNJOGUUJVSONEVVJXBHAMBPSIOBOFQHGDXOL");
    msg.timeout = 22152U;
    msg.contents.assign("OHSRWERWUDEPQCEEHFNANVXOKRIZEYMGBOGGFQCZRL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.613062390629);
    msg.setSource(30632U);
    msg.setSourceEntity(152U);
    msg.setDestination(31531U);
    msg.setDestinationEntity(104U);
    msg.seq = 3613270023U;
    msg.destination.assign("LUUVDWAJPTJFTGAAPCLDYRTZFAT");
    msg.timeout = 45477U;
    const char tmp_msg_0[] = {-11, -91, 38, 40, -43, 121, 12, -51, -71, -90, 78, 21, 31, -49, 85, -84, -55, 12, 109, 112, 107, -66, 100, 32, 109, 102, 16, -2, -126, -61, -30, -68, 55, -87, 105, 45, 95, -11, 58, -38, 24, 22, -6, -19, 18, -118, -108, -24, 41, -109, -79, -116, 64, -44, 107, -104, 78, 116, 92, -114, 85, 85, 5, -12, -81, -107, 0, -32, -126, -8, 7, 68, 90, 33, 24, 87, 94, 47, -10, -12, -112, -93, -41, -57, 6, 32, -77, 19, -42, 99, 11, 105, 31, 95, 8, 89, 62, 24, 53, 4, -20, 37, 49, -79, -70, 12, 75, 121, -123, -127, 77, -44, 78, -82, 36, -49, 73, -8, -85, 51, 49, 105, 75, 43, 93, 62, 75, 78, 9, -122, 112, -77, 56, 96, -28, 57};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.0274497896835);
    msg.setSource(8583U);
    msg.setSourceEntity(153U);
    msg.setDestination(62756U);
    msg.setDestinationEntity(171U);
    msg.seq = 1363395462U;
    msg.destination.assign("PDRPHXHTILNIWMASMQRPDWZCHPNDDMFPOFAAKXDEEOFBCIVCNXIEZQG");
    msg.timeout = 32106U;
    const char tmp_msg_0[] = {-6, -96, -121, -17, 20, -38, 109, -47, 51, -70, -4, 126, 47, 80, 21, -119, 16, -123, -30, -111, 45, -52, -121, 100, 107, 115, -93, 74, 57, -4, -118, 42, 8, 37, 47, 13, 5, -6, -57, -10, 91, -124, 52, 55, -120, 61, 72, 106, -63, -75, 124, -9, -80, 80, -100, -77, 104, 66, -119, -1, -26, 52, 105, 9, -72, 26, -48, 54, 8, -87, 58, 69, 39, 38, -125, -26, 40, -111, 38, 72, 101, -74, -85, 32, -55, 86, 1, 58, -4, -28, 76, -52, -122, 68, 74, 81, 27, 123, -101, -111, 39, 2, -11, 40, -47, 30, 61, -17, -74, 15, -60, -100, -75, -76, 78, -83, -7, 14, 124, 13, -106, 0, 98, -11, 92, 24, 17, 89, 69, 36, 96, -49, -72, -3, -59, 45, -36, -84, 104, 44, -52, -35, -109, -57, -80, 107, -18, -66, -93, -120, -51, -121, -84, 63, -28, -46, -88, 35, -82, -54, -95, -28, -68, -12, 85, -51, 55, -117, 25, -87, 100, -95, 15, 79, -18, -9, -126, 77, -88, -37, -100, -26, 23, 111, -6, -41, 111, 95, -41, -5, 37, 39, -52, -54, 71, -28, -116, 100, -104, 65, -50, -80, 19, -32, -26, -78, -26, 74, 25, -41, -14, 47, 112, 115, 75, 70, -98, -115, 89, -87, -91, -105};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.616381581653);
    msg.setSource(57829U);
    msg.setSourceEntity(22U);
    msg.setDestination(45843U);
    msg.setDestinationEntity(52U);
    msg.seq = 1495794953U;
    msg.destination.assign("WEQGVKHGDSJQZWWYXNFMTBPEQVFAONRMRZLYOZUJOKXFQUJLITWIWCIJKPVCNHQYYTRD");
    msg.timeout = 55765U;
    const char tmp_msg_0[] = {-96, 122, -65, -86, -29, -62, 84, 70, 12, -16, -101, -45, 10, 62, -59, 91, -105, 48, 23, -111, -113, 6, 103, -48, 17, 17, 70, 103, 95, -68, 19, 29, -108, -27, -30, -124, 103, -25, -27, -85, 81, 106, -46, -12, 60, 81, 62, -11, 6, -5, -37, -86, -111, -94, -32, 27, 94, 22, 4, 56, 109, -127, 71, -83, -116, -110, -43, 31, -77, -55, 22, -96, 14, -65, 116, 20, -4, -63, -60, -16, -3, -15, -1, -114, 105, -7, -1, -14, 24, -118, 0, 68, -28, 8, -105, 83};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.635078597969);
    msg.setSource(23748U);
    msg.setSourceEntity(186U);
    msg.setDestination(24328U);
    msg.setDestinationEntity(1U);
    msg.source.assign("CDTEIYWSVRPDHTLBEKROEJKESXALYVDBMPEZDAXVBVUOCZJATQIGVJWNIPNJPXKIUQBMKCFYOGFGEGJUXSACFCRGWSCCOOCWFFSPTZJYOUHS");
    const char tmp_msg_0[] = {-90, 24, 103, -96, 16, 120, 19, -22, -3, 15, -85, 116, -82, -92, -30, -82, -12, 40, 76, -49, -97, 75, 47, -13, 52, 11, -90, -66, -36, 60, 39, -11, -34, -19, 118, -11, -35, 12, 11, 113, 15, 39, 40, 43, 116, -3, 47, -7, 93};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.615256673607);
    msg.setSource(30805U);
    msg.setSourceEntity(232U);
    msg.setDestination(58368U);
    msg.setDestinationEntity(11U);
    msg.source.assign("JONECGTOOVPCKVHWEZTABXJZLJBNPUGRAIHEOHOZVPEULIVHMYUEGDKQPKYMBPNTVNJQEVDEWYWEOJCTWDOLCPMXYSXAUZMJYSYUSCMUCGTQNMREKFYILAWAYTGZNGAIDUELQWNJIDTORZRDMSKGRUFRNUKCHTYFZQIQVTCBBSRHOB");
    const char tmp_msg_0[] = {24, -70, 48, -126, -7, 62, 96, -43, -70, -54, 66, -70, 52, -117, -102, -3, 55, -74, 103, -18, -109, 88, -48, 91, 75, -123, 72, 97, 97, -32, -125, 52, -96, 50, 95, 22, 36, -5, -19, -108, -50, -49, -117, 102, -116, 43, 76, 27, 68, -9, -2, 22, -56, -5, 55, -26, -64, 2, -68, -95, -127, 73, 118, 73, -101, -17, 30, -127, 72, -57, 43, 120, 124, 117, 5, 34, -111, 104, 7, 0, 25, -124, -34, 96, -105, -124, 10, -7, 14, 4, -40, 21, -11, -62, -33, 102, -115, 63, 48, -127, 85, 66, 55, -49, 36, 91, 78, 115, 122, 47, -125, 98, 99, 70, -97, 41, -93, 66, -56, 35, 83, 25, 67, -8, -127, -73, -83, -126, -13, -18, 46, -60, -104, 52, -74, 89, -10, -73, -41, -107, 93, -69, 40, -21, 101, 32, 44, 35, -54, 106, -31, -34, 87, 121, -80, -119, 116, -1, -30, 91, 104, -82, -111, 80, 119, -30, 87, 107, -60, -98, 94, -99, 35, 111, -60, -76, -12, 18, -5, -13, -81, -54, -27, -88, 49, 86, -119, 6, -66, 76, 120, -19, -78, 20, 121, -108, -67, -76};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.687264844889);
    msg.setSource(5454U);
    msg.setSourceEntity(236U);
    msg.setDestination(1412U);
    msg.setDestinationEntity(230U);
    msg.source.assign("TXYDPICHJGYXOQMSQRIKAVVAVKVHMUVKHDUBZRTOSQWHWMJNDUSCKBVYIFHJRQCSZTNAIAJYLYLEGSTRUOMNPVUKZPFBHWZXIMNZECPUELMPBBMSGKDCNWQOIPVATHNGZPOSRNLPGFWQDWKXOACCOCCDRZOYLDZOIMZYWVVEQFIAXEFKMBFJSBBFLJNEJWOLUJIWZXJFXPAGRAQBFQLRTDEGNERRGTFWCYDTXGTUHXTKELLUIYBJXAHPQMHYS");
    const char tmp_msg_0[] = {-40, 68, 29, 46, 78, -58, 109, 29, -70, -128, -18, -22, -7, -36, -63, 103, 90, 0, -112, -36, -8, -22, 108, 98, -108, 73, -97, -124, -120, 45, 20, -118, 10, -67, 89, -123, 35, 73, 80, 53, 23, 36, -88, 61, -125, 61, -23, -97, 111, -71, -88, 43, 42, -10, -30, 58, 97, -25, 51, -52, 112, 37, 106, -117, 5, 58, -8, 41, 17, -76, 95, -40, 17, -31, 12, 19, -21, -124, 0, -38, -124, -48, -45, -82, -5, 35, 11, 111, -42, -2, 66, -19, -5, 66, -79, -53, -111, 83, -118, 116, -25, 49, -127, -71, -118, 1, -119, 6, 20, -37, 52, 110, -5, 37, 67, 71, -52, 11, -41, 86, 13, -72, 116, -42, -12, -57, 72, -57, 59, -89, 10, 42, -86, 55, 13, -22, -59, 100, -56, 94, 7, -101, 55, -90, 23, -116, -126, 49, -41, -76, 63, -55, 70, 100, -124, -100, -78, -16, 45, 69, -119, -88, 17, -46, -101, -38, 35, -36, 58, -46, 2, 59, 21, -9, 99, -108, -107, 14, -105, -18, 86, -27, 68, 125, 23, 44, 22, 9, 42, 66, 17, 52, -11, -68, -106, 84, -50, 8, -63, 110, -32, -99, -29, -25, 116, 26, 40, -18, -11, -24, 102, 108, 119, -78, -89, -57, 59, -7, -17, -21, 65, -52, 28, -83, -59, 51, 90, -41, -119, -48, 71, -50, 61, 16, -80, -101, -64};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.563185489311);
    msg.setSource(9266U);
    msg.setSourceEntity(32U);
    msg.setDestination(6090U);
    msg.setDestinationEntity(224U);
    msg.seq = 4265014856U;
    msg.state = 38U;
    msg.error.assign("WMUDJAGBHTVLMSUPRGVOVBIPVGMXASQEZDFBLCLIPKATNKSDZEEDEFRGGRT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.00901708595097);
    msg.setSource(59062U);
    msg.setSourceEntity(82U);
    msg.setDestination(8439U);
    msg.setDestinationEntity(189U);
    msg.seq = 2698912981U;
    msg.state = 146U;
    msg.error.assign("WPUKLJAXHFMKTYBEAHVYYDOYDSIHEGNZOZWMZWVGUDMMJOIGCBLIOOBWKNMKIIFQXAKIRHUJZYBUJRVXYSWOFLOLODEVMRYGIXYSPJULAPUQBZPCTAYTVHVSPACMXNEWXRSISNNNNDQHAHQQAVPTRCFZMUELUPEJBRQCPRGJLGDBRZSLCTOWHHUCSEJDCWSQADGNLKFBFPVQTTZNJJFGKZXTVM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.512104050314);
    msg.setSource(1921U);
    msg.setSourceEntity(30U);
    msg.setDestination(20529U);
    msg.setDestinationEntity(207U);
    msg.seq = 3536559373U;
    msg.state = 76U;
    msg.error.assign("SYPZIPWSHGRLLEOPKGAQBNUHTDGHXTISMORCSEXQMCTLVSCZDOWJNMRFYJOFEUHHQNFJAMAAPZUTILC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.908636764194);
    msg.setSource(19288U);
    msg.setSourceEntity(49U);
    msg.setDestination(24337U);
    msg.setDestinationEntity(58U);
    msg.origin.assign("YHHXALUZWQGPJMTRKIAUZXGZXKMTNQMFNGWNRKLIHQVLOOYYWTBIZOTECJRTEWPJFHUGHCRMJMG");
    msg.text.assign("MVTOFQQPYPTUDAYTMAKCXASWBLIPXCDWXHQNRDVZKGSNJBLFHFTXVGTSLHPYZRVYIEQP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.514963961894);
    msg.setSource(38501U);
    msg.setSourceEntity(173U);
    msg.setDestination(61046U);
    msg.setDestinationEntity(51U);
    msg.origin.assign("QPCOAXAXSRKZGWZTVXTITVSKOVOOPJGHBBHVIGBEDAMTJAKLCRRUWVJHELNPBIVBELIPQVJNRGZKBEIMWBDXACWDT");
    msg.text.assign("KTPXPLECFDZCOXDORFEVAUVVYEQCHIKSDONFHZBRZOYMQMANMJUKSXLQXTBYLIBQPEDSIKGZFAMCIUJJEVUSASACQDYRYUGNIOTWLBFGZFTTLRNVUMHMXYLHZZAVUROESQLQYGLARKAHHBJJEBJWZMWPG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.722693899444);
    msg.setSource(18816U);
    msg.setSourceEntity(90U);
    msg.setDestination(1427U);
    msg.setDestinationEntity(26U);
    msg.origin.assign("AIAIXJXIEBEOBDNZAJZXFHMKGDVTNQDMPSUBUUJFEJFWHSY");
    msg.text.assign("NCOQVVIWNHMTHWMULILAJTEABHQZRGZMVUZSWCEJPKUVNWVTVZRJJEKIIZLIEOQKYDRLSQHNYSCTKZCUDRKSOTYJHUTVIFARUGIAFFUOCGYYWXZYGBQWKAGAUA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.0590133359091);
    msg.setSource(10512U);
    msg.setSourceEntity(151U);
    msg.setDestination(5564U);
    msg.setDestinationEntity(31U);
    msg.origin.assign("FIOXRMHWBUWNTQPWKOBMNXDJSPSCBUMCH");
    msg.htime = 0.196405579327;
    msg.lat = 0.250923977693;
    msg.lon = 0.581965495113;
    const char tmp_msg_0[] = {17, -57, 46, 61, -17, -110, -111, 30, 83, -26, 13, 118, 39, -103, 120, 40, -112, 66, -115, 63, 58, 4, -19, 89, 102, 78, -94, -61, -126, -123, 12, -109, 122, -100, -39, -70, 50, 52, -78, -123, -121, -121, -38, -96, -35, 39, 72, 65, 68, -98, -68, 123, 85, -12, -10, 76, 60, -50, -4, -23, 63, 29, -120, 114, 66, 85, 102, -23, 71, 111, 36, -90, 55, -27, -124, -101, -42, 110, 65, 58, 126, -113, -39, -95, 74, 47, -113, 64, 106, -71, -122, -102, -5, 24, -83, 25, 16, 122, -55, -46, 31, -65, -29, -100, -51, 50, 65, 27, -80, 100, 55, -46, 37, -121, 59, 59, -38, -122, 6, -89, -38, 48, 44, 113, 80, 26, -52, 107, -95, -77, -96, 68, -79, -19, 88, -98, 29, 88, 18, 80, -30, 121, 13, -2, -17, 111, -68, 78, 108, -119, -7, -15, -47, 23, -63, -12, -125, 30, 63, -86, 90, -56, 88, 100, 44, 30, 90, -55, 29, -8, 9, 83, 31, 59, -120, 15, -110, 92, -117, -79, -90};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.154147369251);
    msg.setSource(50193U);
    msg.setSourceEntity(240U);
    msg.setDestination(49133U);
    msg.setDestinationEntity(108U);
    msg.origin.assign("XHQQPQJAECXCBZVAHMKLVFUZVRGZXLTPMXJJGOSUIOTOPCODNPGSIZSFLEWCVOKDPINYCERXUPWAEYBWMQJEBERCDHISOKGPXANMCXDRURNLGWKBCBVPGHYBNMAKJZESOAQRDVWKYMFPWFBUWTQKKCTEUFRELTZITGLZGYNPBYOUHGHLYFVJALFSHNJZA");
    msg.htime = 0.701010073934;
    msg.lat = 0.405927067317;
    msg.lon = 0.187504049827;
    const char tmp_msg_0[] = {-91, -113, -75, -88, -64, -35, 66, 92, -74, 88, 124, 58, 2, 119, -109, -42, 18, -121, -76, -110, -38, -126, 78, 86, -22, 97, 9, -17, -39, -18, -4, 13, 8, -46, -11, -86, -126, -111, 119, 80, -95, -39, 57, 54, -42, -69, 65, -86, 35, -62, 74, 89, 122, -101, -85, -109, -81, -44, -29, 55, 47, 14, 91, -39, 111, -44, 6, 22, -102, 49, 116, 65, 59, 123, -89, 28, 26, -44, 85, 84, -4, -104, -28, -125, -72, -29, -10, -2, 11, 85, -115, -127, 119, 8, -22, -18, -20, 47, -80, 11, -28, 8, -7, 26, -42, 85, -22, 63, 122, -121, -94, -81, 126, -76, 8, 10, -96, -36, 10, 72, -91, 110, 41, -125, 114, -113, 9, -117, 18, -37, -13, -84, 39, 107, -83, -9, 8, 56, 44, 18, 126, -35, 101, 110, 125, -46, -69, 68, 117, 40, -120, -15, -90, -69, -24, -27, 88, 33, 81, 63, -17, -92, -12, -66, 2, -77, -35, -70, -88, -105, -70, 68, -25, 46, 119, -48, 5, -53, 107, 106, 6, -112, 26, 97, -57, -83, 86, -18, -32, -48, -102, 45, -103, 46, 102, 50, 44, 6, -117, -58, -71, -89, 46, 88, 96, 88, 39, 27, 12, 23, -36, 27, -20, -51, -99, -59, -5, -121, -19, 96, -45, 69, -48, -110, -91, 33, 41, -62, 86, -82, 64, -23, -14, 116, 23, -80, -112, 76, 102, -52, 120, 35, 78, -62, -110, 29, -73, 76, -50};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.995546946124);
    msg.setSource(56669U);
    msg.setSourceEntity(117U);
    msg.setDestination(1097U);
    msg.setDestinationEntity(13U);
    msg.origin.assign("WCDJZEOCUXOUCWNNQNTGFMUPUTALWYVHWQMNQYSLJNHMDKODFKMLDGKRYRHGBWXKGBCZAGMDSUTZITENTIXOPMJFWYVBGQSVNWBHYHDJPIXREJFUAXPRDOHLKHIFJZBXMMPGPZKFBRHGXFJDMJBICSOCYEBROAIAZEXSAAHJQRKYULWLOBIVQVZZXCSYVN");
    msg.htime = 0.834725289708;
    msg.lat = 0.296024896878;
    msg.lon = 0.100540259382;
    const char tmp_msg_0[] = {-60, -13, 11, 36, -63, 48, 123, -92, -55, 89, -7, 48, -106, -68, 33, -60, 7, -63, -56, 15, 24, 96, -101, -9, -62, -15, -89, 45, 52, -54, 2, 116, 6, -16, 64, 10, -128, 63, 26, 87, -40, 31, 106, -23, -43, -46, -52, -26, 95, -8, 81, -100, -19, 36, -42, -108, -42, -87, 79, 88, 31, 65, -28, 13, 20, 91, 103, -31, 17, 9, 91, -29, 91, -43, 47, -97, 8, 89, 59, 6, 71, 105, 69, 57, -50, 59, 31, -40, 15, -78, -46, -91, 102, 43, -90, -27, -7, 59, 15, -126, 93, 11, -116, -10, -23, -25, 28, 74, -99, 72, -20, -52, 68, 61, 30, 122, 63, 87, -99, -106, -52, 45, -57, 29, -102, 3, -79, -52, -100, 56, 59, -94, 86, -45, -95, -106, 76, -64, 85, -9, 70, -29, -18, 104, 29, 70, 13, -120, -69, -121, 48, 78, 100, 43, 87, -34, 106, -69, 59, 46, 93, 0, -60, -127, -69, -6, -19, 0, 80, -66, 6, 56, 115, -47, 10, -7, 109, 36, -19, -86, -6, -35, 43, 60, -42, 67, 126, -30, -40, 88, 50, -77, -119, -39, -67, -34, 20, -53, 49, -35, 92, 113, -19, -89, 115, 25, 87, -111, 103, 54, 91, 119, -57, 67, 84, -32, 114, -9, -67, 19, 66, -32, 54, -91, -88, -110, -127, 5, 23, 62, -45, 104};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.614647549477);
    msg.setSource(4797U);
    msg.setSourceEntity(162U);
    msg.setDestination(11748U);
    msg.setDestinationEntity(241U);
    msg.req_id = 54810U;
    msg.ttl = 5467U;
    msg.destination.assign("RVYIWZKAFXPTFMVBCVCOEPJUKPIPOZOKONDXFXWPLVAYWJYU");
    const char tmp_msg_0[] = {114, 111, 11, 101, 31, -53, 37, -69, -100, 73, -26, 121, 108, 7, -118, -76, -94};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.426659769497);
    msg.setSource(23359U);
    msg.setSourceEntity(88U);
    msg.setDestination(56624U);
    msg.setDestinationEntity(251U);
    msg.req_id = 9890U;
    msg.ttl = 42946U;
    msg.destination.assign("NKFKVEFQDTPHPLVRKEKCXXGAEJQSGTOUETVZBKTPCOLFJJSIWDYLVSGLPBVRRAEMOLEIDXUEGFYIXUPWOBXGBSWZSYCFVFSMWSKSMPHTWSOKWPZHYHGHPIRTIUNCAXKJLIQFHORVILUYNMCGIARYQURFTVEHWDFAORWY");
    const char tmp_msg_0[] = {80, -70, 83, 66, -105, -12, -85, 74, -58, 58, 11, 51, -14, -127, -73, 15, 7, 116, -33, 62, 98, -15, -49, 32, -111, -107, 32, 58, -123, 19, -51, -7, 108, -23, 52, 109, -64, -50, -83, 51, 64, 102, 126, 9, -126, 86, 78, -61, 100, 78, 28, -88, 125, -10, -52, 103, -78, -14, -4, -80, -17, -20, -108, 16, 13, -96, 81, -128, -71, 53, -35, -1, -109, -52, -122, 126, -17, -122, 4, -23, 39, 54, -95, 31, 103, 61, -77, -8, 1, -35, -12, 121, -80, 43, -83, 11, 29, 110, 48, -6, 5, 41, -126, -92, 105, -37, -120, 123, -100, 84, 94, 103, -18, -123, 90, -56, -29, 71, 117, 99, 61, 71, -78, -122, -84, 106, 59, 102, -47, 91, 49, -72, -4, -91, -12, -123, -85, -97, -118, 74};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.373315823626);
    msg.setSource(30967U);
    msg.setSourceEntity(26U);
    msg.setDestination(36713U);
    msg.setDestinationEntity(42U);
    msg.req_id = 13297U;
    msg.ttl = 58509U;
    msg.destination.assign("FFLMVPLFKUMCHLNXWAESAQVHSYPJVOTUHSDBXVLOQIAZVRROWEKDCQBYROCDWEQXHWIYESYBCVIAJXUUPHGMOELSSUJBYDRKCGMCTIAHLFNMFJPPPTDFLTRTSGOUTKUODZJIWEYQBSNAKWQLGXTGFDCNXKXEIQJVTJHRFSZGNDIWWHNJGPWBYRZHYRQOKETAUGLSPAJXABCKYKGVMMW");
    const char tmp_msg_0[] = {-4, -16, -118, -50, -23, 40, -111, 20, -31, -109, 10, 35, -34, 112, -29, -35, 88, -108, -89, 107, -1, -4, -25, -44, 100, -106, -112, 107, -20, -118, -9, -36, -96, -21, 61, -122, 116, 91, -121, -111, -45, 105, 55, 9, 100, 35, -18, 46, -57, -112, 97, -13, -98, -115, -84, -109, 109, 8, -77, -44, 76, 93, -114, 119, -16, -64, 37, -116, -22, 47, -27, -63, -108, -106, -73, 89, 83, -83, -56, 106, -93, 29, -9, 52, -63, -24, -28, -84, 105, 104, -118, -2, -97, -8, -104, 36, -80, 119, 116, 27, 40, 77, 81, 34, -51, 6, 22, -112, -23, -126, -28, -100, 76, 54, 64, 54, -71, -111, 20, -17, 29, -38, -72, -85, -63, 106, 15, -40, -12, 49, 125, 64, 123, 1, 106, -41, -37, 112, -100, -4, -56, -125, 60, 22, -35};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.531378171212);
    msg.setSource(39757U);
    msg.setSourceEntity(244U);
    msg.setDestination(16204U);
    msg.setDestinationEntity(49U);
    msg.req_id = 40741U;
    msg.status = 42U;
    msg.text.assign("ULTYLMVIMAJYYCTSIVOPTMZWXYEFDOMMCBOELIBDFRQQVBEMHJNAZTKUQJOPUHXI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.558966556565);
    msg.setSource(4925U);
    msg.setSourceEntity(72U);
    msg.setDestination(36805U);
    msg.setDestinationEntity(226U);
    msg.req_id = 42028U;
    msg.status = 65U;
    msg.text.assign("AMOAUQGKPKKJTZSYCMF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.710628845266);
    msg.setSource(21113U);
    msg.setSourceEntity(162U);
    msg.setDestination(24714U);
    msg.setDestinationEntity(219U);
    msg.req_id = 1254U;
    msg.status = 18U;
    msg.text.assign("CJGGIJCTRYVOACZXKIQOLNWVNXXYCWGFAOMODXPIYQTWEBAWMFBZQMWVSLHKENRFQDOKSEBLESBTHMERUQDKINSEZNWAXTGOLPXDHSOMTQNZFBLJJIHSKYVP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.293458772198);
    msg.setSource(43786U);
    msg.setSourceEntity(188U);
    msg.setDestination(35357U);
    msg.setDestinationEntity(213U);
    msg.group_name.assign("UEKTACPFIJFKMJLATWOFXIIYZGDQLDCEGLTXBABOEAIRPWOGYMPOBMISRAZVPYKBINWOFX");
    msg.links = 3700665306U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.364460337204);
    msg.setSource(8803U);
    msg.setSourceEntity(204U);
    msg.setDestination(36253U);
    msg.setDestinationEntity(70U);
    msg.group_name.assign("TKEALDUQJIYJIUFDNVRTCLMWQGAAS");
    msg.links = 2491762832U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.930215432095);
    msg.setSource(55912U);
    msg.setSourceEntity(192U);
    msg.setDestination(793U);
    msg.setDestinationEntity(252U);
    msg.group_name.assign("ZWCYRWQQXRQLTFYENHHHPOLXQSDECATTKAKDKZKGUOGGRTVMVAESIUUVYAEMXUZQNIFJCLUSATFYDOLQDGPFWYEDVZBOKBSFWBDGKPXWIUJFPXUONHV");
    msg.links = 1492250720U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.627657513085);
    msg.setSource(36968U);
    msg.setSourceEntity(3U);
    msg.setDestination(18862U);
    msg.setDestinationEntity(37U);
    msg.groupname.assign("FCXHWIALXZRMUYSRHECOOLMQUZOBGBPRKZWTYVPSVFQTCYLGGHNMQTCTMUHLHRFTEANYFMYEWZAWHUGOKKXHESIDEOVVNNLWGZXBBSTWPBWQKLELVUCGKVFYATJGCRDNEMUJEIDQIGXUPNQXZVDMONZISSAATWRBPBQIGJPSHKBJCUASPNIEOBRMTXTCGRDOQNZUPWPADKXIFYO");
    msg.action = 77U;
    msg.grouplist.assign("HNLZYKFVMWLACONJECTSQAWDHCEUNQYMSYBNVKTINFXWGWDGGQAWIPTUYABQORSWWLCPFRBSIDEAFXEPRFGKSUEQYLGXBZNMPPCIJCLIAIBBPKZZPIOUKMCTXVUGJQZMATRFBCLIBRLUJPUNJXOUKTIZFZOFMGJQSXRYEGNWHHQGKVKNEMPRDJHQLXJTHSRADONJYYDHUGKRSZJBSBMVYDDZVPADTVLR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.518488998626);
    msg.setSource(32519U);
    msg.setSourceEntity(6U);
    msg.setDestination(63994U);
    msg.setDestinationEntity(235U);
    msg.groupname.assign("SQVTIMDWFMAOHBSJSHDFNJVLBWYECTXBCJWYRGPZERJXCMBY");
    msg.action = 162U;
    msg.grouplist.assign("VTNPFJMESZVCOOXGEEHUISTELLVKMFQLWAKTVAYBBMNWGTHWRDHVOAYQWBRZYOYXUZD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.910862090373);
    msg.setSource(51784U);
    msg.setSourceEntity(86U);
    msg.setDestination(50064U);
    msg.setDestinationEntity(76U);
    msg.groupname.assign("EVDBKTSCWBYSGRGPTOBWQLVJCOAVCPSZAYRJWUFVMJYEQOINHUZCMTIEDITHNAGFIQAKRPXELNMSKWXARIYWLNFBBPBQXDQUKBKLRYPFNQLGJVWGSKXENNQOQCOFBUUGCEGTUOZNDIDJDZTHVSQ");
    msg.action = 92U;
    msg.grouplist.assign("VDZURXKOSMGOGFHMEMQFHAHUAGSVVZQPJUATOKBAIWOOJNIQPCDTPAVZYYTPURUDQMPHBOSKPBCIEJRGOPFFYZAPNSESBDADGKDGKAJXIILWXGNZJVCYXRFBDWNLIXTOFJRMRGUBYZSHVZHRCHLEIATJQCCXPVSTXGUENOVMVHDMWYNWLPBCKNELNNEQSLQULMRTKVMQMFZIQYIASBFDWXJTREORJDKECWUKJCK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.451272005437);
    msg.setSource(64709U);
    msg.setSourceEntity(44U);
    msg.setDestination(24456U);
    msg.setDestinationEntity(121U);
    msg.value = 0.215211329248;
    msg.sys_src = 49686U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.0368877356117);
    msg.setSource(34634U);
    msg.setSourceEntity(218U);
    msg.setDestination(62881U);
    msg.setDestinationEntity(151U);
    msg.value = 0.234401234992;
    msg.sys_src = 48917U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.830391647308);
    msg.setSource(58213U);
    msg.setSourceEntity(120U);
    msg.setDestination(56403U);
    msg.setDestinationEntity(252U);
    msg.value = 0.766175379105;
    msg.sys_src = 20400U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.111208970883);
    msg.setSource(63013U);
    msg.setSourceEntity(57U);
    msg.setDestination(27014U);
    msg.setDestinationEntity(207U);
    msg.value = 0.263112871124;
    msg.units = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.968038369469);
    msg.setSource(31122U);
    msg.setSourceEntity(111U);
    msg.setDestination(2355U);
    msg.setDestinationEntity(52U);
    msg.value = 0.983705855839;
    msg.units = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.57447119067);
    msg.setSource(23470U);
    msg.setSourceEntity(205U);
    msg.setDestination(16799U);
    msg.setDestinationEntity(211U);
    msg.value = 0.413785657218;
    msg.units = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.138083506846);
    msg.setSource(56231U);
    msg.setSourceEntity(206U);
    msg.setDestination(30230U);
    msg.setDestinationEntity(208U);
    msg.base_lat = 0.320253030428;
    msg.base_lon = 0.0516149850503;
    msg.base_time = 0.0745609075696;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 18116U;
    tmp_msg_0.priority = 76;
    tmp_msg_0.x = -17770;
    tmp_msg_0.y = -1118;
    tmp_msg_0.z = -19372;
    tmp_msg_0.t = -6643;
    IMC::EulerAnglesDelta tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.322232392502;
    tmp_tmp_msg_0_0.x = 0.0244196861762;
    tmp_tmp_msg_0_0.y = 0.722255680711;
    tmp_tmp_msg_0_0.z = 0.736776172066;
    tmp_tmp_msg_0_0.timestep = 0.15125613792;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.452901381979);
    msg.setSource(32777U);
    msg.setSourceEntity(141U);
    msg.setDestination(23543U);
    msg.setDestinationEntity(86U);
    msg.base_lat = 0.807979065931;
    msg.base_lon = 0.639718184885;
    msg.base_time = 0.739394175408;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.577085321847);
    msg.setSource(16067U);
    msg.setSourceEntity(25U);
    msg.setDestination(31879U);
    msg.setDestinationEntity(117U);
    msg.base_lat = 0.366546684636;
    msg.base_lon = 0.444520732875;
    msg.base_time = 0.587508530973;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.889148657236);
    msg.setSource(38739U);
    msg.setSourceEntity(75U);
    msg.setDestination(53793U);
    msg.setDestinationEntity(121U);
    msg.base_lat = 0.657343432658;
    msg.base_lon = 0.149273421622;
    msg.base_time = 0.0549977523163;
    const char tmp_msg_0[] = {121, 18, -124, 4, 44, 92, -87, -94, 14, -72, -46, -75, -114, -126, -46, -40, 62, -56, -115, -83, -20, 40, 21, 87, 87, 63, -60, -62, -60, 82, 112, -111, 3, 118, 4, 90, -105, -121, -37, -18, -6, -110, -46, 104, -35, 56, -36, 91, 83, -13, 52, -77, 86, -75, 22, 94, 112, -64, 63, -73, -55, 82, 5, 107, 125, 60, 52, -128, 39, -96, -114, 119, -26, 121, -47, -112, -76, 61, -44, 28, -86, -7, 95, -26, 6, -98, -69, 61, 80, 96, -4, -77, -86, 75, -87, -82, -112, -9, 0, -124, -42, 39, 1, -85, 85, -117, -53, -36, -3, 60, -105, 112, -96, -34, 111, -115, -126, 49, 94, 26, -84, 69, 3, 5, -13, 9, 99, 76, 108, 50, 119, -31, 26, 44, -92, 27, -67, -128, 12, -86, 110, -83, -30, 94, -111, -10, 47, -13, 59, -94, -26, -126, -26};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.32045782006);
    msg.setSource(47304U);
    msg.setSourceEntity(118U);
    msg.setDestination(22736U);
    msg.setDestinationEntity(40U);
    msg.base_lat = 0.729050777569;
    msg.base_lon = 0.111863070726;
    msg.base_time = 0.143072875702;
    const char tmp_msg_0[] = {121, 93, -41, 84, 5, 53, 20, -39, 18, 96, -62, -31, 111, -59, 106, -103, 80, -126, 34, -3, 92, -17, 5, 12, -73, 7, -115, -27, 36, -111, 40, 35, 123, 14, -117, 50, -87, -102, 63, -43, 43, 30, -125, -1, 26, -46, -8, 11, 106, 17, -91, -44, 120, 78, 18, -36};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.179499669251);
    msg.setSource(6578U);
    msg.setSourceEntity(11U);
    msg.setDestination(41888U);
    msg.setDestinationEntity(15U);
    msg.base_lat = 0.391889890268;
    msg.base_lon = 0.599693220004;
    msg.base_time = 0.909720902311;
    const char tmp_msg_0[] = {-24, -52, 53, 72, 38, -24, -24, 123, -125, 58, -68, 63, 22, -53, -108, -47, 82, 121, -121, 117, -119, 49, 118, 2, -46, 118, -124, -58, -18, 120, 81, 7, -34, -44, -127, -16, 64, 52, -42, -125, 95, 7, 48, 104, 114, 83, 31, -26, -105, 15, 79, -117, -120, 112, -8, 108, 75, -36, 32, 125, 104, -105, 75, 106, 106, -18, -42, 65, -88, 77, -4, -70, -69, 4, 7, 115, 113, -116, 116, -18, 32, -2, -15, -99, 92, -54, -119, -128, 56, 23, 13, -53, 118, -29, -96, 81, -115, -4, -116, -111, -74, 38, 26, 34, 33, 30, -48, 43, -80, -79, 2, 40, -64, -13, 121, -40, 121, -121, -111, -47, 105, -118, -55, -24, -24, 102, 87, -32, 34, 119, 46, -12, -66, 33, 68, -27, 62, 30, -58, 48, 10, 21, 33};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.758145470873);
    msg.setSource(4903U);
    msg.setSourceEntity(233U);
    msg.setDestination(1551U);
    msg.setDestinationEntity(241U);
    msg.sys_id = 64128U;
    msg.priority = -11;
    msg.x = -6708;
    msg.y = 252;
    msg.z = 1307;
    msg.t = -24015;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.841753066941;
    tmp_msg_0.type = 91U;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.500050304286);
    msg.setSource(14103U);
    msg.setSourceEntity(139U);
    msg.setDestination(44160U);
    msg.setDestinationEntity(92U);
    msg.sys_id = 16180U;
    msg.priority = 48;
    msg.x = -30509;
    msg.y = -11558;
    msg.z = 24461;
    msg.t = 18557;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.575531726957;
    tmp_msg_0.lon = 0.00108169449011;
    tmp_msg_0.speed = 0.365576485702;
    tmp_msg_0.speed_units = 93U;
    tmp_msg_0.limits = 83U;
    tmp_msg_0.max_depth = 0.156614834482;
    tmp_msg_0.min_alt = 0.0464644120684;
    tmp_msg_0.time_limit = 0.251686411867;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.712472357957;
    tmp_tmp_msg_0_0.lon = 0.447467404623;
    tmp_msg_0.area_limits.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.controller.assign("VEHQKUFNMJGOBQYZHRODZCXSVHPBKTYRGCRZNHAOZTDVZCTDNWJBFZCCOSECLPJGQOWQFAOVDRQVLPQIWHUAOUAWPDQSENBFSCRZURYIUMAVHBPSWYLLMBVXGSZHOREKPPNXGLJMPCEZTHWCNUYVKSEETMFFUNYKKYUXNKIPSSQBJNMTNEKDWDGTTMIMYZKUJXGM");
    tmp_msg_0.custom.assign("NXNZRGPSPELGHBLICOCOUEPZKOGTXJTFXUUPTDKISELOQYVYNCHBBQQZPYKMUVKQSCBVSQKDVRHMVWSZJOUTTDOUPLNMUIBYGALLJKBIXEFNMOAFYRZYVHTSXDAMIAPWBFCWOWDDMHGETWZNNCNYJHZVRVERIECFK");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.965377053603);
    msg.setSource(44588U);
    msg.setSourceEntity(180U);
    msg.setDestination(30269U);
    msg.setDestinationEntity(167U);
    msg.sys_id = 64403U;
    msg.priority = -24;
    msg.x = -29839;
    msg.y = -15725;
    msg.z = -31167;
    msg.t = -17384;
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 91U;
    tmp_msg_0.plan_id.assign("CNHMDPJKME");
    tmp_msg_0.comm_level = 38U;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.832877361135);
    msg.setSource(64175U);
    msg.setSourceEntity(52U);
    msg.setDestination(21235U);
    msg.setDestinationEntity(39U);
    msg.req_id = 26134U;
    msg.type = 69U;
    msg.max_size = 29920U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0658397554393;
    tmp_msg_0.base_lon = 0.756453123279;
    tmp_msg_0.base_time = 0.806466722559;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.0838806638537);
    msg.setSource(49011U);
    msg.setSourceEntity(254U);
    msg.setDestination(50745U);
    msg.setDestinationEntity(243U);
    msg.req_id = 39143U;
    msg.type = 148U;
    msg.max_size = 45264U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.678886939661;
    tmp_msg_0.base_lon = 0.845643113137;
    tmp_msg_0.base_time = 0.0903050660972;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 4786U;
    tmp_tmp_msg_0_0.priority = 3;
    tmp_tmp_msg_0_0.x = -27465;
    tmp_tmp_msg_0_0.y = -2239;
    tmp_tmp_msg_0_0.z = -3320;
    tmp_tmp_msg_0_0.t = -7495;
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.duration = 24897U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("IXWLBMGQLDWZRSNWATBVUDVDIZMYDUAOCEGQDHZCYQKSNCXAQJHBOEPPGPODUTZUTFGOUUPLPIMJLRDGYSXGFZIUIAUCFVBASJYYFEYGSQRGKBOBHKCXEWKWZXQLTPNJVFOPRXXMCHHKHEDMKWQXIYAHSJHEFAIOS");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.909260390707);
    msg.setSource(29757U);
    msg.setSourceEntity(163U);
    msg.setDestination(54618U);
    msg.setDestinationEntity(86U);
    msg.req_id = 5006U;
    msg.type = 86U;
    msg.max_size = 64432U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.692026352701;
    tmp_msg_0.base_lon = 0.709405153532;
    tmp_msg_0.base_time = 0.322964093597;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 44519U;
    tmp_tmp_msg_0_0.destination = 64098U;
    tmp_tmp_msg_0_0.timeout = 0.951717254536;
    IMC::WindSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.direction = 0.116892102293;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.152833387552;
    tmp_tmp_tmp_msg_0_0_0.turbulence = 0.413345564211;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.22862650979);
    msg.setSource(47827U);
    msg.setSourceEntity(213U);
    msg.setDestination(11947U);
    msg.setDestinationEntity(6U);
    msg.original_source = 53106U;
    msg.destination = 28688U;
    msg.timeout = 0.72780197832;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 38674U;
    tmp_msg_0.status = 250U;
    tmp_msg_0.text.assign("VYCKWXFGVQBUAQRKEWKQAEOKCDUYACFBTHKEPEOCSKXHBIQBGAQDEAMXQNXHACEFZRCNNYNQJUSZJTLHZZFATOLLYYQPEMICOW");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.498608079559);
    msg.setSource(59430U);
    msg.setSourceEntity(178U);
    msg.setDestination(13393U);
    msg.setDestinationEntity(104U);
    msg.original_source = 17953U;
    msg.destination = 18098U;
    msg.timeout = 0.62850022173;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 461475324U;
    tmp_msg_0.start_lat = 0.22786751525;
    tmp_msg_0.start_lon = 0.887410371543;
    tmp_msg_0.start_z = 0.127413553896;
    tmp_msg_0.start_z_units = 223U;
    tmp_msg_0.end_lat = 0.976445571843;
    tmp_msg_0.end_lon = 0.658215250077;
    tmp_msg_0.end_z = 0.535014662082;
    tmp_msg_0.end_z_units = 47U;
    tmp_msg_0.speed = 0.305794006415;
    tmp_msg_0.speed_units = 208U;
    tmp_msg_0.lradius = 0.366078167589;
    tmp_msg_0.flags = 47U;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.0311105456033);
    msg.setSource(40296U);
    msg.setSourceEntity(109U);
    msg.setDestination(47292U);
    msg.setDestinationEntity(118U);
    msg.original_source = 33352U;
    msg.destination = 42230U;
    msg.timeout = 0.321801024698;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 211U;
    tmp_msg_0.htime = 0.241419043303;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.0581707380375);
    msg.setSource(62060U);
    msg.setSourceEntity(186U);
    msg.setDestination(48715U);
    msg.setDestinationEntity(199U);
    msg.id = 228U;
    msg.range = 0.243381252995;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.149582402322);
    msg.setSource(60469U);
    msg.setSourceEntity(9U);
    msg.setDestination(28607U);
    msg.setDestinationEntity(148U);
    msg.id = 217U;
    msg.range = 0.312424260922;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.7789016784);
    msg.setSource(24376U);
    msg.setSourceEntity(75U);
    msg.setDestination(33247U);
    msg.setDestinationEntity(116U);
    msg.id = 12U;
    msg.range = 0.544802722027;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.752547464585);
    msg.setSource(58267U);
    msg.setSourceEntity(125U);
    msg.setDestination(47350U);
    msg.setDestinationEntity(4U);
    msg.beacon.assign("JQJLXOWLSKVDZAEDDAYHCHKMXFKNJOTQYPOZTYGBQWBKFOBNTIJWRQQKCUPDQBNNPPAUDXJSIRHZYIIJMUFCGGGWSSZVDPEMTUDJANIOLRNKEZJYFHLMOWXFIWREDFPGFEXRPLHRBCVEQFS");
    msg.lat = 0.275638336428;
    msg.lon = 0.233666737294;
    msg.depth = 0.754111922462;
    msg.query_channel = 135U;
    msg.reply_channel = 54U;
    msg.transponder_delay = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.121150384441);
    msg.setSource(40447U);
    msg.setSourceEntity(239U);
    msg.setDestination(55911U);
    msg.setDestinationEntity(233U);
    msg.beacon.assign("WZIXWHWNLUNCRPMFIDXZVVKMOXCYZKPQRCQMLECROADHINVUTCPBDDSEFHIVBXWLZFRLLSHYCYHAXVSREKSIFGJOEHDVQELHCBBOLYIBZKLNNOFTHVSRYSLDFZZPRTRJOMXWIBOWXPDSPGBYPZFGDKJXFQZJJEUBKPQWGNKJEMOBUQKGSUQKAUQWVBDJVSSANYE");
    msg.lat = 0.978298879503;
    msg.lon = 0.217506529392;
    msg.depth = 0.424149426578;
    msg.query_channel = 67U;
    msg.reply_channel = 30U;
    msg.transponder_delay = 77U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.182401297746);
    msg.setSource(23426U);
    msg.setSourceEntity(244U);
    msg.setDestination(49929U);
    msg.setDestinationEntity(199U);
    msg.beacon.assign("GZJJTMQKZGHJQPRDEAARJXQJRRZYWCNFHLMANDMDIIPGNBIZBMQYQWWEOPAOWIZHMUYRRXKASAELAJZTMPSDDBLCTKFTVFDUGGLWLLFSHCUKVIMCEKTBEQFNH");
    msg.lat = 0.17820283593;
    msg.lon = 0.398692461284;
    msg.depth = 0.387147224348;
    msg.query_channel = 108U;
    msg.reply_channel = 8U;
    msg.transponder_delay = 172U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.436707278836);
    msg.setSource(31862U);
    msg.setSourceEntity(132U);
    msg.setDestination(45312U);
    msg.setDestinationEntity(127U);
    msg.op = 101U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.917777473418);
    msg.setSource(37567U);
    msg.setSourceEntity(215U);
    msg.setDestination(37398U);
    msg.setDestinationEntity(17U);
    msg.op = 88U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HBNQJYMCGJJQGCBVYARWJIITSOVEMSIAWBDOHXZBTOZDPTQXTWUKICKGSWLUVMBRODXSONZFTVZQOBXNOIMESRLOQNMLLIXGCAZFXPUNRUBBZQBGLYYDDXHFGKHGGJTJDCTLIMQWOFNOYUEEJQPHUQWMJKGFVXAAAEKPYVYFC");
    tmp_msg_0.lat = 0.691240992265;
    tmp_msg_0.lon = 0.644574294971;
    tmp_msg_0.depth = 0.77486479069;
    tmp_msg_0.query_channel = 244U;
    tmp_msg_0.reply_channel = 53U;
    tmp_msg_0.transponder_delay = 176U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.096240165964);
    msg.setSource(61870U);
    msg.setSourceEntity(110U);
    msg.setDestination(52830U);
    msg.setDestinationEntity(94U);
    msg.op = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.994822238624);
    msg.setSource(31236U);
    msg.setSourceEntity(79U);
    msg.setDestination(39152U);
    msg.setDestinationEntity(50U);
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 180U;
    tmp_msg_0.time_remain = 0.229952591843;
    tmp_msg_0.sched_time = 0.654131768152;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.955063305656);
    msg.setSource(13958U);
    msg.setSourceEntity(1U);
    msg.setDestination(40206U);
    msg.setDestinationEntity(16U);
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 61258U;
    tmp_msg_0.bearing = 0.196349337892;
    tmp_msg_0.elevation = 0.575460734197;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.952515610615);
    msg.setSource(42545U);
    msg.setSourceEntity(100U);
    msg.setDestination(54295U);
    msg.setDestinationEntity(190U);
    IMC::Airflow tmp_msg_0;
    tmp_msg_0.va = 0.410724910136;
    tmp_msg_0.aoa = 0.0794149672346;
    tmp_msg_0.ssa = 0.388101080274;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.827684338842);
    msg.setSource(29141U);
    msg.setSourceEntity(40U);
    msg.setDestination(58079U);
    msg.setDestinationEntity(210U);
    msg.op = 113U;
    msg.system.assign("JRWHMTVUJZIPBEOBQWWNNHFKZXBUZYNQOQYXFYKCKPKGTUFQVCPVM");
    msg.range = 0.830860386947;
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 192U;
    tmp_msg_0.goal_id.assign("MCXZEIUYFKCZRTDQWLEMFGCHPQSFWCNGOTVSGOPRTQMWTRHSXBKFKHBWODYOIHDLECHBLGX");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("JNHCLBVTYRZCUPGFQFUBSVPOXNGOIEPZLOVDEVBZCAQAJQUNOYGOLEUCFGPWTWOHSBSKIRAJIALUKPABKXGNCADDOMCJWHKABLXMHHRUSBVDEDZAUGYMNXVFIFWQGKVKTBMFEXEPNWRDE");
    tmp_tmp_msg_0_0.predicate.assign("BUTQZAHGYOSQVPDFKBLMJIVXMCCEQIYZRQULOXWVUKAYMYNDNDJRGZWXSLQIPFCP");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("HDEDUGKXCXRZFALKQKLJSIYIHPMFJIMNSQTNYJZOBDRCGXUNRCUHLENREWQYDWBUJPNQQVLTDZWYXOISBUWFAWPOZRFRUGAAXJMVSVYGPZVBVXRAJUHISRBMMOGZBYFSXLEOQREABZH");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 63U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("DYPREOFCGCFALALOXDAODLNRDOQVEYHGSANIOBZQLDVJWMDSFYNMSXAGUSYPRQQKTKKKXCKCHCTNBBHJICFBLJPYXTVZLIAEMQBSKLQATIUNRRAUFWHGQOJUVMNRQOEXUOWSVSVWFZTXWMDYLPBMJXZTZAUFGCJNGHPBNJVMMHWQVZTSIYDT");
    tmp_tmp_tmp_msg_0_0_0.max.assign("XAEHSILSFIUTGQTBSUYEAEKHMCYLDXOHLGFAUIPJELIFVRDSDERKSVQNXHZOOZVFHBZIWWBTDOGCBPJMBYFHHJOLLVZSNRMHFWTKCNBTZGRYUNSEKULSPBGFKYORNTCZKEYUGZXDYFSWMCAQUPMNDVALZQMIEKIEGTCPRAOVC");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.173591410612);
    msg.setSource(31080U);
    msg.setSourceEntity(141U);
    msg.setDestination(12924U);
    msg.setDestinationEntity(83U);
    msg.op = 68U;
    msg.system.assign("YUPTPCNIDAZXJXOFEIYHLJZPOFFBQEISJKMQEOJMUIYYOQJOLCZTKFWXKFQEYDLWIKCVAFHVRSYAKKSDBCDFZMVMHPNTMCYWPHGOKSTQLBPBRBGNV");
    msg.range = 0.0907744493047;
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 200U;
    tmp_msg_0.x = 0.809792732938;
    tmp_msg_0.y = 0.826273371782;
    tmp_msg_0.z = 0.163043120416;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.604568486119);
    msg.setSource(54750U);
    msg.setSourceEntity(41U);
    msg.setDestination(16140U);
    msg.setDestinationEntity(148U);
    msg.op = 102U;
    msg.system.assign("QAYCOKBYOWDVKNRVSIAQXRYAPEQTTWQLZISVRLPUCSWCEUKPJMERAHLVTAMGAEQ");
    msg.range = 0.375729441675;
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.535177586185;
    tmp_msg_0.sys_src = 54054U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.213888687823);
    msg.setSource(19873U);
    msg.setSourceEntity(143U);
    msg.setDestination(30281U);
    msg.setDestinationEntity(54U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.091814746649);
    msg.setSource(38616U);
    msg.setSourceEntity(183U);
    msg.setDestination(25737U);
    msg.setDestinationEntity(205U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.723467321779);
    msg.setSource(11859U);
    msg.setSourceEntity(58U);
    msg.setDestination(49467U);
    msg.setDestinationEntity(73U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.410557940552);
    msg.setSource(30618U);
    msg.setSourceEntity(203U);
    msg.setDestination(47307U);
    msg.setDestinationEntity(240U);
    msg.list.assign("SMVXPURJLJARECQTFYTNTNIMHZKJVCOPMZLJUPLJTZSPAGXWDJGNDKQRMDIPRFAXOIFHJMQEJMGYPYG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.0565048184135);
    msg.setSource(8950U);
    msg.setSourceEntity(201U);
    msg.setDestination(56626U);
    msg.setDestinationEntity(155U);
    msg.list.assign("WSCOKRRLSNULNAWKBQJWYCQVSLNHXRCMMVXADXFVACSKLGBWYITCOHUYDMEKBLDGBDETBBNHTYZLIPKDKOSJVNIFEQFHWPOTRIXQTCTWOSHDIWUGMFAQXIMLAECXRJDJUOWLDNRFCYZTHZKONTBNZCVRERMMYPENYOJGIGWVOGUFAEXYVPR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.0639888940843);
    msg.setSource(56908U);
    msg.setSourceEntity(100U);
    msg.setDestination(2364U);
    msg.setDestinationEntity(116U);
    msg.list.assign("SUFYSVMIJYRUVEDGOPAWJKKSGLHQKPYDXKKOFBSEZQCEHGPHLOAHUQWPOJSPQZDTBYDNIPNZEMQUXIUVBXPPIGDCWKNCZACWRIIWK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.0334733666797);
    msg.setSource(63272U);
    msg.setSourceEntity(19U);
    msg.setDestination(52243U);
    msg.setDestinationEntity(59U);
    msg.peer.assign("BLGJJKMASVMETFNGFCUAOBHEDBEEPHXTAGTDTNMFYUHIRPSNP");
    msg.rssi = 0.60698349649;
    msg.integrity = 31046U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.485293365126);
    msg.setSource(19195U);
    msg.setSourceEntity(27U);
    msg.setDestination(10796U);
    msg.setDestinationEntity(112U);
    msg.peer.assign("WTATNFHQHQMUZGKYYOCTURUUXCRUJGWTDOQEDWUELJYWLTCPYBHTADCOHGZNXDNB");
    msg.rssi = 0.275754846959;
    msg.integrity = 40887U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.508013223346);
    msg.setSource(41355U);
    msg.setSourceEntity(58U);
    msg.setDestination(6171U);
    msg.setDestinationEntity(124U);
    msg.peer.assign("FPPQVMQKVKLBGEYQRGSZMVJ");
    msg.rssi = 0.0968686778739;
    msg.integrity = 57714U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.461516377037);
    msg.setSource(48813U);
    msg.setSourceEntity(175U);
    msg.setDestination(28758U);
    msg.setDestinationEntity(195U);
    msg.value = 28316;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.309487420306);
    msg.setSource(25763U);
    msg.setSourceEntity(149U);
    msg.setDestination(12377U);
    msg.setDestinationEntity(123U);
    msg.value = 3023;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.206508083891);
    msg.setSource(22511U);
    msg.setSourceEntity(55U);
    msg.setDestination(23307U);
    msg.setDestinationEntity(51U);
    msg.value = 12148;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.659364114389);
    msg.setSource(57369U);
    msg.setSourceEntity(153U);
    msg.setDestination(33122U);
    msg.setDestinationEntity(34U);
    msg.value = 0.573853310258;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.179229152861);
    msg.setSource(9112U);
    msg.setSourceEntity(248U);
    msg.setDestination(13178U);
    msg.setDestinationEntity(230U);
    msg.value = 0.686551041017;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.347407645674);
    msg.setSource(4474U);
    msg.setSourceEntity(208U);
    msg.setDestination(6439U);
    msg.setDestinationEntity(161U);
    msg.value = 0.361173196579;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.317570865695);
    msg.setSource(62293U);
    msg.setSourceEntity(221U);
    msg.setDestination(37757U);
    msg.setDestinationEntity(71U);
    msg.value = 0.648310017918;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.133841518944);
    msg.setSource(19209U);
    msg.setSourceEntity(127U);
    msg.setDestination(49226U);
    msg.setDestinationEntity(17U);
    msg.value = 0.346876075472;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.916720566153);
    msg.setSource(7668U);
    msg.setSourceEntity(118U);
    msg.setDestination(54575U);
    msg.setDestinationEntity(28U);
    msg.value = 0.570626833167;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.415062773826);
    msg.setSource(64766U);
    msg.setSourceEntity(129U);
    msg.setDestination(35198U);
    msg.setDestinationEntity(100U);
    msg.validity = 58463U;
    msg.type = 14U;
    msg.utc_year = 23181U;
    msg.utc_month = 21U;
    msg.utc_day = 60U;
    msg.utc_time = 0.685747461583;
    msg.lat = 0.0529719350965;
    msg.lon = 0.704624170279;
    msg.height = 0.39089223927;
    msg.satellites = 162U;
    msg.cog = 0.0768112557058;
    msg.sog = 0.60382516684;
    msg.hdop = 0.728145202751;
    msg.vdop = 0.45846628258;
    msg.hacc = 0.587729691878;
    msg.vacc = 0.485480235786;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.898975651157);
    msg.setSource(59196U);
    msg.setSourceEntity(136U);
    msg.setDestination(22554U);
    msg.setDestinationEntity(46U);
    msg.validity = 48170U;
    msg.type = 159U;
    msg.utc_year = 59829U;
    msg.utc_month = 86U;
    msg.utc_day = 220U;
    msg.utc_time = 0.208314717897;
    msg.lat = 0.579088760204;
    msg.lon = 0.0474911736971;
    msg.height = 0.240698777754;
    msg.satellites = 186U;
    msg.cog = 0.187824168687;
    msg.sog = 0.432086371297;
    msg.hdop = 0.938638156738;
    msg.vdop = 0.160760777097;
    msg.hacc = 0.314454254787;
    msg.vacc = 0.163984550284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.878300784387);
    msg.setSource(60044U);
    msg.setSourceEntity(200U);
    msg.setDestination(15394U);
    msg.setDestinationEntity(14U);
    msg.validity = 4336U;
    msg.type = 69U;
    msg.utc_year = 28494U;
    msg.utc_month = 198U;
    msg.utc_day = 158U;
    msg.utc_time = 0.326434881802;
    msg.lat = 0.526064271031;
    msg.lon = 0.295079867227;
    msg.height = 0.70136467453;
    msg.satellites = 137U;
    msg.cog = 0.491718918558;
    msg.sog = 0.321364557655;
    msg.hdop = 0.973185619077;
    msg.vdop = 0.0236038838053;
    msg.hacc = 0.844592476097;
    msg.vacc = 0.823548993311;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.989634427637);
    msg.setSource(54875U);
    msg.setSourceEntity(108U);
    msg.setDestination(30317U);
    msg.setDestinationEntity(105U);
    msg.time = 0.417010887704;
    msg.phi = 0.529256773997;
    msg.theta = 0.0834793513727;
    msg.psi = 0.682353569405;
    msg.psi_magnetic = 0.105127971048;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.389318547064);
    msg.setSource(9471U);
    msg.setSourceEntity(179U);
    msg.setDestination(29544U);
    msg.setDestinationEntity(210U);
    msg.time = 0.42126751904;
    msg.phi = 0.780366356959;
    msg.theta = 0.501664694385;
    msg.psi = 0.422979652372;
    msg.psi_magnetic = 0.327953214715;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.741059847605);
    msg.setSource(9775U);
    msg.setSourceEntity(223U);
    msg.setDestination(3272U);
    msg.setDestinationEntity(11U);
    msg.time = 0.477867626451;
    msg.phi = 0.179571913886;
    msg.theta = 0.39931557938;
    msg.psi = 0.749944631836;
    msg.psi_magnetic = 0.750934984264;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.66483602731);
    msg.setSource(30996U);
    msg.setSourceEntity(45U);
    msg.setDestination(4547U);
    msg.setDestinationEntity(213U);
    msg.time = 0.00820265832693;
    msg.x = 0.802355291792;
    msg.y = 0.614433776359;
    msg.z = 0.27951079727;
    msg.timestep = 0.843196934799;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.881710783376);
    msg.setSource(18179U);
    msg.setSourceEntity(193U);
    msg.setDestination(56243U);
    msg.setDestinationEntity(73U);
    msg.time = 0.558013852956;
    msg.x = 0.282490544652;
    msg.y = 0.721835944205;
    msg.z = 0.277877222391;
    msg.timestep = 0.486372555617;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.321326559259);
    msg.setSource(9382U);
    msg.setSourceEntity(43U);
    msg.setDestination(42471U);
    msg.setDestinationEntity(105U);
    msg.time = 0.506561168746;
    msg.x = 0.199308679389;
    msg.y = 0.371015161863;
    msg.z = 0.745454642759;
    msg.timestep = 0.671560875699;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.602710709394);
    msg.setSource(49328U);
    msg.setSourceEntity(250U);
    msg.setDestination(39670U);
    msg.setDestinationEntity(221U);
    msg.time = 0.136366704013;
    msg.x = 0.889256410999;
    msg.y = 0.161580850952;
    msg.z = 0.951872542168;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.0874615556102);
    msg.setSource(26897U);
    msg.setSourceEntity(130U);
    msg.setDestination(8806U);
    msg.setDestinationEntity(155U);
    msg.time = 0.770948043349;
    msg.x = 0.314989415928;
    msg.y = 0.252343909961;
    msg.z = 0.824450811849;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.426270513671);
    msg.setSource(49128U);
    msg.setSourceEntity(165U);
    msg.setDestination(27081U);
    msg.setDestinationEntity(62U);
    msg.time = 0.904574015837;
    msg.x = 0.862908104723;
    msg.y = 0.703288834765;
    msg.z = 0.743822448704;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.832099384527);
    msg.setSource(31161U);
    msg.setSourceEntity(209U);
    msg.setDestination(50535U);
    msg.setDestinationEntity(239U);
    msg.time = 0.97209029494;
    msg.x = 0.46291860239;
    msg.y = 0.00620988254888;
    msg.z = 0.366619141122;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.334978630383);
    msg.setSource(15557U);
    msg.setSourceEntity(180U);
    msg.setDestination(9095U);
    msg.setDestinationEntity(252U);
    msg.time = 0.769657689015;
    msg.x = 0.99731177033;
    msg.y = 0.726807108005;
    msg.z = 0.357173210775;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.697383183505);
    msg.setSource(49182U);
    msg.setSourceEntity(82U);
    msg.setDestination(39190U);
    msg.setDestinationEntity(33U);
    msg.time = 0.621057076215;
    msg.x = 0.360846402766;
    msg.y = 0.678200297018;
    msg.z = 0.745244987436;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.590990571801);
    msg.setSource(53637U);
    msg.setSourceEntity(167U);
    msg.setDestination(50723U);
    msg.setDestinationEntity(151U);
    msg.time = 0.779862185806;
    msg.x = 0.504515510512;
    msg.y = 0.91594589332;
    msg.z = 0.224420851415;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.52812084678);
    msg.setSource(19760U);
    msg.setSourceEntity(34U);
    msg.setDestination(39154U);
    msg.setDestinationEntity(126U);
    msg.time = 0.333079852523;
    msg.x = 0.0233281772284;
    msg.y = 0.2239378173;
    msg.z = 0.0280388805895;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.67303904974);
    msg.setSource(13765U);
    msg.setSourceEntity(217U);
    msg.setDestination(5586U);
    msg.setDestinationEntity(236U);
    msg.time = 0.584555919334;
    msg.x = 0.88205304965;
    msg.y = 0.475060260074;
    msg.z = 0.083365253157;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.989829474196);
    msg.setSource(56425U);
    msg.setSourceEntity(106U);
    msg.setDestination(61316U);
    msg.setDestinationEntity(48U);
    msg.validity = 111U;
    msg.x = 0.780864556245;
    msg.y = 0.198865227085;
    msg.z = 0.901791703849;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.832933216496);
    msg.setSource(42729U);
    msg.setSourceEntity(77U);
    msg.setDestination(46115U);
    msg.setDestinationEntity(75U);
    msg.validity = 192U;
    msg.x = 0.472333943988;
    msg.y = 0.449635539861;
    msg.z = 0.748487552056;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.0301582480574);
    msg.setSource(54688U);
    msg.setSourceEntity(239U);
    msg.setDestination(26381U);
    msg.setDestinationEntity(249U);
    msg.validity = 92U;
    msg.x = 0.916290027364;
    msg.y = 0.847747836314;
    msg.z = 0.823992677452;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.913613355514);
    msg.setSource(25174U);
    msg.setSourceEntity(201U);
    msg.setDestination(19320U);
    msg.setDestinationEntity(175U);
    msg.validity = 98U;
    msg.x = 0.489953748458;
    msg.y = 0.554676945893;
    msg.z = 0.840817842683;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.272263661136);
    msg.setSource(35560U);
    msg.setSourceEntity(169U);
    msg.setDestination(54270U);
    msg.setDestinationEntity(203U);
    msg.validity = 243U;
    msg.x = 0.624427271975;
    msg.y = 0.662614833655;
    msg.z = 0.780928154235;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.879920919604);
    msg.setSource(51382U);
    msg.setSourceEntity(188U);
    msg.setDestination(22286U);
    msg.setDestinationEntity(175U);
    msg.validity = 142U;
    msg.x = 0.907216529818;
    msg.y = 0.64491172993;
    msg.z = 0.360757263266;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.196906644955);
    msg.setSource(56887U);
    msg.setSourceEntity(136U);
    msg.setDestination(39609U);
    msg.setDestinationEntity(182U);
    msg.time = 0.766930668828;
    msg.x = 0.365273701858;
    msg.y = 0.00526294923219;
    msg.z = 0.586799959363;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.729487999279);
    msg.setSource(27300U);
    msg.setSourceEntity(159U);
    msg.setDestination(25334U);
    msg.setDestinationEntity(159U);
    msg.time = 0.128682704948;
    msg.x = 0.100315216531;
    msg.y = 0.146146293728;
    msg.z = 0.285145002677;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.342948984188);
    msg.setSource(54266U);
    msg.setSourceEntity(6U);
    msg.setDestination(17990U);
    msg.setDestinationEntity(201U);
    msg.time = 0.0642788001651;
    msg.x = 0.348879840677;
    msg.y = 0.799610130464;
    msg.z = 0.390504914632;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.749588780625);
    msg.setSource(33723U);
    msg.setSourceEntity(157U);
    msg.setDestination(51854U);
    msg.setDestinationEntity(225U);
    msg.validity = 158U;
    msg.value = 0.0865886881741;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.770399846527);
    msg.setSource(35952U);
    msg.setSourceEntity(77U);
    msg.setDestination(48252U);
    msg.setDestinationEntity(206U);
    msg.validity = 184U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.316418432548;
    tmp_msg_0.beam_height = 0.963975678415;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.245925728209;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.299559635752);
    msg.setSource(3447U);
    msg.setSourceEntity(6U);
    msg.setDestination(22075U);
    msg.setDestinationEntity(79U);
    msg.validity = 196U;
    msg.value = 0.352600674702;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.87616416064);
    msg.setSource(39088U);
    msg.setSourceEntity(11U);
    msg.setDestination(56109U);
    msg.setDestinationEntity(18U);
    msg.value = 0.15715068828;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.394530266236);
    msg.setSource(3299U);
    msg.setSourceEntity(75U);
    msg.setDestination(37139U);
    msg.setDestinationEntity(49U);
    msg.value = 0.0919722933026;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.45204103325);
    msg.setSource(32982U);
    msg.setSourceEntity(187U);
    msg.setDestination(57413U);
    msg.setDestinationEntity(126U);
    msg.value = 0.866084079767;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.971230829025);
    msg.setSource(1916U);
    msg.setSourceEntity(188U);
    msg.setDestination(41729U);
    msg.setDestinationEntity(98U);
    msg.value = 0.117250317887;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.068884179246);
    msg.setSource(12878U);
    msg.setSourceEntity(118U);
    msg.setDestination(18564U);
    msg.setDestinationEntity(140U);
    msg.value = 0.979469739607;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.442438957181);
    msg.setSource(10105U);
    msg.setSourceEntity(125U);
    msg.setDestination(49419U);
    msg.setDestinationEntity(149U);
    msg.value = 0.810231946986;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.878554763115);
    msg.setSource(39003U);
    msg.setSourceEntity(100U);
    msg.setDestination(63532U);
    msg.setDestinationEntity(63U);
    msg.value = 0.0754674039966;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.801228637937);
    msg.setSource(10422U);
    msg.setSourceEntity(220U);
    msg.setDestination(56209U);
    msg.setDestinationEntity(125U);
    msg.value = 0.617943332665;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.17589939461);
    msg.setSource(61525U);
    msg.setSourceEntity(112U);
    msg.setDestination(10069U);
    msg.setDestinationEntity(93U);
    msg.value = 0.0243018293738;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.660206623501);
    msg.setSource(31207U);
    msg.setSourceEntity(127U);
    msg.setDestination(25357U);
    msg.setDestinationEntity(102U);
    msg.value = 0.698121845964;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.752109791459);
    msg.setSource(37149U);
    msg.setSourceEntity(152U);
    msg.setDestination(6561U);
    msg.setDestinationEntity(184U);
    msg.value = 0.540057689525;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.224158630573);
    msg.setSource(37102U);
    msg.setSourceEntity(197U);
    msg.setDestination(10258U);
    msg.setDestinationEntity(113U);
    msg.value = 0.734951781233;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.516348454468);
    msg.setSource(40391U);
    msg.setSourceEntity(53U);
    msg.setDestination(6879U);
    msg.setDestinationEntity(43U);
    msg.value = 0.769136251877;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.439945691457);
    msg.setSource(13596U);
    msg.setSourceEntity(76U);
    msg.setDestination(4015U);
    msg.setDestinationEntity(43U);
    msg.value = 0.509736459408;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.793227566792);
    msg.setSource(63443U);
    msg.setSourceEntity(147U);
    msg.setDestination(54697U);
    msg.setDestinationEntity(220U);
    msg.value = 0.897422460377;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.700996009057);
    msg.setSource(50062U);
    msg.setSourceEntity(147U);
    msg.setDestination(31457U);
    msg.setDestinationEntity(254U);
    msg.value = 0.728754701893;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.707747519352);
    msg.setSource(10525U);
    msg.setSourceEntity(138U);
    msg.setDestination(56360U);
    msg.setDestinationEntity(195U);
    msg.value = 0.24764085303;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.0299164146825);
    msg.setSource(31947U);
    msg.setSourceEntity(199U);
    msg.setDestination(17117U);
    msg.setDestinationEntity(174U);
    msg.value = 0.190529298574;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.0253185676239);
    msg.setSource(44248U);
    msg.setSourceEntity(103U);
    msg.setDestination(6005U);
    msg.setDestinationEntity(231U);
    msg.value = 0.276122471162;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.885329652484);
    msg.setSource(59026U);
    msg.setSourceEntity(42U);
    msg.setDestination(1180U);
    msg.setDestinationEntity(239U);
    msg.value = 0.437127852197;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.11575117587);
    msg.setSource(7736U);
    msg.setSourceEntity(55U);
    msg.setDestination(17099U);
    msg.setDestinationEntity(48U);
    msg.value = 0.151414095248;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.315649705097);
    msg.setSource(23136U);
    msg.setSourceEntity(231U);
    msg.setDestination(50162U);
    msg.setDestinationEntity(158U);
    msg.value = 0.194982511123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.378072739198);
    msg.setSource(10093U);
    msg.setSourceEntity(22U);
    msg.setDestination(41421U);
    msg.setDestinationEntity(220U);
    msg.value = 0.977244121987;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.383967177593);
    msg.setSource(1239U);
    msg.setSourceEntity(89U);
    msg.setDestination(17745U);
    msg.setDestinationEntity(250U);
    msg.value = 0.0996493040426;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.0155075504867);
    msg.setSource(25976U);
    msg.setSourceEntity(84U);
    msg.setDestination(17216U);
    msg.setDestinationEntity(178U);
    msg.direction = 0.0633248815717;
    msg.speed = 0.364838930269;
    msg.turbulence = 0.902844698898;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.491325914507);
    msg.setSource(17566U);
    msg.setSourceEntity(154U);
    msg.setDestination(64601U);
    msg.setDestinationEntity(213U);
    msg.direction = 0.678720845013;
    msg.speed = 0.712308240358;
    msg.turbulence = 0.286850307944;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.790646583881);
    msg.setSource(56498U);
    msg.setSourceEntity(63U);
    msg.setDestination(8269U);
    msg.setDestinationEntity(163U);
    msg.direction = 0.787653500838;
    msg.speed = 0.736774502704;
    msg.turbulence = 0.852695198667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.638473591707);
    msg.setSource(62033U);
    msg.setSourceEntity(85U);
    msg.setDestination(4021U);
    msg.setDestinationEntity(145U);
    msg.value = 0.737986511174;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.12586125094);
    msg.setSource(13450U);
    msg.setSourceEntity(169U);
    msg.setDestination(7080U);
    msg.setDestinationEntity(217U);
    msg.value = 0.0462895681758;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.183365074495);
    msg.setSource(120U);
    msg.setSourceEntity(164U);
    msg.setDestination(39342U);
    msg.setDestinationEntity(88U);
    msg.value = 0.400957258558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.332671894056);
    msg.setSource(38278U);
    msg.setSourceEntity(76U);
    msg.setDestination(15361U);
    msg.setDestinationEntity(57U);
    msg.value.assign("BILFCHJWLFOSVXPTUDWIMIGAQFDMBYPUUKPEFSJPXQLYZOIMZVNKEZAYVTXFCPYRDQQCGJDRREDTWKPMKNFZTEVTCLSFEKYNBEABIXPCABZXJOIKRZUOGXTZWIJRFSNGSKUMCNOHKWTORQWFNBWSPVNVUXBUILAMRORIMAOCWREQJKHHFWQCDAGLNQLAXBSPBEOTLNYQGVSUOLHYZYJMEVCDHWIVATGKVTJJGHQUNBZRHGEJHDSAYCLSDX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.0825075018847);
    msg.setSource(43969U);
    msg.setSourceEntity(222U);
    msg.setDestination(60271U);
    msg.setDestinationEntity(1U);
    msg.value.assign("GUIEVBCNRQDPFWUQINKKPNYRNTAWYZEGNUBHCWSYXHMLVZLAMCZYDXICKAWWEQVRCJJMAGLSSVMNFGQQKIPHTZCEIUUTUVXKYVJTMYXORHMSBSFTHRYODYXJEMJEFDKOQZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.735362874209);
    msg.setSource(19945U);
    msg.setSourceEntity(96U);
    msg.setDestination(15562U);
    msg.setDestinationEntity(156U);
    msg.value.assign("DARVVJLTUBZORPIRDBMBRLCHIRNEKXMWFWRJHBNILYYCRNBIPFPCWLUMIUXQOETJSBUXQKYZYGZELAZYFAHTRHOHEGNPYRGQOJNECDXPGDKNLPJOAWDTOESZGWMEBMOMFBTYSXSSSWKXNWXCFEIFJJDAOGCFLANVGPWFZTQYQULIGWGNMTUKEICJSRITHVQZAXTBQKSVCQNKISMFZAHOQHGLPCLWKVOFVKMHAEYPBVXDDUCM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.827773560654);
    msg.setSource(2034U);
    msg.setSourceEntity(60U);
    msg.setDestination(43940U);
    msg.setDestinationEntity(65U);
    const char tmp_msg_0[] = {-123, -26, 10, -96, -39, -83, -5, -75, 53, 76, -61, 6, -21, -60, -68, -45, 44, 37, 32, -44, 57, 72, -88, -14, 80, 120, 61, 91, 123, 60, -109, -90, -63, 116, 100, 8, 79, 84, 21, -13, -15, -29, -14, 107, -124, 5, -103, 32};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.56185680999);
    msg.setSource(36706U);
    msg.setSourceEntity(15U);
    msg.setDestination(54089U);
    msg.setDestinationEntity(190U);
    const char tmp_msg_0[] = {-3, 118, 120, -7, -76, -119, -3, -18, 27, 35, 39, 78, -56, -68, -31, 93, 70, -97, 38, -3, -28, 53, -27, 97, -69, 118, 123, 44, -108, 99, 111, 69, -98, -71, -74, -57, -67, 63, -102, 70, -42, 116, 86, 62, -70, 101, 41, 56, 106, 9, -90, -82, -34, -95, -90, -76, -11, 87, -64, -25, 112, 10, -62, -71, 37, 88, -3, 44, -25, -117};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.30770625932);
    msg.setSource(40595U);
    msg.setSourceEntity(72U);
    msg.setDestination(14370U);
    msg.setDestinationEntity(175U);
    const char tmp_msg_0[] = {-21, 83, 49, 53, -76, -116, 82, 99, -24, 107, -65, 123, -67, 98, -115, 15, 90, -31, 43, -47, 48, 63, -42, 25, 117, -124, 125, -121, 125, 20, -22, -66, 101, 37, 22, -65, 49, 85, -68, 61, 66, -47, -29, -10, 60, -25, 83, 70, 46, -19, -20, -95, 103, 63, -123, -99};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.573911832917);
    msg.setSource(6362U);
    msg.setSourceEntity(154U);
    msg.setDestination(27814U);
    msg.setDestinationEntity(160U);
    msg.type = 89U;
    msg.frequency = 1916223412U;
    msg.min_range = 5492U;
    msg.max_range = 17438U;
    msg.bits_per_point = 221U;
    msg.scale_factor = 0.326498479622;
    const char tmp_msg_0[] = {63, 91, 63, 67, -83, -52, -39, -12, -5, -54, -82, 28, -114, 74, 7, 20, -57, -94, -20, -125, -36, 83, 82, 72, -27, 2, 35, 100, 104, -62, 36, -77, -16, -7, -18, -81, 87, 36, 72, -95, -60, 23, -13, -75, -112, -65, -79, 32, 46, -23, -53, 109, -75, 9, -39, 45, 19, -90, 79, -19, -108, 98, -98, 19, 44, -38, 109, 46, -111, 65, 23, -7, -17, -127, -106, 102, -122, 123, -67, -64, 40, -52, -95, -42, 20, -24, -15, -71, -105, 43, 88, -97, -59, 28, 55, -39, 53, 34, 102, -112, -46, -67, -90, 41, -1, -12, 70, -53, 78, 20, -47, -12, 93, -36, -121, -80, -72, 79, 33, 29, 55, -123, 72, 99, 5, -21, -70, -9, 118, 88, 117, -67, 6, 102, 122, -124, 88, -12, -56, 102, 14, 65, 62, -126, 6, 84, -31, 109, 14, -21, 43, 62, 97, -100, 82, 17, 110, 52, 22, 98, 57, -128, 69, -63};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.350689387086);
    msg.setSource(38841U);
    msg.setSourceEntity(96U);
    msg.setDestination(25599U);
    msg.setDestinationEntity(24U);
    msg.type = 188U;
    msg.frequency = 604906156U;
    msg.min_range = 6064U;
    msg.max_range = 43380U;
    msg.bits_per_point = 92U;
    msg.scale_factor = 0.845575856112;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.172481935002;
    tmp_msg_0.beam_height = 0.0337185524955;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-59, -27, -9, 45, -88, -120, 114, -20, 76, 105, 122, -23, -79, -64, 30, -113, 104, -8, -34, -76, -103, -123, -75, -14, 34, -2, 73, -13, 31, 58, -95, 91, -12, -66, 40, 54, 43, -120, -27, -42, -35, 91, -48, 9, -76, 125, -122, 120, 107, -58, 74, 93, -6, 70, 33, 89, -89, -18, -10, -32, 94, 69, 119, -46, 48};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.0377566963495);
    msg.setSource(49556U);
    msg.setSourceEntity(227U);
    msg.setDestination(64653U);
    msg.setDestinationEntity(153U);
    msg.type = 15U;
    msg.frequency = 533613025U;
    msg.min_range = 63466U;
    msg.max_range = 18683U;
    msg.bits_per_point = 169U;
    msg.scale_factor = 0.683016171772;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.470253774798;
    tmp_msg_0.beam_height = 0.368261871786;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-35, -114, 15, -96, 68, -68, -21, -56, 123, 19, -84, -105, -107, 123, -77, -44, 7, -38, -45, -52, -28, -104, 42, 43, 21, 78, -85, 81, 124, 24, 98, -64, -39, -126, -92, 51, 53, -65, -52, 76, -22, -94, -34, -121, -124, -7, 113, 94, 66, -23, 68, -58, -52, 117, 78, -85, 6, 11, -8, 10, 63, -43, -39, -116, 76, -116, 121, 40, 39, -20, -111, 46, 35, 111, 31, -65, -91, 93, -19, 41, 117, 54, -6, 4, 117, 21, 31, 79, 64, 65, 17, -113, -61, 46, -126, 44, 15, -114, -40, -65, 41, -67, 63, -36, -96, -116, -27, -91, 110, -25, -63, 60, 91, 78, -127, 109, -91, -126, -128, 107, 64, 46, 22, 30, 112, -87, 73, 43, -55, 108, 73, -57, -83, 56, -112, 3, 65, 0, 103, -128, -122, -79, 101, -3, -65, 123, -36, 80, 74, -80, -60, -37, 42, 15, 98, 22, -110, 36, -25, 116, -39, -60, 62, -60, -118, 119, -25, -16, -124, -3, -33, 29, -27, 93, 58, 120, -30, 94, -38};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.679201686747);
    msg.setSource(43642U);
    msg.setSourceEntity(97U);
    msg.setDestination(10761U);
    msg.setDestinationEntity(104U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.942351683176);
    msg.setSource(14511U);
    msg.setSourceEntity(187U);
    msg.setDestination(27473U);
    msg.setDestinationEntity(55U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.914230730468);
    msg.setSource(6008U);
    msg.setSourceEntity(48U);
    msg.setDestination(21741U);
    msg.setDestinationEntity(88U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.831768689962);
    msg.setSource(55675U);
    msg.setSourceEntity(48U);
    msg.setDestination(52634U);
    msg.setDestinationEntity(217U);
    msg.op = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.551722047346);
    msg.setSource(541U);
    msg.setSourceEntity(61U);
    msg.setDestination(4986U);
    msg.setDestinationEntity(206U);
    msg.op = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.883380000249);
    msg.setSource(3539U);
    msg.setSourceEntity(193U);
    msg.setDestination(6428U);
    msg.setDestinationEntity(91U);
    msg.op = 245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.28003576053);
    msg.setSource(22411U);
    msg.setSourceEntity(241U);
    msg.setDestination(16610U);
    msg.setDestinationEntity(229U);
    msg.value = 0.193364930905;
    msg.confidence = 0.693167126974;
    msg.opmodes.assign("OCEJSJHMIXVUTGLPMGWYQNQHBEYBSXPMXUAWIEEZSQKUCLVJQHFNNZGFYYOZNKCALQWGMLKCWIQUVSICODDXSLHEYUDWTMZLHVMMJAYKFTDGRJPBDBISOHLDBRQQTATIVSAQUIRHMRMKIR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.861595210101);
    msg.setSource(35381U);
    msg.setSourceEntity(80U);
    msg.setDestination(40851U);
    msg.setDestinationEntity(143U);
    msg.value = 0.776933628707;
    msg.confidence = 0.133009988103;
    msg.opmodes.assign("VPRZTTBEFLUHFWBCFVVZGHNJOTVSIWAATKLXHBTAVUXIDYIJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.886891189695);
    msg.setSource(59392U);
    msg.setSourceEntity(9U);
    msg.setDestination(30926U);
    msg.setDestinationEntity(187U);
    msg.value = 0.973710868322;
    msg.confidence = 0.867475782572;
    msg.opmodes.assign("VCJSERPJHXGIQFUFNQUOQJJVRSNHIGWYXAQYGLODBVMTKUIUTSGSIZBIPQKDOGEDVPBKGHLXDKBNWTQJFUPAWJLZWFREUMFDIFKMCSXZEMTPDLEKRMTZYXIEFOQFCLPPBFCDSOGKPBQMJRUHNYWSVLTMORVRNPJWXIOTHACDEMHWGYIJRVBSKPLAZVESGDCGAIAOUMLNAZYZVUOCCZWCXVHYRCYETSUDAKYZQANX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.37102963258);
    msg.setSource(5089U);
    msg.setSourceEntity(100U);
    msg.setDestination(17171U);
    msg.setDestinationEntity(162U);
    msg.itow = 1626731373U;
    msg.lat = 0.638427693574;
    msg.lon = 0.727746928112;
    msg.height_ell = 0.690931640431;
    msg.height_sea = 0.552306209075;
    msg.hacc = 0.246339097034;
    msg.vacc = 0.66012218235;
    msg.vel_n = 0.426999765802;
    msg.vel_e = 0.341304509897;
    msg.vel_d = 0.376142545666;
    msg.speed = 0.701030626074;
    msg.gspeed = 0.730242130586;
    msg.heading = 0.754612474262;
    msg.sacc = 0.583288193474;
    msg.cacc = 0.356088173214;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.772170817217);
    msg.setSource(34911U);
    msg.setSourceEntity(174U);
    msg.setDestination(53322U);
    msg.setDestinationEntity(74U);
    msg.itow = 1173097621U;
    msg.lat = 0.841008578721;
    msg.lon = 0.337786060036;
    msg.height_ell = 0.719815086828;
    msg.height_sea = 0.134872358136;
    msg.hacc = 0.640793927946;
    msg.vacc = 0.0470250592217;
    msg.vel_n = 0.662762726461;
    msg.vel_e = 0.0949626684146;
    msg.vel_d = 0.0530222229326;
    msg.speed = 0.796211317448;
    msg.gspeed = 0.168011498146;
    msg.heading = 0.650578734539;
    msg.sacc = 0.0261542449082;
    msg.cacc = 0.691797829555;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.0217902895365);
    msg.setSource(39373U);
    msg.setSourceEntity(249U);
    msg.setDestination(4513U);
    msg.setDestinationEntity(160U);
    msg.itow = 2641740067U;
    msg.lat = 0.314653582988;
    msg.lon = 0.97679088284;
    msg.height_ell = 0.409632495834;
    msg.height_sea = 0.961297152103;
    msg.hacc = 0.680984732934;
    msg.vacc = 0.408746970823;
    msg.vel_n = 0.576632681213;
    msg.vel_e = 0.803768387486;
    msg.vel_d = 0.169363419359;
    msg.speed = 0.834453477142;
    msg.gspeed = 0.644677573303;
    msg.heading = 0.686731975873;
    msg.sacc = 0.0027852566288;
    msg.cacc = 0.847898678557;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.00116652062585);
    msg.setSource(388U);
    msg.setSourceEntity(17U);
    msg.setDestination(42647U);
    msg.setDestinationEntity(191U);
    msg.id = 203U;
    msg.value = 0.688336183671;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.14103497429);
    msg.setSource(18995U);
    msg.setSourceEntity(181U);
    msg.setDestination(630U);
    msg.setDestinationEntity(115U);
    msg.id = 8U;
    msg.value = 0.367344329493;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.5113565619);
    msg.setSource(6164U);
    msg.setSourceEntity(156U);
    msg.setDestination(61694U);
    msg.setDestinationEntity(75U);
    msg.id = 202U;
    msg.value = 0.609781375812;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.51898857182);
    msg.setSource(58717U);
    msg.setSourceEntity(237U);
    msg.setDestination(19529U);
    msg.setDestinationEntity(96U);
    msg.x = 0.497944733066;
    msg.y = 0.124485843124;
    msg.z = 0.131386502142;
    msg.phi = 0.405770591006;
    msg.theta = 0.376813114365;
    msg.psi = 0.490739761598;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.747447292453);
    msg.setSource(12404U);
    msg.setSourceEntity(28U);
    msg.setDestination(62269U);
    msg.setDestinationEntity(198U);
    msg.x = 0.1002038116;
    msg.y = 0.206821218033;
    msg.z = 0.907852571536;
    msg.phi = 0.0828766852554;
    msg.theta = 0.382309861779;
    msg.psi = 0.423857923504;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.835211836588);
    msg.setSource(55433U);
    msg.setSourceEntity(95U);
    msg.setDestination(36388U);
    msg.setDestinationEntity(98U);
    msg.x = 0.617607204122;
    msg.y = 0.975946186191;
    msg.z = 0.479869201217;
    msg.phi = 0.100193597516;
    msg.theta = 0.482067457578;
    msg.psi = 0.901544887689;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.819157354719);
    msg.setSource(12626U);
    msg.setSourceEntity(233U);
    msg.setDestination(4152U);
    msg.setDestinationEntity(48U);
    msg.beam_width = 0.346112465421;
    msg.beam_height = 0.792508761108;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.320493266541);
    msg.setSource(57574U);
    msg.setSourceEntity(29U);
    msg.setDestination(50290U);
    msg.setDestinationEntity(136U);
    msg.beam_width = 0.929390915847;
    msg.beam_height = 0.99112383996;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.614639517238);
    msg.setSource(17332U);
    msg.setSourceEntity(168U);
    msg.setDestination(21949U);
    msg.setDestinationEntity(2U);
    msg.beam_width = 0.422058037055;
    msg.beam_height = 0.595020069147;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.130372256711);
    msg.setSource(398U);
    msg.setSourceEntity(96U);
    msg.setDestination(39069U);
    msg.setDestinationEntity(27U);
    msg.sane = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.408728640662);
    msg.setSource(38956U);
    msg.setSourceEntity(20U);
    msg.setDestination(31840U);
    msg.setDestinationEntity(46U);
    msg.sane = 115U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.43384963959);
    msg.setSource(20395U);
    msg.setSourceEntity(130U);
    msg.setDestination(41432U);
    msg.setDestinationEntity(57U);
    msg.sane = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.273799932515);
    msg.setSource(36643U);
    msg.setSourceEntity(86U);
    msg.setDestination(45931U);
    msg.setDestinationEntity(5U);
    msg.value = 0.734954606914;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.194285382874);
    msg.setSource(30643U);
    msg.setSourceEntity(154U);
    msg.setDestination(25045U);
    msg.setDestinationEntity(181U);
    msg.value = 0.223990589354;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.543052576425);
    msg.setSource(46243U);
    msg.setSourceEntity(14U);
    msg.setDestination(32028U);
    msg.setDestinationEntity(215U);
    msg.value = 0.753024319465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.0498523672096);
    msg.setSource(52238U);
    msg.setSourceEntity(34U);
    msg.setDestination(60720U);
    msg.setDestinationEntity(37U);
    msg.value = 0.563686876085;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.638285083722);
    msg.setSource(49162U);
    msg.setSourceEntity(113U);
    msg.setDestination(45263U);
    msg.setDestinationEntity(206U);
    msg.value = 0.582513226929;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.203435890867);
    msg.setSource(7642U);
    msg.setSourceEntity(57U);
    msg.setDestination(27302U);
    msg.setDestinationEntity(40U);
    msg.value = 0.235549217915;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.818118553957);
    msg.setSource(28324U);
    msg.setSourceEntity(140U);
    msg.setDestination(1714U);
    msg.setDestinationEntity(205U);
    msg.value = 0.536546868866;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.0586743931317);
    msg.setSource(56354U);
    msg.setSourceEntity(130U);
    msg.setDestination(61008U);
    msg.setDestinationEntity(73U);
    msg.value = 0.886568492698;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.541705068651);
    msg.setSource(36339U);
    msg.setSourceEntity(99U);
    msg.setDestination(64654U);
    msg.setDestinationEntity(236U);
    msg.value = 0.357550319265;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.462305472792);
    msg.setSource(55152U);
    msg.setSourceEntity(152U);
    msg.setDestination(4265U);
    msg.setDestinationEntity(127U);
    msg.value = 0.168338397566;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.379150337016);
    msg.setSource(43729U);
    msg.setSourceEntity(58U);
    msg.setDestination(55954U);
    msg.setDestinationEntity(64U);
    msg.value = 0.322012063136;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.316445377233);
    msg.setSource(40465U);
    msg.setSourceEntity(90U);
    msg.setDestination(52450U);
    msg.setDestinationEntity(62U);
    msg.value = 0.0138049252935;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.0353680583684);
    msg.setSource(35041U);
    msg.setSourceEntity(50U);
    msg.setDestination(58035U);
    msg.setDestinationEntity(126U);
    msg.value = 0.46942301773;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.963239252781);
    msg.setSource(12621U);
    msg.setSourceEntity(166U);
    msg.setDestination(6218U);
    msg.setDestinationEntity(69U);
    msg.value = 0.043477383077;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.795786016527);
    msg.setSource(26083U);
    msg.setSourceEntity(199U);
    msg.setDestination(8342U);
    msg.setDestinationEntity(225U);
    msg.value = 0.416796744347;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.674880297924);
    msg.setSource(45881U);
    msg.setSourceEntity(190U);
    msg.setDestination(37417U);
    msg.setDestinationEntity(186U);
    msg.value = 0.806158913313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.890556409623);
    msg.setSource(60359U);
    msg.setSourceEntity(141U);
    msg.setDestination(39540U);
    msg.setDestinationEntity(62U);
    msg.value = 0.740176946532;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.518528713024);
    msg.setSource(3897U);
    msg.setSourceEntity(142U);
    msg.setDestination(41117U);
    msg.setDestinationEntity(203U);
    msg.value = 0.676538439362;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.145699100507);
    msg.setSource(52263U);
    msg.setSourceEntity(136U);
    msg.setDestination(60451U);
    msg.setDestinationEntity(115U);
    msg.value = 0.455576869456;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.300922673087);
    msg.setSource(2009U);
    msg.setSourceEntity(94U);
    msg.setDestination(3372U);
    msg.setDestinationEntity(0U);
    msg.value = 0.613199896946;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.303676991405);
    msg.setSource(35372U);
    msg.setSourceEntity(195U);
    msg.setDestination(56351U);
    msg.setDestinationEntity(254U);
    msg.value = 0.621579328263;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.397913505632);
    msg.setSource(14664U);
    msg.setSourceEntity(196U);
    msg.setDestination(34968U);
    msg.setDestinationEntity(98U);
    msg.value = 0.286770237447;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.361690797683);
    msg.setSource(57612U);
    msg.setSourceEntity(119U);
    msg.setDestination(24441U);
    msg.setDestinationEntity(159U);
    msg.value = 0.148018704644;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.728577543435);
    msg.setSource(15144U);
    msg.setSourceEntity(218U);
    msg.setDestination(24999U);
    msg.setDestinationEntity(46U);
    msg.value = 0.282319644232;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.301590196477);
    msg.setSource(43235U);
    msg.setSourceEntity(45U);
    msg.setDestination(31040U);
    msg.setDestinationEntity(18U);
    msg.validity = 47118U;
    msg.type = 225U;
    msg.tow = 256320893U;
    msg.base_lat = 0.0840171713429;
    msg.base_lon = 0.53218129171;
    msg.base_height = 0.798847516236;
    msg.n = 0.49421325689;
    msg.e = 0.0709859274079;
    msg.d = 0.806910182066;
    msg.v_n = 0.397807313194;
    msg.v_e = 0.44373046525;
    msg.v_d = 0.337576031389;
    msg.satellites = 244U;
    msg.iar_hyp = 38826U;
    msg.iar_ratio = 0.60174911698;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.924220065629);
    msg.setSource(50297U);
    msg.setSourceEntity(95U);
    msg.setDestination(56520U);
    msg.setDestinationEntity(33U);
    msg.validity = 56788U;
    msg.type = 161U;
    msg.tow = 2360638179U;
    msg.base_lat = 0.698641860972;
    msg.base_lon = 0.44077123913;
    msg.base_height = 0.234940902866;
    msg.n = 0.239931912874;
    msg.e = 0.784847544636;
    msg.d = 0.469919622231;
    msg.v_n = 0.752718631985;
    msg.v_e = 0.255251739358;
    msg.v_d = 0.44453941025;
    msg.satellites = 165U;
    msg.iar_hyp = 46487U;
    msg.iar_ratio = 0.316235139565;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.337065234544);
    msg.setSource(2792U);
    msg.setSourceEntity(83U);
    msg.setDestination(28245U);
    msg.setDestinationEntity(193U);
    msg.validity = 25256U;
    msg.type = 78U;
    msg.tow = 1420110445U;
    msg.base_lat = 0.799835725867;
    msg.base_lon = 0.100680077963;
    msg.base_height = 0.181867717863;
    msg.n = 0.707904776497;
    msg.e = 0.410196776197;
    msg.d = 0.359663658418;
    msg.v_n = 0.662258103561;
    msg.v_e = 0.330110809222;
    msg.v_d = 0.756711978997;
    msg.satellites = 156U;
    msg.iar_hyp = 54219U;
    msg.iar_ratio = 0.425752652033;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.892271291863);
    msg.setSource(38075U);
    msg.setSourceEntity(121U);
    msg.setDestination(60459U);
    msg.setDestinationEntity(30U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.49475872787;
    tmp_msg_0.lon = 0.442606158937;
    tmp_msg_0.height = 0.557888701828;
    tmp_msg_0.x = 0.314435012513;
    tmp_msg_0.y = 0.639407151137;
    tmp_msg_0.z = 0.622415004936;
    tmp_msg_0.phi = 0.589781676149;
    tmp_msg_0.theta = 0.550150892298;
    tmp_msg_0.psi = 0.546996850909;
    tmp_msg_0.u = 0.343561390095;
    tmp_msg_0.v = 0.921074013305;
    tmp_msg_0.w = 0.546484802776;
    tmp_msg_0.vx = 0.588192423002;
    tmp_msg_0.vy = 0.221316021031;
    tmp_msg_0.vz = 0.382339171619;
    tmp_msg_0.p = 0.733971285244;
    tmp_msg_0.q = 0.58324253025;
    tmp_msg_0.r = 0.00555456808102;
    tmp_msg_0.depth = 0.491035715634;
    tmp_msg_0.alt = 0.235004287223;
    msg.state.set(tmp_msg_0);
    msg.type = 168U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.454219246869);
    msg.setSource(32751U);
    msg.setSourceEntity(31U);
    msg.setDestination(7897U);
    msg.setDestinationEntity(139U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.876586914819;
    tmp_msg_0.lon = 0.355414582724;
    tmp_msg_0.height = 0.982995006661;
    tmp_msg_0.x = 0.634065134588;
    tmp_msg_0.y = 0.0597461881377;
    tmp_msg_0.z = 0.663318474626;
    tmp_msg_0.phi = 0.449703593493;
    tmp_msg_0.theta = 0.273435944611;
    tmp_msg_0.psi = 0.726207039709;
    tmp_msg_0.u = 0.883558723692;
    tmp_msg_0.v = 0.858053544114;
    tmp_msg_0.w = 0.407781621869;
    tmp_msg_0.vx = 0.610368802677;
    tmp_msg_0.vy = 0.12368753932;
    tmp_msg_0.vz = 0.156801440854;
    tmp_msg_0.p = 0.803950464834;
    tmp_msg_0.q = 0.506709399842;
    tmp_msg_0.r = 0.486847914937;
    tmp_msg_0.depth = 0.992472021531;
    tmp_msg_0.alt = 0.744881017662;
    msg.state.set(tmp_msg_0);
    msg.type = 172U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.819988102957);
    msg.setSource(23586U);
    msg.setSourceEntity(91U);
    msg.setDestination(12389U);
    msg.setDestinationEntity(123U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.20705768219;
    tmp_msg_0.lon = 0.813436341759;
    tmp_msg_0.height = 0.787143056666;
    tmp_msg_0.x = 0.343848843905;
    tmp_msg_0.y = 0.987597704411;
    tmp_msg_0.z = 0.469062794316;
    tmp_msg_0.phi = 0.580668511432;
    tmp_msg_0.theta = 0.091676876682;
    tmp_msg_0.psi = 0.379507101727;
    tmp_msg_0.u = 0.975465316439;
    tmp_msg_0.v = 0.14301850756;
    tmp_msg_0.w = 0.732845369345;
    tmp_msg_0.vx = 0.63484984191;
    tmp_msg_0.vy = 0.24714257652;
    tmp_msg_0.vz = 0.665038542165;
    tmp_msg_0.p = 0.810408204169;
    tmp_msg_0.q = 0.358383583901;
    tmp_msg_0.r = 0.00283228134184;
    tmp_msg_0.depth = 0.61973339936;
    tmp_msg_0.alt = 0.220142900558;
    msg.state.set(tmp_msg_0);
    msg.type = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.669983997468);
    msg.setSource(6492U);
    msg.setSourceEntity(169U);
    msg.setDestination(47343U);
    msg.setDestinationEntity(63U);
    msg.value = 0.575731018979;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.393210637133);
    msg.setSource(22771U);
    msg.setSourceEntity(110U);
    msg.setDestination(48948U);
    msg.setDestinationEntity(120U);
    msg.value = 0.409222822416;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.313834659541);
    msg.setSource(62629U);
    msg.setSourceEntity(37U);
    msg.setDestination(60991U);
    msg.setDestinationEntity(124U);
    msg.value = 0.0754397133268;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.00663701848893);
    msg.setSource(53845U);
    msg.setSourceEntity(131U);
    msg.setDestination(56324U);
    msg.setDestinationEntity(0U);
    msg.value = 0.0708903445732;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.594517183578);
    msg.setSource(36977U);
    msg.setSourceEntity(157U);
    msg.setDestination(10477U);
    msg.setDestinationEntity(245U);
    msg.value = 0.0660538394193;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.332496350187);
    msg.setSource(8693U);
    msg.setSourceEntity(204U);
    msg.setDestination(36979U);
    msg.setDestinationEntity(248U);
    msg.value = 0.501836455143;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.667575499918);
    msg.setSource(53270U);
    msg.setSourceEntity(32U);
    msg.setDestination(36787U);
    msg.setDestinationEntity(248U);
    msg.value = 0.667039951078;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.465654565901);
    msg.setSource(5764U);
    msg.setSourceEntity(152U);
    msg.setDestination(37217U);
    msg.setDestinationEntity(231U);
    msg.value = 0.659866275628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.298855049768);
    msg.setSource(59146U);
    msg.setSourceEntity(237U);
    msg.setDestination(55652U);
    msg.setDestinationEntity(203U);
    msg.value = 0.34687479276;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.292403609949);
    msg.setSource(54929U);
    msg.setSourceEntity(98U);
    msg.setDestination(34688U);
    msg.setDestinationEntity(182U);
    msg.value = 0.999496994217;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.141536383403);
    msg.setSource(49045U);
    msg.setSourceEntity(138U);
    msg.setDestination(44627U);
    msg.setDestinationEntity(178U);
    msg.value = 0.91518903301;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.20704916205);
    msg.setSource(63025U);
    msg.setSourceEntity(200U);
    msg.setDestination(44712U);
    msg.setDestinationEntity(70U);
    msg.value = 0.768945008926;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.263168606321);
    msg.setSource(50323U);
    msg.setSourceEntity(219U);
    msg.setDestination(4743U);
    msg.setDestinationEntity(233U);
    msg.value = 0.0558140339223;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.86969130312);
    msg.setSource(48116U);
    msg.setSourceEntity(207U);
    msg.setDestination(28973U);
    msg.setDestinationEntity(216U);
    msg.value = 0.746697718375;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.441124426515);
    msg.setSource(56770U);
    msg.setSourceEntity(62U);
    msg.setDestination(54165U);
    msg.setDestinationEntity(228U);
    msg.value = 0.499664775764;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.354385266059);
    msg.setSource(56684U);
    msg.setSourceEntity(94U);
    msg.setDestination(51658U);
    msg.setDestinationEntity(71U);
    msg.id = 0U;
    msg.zoom = 156U;
    msg.action = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.69186865699);
    msg.setSource(29788U);
    msg.setSourceEntity(90U);
    msg.setDestination(50660U);
    msg.setDestinationEntity(49U);
    msg.id = 219U;
    msg.zoom = 131U;
    msg.action = 186U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.301847710131);
    msg.setSource(21417U);
    msg.setSourceEntity(89U);
    msg.setDestination(29002U);
    msg.setDestinationEntity(77U);
    msg.id = 215U;
    msg.zoom = 236U;
    msg.action = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.88056699696);
    msg.setSource(29030U);
    msg.setSourceEntity(88U);
    msg.setDestination(27216U);
    msg.setDestinationEntity(140U);
    msg.id = 195U;
    msg.value = 0.850331131034;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.161359891263);
    msg.setSource(18721U);
    msg.setSourceEntity(80U);
    msg.setDestination(7127U);
    msg.setDestinationEntity(132U);
    msg.id = 112U;
    msg.value = 0.119551161886;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.7215992925);
    msg.setSource(45517U);
    msg.setSourceEntity(55U);
    msg.setDestination(37065U);
    msg.setDestinationEntity(110U);
    msg.id = 53U;
    msg.value = 0.348422539416;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.564117540825);
    msg.setSource(42248U);
    msg.setSourceEntity(41U);
    msg.setDestination(30184U);
    msg.setDestinationEntity(88U);
    msg.id = 163U;
    msg.value = 0.702175356919;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.326387387827);
    msg.setSource(958U);
    msg.setSourceEntity(66U);
    msg.setDestination(26619U);
    msg.setDestinationEntity(159U);
    msg.id = 213U;
    msg.value = 0.69123145651;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.962011464824);
    msg.setSource(25130U);
    msg.setSourceEntity(168U);
    msg.setDestination(45321U);
    msg.setDestinationEntity(84U);
    msg.id = 81U;
    msg.value = 0.379520679939;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.124980663038);
    msg.setSource(12435U);
    msg.setSourceEntity(141U);
    msg.setDestination(50441U);
    msg.setDestinationEntity(197U);
    msg.id = 19U;
    msg.angle = 0.444353082852;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.449130881582);
    msg.setSource(55341U);
    msg.setSourceEntity(199U);
    msg.setDestination(23501U);
    msg.setDestinationEntity(198U);
    msg.id = 35U;
    msg.angle = 0.258073781405;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.615260506302);
    msg.setSource(64233U);
    msg.setSourceEntity(199U);
    msg.setDestination(45574U);
    msg.setDestinationEntity(28U);
    msg.id = 86U;
    msg.angle = 0.256353993004;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.659598849758);
    msg.setSource(28410U);
    msg.setSourceEntity(90U);
    msg.setDestination(38537U);
    msg.setDestinationEntity(156U);
    msg.op = 178U;
    msg.actions.assign("XTOQXXLLHHBYGZHZRPDOZFVKSCSDNSCNHMTGUMCHJEQRUUBNTMKRZLUMQACFWIGCIMIYDUKWPCMKOSEJHVZDPYQTQXTE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.415734477073);
    msg.setSource(46248U);
    msg.setSourceEntity(173U);
    msg.setDestination(3653U);
    msg.setDestinationEntity(66U);
    msg.op = 64U;
    msg.actions.assign("XPMWBSDGZUSKAZPVCFEBATLLSTJHMVJNIILQXNGDGPHPWVZWGDHODVNFLKBSFQOIBXVAWTNHOTRARGZDQYUVXECROEQKQNMAEUJPQFVUBYUMCIPKGICRSHKGJYLBLUAMSCPHPGWCQWFUYUMEFPBPNALRYRYHFUDXWDQOWTYIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.306637662857);
    msg.setSource(55812U);
    msg.setSourceEntity(186U);
    msg.setDestination(803U);
    msg.setDestinationEntity(233U);
    msg.op = 136U;
    msg.actions.assign("VUAKVNIATYNEREHWEEVDSDMQBTYJRRLYMLSQZFDFYTSRCCZUITKMBEFEZIGGWMGJQZIHCFJQKWOSKLWQGPXUYQBRKCBLKPOFSUAVMHORUOVLNXTMEGWSCFAJZPQHPJFXXAUUOXOIAGPMHMOISHGCHPLXYUDPSWPWNDNRLKTVHTDNIZKQMVLOTSVJLBYBIGABBRIDOXZKZGA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.00490200310399);
    msg.setSource(23387U);
    msg.setSourceEntity(2U);
    msg.setDestination(7318U);
    msg.setDestinationEntity(120U);
    msg.actions.assign("HVUXDPLMCXIRRFOKUWBXFNHXNYZLMRJMMRVZHZYKGVNTXGPMUALTWDQFPDIBGIQLHFOHEPGBSIDJGGYBCLJKXARQPBMABYFEOBYDWGURSSYZYBJSCWNWSZMJATHHSQXZULRKIEZNSFSFJCTENACUNLYLXKJOPTRDOGCUWOHJROAVTA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.497724843987);
    msg.setSource(65320U);
    msg.setSourceEntity(167U);
    msg.setDestination(55283U);
    msg.setDestinationEntity(186U);
    msg.actions.assign("SWUSRXELHCAFULEVSCWOBBNZYFZOQTNQAPMXHXRKF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.882626992408);
    msg.setSource(28542U);
    msg.setSourceEntity(97U);
    msg.setDestination(9447U);
    msg.setDestinationEntity(44U);
    msg.actions.assign("BFQBSNOFPYJHKGMRDPWVIJBTTCVOABQYSHPUTWFKHJXOUCYYXEKXLIWHBSUUPUQTQWUMEUHHDTYCRSZOQZJLEGNJMACFIOTPVNTHZJLKFVRVEEWKSYMOKPZNQWZDRDSQGJFFWOTUNYGSBIAEFILXLFCKSXWIOXLXBQSDGRIGRSLTHIMIKCAELRBENQJRMZUZDIRPXVCWCPG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.0239603966293);
    msg.setSource(25555U);
    msg.setSourceEntity(176U);
    msg.setDestination(63492U);
    msg.setDestinationEntity(134U);
    msg.button = 31U;
    msg.value = 23U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.643206013613);
    msg.setSource(60523U);
    msg.setSourceEntity(18U);
    msg.setDestination(8447U);
    msg.setDestinationEntity(157U);
    msg.button = 17U;
    msg.value = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.674567743468);
    msg.setSource(27673U);
    msg.setSourceEntity(165U);
    msg.setDestination(59512U);
    msg.setDestinationEntity(130U);
    msg.button = 168U;
    msg.value = 33U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.877887464231);
    msg.setSource(25170U);
    msg.setSourceEntity(226U);
    msg.setDestination(59319U);
    msg.setDestinationEntity(135U);
    msg.op = 63U;
    msg.text.assign("MXNVABGCZYNYRKZGRBORVNFDMDGWCJOSASSAVHVXUPBCEPIFMOCXGGHHDMWNGNEKJZAPYBDWTHPJAOTYVACSXXQYFYTWELBUMIAE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.817704658363);
    msg.setSource(4664U);
    msg.setSourceEntity(199U);
    msg.setDestination(6478U);
    msg.setDestinationEntity(63U);
    msg.op = 13U;
    msg.text.assign("NJHJHLNGYZXKRKNTWIDZECMUZXIHXAUKOJELDLMAFCHYNACWEAQVVNHUOYKZGRWGAVOOXUFKWOTUSJHQEPBALSQJKJWLXFDYCBRVEEKEUUFCRTERXNPYO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.97419116669);
    msg.setSource(26263U);
    msg.setSourceEntity(248U);
    msg.setDestination(17874U);
    msg.setDestinationEntity(90U);
    msg.op = 22U;
    msg.text.assign("PZBUDUCKNXTBZQUYANAJMYAZLZQIXVLGOXYRMRQRHXMTEPGLKUYCSJFFQQGMARZWCVWOEYJEBTZAQUAINPFMNEOZVVFJWYPFBZSPMNJPALYIHJTMHFWRRBDYIEIUXXHKDNWLBTRBYJGNWUSZLCXVUZDMBSWDEQFSKKFLTPVLM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.477076903215);
    msg.setSource(430U);
    msg.setSourceEntity(189U);
    msg.setDestination(21966U);
    msg.setDestinationEntity(187U);
    msg.op = 222U;
    msg.time_remain = 0.749298674987;
    msg.sched_time = 0.384542241722;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.069061770276);
    msg.setSource(6610U);
    msg.setSourceEntity(163U);
    msg.setDestination(43691U);
    msg.setDestinationEntity(105U);
    msg.op = 183U;
    msg.time_remain = 0.0786304023796;
    msg.sched_time = 0.731341165403;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.0311674673106);
    msg.setSource(35464U);
    msg.setSourceEntity(236U);
    msg.setDestination(15053U);
    msg.setDestinationEntity(66U);
    msg.op = 237U;
    msg.time_remain = 0.0348488544235;
    msg.sched_time = 0.177268688843;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.957596875223);
    msg.setSource(43429U);
    msg.setSourceEntity(87U);
    msg.setDestination(47441U);
    msg.setDestinationEntity(239U);
    msg.name.assign("VVXUDVKXXNCWKCJGYOQZDBGVOFOJHCGEIUSGHNHVNXKVSMRCVOSQGFMAKQPZFAALVCNCBHUGFTSYTFSLAXHTTBQZEXUBNZQPHEMFSWWTQXJIDGENMWZFHPUADKWLSMMLNMKFAYJPKERLDAPIXKAIGFLSKCPIRZRLPEYGEDIROPLZZ");
    msg.op = 15U;
    msg.sched_time = 0.0895833241696;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.00495080172131);
    msg.setSource(22970U);
    msg.setSourceEntity(103U);
    msg.setDestination(54263U);
    msg.setDestinationEntity(183U);
    msg.name.assign("TEKNHMIZDJ");
    msg.op = 249U;
    msg.sched_time = 0.887625067757;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.13086363468);
    msg.setSource(35952U);
    msg.setSourceEntity(109U);
    msg.setDestination(23280U);
    msg.setDestinationEntity(229U);
    msg.name.assign("LYCPFUNQYXECTTGEGJAKVETRTJDYQUZZHZMGKNMZTQFAPGLURTOWKTMVHPOWJHROKWHFBJCOGNUSUNAUIKCRBSQOXQQBFWMQGUVUIQZXQDLJJAVOFOGMCHHFSAZZIJZYAFTRWSVBEXBLDMDSXLVBCVPREIEYQXLPZKNPLYNMRWK");
    msg.op = 179U;
    msg.sched_time = 0.612998349444;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.560423945591);
    msg.setSource(63641U);
    msg.setSourceEntity(68U);
    msg.setDestination(60655U);
    msg.setDestinationEntity(160U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.080860751333);
    msg.setSource(51270U);
    msg.setSourceEntity(246U);
    msg.setDestination(56319U);
    msg.setDestinationEntity(226U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.592313602651);
    msg.setSource(51931U);
    msg.setSourceEntity(144U);
    msg.setDestination(51941U);
    msg.setDestinationEntity(181U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.494955097853);
    msg.setSource(31737U);
    msg.setSourceEntity(73U);
    msg.setDestination(39060U);
    msg.setDestinationEntity(140U);
    msg.name.assign("OCMTAKLFMEXNDEGRBOZVEUXBFYDFWSLPHXTVSUPZYCEAWCBJEKGNKOTUASHVAWGZJMXUCQAZYIHKKZFATCDFKPMFDWQMVVQETPBXEYPNTUEYSCPCYQCYARIIORFSRIBGVZFGRYAUHXUWCDGDQOWVQAYCZXDPOJLMGGHPRISOTRLPEQDDTOLWHIGUINJJSTWBVAQNNGZHXIEJDKRKNLFBRMRIH");
    msg.state = 238U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.315369155693);
    msg.setSource(63142U);
    msg.setSourceEntity(10U);
    msg.setDestination(60324U);
    msg.setDestinationEntity(69U);
    msg.name.assign("ZBULHUOHOFQIHVTNDRVYRQXWGDAUWNBCISQINTBGJYIMIWVZAFRGJFQZCAMBNBBYVPLRLPEEQZYHUCFDRGIDXTKKZOJAAMWGEKPURMTZMTGNTTFGHFTPVAYEKTCJYSJKXYAHWADUECDNYEKMSY");
    msg.state = 44U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.887671722785);
    msg.setSource(23151U);
    msg.setSourceEntity(236U);
    msg.setDestination(30399U);
    msg.setDestinationEntity(164U);
    msg.name.assign("ENDCTUUNQYLNHBMVTPGLHXSMPKWWLRZNXQKVZRKOHAPZVIVECYWLVGZOGLBQUMAQDYVISNWTBJGNPEMWIAEBWUHFCBMRXQLXAKMANUJOJPHYFHUKNCJH");
    msg.state = 77U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.461899788374);
    msg.setSource(33270U);
    msg.setSourceEntity(147U);
    msg.setDestination(49851U);
    msg.setDestinationEntity(53U);
    msg.name.assign("GHVBLSJYUOCRWYHSEQMXHRJVXQLSBCTTRONMEQCOFGSNJPISDDYLDBWNEWWOZZNSWUD");
    msg.value = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.356107481267);
    msg.setSource(63822U);
    msg.setSourceEntity(229U);
    msg.setDestination(4190U);
    msg.setDestinationEntity(114U);
    msg.name.assign("XHYXJRKDCBVFSXLCMXPHWWSSHUYNVDGASPVEJFIITPHYAQNZTQRZWNBKXMKBRFPIQMSDOUMEKGMRFTGCRAXYAPSTBVEKDZZGCKPHCFIUTHMZMJCIFTUKSBBQWXHVAGNAOEZOBTOKDMMHYDYBETJPOAUXQNIUJWJNHAPHLFGUYMLIWLZVWDQPVPSCNFEIZLWTFVXZOOYOJKRLRNQEGVWQUBNQJDCGGRLBWULEZQELAYLNJXSCOSD");
    msg.value = 6U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.780295015217);
    msg.setSource(64866U);
    msg.setSourceEntity(117U);
    msg.setDestination(29941U);
    msg.setDestinationEntity(78U);
    msg.name.assign("BFDIVEJKWDYIZPEDAMEGVDCVDIGHBKCWIBRQPBAZIXYPNFRRTKQGLICAXSIYPYBBJMFHHEFLYQASTMLPNODOCRJTGZJDSBMJGGBJOCHFCXAMLYUKKYQFFJAQZZTGKNPVPXVOHTHTRWOUNXWJAXOCCAMVWTQVVXTIZRFGXTEMHRPBMKVMYSELSSGFOCYUAIHENURQ");
    msg.value = 189U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.825798983395);
    msg.setSource(6255U);
    msg.setSourceEntity(37U);
    msg.setDestination(53097U);
    msg.setDestinationEntity(37U);
    msg.name.assign("SUYQAZYAXFWAIAUYQGLPVRGJLMQEHQRLKOOBVOOCWABUAQAMJUXXBYFJGHDDSYBXROFNBTYHTYPIFCSLQGCJXZXEDCHJRIKFIBBWOVKJMLDNZWTULCPVVNQPSXHZXISKZLDZUQOIMFMMBMUZWYTCRNUFBRODGVNRQVGAATJENDI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.417692728156);
    msg.setSource(4865U);
    msg.setSourceEntity(171U);
    msg.setDestination(28713U);
    msg.setDestinationEntity(151U);
    msg.name.assign("URZLYEDSARCYJCIMTYBOHSXZGWWOBRLDHUYILCJZRDOKOKIQEQKGGYNEMWVXSZTWWEDEDGYJAGBBJTTVVARVLSQPXFASMKBHPZJTGWMCTDCFQHBIFWEFKSURFQWPTGLYSKNMCPOFUGAZXDCIXFSXEZVNFFDNHMCBZJRQHAXTMIXGGWIHYIXSOUPOBPYCAMPNQRRAVPNJUKUIWLSUPMKMJONZRHBEPLEEOIQYCLXVBHLJFNHKO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.249852128909);
    msg.setSource(34512U);
    msg.setSourceEntity(89U);
    msg.setDestination(37684U);
    msg.setDestinationEntity(85U);
    msg.name.assign("TLRHNOKXICXZACQTCSMDRYLIYVAYOPHPQTIYKWJGZJQRYWZBNMJTGAOUNGCGINTICNARYJJUOKIFSWHZUBBACMZFBNBXVESRZMYHEUOHWSFDPAEVUQJXUSAKPOXWQBDTTRPXQZIWXMCEEVIVKDBLYYWFPCRJSGLKGZSWPAOHTHVFONFBJVUXYLWVETEFDNBZLSHNEPTP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.57413261688);
    msg.setSource(51769U);
    msg.setSourceEntity(247U);
    msg.setDestination(54392U);
    msg.setDestinationEntity(32U);
    msg.name.assign("PSXITFQGHIZIBWHKKUQDJMRKKOUFRLPWNFJABHHEUTVXQDFCDIOPKXDHCUMXGRYZNTAJULFZINOVLQAPTZQLLCBJGLEKUVVROIXWDTM");
    msg.value = 158U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.10054096406);
    msg.setSource(60923U);
    msg.setSourceEntity(168U);
    msg.setDestination(35093U);
    msg.setDestinationEntity(137U);
    msg.name.assign("ZQKSVJZRCPXEKJDWZOTXHQQQHELYVFEGBVXUXNONIFNWRYBHAWNGGEOWDLSZJQBLLSJAERPCXIJEKJPCMKJDECPFKBWWMBDBZFUOKSSYCBRSTYERRHFAYLCHUWGOKXUIVHUQJEOELIGQLXPFWASTAXSTVPBGTZCDMNHNUHRZTVMLMIRSPNOXMIFFDNVOTZKVTHGAVGAY");
    msg.value = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.237686574143);
    msg.setSource(48941U);
    msg.setSourceEntity(219U);
    msg.setDestination(5960U);
    msg.setDestinationEntity(17U);
    msg.name.assign("JWJUPPQFNKFZSHAPGITBKFMBLPPVSPDZISDOEIYGIRCLFZHZKRIITKXVZWJSHBMNCWURNEMGYMVMXYCHLAYUXJODPVMKBZEAOYOXGRQOHAQOEQYNM");
    msg.value = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.386393391516);
    msg.setSource(63758U);
    msg.setSourceEntity(110U);
    msg.setDestination(17946U);
    msg.setDestinationEntity(25U);
    msg.id = 159U;
    msg.period = 897009244U;
    msg.duty_cycle = 3039239970U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.0603592644357);
    msg.setSource(5182U);
    msg.setSourceEntity(1U);
    msg.setDestination(33136U);
    msg.setDestinationEntity(212U);
    msg.id = 235U;
    msg.period = 2000245709U;
    msg.duty_cycle = 4212332682U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.540280318995);
    msg.setSource(53373U);
    msg.setSourceEntity(46U);
    msg.setDestination(23202U);
    msg.setDestinationEntity(237U);
    msg.id = 81U;
    msg.period = 64384727U;
    msg.duty_cycle = 3345337873U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.184999311175);
    msg.setSource(30884U);
    msg.setSourceEntity(251U);
    msg.setDestination(48745U);
    msg.setDestinationEntity(130U);
    msg.id = 142U;
    msg.period = 2244261867U;
    msg.duty_cycle = 4169247900U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.253668863162);
    msg.setSource(7793U);
    msg.setSourceEntity(213U);
    msg.setDestination(27594U);
    msg.setDestinationEntity(244U);
    msg.id = 20U;
    msg.period = 3305532824U;
    msg.duty_cycle = 111142784U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.165385269297);
    msg.setSource(2991U);
    msg.setSourceEntity(152U);
    msg.setDestination(37727U);
    msg.setDestinationEntity(135U);
    msg.id = 35U;
    msg.period = 2949132908U;
    msg.duty_cycle = 3850547965U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.544348506977);
    msg.setSource(63211U);
    msg.setSourceEntity(214U);
    msg.setDestination(3643U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.109662842808;
    msg.lon = 0.460854931831;
    msg.height = 0.866153062265;
    msg.x = 0.813604535311;
    msg.y = 0.749614522129;
    msg.z = 0.69577402418;
    msg.phi = 0.968122070491;
    msg.theta = 0.753203699926;
    msg.psi = 0.307366762715;
    msg.u = 0.606305407417;
    msg.v = 0.681307153561;
    msg.w = 0.344733254402;
    msg.vx = 0.418654536455;
    msg.vy = 0.127834939198;
    msg.vz = 0.0173195698714;
    msg.p = 0.848952526841;
    msg.q = 0.617616435896;
    msg.r = 0.90382869886;
    msg.depth = 0.0701824330811;
    msg.alt = 0.695738202616;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.409701482624);
    msg.setSource(26914U);
    msg.setSourceEntity(168U);
    msg.setDestination(47357U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.898433916431;
    msg.lon = 0.438219473223;
    msg.height = 0.481888626596;
    msg.x = 0.0605832273117;
    msg.y = 0.857787481419;
    msg.z = 0.14610044419;
    msg.phi = 0.407324180067;
    msg.theta = 0.422186746732;
    msg.psi = 0.786355994179;
    msg.u = 0.438978113604;
    msg.v = 0.948900495158;
    msg.w = 0.118902469074;
    msg.vx = 0.307713882993;
    msg.vy = 0.644993952392;
    msg.vz = 0.317796588119;
    msg.p = 0.827351085644;
    msg.q = 0.270475948171;
    msg.r = 0.186884733163;
    msg.depth = 0.676369003214;
    msg.alt = 0.704727850684;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.115794522516);
    msg.setSource(50409U);
    msg.setSourceEntity(239U);
    msg.setDestination(17344U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.246635793423;
    msg.lon = 0.688790869344;
    msg.height = 0.666179783635;
    msg.x = 0.258229176584;
    msg.y = 0.291977638911;
    msg.z = 0.809766253992;
    msg.phi = 0.942890271592;
    msg.theta = 0.0265977523578;
    msg.psi = 0.318127347708;
    msg.u = 0.411132569117;
    msg.v = 0.540638327175;
    msg.w = 0.0878045243654;
    msg.vx = 0.727840000741;
    msg.vy = 0.109430944022;
    msg.vz = 0.00204461715499;
    msg.p = 0.0136471934477;
    msg.q = 0.05959601483;
    msg.r = 0.996410415499;
    msg.depth = 0.364158925336;
    msg.alt = 0.587229600287;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.480617147043);
    msg.setSource(29272U);
    msg.setSourceEntity(36U);
    msg.setDestination(37031U);
    msg.setDestinationEntity(206U);
    msg.x = 0.352341681008;
    msg.y = 0.985254998004;
    msg.z = 0.434348608882;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.600489680712);
    msg.setSource(20339U);
    msg.setSourceEntity(200U);
    msg.setDestination(50011U);
    msg.setDestinationEntity(172U);
    msg.x = 0.830255471168;
    msg.y = 0.0380420954762;
    msg.z = 0.0989265843385;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.434736710055);
    msg.setSource(13781U);
    msg.setSourceEntity(34U);
    msg.setDestination(5369U);
    msg.setDestinationEntity(20U);
    msg.x = 0.396167337507;
    msg.y = 0.792805538798;
    msg.z = 0.144151366879;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.579467853369);
    msg.setSource(39603U);
    msg.setSourceEntity(73U);
    msg.setDestination(39223U);
    msg.setDestinationEntity(98U);
    msg.value = 0.595775630652;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.63010812669);
    msg.setSource(12954U);
    msg.setSourceEntity(89U);
    msg.setDestination(54967U);
    msg.setDestinationEntity(133U);
    msg.value = 0.372513861006;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.318846573733);
    msg.setSource(43381U);
    msg.setSourceEntity(85U);
    msg.setDestination(55989U);
    msg.setDestinationEntity(89U);
    msg.value = 0.141232090537;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.94413916616);
    msg.setSource(48350U);
    msg.setSourceEntity(179U);
    msg.setDestination(11895U);
    msg.setDestinationEntity(221U);
    msg.value = 0.0510514436497;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.70837545878);
    msg.setSource(18837U);
    msg.setSourceEntity(177U);
    msg.setDestination(41807U);
    msg.setDestinationEntity(106U);
    msg.value = 0.997893005648;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.142567424615);
    msg.setSource(64763U);
    msg.setSourceEntity(153U);
    msg.setDestination(41232U);
    msg.setDestinationEntity(32U);
    msg.value = 0.821047648334;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.793920486655);
    msg.setSource(14301U);
    msg.setSourceEntity(129U);
    msg.setDestination(61076U);
    msg.setDestinationEntity(33U);
    msg.x = 0.563164280044;
    msg.y = 0.525310457971;
    msg.z = 0.0708138547324;
    msg.phi = 0.272185896858;
    msg.theta = 0.637505963292;
    msg.psi = 0.445050429229;
    msg.p = 0.607931548167;
    msg.q = 0.722622030319;
    msg.r = 0.616589796569;
    msg.u = 0.177606814733;
    msg.v = 0.134470242531;
    msg.w = 0.374593650451;
    msg.bias_psi = 0.522935215941;
    msg.bias_r = 0.439325917977;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.958445589578);
    msg.setSource(38693U);
    msg.setSourceEntity(31U);
    msg.setDestination(38263U);
    msg.setDestinationEntity(149U);
    msg.x = 0.946233229787;
    msg.y = 0.154580970266;
    msg.z = 0.663100050892;
    msg.phi = 0.11116725572;
    msg.theta = 0.832004797926;
    msg.psi = 0.527930012571;
    msg.p = 0.271834996709;
    msg.q = 0.0945146638138;
    msg.r = 0.871987232432;
    msg.u = 0.553152305964;
    msg.v = 0.33728236141;
    msg.w = 0.781384183079;
    msg.bias_psi = 0.438615907553;
    msg.bias_r = 0.539066219577;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.495547723792);
    msg.setSource(61373U);
    msg.setSourceEntity(246U);
    msg.setDestination(4174U);
    msg.setDestinationEntity(2U);
    msg.x = 0.675466489281;
    msg.y = 0.817941913508;
    msg.z = 0.61848165587;
    msg.phi = 0.886203398306;
    msg.theta = 0.582155264099;
    msg.psi = 0.690139004391;
    msg.p = 0.127930289243;
    msg.q = 0.348978269631;
    msg.r = 0.028486373189;
    msg.u = 0.717406093153;
    msg.v = 0.647527344846;
    msg.w = 0.892703742798;
    msg.bias_psi = 0.700570376106;
    msg.bias_r = 0.743867286792;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.442727571341);
    msg.setSource(35517U);
    msg.setSourceEntity(124U);
    msg.setDestination(42591U);
    msg.setDestinationEntity(24U);
    msg.bias_psi = 0.519735199626;
    msg.bias_r = 0.0736653025028;
    msg.cog = 0.821285134849;
    msg.cyaw = 0.631159303831;
    msg.lbl_rej_level = 0.267283218761;
    msg.gps_rej_level = 0.8490770906;
    msg.custom_x = 0.552930543228;
    msg.custom_y = 0.400351166705;
    msg.custom_z = 0.520894022472;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.802783276092);
    msg.setSource(38266U);
    msg.setSourceEntity(53U);
    msg.setDestination(23738U);
    msg.setDestinationEntity(115U);
    msg.bias_psi = 0.583176662714;
    msg.bias_r = 0.342559821909;
    msg.cog = 0.896474483797;
    msg.cyaw = 0.676600463215;
    msg.lbl_rej_level = 0.539493265062;
    msg.gps_rej_level = 0.139900024843;
    msg.custom_x = 0.797688111409;
    msg.custom_y = 0.322828438042;
    msg.custom_z = 0.740998269513;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.865018694741);
    msg.setSource(17448U);
    msg.setSourceEntity(116U);
    msg.setDestination(39474U);
    msg.setDestinationEntity(31U);
    msg.bias_psi = 0.26579154093;
    msg.bias_r = 0.404210662955;
    msg.cog = 0.655917614905;
    msg.cyaw = 0.904871975856;
    msg.lbl_rej_level = 0.689073947727;
    msg.gps_rej_level = 0.370257199926;
    msg.custom_x = 0.650239928317;
    msg.custom_y = 0.647909696058;
    msg.custom_z = 0.692836959955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.544189929194);
    msg.setSource(39693U);
    msg.setSourceEntity(113U);
    msg.setDestination(15855U);
    msg.setDestinationEntity(197U);
    msg.utc_time = 0.713557332563;
    msg.reason = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.908974772445);
    msg.setSource(3688U);
    msg.setSourceEntity(208U);
    msg.setDestination(15915U);
    msg.setDestinationEntity(219U);
    msg.utc_time = 0.103715889804;
    msg.reason = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.256580235508);
    msg.setSource(11849U);
    msg.setSourceEntity(154U);
    msg.setDestination(8826U);
    msg.setDestinationEntity(31U);
    msg.utc_time = 0.491761491189;
    msg.reason = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.523775701651);
    msg.setSource(49574U);
    msg.setSourceEntity(118U);
    msg.setDestination(51115U);
    msg.setDestinationEntity(12U);
    msg.id = 130U;
    msg.range = 0.228045698934;
    msg.acceptance = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.50940274237);
    msg.setSource(64553U);
    msg.setSourceEntity(139U);
    msg.setDestination(9976U);
    msg.setDestinationEntity(66U);
    msg.id = 115U;
    msg.range = 0.536416095684;
    msg.acceptance = 23U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.587245687639);
    msg.setSource(41868U);
    msg.setSourceEntity(145U);
    msg.setDestination(10438U);
    msg.setDestinationEntity(173U);
    msg.id = 217U;
    msg.range = 0.806913177053;
    msg.acceptance = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.123641703515);
    msg.setSource(49635U);
    msg.setSourceEntity(127U);
    msg.setDestination(14296U);
    msg.setDestinationEntity(232U);
    msg.type = 176U;
    msg.reason = 85U;
    msg.value = 0.493189002066;
    msg.timestep = 0.975905435105;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.970642714866);
    msg.setSource(24373U);
    msg.setSourceEntity(159U);
    msg.setDestination(17057U);
    msg.setDestinationEntity(180U);
    msg.type = 134U;
    msg.reason = 149U;
    msg.value = 0.553141479759;
    msg.timestep = 0.712952644567;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.513897510881);
    msg.setSource(57349U);
    msg.setSourceEntity(126U);
    msg.setDestination(31964U);
    msg.setDestinationEntity(73U);
    msg.type = 105U;
    msg.reason = 43U;
    msg.value = 0.546642798486;
    msg.timestep = 0.250762272246;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.852835958548);
    msg.setSource(408U);
    msg.setSourceEntity(247U);
    msg.setDestination(17023U);
    msg.setDestinationEntity(79U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DPAZBGIZUWNWRKWTUREVIGKHKQCTYCAXXXMPCBLGGSVVKCAIRDADMPYVCKFTUPESLKYJWENHMPXFFXSSBWTNQEUVSCUJTQRISBQQDTCOUBFSBMZBQWKUICMVSYZGQENX");
    tmp_msg_0.lat = 0.819978055729;
    tmp_msg_0.lon = 0.689906208518;
    tmp_msg_0.depth = 0.234160110357;
    tmp_msg_0.query_channel = 134U;
    tmp_msg_0.reply_channel = 151U;
    tmp_msg_0.transponder_delay = 209U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.647027469755;
    msg.y = 0.343603257072;
    msg.var_x = 0.419139042449;
    msg.var_y = 0.530630722655;
    msg.distance = 0.721193482663;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.12853960354);
    msg.setSource(5166U);
    msg.setSourceEntity(79U);
    msg.setDestination(36780U);
    msg.setDestinationEntity(237U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BDTNDGFJBSYFLJTZXXPEYIWNYQFJLUZKLXVXUTYVMQVHEGNTICMCTSYWTZSDVOMWDLGTLMBOWIBHTAWTGRIEWBCSJJZQFASDHWBRPBMBRHBQYUIEPVACKKQDDCPRGVRFIOQUWBSUDCRYYOVOHRERZMMDULQWGJVCXKXPJRKAJNDLYUAPACPQH");
    tmp_msg_0.lat = 0.499748085133;
    tmp_msg_0.lon = 0.283590087068;
    tmp_msg_0.depth = 0.211901931595;
    tmp_msg_0.query_channel = 107U;
    tmp_msg_0.reply_channel = 31U;
    tmp_msg_0.transponder_delay = 224U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.822238698901;
    msg.y = 0.455698740713;
    msg.var_x = 0.600521066838;
    msg.var_y = 0.0406265255443;
    msg.distance = 0.686810709181;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.377738200675);
    msg.setSource(39181U);
    msg.setSourceEntity(171U);
    msg.setDestination(43752U);
    msg.setDestinationEntity(186U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AIIMMOWKWQECVDPLMQMWKGHHEPOPVGDUBUYFQRFKBRRIVFOUVIDMSAMGJZWORTRSMGWYMALLHDKEO");
    tmp_msg_0.lat = 0.517203380423;
    tmp_msg_0.lon = 0.598979360295;
    tmp_msg_0.depth = 0.576918573137;
    tmp_msg_0.query_channel = 31U;
    tmp_msg_0.reply_channel = 237U;
    tmp_msg_0.transponder_delay = 252U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0535024403132;
    msg.y = 0.0897643133319;
    msg.var_x = 0.158820251235;
    msg.var_y = 0.882688427008;
    msg.distance = 0.389606135111;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.687805394343);
    msg.setSource(10913U);
    msg.setSourceEntity(48U);
    msg.setDestination(1695U);
    msg.setDestinationEntity(209U);
    msg.state = 237U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.000521200363862);
    msg.setSource(51750U);
    msg.setSourceEntity(176U);
    msg.setDestination(51901U);
    msg.setDestinationEntity(90U);
    msg.state = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.197718464638);
    msg.setSource(14305U);
    msg.setSourceEntity(233U);
    msg.setDestination(23703U);
    msg.setDestinationEntity(129U);
    msg.state = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.196196946425);
    msg.setSource(23146U);
    msg.setSourceEntity(75U);
    msg.setDestination(44264U);
    msg.setDestinationEntity(156U);
    msg.x = 0.480756575594;
    msg.y = 0.126375193014;
    msg.z = 0.727289248423;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.114170752534);
    msg.setSource(48563U);
    msg.setSourceEntity(33U);
    msg.setDestination(2998U);
    msg.setDestinationEntity(120U);
    msg.x = 0.151408796065;
    msg.y = 0.748986622676;
    msg.z = 0.71249020891;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.210955167275);
    msg.setSource(63878U);
    msg.setSourceEntity(106U);
    msg.setDestination(20461U);
    msg.setDestinationEntity(128U);
    msg.x = 0.211153990982;
    msg.y = 0.831382283632;
    msg.z = 0.454874877768;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.314828878611);
    msg.setSource(15326U);
    msg.setSourceEntity(254U);
    msg.setDestination(52018U);
    msg.setDestinationEntity(99U);
    msg.va = 0.0908980490876;
    msg.aoa = 0.968434881007;
    msg.ssa = 0.587355103777;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.550015151431);
    msg.setSource(44248U);
    msg.setSourceEntity(25U);
    msg.setDestination(48134U);
    msg.setDestinationEntity(166U);
    msg.va = 0.821854229655;
    msg.aoa = 0.917643508532;
    msg.ssa = 0.565856948057;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.922076821903);
    msg.setSource(54180U);
    msg.setSourceEntity(97U);
    msg.setDestination(41721U);
    msg.setDestinationEntity(54U);
    msg.va = 0.221708291657;
    msg.aoa = 0.800460581301;
    msg.ssa = 0.633924229461;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.697003199373);
    msg.setSource(29097U);
    msg.setSourceEntity(56U);
    msg.setDestination(355U);
    msg.setDestinationEntity(101U);
    msg.value = 0.0217444799778;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.480341670907);
    msg.setSource(51200U);
    msg.setSourceEntity(181U);
    msg.setDestination(10835U);
    msg.setDestinationEntity(223U);
    msg.value = 0.84533441727;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.270309829129);
    msg.setSource(23920U);
    msg.setSourceEntity(214U);
    msg.setDestination(40808U);
    msg.setDestinationEntity(126U);
    msg.value = 0.660414297364;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.330396460095);
    msg.setSource(38450U);
    msg.setSourceEntity(43U);
    msg.setDestination(27659U);
    msg.setDestinationEntity(91U);
    msg.value = 0.867941285286;
    msg.z_units = 22U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.441314092246);
    msg.setSource(22511U);
    msg.setSourceEntity(28U);
    msg.setDestination(63930U);
    msg.setDestinationEntity(51U);
    msg.value = 0.126581987205;
    msg.z_units = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.229321939992);
    msg.setSource(25749U);
    msg.setSourceEntity(144U);
    msg.setDestination(5073U);
    msg.setDestinationEntity(245U);
    msg.value = 0.963308694313;
    msg.z_units = 120U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.225131593275);
    msg.setSource(37309U);
    msg.setSourceEntity(175U);
    msg.setDestination(23365U);
    msg.setDestinationEntity(212U);
    msg.value = 0.411686086597;
    msg.speed_units = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.55783205629);
    msg.setSource(64696U);
    msg.setSourceEntity(70U);
    msg.setDestination(58511U);
    msg.setDestinationEntity(228U);
    msg.value = 0.637723869392;
    msg.speed_units = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.98988700558);
    msg.setSource(34957U);
    msg.setSourceEntity(49U);
    msg.setDestination(41196U);
    msg.setDestinationEntity(145U);
    msg.value = 0.0507486540087;
    msg.speed_units = 186U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.057537572487);
    msg.setSource(35277U);
    msg.setSourceEntity(139U);
    msg.setDestination(48515U);
    msg.setDestinationEntity(208U);
    msg.value = 0.70996462724;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.632268226814);
    msg.setSource(38908U);
    msg.setSourceEntity(57U);
    msg.setDestination(40032U);
    msg.setDestinationEntity(70U);
    msg.value = 0.974931099751;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.957492687258);
    msg.setSource(39968U);
    msg.setSourceEntity(111U);
    msg.setDestination(30042U);
    msg.setDestinationEntity(170U);
    msg.value = 0.116904003715;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.967388765747);
    msg.setSource(39151U);
    msg.setSourceEntity(21U);
    msg.setDestination(58549U);
    msg.setDestinationEntity(206U);
    msg.value = 0.0204429707279;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.71314715538);
    msg.setSource(16684U);
    msg.setSourceEntity(9U);
    msg.setDestination(12527U);
    msg.setDestinationEntity(134U);
    msg.value = 0.972004781023;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.427151837321);
    msg.setSource(46681U);
    msg.setSourceEntity(81U);
    msg.setDestination(2117U);
    msg.setDestinationEntity(57U);
    msg.value = 0.907497873131;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.553725761629);
    msg.setSource(40892U);
    msg.setSourceEntity(229U);
    msg.setDestination(31810U);
    msg.setDestinationEntity(147U);
    msg.value = 0.997903388207;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.703868585374);
    msg.setSource(59936U);
    msg.setSourceEntity(52U);
    msg.setDestination(18921U);
    msg.setDestinationEntity(130U);
    msg.value = 0.980780583728;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.917767213598);
    msg.setSource(43734U);
    msg.setSourceEntity(217U);
    msg.setDestination(30540U);
    msg.setDestinationEntity(241U);
    msg.value = 0.489551663582;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.886104790506);
    msg.setSource(20630U);
    msg.setSourceEntity(246U);
    msg.setDestination(15583U);
    msg.setDestinationEntity(165U);
    msg.path_ref = 106713569U;
    msg.start_lat = 0.249766702508;
    msg.start_lon = 0.422372436213;
    msg.start_z = 0.0749772785671;
    msg.start_z_units = 73U;
    msg.end_lat = 0.0882813413053;
    msg.end_lon = 0.601192299993;
    msg.end_z = 0.774767074388;
    msg.end_z_units = 80U;
    msg.speed = 0.900963732855;
    msg.speed_units = 189U;
    msg.lradius = 0.767208114118;
    msg.flags = 108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.761738295844);
    msg.setSource(27688U);
    msg.setSourceEntity(48U);
    msg.setDestination(25362U);
    msg.setDestinationEntity(122U);
    msg.path_ref = 2140226343U;
    msg.start_lat = 0.818068723525;
    msg.start_lon = 0.40755364604;
    msg.start_z = 0.279768983378;
    msg.start_z_units = 141U;
    msg.end_lat = 0.605705060524;
    msg.end_lon = 0.672717988381;
    msg.end_z = 0.902645486528;
    msg.end_z_units = 145U;
    msg.speed = 0.0723635743828;
    msg.speed_units = 145U;
    msg.lradius = 0.875832527454;
    msg.flags = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.506116100114);
    msg.setSource(5652U);
    msg.setSourceEntity(116U);
    msg.setDestination(43606U);
    msg.setDestinationEntity(149U);
    msg.path_ref = 3992833816U;
    msg.start_lat = 0.888584067136;
    msg.start_lon = 0.963851187082;
    msg.start_z = 0.404701533403;
    msg.start_z_units = 240U;
    msg.end_lat = 0.0245811627582;
    msg.end_lon = 0.435396288693;
    msg.end_z = 0.438794571532;
    msg.end_z_units = 166U;
    msg.speed = 0.61083492071;
    msg.speed_units = 67U;
    msg.lradius = 0.227695488508;
    msg.flags = 3U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.66645674258);
    msg.setSource(63646U);
    msg.setSourceEntity(29U);
    msg.setDestination(55568U);
    msg.setDestinationEntity(1U);
    msg.x = 0.810622548338;
    msg.y = 0.235938203559;
    msg.z = 0.901944103643;
    msg.k = 0.898715170604;
    msg.m = 0.555086876837;
    msg.n = 0.193923320431;
    msg.flags = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.840198183381);
    msg.setSource(26195U);
    msg.setSourceEntity(142U);
    msg.setDestination(63U);
    msg.setDestinationEntity(16U);
    msg.x = 0.223264077882;
    msg.y = 0.331522577776;
    msg.z = 0.749631130783;
    msg.k = 0.35785234263;
    msg.m = 0.0211585742734;
    msg.n = 0.0242948353258;
    msg.flags = 183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.606604903995);
    msg.setSource(1525U);
    msg.setSourceEntity(179U);
    msg.setDestination(3057U);
    msg.setDestinationEntity(87U);
    msg.x = 0.491492496717;
    msg.y = 0.95449774683;
    msg.z = 0.147301784137;
    msg.k = 0.475188846602;
    msg.m = 0.266760072761;
    msg.n = 0.190160372452;
    msg.flags = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.693235386522);
    msg.setSource(59717U);
    msg.setSourceEntity(48U);
    msg.setDestination(53431U);
    msg.setDestinationEntity(55U);
    msg.value = 0.82286424922;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.501327302719);
    msg.setSource(40812U);
    msg.setSourceEntity(205U);
    msg.setDestination(4812U);
    msg.setDestinationEntity(102U);
    msg.value = 0.0426422137612;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.492383619361);
    msg.setSource(24970U);
    msg.setSourceEntity(249U);
    msg.setDestination(43459U);
    msg.setDestinationEntity(140U);
    msg.value = 0.688047713303;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.0423146859334);
    msg.setSource(45081U);
    msg.setSourceEntity(253U);
    msg.setDestination(58429U);
    msg.setDestinationEntity(10U);
    msg.u = 0.0718064239922;
    msg.v = 0.126082601542;
    msg.w = 0.452683146729;
    msg.p = 0.0901556425813;
    msg.q = 0.704805307643;
    msg.r = 0.745212513434;
    msg.flags = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.878107045428);
    msg.setSource(14583U);
    msg.setSourceEntity(184U);
    msg.setDestination(20251U);
    msg.setDestinationEntity(160U);
    msg.u = 0.379456997452;
    msg.v = 0.207323384093;
    msg.w = 0.540327196484;
    msg.p = 0.982061598246;
    msg.q = 0.477195130587;
    msg.r = 0.926777711217;
    msg.flags = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.419185942178);
    msg.setSource(34389U);
    msg.setSourceEntity(34U);
    msg.setDestination(58983U);
    msg.setDestinationEntity(68U);
    msg.u = 0.866724440308;
    msg.v = 0.442152459122;
    msg.w = 0.19947212745;
    msg.p = 0.362418781298;
    msg.q = 0.20959084561;
    msg.r = 0.198808766909;
    msg.flags = 237U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.44578001132);
    msg.setSource(38572U);
    msg.setSourceEntity(173U);
    msg.setDestination(29510U);
    msg.setDestinationEntity(193U);
    msg.path_ref = 1537998823U;
    msg.start_lat = 0.184624069082;
    msg.start_lon = 0.135488878215;
    msg.start_z = 0.451641845716;
    msg.start_z_units = 174U;
    msg.end_lat = 0.455929812263;
    msg.end_lon = 0.714011433408;
    msg.end_z = 0.39498325885;
    msg.end_z_units = 176U;
    msg.lradius = 0.431765080356;
    msg.flags = 205U;
    msg.x = 0.9931181829;
    msg.y = 0.844533690346;
    msg.z = 0.847333115663;
    msg.vx = 0.709842538471;
    msg.vy = 0.28024263021;
    msg.vz = 0.53336507594;
    msg.course_error = 0.588864457598;
    msg.eta = 41490U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.360462260116);
    msg.setSource(16064U);
    msg.setSourceEntity(8U);
    msg.setDestination(45146U);
    msg.setDestinationEntity(222U);
    msg.path_ref = 2546502050U;
    msg.start_lat = 0.432539673388;
    msg.start_lon = 0.903493473482;
    msg.start_z = 0.694479047472;
    msg.start_z_units = 66U;
    msg.end_lat = 0.299860002945;
    msg.end_lon = 0.0482759139052;
    msg.end_z = 0.523159077106;
    msg.end_z_units = 184U;
    msg.lradius = 0.35152691529;
    msg.flags = 170U;
    msg.x = 0.429534883199;
    msg.y = 0.702194903649;
    msg.z = 0.467262410635;
    msg.vx = 0.731964945836;
    msg.vy = 0.11283880981;
    msg.vz = 0.445652283057;
    msg.course_error = 0.00305564857456;
    msg.eta = 459U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.38906802128);
    msg.setSource(29986U);
    msg.setSourceEntity(22U);
    msg.setDestination(31588U);
    msg.setDestinationEntity(126U);
    msg.path_ref = 3439647457U;
    msg.start_lat = 0.626130339001;
    msg.start_lon = 0.291397142191;
    msg.start_z = 0.580907171673;
    msg.start_z_units = 76U;
    msg.end_lat = 0.236334936216;
    msg.end_lon = 0.46589504546;
    msg.end_z = 0.599756919863;
    msg.end_z_units = 69U;
    msg.lradius = 0.145711179661;
    msg.flags = 114U;
    msg.x = 0.195787687145;
    msg.y = 0.306128682417;
    msg.z = 0.610096396881;
    msg.vx = 0.677133081806;
    msg.vy = 0.318456466791;
    msg.vz = 0.648634839179;
    msg.course_error = 0.385923920799;
    msg.eta = 19749U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.126845799548);
    msg.setSource(54583U);
    msg.setSourceEntity(97U);
    msg.setDestination(26035U);
    msg.setDestinationEntity(70U);
    msg.k = 0.331818772794;
    msg.m = 0.935472851821;
    msg.n = 0.932274409782;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.689374448411);
    msg.setSource(56764U);
    msg.setSourceEntity(186U);
    msg.setDestination(23848U);
    msg.setDestinationEntity(163U);
    msg.k = 0.752227952759;
    msg.m = 0.091915758202;
    msg.n = 0.875092675025;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.491479858329);
    msg.setSource(29892U);
    msg.setSourceEntity(102U);
    msg.setDestination(64790U);
    msg.setDestinationEntity(49U);
    msg.k = 0.553263206172;
    msg.m = 0.288525423253;
    msg.n = 0.654928883057;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.341593460159);
    msg.setSource(40787U);
    msg.setSourceEntity(218U);
    msg.setDestination(15955U);
    msg.setDestinationEntity(62U);
    msg.p = 0.194462392331;
    msg.i = 0.882988048778;
    msg.d = 0.147209908125;
    msg.a = 0.438636423912;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.23542828881);
    msg.setSource(31182U);
    msg.setSourceEntity(151U);
    msg.setDestination(50360U);
    msg.setDestinationEntity(195U);
    msg.p = 0.839900076258;
    msg.i = 0.943473201664;
    msg.d = 0.580158177091;
    msg.a = 0.297113285489;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.781514010023);
    msg.setSource(6080U);
    msg.setSourceEntity(30U);
    msg.setDestination(10344U);
    msg.setDestinationEntity(198U);
    msg.p = 0.372153335676;
    msg.i = 0.0538866227539;
    msg.d = 0.222794622953;
    msg.a = 0.323562312217;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.477515192262);
    msg.setSource(39591U);
    msg.setSourceEntity(126U);
    msg.setDestination(40450U);
    msg.setDestinationEntity(242U);
    msg.op = 144U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.752257117548);
    msg.setSource(53273U);
    msg.setSourceEntity(168U);
    msg.setDestination(40425U);
    msg.setDestinationEntity(38U);
    msg.op = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.178696103319);
    msg.setSource(38777U);
    msg.setSourceEntity(222U);
    msg.setDestination(2150U);
    msg.setDestinationEntity(162U);
    msg.op = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.90447813008);
    msg.setSource(47743U);
    msg.setSourceEntity(242U);
    msg.setDestination(50355U);
    msg.setDestinationEntity(24U);
    msg.x = 0.427594667641;
    msg.y = 0.0508007738407;
    msg.z = 0.221955148086;
    msg.vx = 0.800543282125;
    msg.vy = 0.0662306444971;
    msg.vz = 0.25419071034;
    msg.ax = 0.666961348158;
    msg.ay = 0.650329273519;
    msg.az = 0.686446340785;
    msg.flags = 26380U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.961658272431);
    msg.setSource(50781U);
    msg.setSourceEntity(90U);
    msg.setDestination(34516U);
    msg.setDestinationEntity(91U);
    msg.x = 0.976977665474;
    msg.y = 0.925992080074;
    msg.z = 0.441197360261;
    msg.vx = 0.983418530157;
    msg.vy = 0.289579910775;
    msg.vz = 0.363544105326;
    msg.ax = 0.114600018546;
    msg.ay = 0.525929104519;
    msg.az = 0.967476203689;
    msg.flags = 52301U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.0583844246633);
    msg.setSource(57254U);
    msg.setSourceEntity(155U);
    msg.setDestination(19582U);
    msg.setDestinationEntity(12U);
    msg.x = 0.39637510998;
    msg.y = 0.724738088728;
    msg.z = 0.249094953776;
    msg.vx = 0.361923690597;
    msg.vy = 0.998011650877;
    msg.vz = 0.340305000575;
    msg.ax = 0.0702510085765;
    msg.ay = 0.981592764448;
    msg.az = 0.74512302866;
    msg.flags = 34978U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.820974063698);
    msg.setSource(54662U);
    msg.setSourceEntity(69U);
    msg.setDestination(13744U);
    msg.setDestinationEntity(156U);
    msg.value = 0.496830785518;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.626244177028);
    msg.setSource(58195U);
    msg.setSourceEntity(191U);
    msg.setDestination(42890U);
    msg.setDestinationEntity(73U);
    msg.value = 0.323207667314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.0666714859967);
    msg.setSource(25054U);
    msg.setSourceEntity(198U);
    msg.setDestination(1904U);
    msg.setDestinationEntity(21U);
    msg.value = 0.855224148084;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.361882563444);
    msg.setSource(26322U);
    msg.setSourceEntity(7U);
    msg.setDestination(32248U);
    msg.setDestinationEntity(219U);
    msg.timeout = 13871U;
    msg.lat = 0.331273996959;
    msg.lon = 0.68220906356;
    msg.z = 0.937904123489;
    msg.z_units = 73U;
    msg.speed = 0.582374801175;
    msg.speed_units = 164U;
    msg.roll = 0.137469364633;
    msg.pitch = 0.875410729249;
    msg.yaw = 0.236051890639;
    msg.custom.assign("MDRSHNSKLQKJIPJXHU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.958922895092);
    msg.setSource(31614U);
    msg.setSourceEntity(221U);
    msg.setDestination(18407U);
    msg.setDestinationEntity(9U);
    msg.timeout = 22890U;
    msg.lat = 0.177353318891;
    msg.lon = 0.938908750127;
    msg.z = 0.652874365822;
    msg.z_units = 12U;
    msg.speed = 0.584406981191;
    msg.speed_units = 247U;
    msg.roll = 0.454451305794;
    msg.pitch = 0.346534771462;
    msg.yaw = 0.105973946792;
    msg.custom.assign("HHAUGRTOHWKLQXBGLSMGIJGDGEQMVOVCTJNXRWFAWCBSVQPDNPMIFEFMDJHOYLNODZBFUWYZUKYIBLPKKGIBTFHULUBEXAREHJYGHICUKYPXLHOFANSSOVOCJUSKRBUKECDXZMYIIFMIWEEG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.738441481741);
    msg.setSource(55288U);
    msg.setSourceEntity(179U);
    msg.setDestination(17945U);
    msg.setDestinationEntity(227U);
    msg.timeout = 48666U;
    msg.lat = 0.449242653738;
    msg.lon = 0.967273968079;
    msg.z = 0.520262585624;
    msg.z_units = 234U;
    msg.speed = 0.130195108836;
    msg.speed_units = 56U;
    msg.roll = 0.96410628313;
    msg.pitch = 0.692709919562;
    msg.yaw = 0.368909164569;
    msg.custom.assign("RONTJQBVQNQIXAPQEKDLXKGWBIQOVFORPPQMMPWDTYAEFSXMFWKQJAPCK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.647349987292);
    msg.setSource(64571U);
    msg.setSourceEntity(49U);
    msg.setDestination(41230U);
    msg.setDestinationEntity(85U);
    msg.timeout = 3804U;
    msg.lat = 0.808475234819;
    msg.lon = 0.350240211924;
    msg.z = 0.0845222115424;
    msg.z_units = 186U;
    msg.speed = 0.971198962267;
    msg.speed_units = 123U;
    msg.duration = 6789U;
    msg.radius = 0.579333496379;
    msg.flags = 100U;
    msg.custom.assign("TVVLUTXOHHZNQKWCIYMXIGMJFGVSRVMINZDHWNGHFYATSRBUHIDUZBVOHLAJSOFOQKQQNBPBTPMOAK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.904870767539);
    msg.setSource(38403U);
    msg.setSourceEntity(123U);
    msg.setDestination(63013U);
    msg.setDestinationEntity(245U);
    msg.timeout = 1969U;
    msg.lat = 0.703337427649;
    msg.lon = 0.784556780937;
    msg.z = 0.153993192339;
    msg.z_units = 248U;
    msg.speed = 0.435139487948;
    msg.speed_units = 94U;
    msg.duration = 45401U;
    msg.radius = 0.381676581873;
    msg.flags = 154U;
    msg.custom.assign("ZCLKJXETZKTEZZEHXEOHBXOFQENSCRPMAPJMEDCLRGNSGJLDJWQSHFGAYKFXNLKWYNIVYWHGPSUWWMRJQRDQAUAETPXMCIOCLPXCKTOIFQNYT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.480416244163);
    msg.setSource(25059U);
    msg.setSourceEntity(131U);
    msg.setDestination(7099U);
    msg.setDestinationEntity(157U);
    msg.timeout = 19961U;
    msg.lat = 0.00484755744346;
    msg.lon = 0.943098675746;
    msg.z = 0.783640493734;
    msg.z_units = 160U;
    msg.speed = 0.405742908272;
    msg.speed_units = 118U;
    msg.duration = 56511U;
    msg.radius = 0.902714797747;
    msg.flags = 189U;
    msg.custom.assign("WHJXUWIGRLZAOHIVWEGYIFKQMYGNSUAMONGTQTEMDYIQIQJCQWSOTCYMRMMIGZZVAKJKLEZZPSCFRPJXNGVNCLINATMGXKSYA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.588379502784);
    msg.setSource(59712U);
    msg.setSourceEntity(243U);
    msg.setDestination(11662U);
    msg.setDestinationEntity(202U);
    msg.custom.assign("CGXKXELYBWOBJHMPYUMRUSYUTBBXGAJZFGRNIAVSFDJNDTSGIZQOCKAPHOYZWIMWFRFHBLGLNGHXTVDLBZZTTSNYRSCTOZYPSJUEMVJMHSDNECZEFFNFILOPKEMRUPHLZYGAKAQXMNVKSBDGARALJQQTUIIFNOJRQWOBXDMFUWSOZIEVBNXCYYTCBKUIXQAJLCQITQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.725731170071);
    msg.setSource(38841U);
    msg.setSourceEntity(158U);
    msg.setDestination(27685U);
    msg.setDestinationEntity(186U);
    msg.custom.assign("JGPKRZPNWZJCJFHILOZMQSBQPGMTXDUVSFLJXPWUAGJMTELI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.110117269873);
    msg.setSource(54866U);
    msg.setSourceEntity(51U);
    msg.setDestination(55096U);
    msg.setDestinationEntity(105U);
    msg.custom.assign("BJRCHJTNKAQTILXXKRITBGIQNFJPSBJUNFGHQDWISRYOPIGAEKUZGOXZIRQXUE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.752655472441);
    msg.setSource(53362U);
    msg.setSourceEntity(145U);
    msg.setDestination(16500U);
    msg.setDestinationEntity(146U);
    msg.timeout = 56668U;
    msg.lat = 0.399332192372;
    msg.lon = 0.873203304924;
    msg.z = 0.121846740781;
    msg.z_units = 134U;
    msg.duration = 59452U;
    msg.speed = 0.940693371456;
    msg.speed_units = 34U;
    msg.type = 35U;
    msg.radius = 0.32020277175;
    msg.length = 0.961716843455;
    msg.bearing = 0.813815942349;
    msg.direction = 181U;
    msg.custom.assign("AMQUNHAYCOWTMOPNXUCGPXWPWBQWSHFCDVUAIKWBULKYUOBFQJJTTHUVDVVRGTWJQAFIKSUZMTHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.236296398541);
    msg.setSource(24153U);
    msg.setSourceEntity(204U);
    msg.setDestination(45461U);
    msg.setDestinationEntity(66U);
    msg.timeout = 13852U;
    msg.lat = 0.316202568176;
    msg.lon = 0.82960257869;
    msg.z = 0.93210391223;
    msg.z_units = 245U;
    msg.duration = 39583U;
    msg.speed = 0.998021231678;
    msg.speed_units = 198U;
    msg.type = 172U;
    msg.radius = 0.691767897172;
    msg.length = 0.360529951696;
    msg.bearing = 0.455600165485;
    msg.direction = 227U;
    msg.custom.assign("CEVEDBEVJJNIKZUYORYUUZPQMGTTFQVKMDVROHTWMYCQXNYPFEPIQSKCLFZNJPWFZHQPQJZRMMNXKWDEQAURLFLISRFUAYYPMHTAWHBYPAOMCFNCJAHOIGYIZJXBZKWTHLGCIQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.881169898546);
    msg.setSource(49633U);
    msg.setSourceEntity(29U);
    msg.setDestination(39494U);
    msg.setDestinationEntity(223U);
    msg.timeout = 31661U;
    msg.lat = 0.11602506451;
    msg.lon = 0.774557502679;
    msg.z = 0.0598428658231;
    msg.z_units = 254U;
    msg.duration = 5354U;
    msg.speed = 0.0571131875835;
    msg.speed_units = 66U;
    msg.type = 9U;
    msg.radius = 0.778190155661;
    msg.length = 0.0268986791302;
    msg.bearing = 0.73190243727;
    msg.direction = 155U;
    msg.custom.assign("UHVFZGCANRTJILJCVPVPAPEYEQQPRUEMGGYKJQUMOAOXHYTQWZCJAMDGVXJUWDNORSSVFJVMOFJMFYXBAHLADPNKWMYSLKALWCN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.449296420613);
    msg.setSource(12128U);
    msg.setSourceEntity(165U);
    msg.setDestination(47723U);
    msg.setDestinationEntity(83U);
    msg.duration = 1795U;
    msg.custom.assign("WVSXTKMEJJXKQVHIKSFLMOGLTNLZRJJUHIZSQGNEYNCNPOZWZHSURADOMTDURAQMCRGNZWYPKNTIZQUKYIBXXBHITHGIFPVOMWCDFMZEHKKPDDNOPADBLQWRCWMBUOFFPYPYAFCSLSDQSOTRLJEIUYBPRLXXPYURTUZUEMKXGWRZAEQJAXDKSCZBRULEBGI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.277888908379);
    msg.setSource(14228U);
    msg.setSourceEntity(90U);
    msg.setDestination(24905U);
    msg.setDestinationEntity(251U);
    msg.duration = 52291U;
    msg.custom.assign("KXJHWDVBARPQVZLOJDPMZZGZZHPFZEFHFQAL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.300290512525);
    msg.setSource(36372U);
    msg.setSourceEntity(105U);
    msg.setDestination(13005U);
    msg.setDestinationEntity(127U);
    msg.duration = 54914U;
    msg.custom.assign("BWMXGGXWYLZILMOZYVPJHWNQPGJREFXMTUHTTOSQRAXULRQVMJXWDGBKNKECPHFNXNETGIQGVOUYQTTFMWLDFVRTSIUDWZADEWHDYKSGRPHQCRAFASACNUJMTOAQEZMDBWISLMTHUTGPOZIDHYIHBJXZVXXLEFOWUFPKZDEKHYAASBVUPEDJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.0504946746782);
    msg.setSource(28924U);
    msg.setSourceEntity(145U);
    msg.setDestination(5408U);
    msg.setDestinationEntity(12U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.707032196092;
    msg.control.set(tmp_msg_0);
    msg.duration = 31243U;
    msg.custom.assign("WWFZIAHLSSCXMCVBGTRNVDDHPHYFJJJOKZTQXJHXZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.80443838529);
    msg.setSource(7390U);
    msg.setSourceEntity(39U);
    msg.setDestination(24773U);
    msg.setDestinationEntity(171U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3112052602U;
    tmp_msg_0.start_lat = 0.000712080355073;
    tmp_msg_0.start_lon = 0.142985121859;
    tmp_msg_0.start_z = 0.823759427393;
    tmp_msg_0.start_z_units = 59U;
    tmp_msg_0.end_lat = 0.41863138292;
    tmp_msg_0.end_lon = 0.675940801128;
    tmp_msg_0.end_z = 0.564349370877;
    tmp_msg_0.end_z_units = 96U;
    tmp_msg_0.speed = 0.0050340766816;
    tmp_msg_0.speed_units = 107U;
    tmp_msg_0.lradius = 0.803138024583;
    tmp_msg_0.flags = 66U;
    msg.control.set(tmp_msg_0);
    msg.duration = 36979U;
    msg.custom.assign("YEYCXVVAJVJPMWGIZOJNMIUUNIKMZJTTOPTPXBKDYPTGFSUUONYMAEEKEWXLIUZQARGRBJQVSGDSHMGZKHYDCVOWOFYODLQCMAXQAMDGMHIBFIFKTADXDRUDBDTYAUHHDTYBJRZWONGUVYUAIXRHZARENOQYQFQSHLISOQCNCBNKFPRTXPJKIZVBGRKPSLRLESSGWHMCXWBSQJBHUWZCBNLREFLSVPNFCJCKWGTJVLEFTMWXXWZEVNAF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.125338217421);
    msg.setSource(15857U);
    msg.setSourceEntity(52U);
    msg.setDestination(40753U);
    msg.setDestinationEntity(17U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.557179062651;
    tmp_msg_0.z_units = 15U;
    msg.control.set(tmp_msg_0);
    msg.duration = 31996U;
    msg.custom.assign("CEMRKPVUXZGNKSHZPYNBUSRKYZEIQTXTTJSVHNBQXCDCRZWVCTGORQBJNOIAWSDVJEBTJWWYKVZVEWAORSDHGY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.277010987426);
    msg.setSource(4531U);
    msg.setSourceEntity(101U);
    msg.setDestination(55804U);
    msg.setDestinationEntity(122U);
    msg.timeout = 55630U;
    msg.lat = 0.909659027779;
    msg.lon = 0.261420381686;
    msg.z = 0.969954325159;
    msg.z_units = 203U;
    msg.speed = 0.0765613443934;
    msg.speed_units = 195U;
    msg.bearing = 0.728737654214;
    msg.cross_angle = 0.815145146532;
    msg.width = 0.607306470294;
    msg.length = 0.117890830837;
    msg.hstep = 0.386801962233;
    msg.coff = 75U;
    msg.alternation = 67U;
    msg.flags = 157U;
    msg.custom.assign("TKEKJSLYNUBJHYYQMFXOKBAECGSWHLUQDZUSEYVWWPOEZIFDJCETUPJOMAGMACGGHFZIAMVQGRCBQEAMUSWBFTOJNMPNULRBOVRXFGHRWWXVCFOOFXPQDNPPJHTQZYCQLMUKDALZCDJVSTH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.335626714313);
    msg.setSource(30465U);
    msg.setSourceEntity(136U);
    msg.setDestination(20205U);
    msg.setDestinationEntity(47U);
    msg.timeout = 51040U;
    msg.lat = 0.775059949193;
    msg.lon = 0.137352991523;
    msg.z = 0.739104006761;
    msg.z_units = 211U;
    msg.speed = 0.676151970696;
    msg.speed_units = 131U;
    msg.bearing = 0.782558878409;
    msg.cross_angle = 0.945472146924;
    msg.width = 0.110060663;
    msg.length = 0.000197250525476;
    msg.hstep = 0.769016763676;
    msg.coff = 104U;
    msg.alternation = 191U;
    msg.flags = 107U;
    msg.custom.assign("KVILOQJASQOJKOEMEBPDNDGETWDLWYUSZGHHZDJLXNUWADULFNZCATWPDHJRVXBJOLGYVGXVZITNCIYBHFUCXOFNZZVWHXXMOBYVKYBPIMRUYSPNGWL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.616428173128);
    msg.setSource(34708U);
    msg.setSourceEntity(52U);
    msg.setDestination(9132U);
    msg.setDestinationEntity(239U);
    msg.timeout = 18185U;
    msg.lat = 0.212257932323;
    msg.lon = 0.936941219779;
    msg.z = 0.856473511906;
    msg.z_units = 22U;
    msg.speed = 0.804327660155;
    msg.speed_units = 139U;
    msg.bearing = 0.297687567855;
    msg.cross_angle = 0.665054346177;
    msg.width = 0.812948371177;
    msg.length = 0.203079392569;
    msg.hstep = 0.91359873677;
    msg.coff = 120U;
    msg.alternation = 55U;
    msg.flags = 4U;
    msg.custom.assign("GBNZNEKWDHOPJADKVXBCQHMNPWFRPCDGWHXALZEJLHASEANQOBGURZZTBIXMPBIWURPCLJMOBYSQKFVAPTTUHTAEPZHGFCPPWRUKWEFYNNMDJKHHKQDIPFJUCQMTGIILRVBVUUOFUQABOYSYTWCGTXGWZSBREMSVMQKRIAJOBXZLICU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.315432164364);
    msg.setSource(56990U);
    msg.setSourceEntity(223U);
    msg.setDestination(44227U);
    msg.setDestinationEntity(192U);
    msg.timeout = 43925U;
    msg.lat = 0.551508120626;
    msg.lon = 0.966154077183;
    msg.z = 0.807617659443;
    msg.z_units = 221U;
    msg.speed = 0.0155101044024;
    msg.speed_units = 143U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.892880399039;
    tmp_msg_0.y = 0.0746796290227;
    tmp_msg_0.z = 0.434936870291;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RAXOQFHFQMYFSSDXHXBYJIYWZGXYRLAALDBAFWBSTKOZISOCXZOMMPEHXAQMPNJFTKLNTCAOVPWBTGILJBWLNBSAOPOZMGFQRHBRLZRJMQUXJDPCREVYTSIDVVBCHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.244196310404);
    msg.setSource(41362U);
    msg.setSourceEntity(246U);
    msg.setDestination(20310U);
    msg.setDestinationEntity(221U);
    msg.timeout = 25509U;
    msg.lat = 0.391046420427;
    msg.lon = 0.462612045507;
    msg.z = 0.750930396681;
    msg.z_units = 216U;
    msg.speed = 0.850820206113;
    msg.speed_units = 201U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.629431580109;
    tmp_msg_0.y = 0.052093056809;
    tmp_msg_0.z = 0.403071188107;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RHATOZXNWLESIRGLSKLDNWLKTIVFPHJGLLCDUBBZFFOAIZWXNHIQXWFQOGYUICFKSCQXXPQMYGEBFOYOKVCZHAYLEIXLEZWNQUGZISXADQVRLUQDCTGEOZPOXFSFTMUTRBNPMMTRAATTKREFCYWVQOVYKYMHPOESBJURKSFGICQADJUNCVMUZDNOHEVPBBDZMJWNBUVAWBHCREJQUPKVSWGMRLJJJRHVYSSAWJKYJAYDTGPHPGICBKNMZED");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.186605972123);
    msg.setSource(46006U);
    msg.setSourceEntity(7U);
    msg.setDestination(28899U);
    msg.setDestinationEntity(110U);
    msg.timeout = 10906U;
    msg.lat = 0.210906437586;
    msg.lon = 0.628633239756;
    msg.z = 0.247118060003;
    msg.z_units = 185U;
    msg.speed = 0.8862729166;
    msg.speed_units = 182U;
    msg.custom.assign("XOASYNJLKJVCFTOAXQAPSSWO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.878744364176);
    msg.setSource(2734U);
    msg.setSourceEntity(250U);
    msg.setDestination(61817U);
    msg.setDestinationEntity(86U);
    msg.x = 0.0361135420793;
    msg.y = 0.794080572562;
    msg.z = 0.945541103861;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.050951094343);
    msg.setSource(4110U);
    msg.setSourceEntity(74U);
    msg.setDestination(28850U);
    msg.setDestinationEntity(181U);
    msg.x = 0.567041220782;
    msg.y = 0.533644215406;
    msg.z = 0.399887126135;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.929160536771);
    msg.setSource(45881U);
    msg.setSourceEntity(160U);
    msg.setDestination(50216U);
    msg.setDestinationEntity(0U);
    msg.x = 0.902025300898;
    msg.y = 0.90321361927;
    msg.z = 0.502517679939;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.854233760817);
    msg.setSource(1558U);
    msg.setSourceEntity(210U);
    msg.setDestination(39467U);
    msg.setDestinationEntity(253U);
    msg.timeout = 30557U;
    msg.lat = 0.720066935351;
    msg.lon = 0.330254823366;
    msg.z = 0.0731860953651;
    msg.z_units = 7U;
    msg.amplitude = 0.588547988926;
    msg.pitch = 0.974884053634;
    msg.speed = 0.909311518832;
    msg.speed_units = 101U;
    msg.custom.assign("MJJIYGCNKAKQMCTEGHFDMCGJLYEITKKBCOPDQMUSPZISRKTIRSQHGZGLPYWMFWXZPWTYZNOIQIJQEAMONOVQLDQJNSFTUVHDARTOWLYSNZALGXZBZRYECNTLCRWEPSMVQEXVXVGUTAUYBJDWZSTNDKL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.425125531503);
    msg.setSource(16999U);
    msg.setSourceEntity(131U);
    msg.setDestination(10612U);
    msg.setDestinationEntity(100U);
    msg.timeout = 26502U;
    msg.lat = 0.193588522006;
    msg.lon = 0.173495552125;
    msg.z = 0.606405878586;
    msg.z_units = 169U;
    msg.amplitude = 0.900606593059;
    msg.pitch = 0.57847236346;
    msg.speed = 0.745115757934;
    msg.speed_units = 22U;
    msg.custom.assign("BFEACYCHYQQRTINPPPAVYWDQNCSXDDLYUCUOJMUFFXMIWSGDDNIZQW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.319356071945);
    msg.setSource(27454U);
    msg.setSourceEntity(216U);
    msg.setDestination(53775U);
    msg.setDestinationEntity(185U);
    msg.timeout = 16572U;
    msg.lat = 0.678860555229;
    msg.lon = 0.0593570830534;
    msg.z = 0.0136792962566;
    msg.z_units = 69U;
    msg.amplitude = 0.480427803257;
    msg.pitch = 0.221609609126;
    msg.speed = 0.68307108736;
    msg.speed_units = 151U;
    msg.custom.assign("AGVVDLOFQTHPPIWZLWICUKCHTHMRKDQDFEFYCYCDFNFLHNYTTALVEJBZTMRXEYSXWAJNPJZGASGCLZEOSEAUASBU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.528265058511);
    msg.setSource(63290U);
    msg.setSourceEntity(210U);
    msg.setDestination(861U);
    msg.setDestinationEntity(233U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.902738692926);
    msg.setSource(32567U);
    msg.setSourceEntity(152U);
    msg.setDestination(23020U);
    msg.setDestinationEntity(1U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.470125315866);
    msg.setSource(31320U);
    msg.setSourceEntity(106U);
    msg.setDestination(50399U);
    msg.setDestinationEntity(28U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.497220467413);
    msg.setSource(19221U);
    msg.setSourceEntity(56U);
    msg.setDestination(38382U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.791242581276;
    msg.lon = 0.539786518355;
    msg.z = 0.910892552333;
    msg.z_units = 49U;
    msg.radius = 0.775197977353;
    msg.duration = 13617U;
    msg.speed = 0.375927501316;
    msg.speed_units = 186U;
    msg.custom.assign("YAASUWWRTCWQLIWPBFURSNGZGJVGZMCCJQPWHOJMCYBDTDNSQWRXTNGFOHLMKSPAXZAJYCBPYLUEWEVHF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.903281315176);
    msg.setSource(9815U);
    msg.setSourceEntity(148U);
    msg.setDestination(12478U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.260026938803;
    msg.lon = 0.800047298736;
    msg.z = 0.970928808264;
    msg.z_units = 163U;
    msg.radius = 0.291733509692;
    msg.duration = 55923U;
    msg.speed = 0.0954487499279;
    msg.speed_units = 106U;
    msg.custom.assign("POKSVIAWXBZOUBKTLQMEJJYCXIBEQQYOQULJBJOPQKZP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.108272884513);
    msg.setSource(47535U);
    msg.setSourceEntity(72U);
    msg.setDestination(55791U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.264797634293;
    msg.lon = 0.266754935101;
    msg.z = 0.0992232449281;
    msg.z_units = 5U;
    msg.radius = 0.207071349615;
    msg.duration = 34458U;
    msg.speed = 0.995435544187;
    msg.speed_units = 198U;
    msg.custom.assign("BRDYRFGIZKBETXCJNVITBDWYMAGHOZURIIUHANKZNIBAPXATSHPZDWQOICGHEDNQFBITUATJEXLCAPEYEKMQCVYNVR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.986499825882);
    msg.setSource(15467U);
    msg.setSourceEntity(202U);
    msg.setDestination(27355U);
    msg.setDestinationEntity(113U);
    msg.timeout = 25455U;
    msg.flags = 13U;
    msg.lat = 0.857459252125;
    msg.lon = 0.157606854867;
    msg.start_z = 0.154903828521;
    msg.start_z_units = 250U;
    msg.end_z = 0.900438887591;
    msg.end_z_units = 54U;
    msg.radius = 0.994873557965;
    msg.speed = 0.642639930908;
    msg.speed_units = 17U;
    msg.custom.assign("ISSSAZCMOKCRYPVUSJKIBWYOJHEJHLQZXPWNCKYXQSCFWKBXCAITOFEWVPCTHGIELOGRGLMYIMNBQVVRDXCZOPLLNHOJQQSAZAFTBPSLKMZJMTLNNHAUMHUASYZPIIYUSXRBEVLCKKILRDTKJBXQDOTHIFYGFDVCVNGKVRGRYEOBT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.00512194007239);
    msg.setSource(10026U);
    msg.setSourceEntity(92U);
    msg.setDestination(2339U);
    msg.setDestinationEntity(106U);
    msg.timeout = 29305U;
    msg.flags = 244U;
    msg.lat = 0.159876891937;
    msg.lon = 0.781286329318;
    msg.start_z = 0.039755325809;
    msg.start_z_units = 81U;
    msg.end_z = 0.354323756551;
    msg.end_z_units = 151U;
    msg.radius = 0.147081950137;
    msg.speed = 0.698166332158;
    msg.speed_units = 209U;
    msg.custom.assign("ZTLFPOUQZMWTBNXSYYOPJZONQAOZSLZZAVXBSISDVLHKVAJBIWODPKYFPDDMFVAKUSQDEUHPBJQSABOXDDAIFPCWEUVENTNBHJWPYKDWPJFHLCYKGQGITCTRMQQCOXQMOGBNAXTRDJEMMBDNRKHIIEWIOVAZHLYXRVVQGYWURUXFEVTCRMZSLZTJUCILKRHEXWFKPJBHILEOGRNUEGNFCKMQHNSMYY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.393876869389);
    msg.setSource(1829U);
    msg.setSourceEntity(100U);
    msg.setDestination(35541U);
    msg.setDestinationEntity(93U);
    msg.timeout = 31674U;
    msg.flags = 212U;
    msg.lat = 0.786748489441;
    msg.lon = 0.427546875505;
    msg.start_z = 0.910337231843;
    msg.start_z_units = 253U;
    msg.end_z = 0.654082808817;
    msg.end_z_units = 19U;
    msg.radius = 0.891177895134;
    msg.speed = 0.516594321385;
    msg.speed_units = 248U;
    msg.custom.assign("BQAOVBPEUNSEWOZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.886748380717);
    msg.setSource(49335U);
    msg.setSourceEntity(36U);
    msg.setDestination(13611U);
    msg.setDestinationEntity(24U);
    msg.timeout = 64993U;
    msg.lat = 0.346707151095;
    msg.lon = 0.419977430948;
    msg.z = 0.925304380815;
    msg.z_units = 31U;
    msg.speed = 0.862468405296;
    msg.speed_units = 68U;
    msg.custom.assign("ZASNTZMUYBKDJNLELMIBFVYQRSJATIVFFQHMYIROVRRAJCZFQGCRBTHSXHWGONPIBSOPDDFVLPWELSNWUGHPJRFKWSVCQEKWUSKJMFTZGCYYANKEPCUSBMOJUBNQLRDPWEETGVDUNQGHBQVPZZHRXAYGIYUOMCHFLBJMOTZPZXLJQEWTBEWJSFKKSTAXVTDAOFXMJYYY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.917164633622);
    msg.setSource(11044U);
    msg.setSourceEntity(65U);
    msg.setDestination(60352U);
    msg.setDestinationEntity(46U);
    msg.timeout = 25038U;
    msg.lat = 0.849382262342;
    msg.lon = 0.134346488258;
    msg.z = 0.785138707977;
    msg.z_units = 22U;
    msg.speed = 0.508975283724;
    msg.speed_units = 133U;
    msg.custom.assign("VDRYGLAXCWCMFGGNWPAXBJMDSJIHPDGFEQMSSBRLIWNPRTMAZVCKBWDPSIQOJOWYDFFUHCCCLNROVMKGOZALLQMTWRZSOTKEXRPDXOLOFHTSDNQHLSHEVULYBFKEYGAYFZUHCEFJRBJTIUGNVYZEPAHWKUUQIAUQMKVIZTANIVPBAREQPVIBW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.00998341767507);
    msg.setSource(59075U);
    msg.setSourceEntity(42U);
    msg.setDestination(205U);
    msg.setDestinationEntity(38U);
    msg.timeout = 48708U;
    msg.lat = 0.143411884045;
    msg.lon = 0.376689071781;
    msg.z = 0.204018672938;
    msg.z_units = 112U;
    msg.speed = 0.70388905261;
    msg.speed_units = 50U;
    msg.custom.assign("TDGEVPMNCAPCHYFODYILASPXSRAHRKFLXGWSNMLMKCZONKXSLZADOGVZRNGCUHCTCBUWZLPCZGHAEYSKPDASKZSBGXQWLBIHKKKSQQYEEBXIINOFHTHYFDAQGODKUWGVTCZBWLIPQZODPCENBPFHYGQVLENXYUQTRWXYTMTTFZIGJSM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.487937317636);
    msg.setSource(36349U);
    msg.setSourceEntity(110U);
    msg.setDestination(31487U);
    msg.setDestinationEntity(142U);
    msg.x = 0.347843362837;
    msg.y = 0.901319854486;
    msg.z = 0.980564608936;
    msg.t = 0.255758485379;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.385553524791);
    msg.setSource(37624U);
    msg.setSourceEntity(174U);
    msg.setDestination(44219U);
    msg.setDestinationEntity(245U);
    msg.x = 0.133146004372;
    msg.y = 0.272700263476;
    msg.z = 0.866196952269;
    msg.t = 0.0799207519591;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.755002442453);
    msg.setSource(62425U);
    msg.setSourceEntity(166U);
    msg.setDestination(33369U);
    msg.setDestinationEntity(72U);
    msg.x = 0.611912146742;
    msg.y = 0.372826860262;
    msg.z = 0.727818362584;
    msg.t = 0.280484570469;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.698811706586);
    msg.setSource(47452U);
    msg.setSourceEntity(99U);
    msg.setDestination(55209U);
    msg.setDestinationEntity(49U);
    msg.timeout = 41874U;
    msg.name.assign("RRIUHXJPWHPKQHRLGKMSWHCQFGUOEOETSOHVUBGYTYFBWAUKUIZZKYSKESPQRFYZNADBLSYFSVTEVXZURPGMOMHRPHSIQJVTPTSMLQOALJANAJUAEZXPTEQHILPOJZKWWUZIFTYXDDQVNBJXVCHEMCKJNRVPTLYBNFYXDILFSPGWGMDCCORXQCLFLYVFMIYJZXWANIOOVCS");
    msg.custom.assign("DIUESNREXNWARRNOXFNEJGKUDHFIXVZETWOYCQZZQSJVFAFKIMDMEKSNWFPJCTRZRNBHAOGUCTCQLLVWFYQYVMMHGMRUQZEXSIIVPDKMYPDWXAHYLHLNXZHDBMGTZAKOWVAQQYTEWKUPHTDSSQFNDUTZOIRCLXBHGBDWLS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.795274525307);
    msg.setSource(9923U);
    msg.setSourceEntity(224U);
    msg.setDestination(37044U);
    msg.setDestinationEntity(160U);
    msg.timeout = 59791U;
    msg.name.assign("NDCMZPTIYWMTMJVDQVOJHRMZWTFMKSLHQOBLYDXTFSWBLOCELIHJFQQKKVXGSBNTSVONTOSROQZIDKAPW");
    msg.custom.assign("LQOZOVBQKYWRTDLOWVOXNWVGAAYNEEMMTRZDCPSPKBWTFZLDXDFNGPHUYASSXNQNZNQHHVGRYEOQITYVPSZEEULPPUILOPJWSAWDUMNISDHBGGICSYMCIDYTBSUTDQIJXUZJOJHVSBIHNHKEXKLFXKFHMJJRQLDTCLFLJWTWUVCFLDEMFPUEARCWZCYGZKWOBGKVXBPIMAERQJJYZCKRXGCSFMAUBBHIQXHEFFAAIAJVOKNR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.729318523374);
    msg.setSource(55581U);
    msg.setSourceEntity(65U);
    msg.setDestination(29131U);
    msg.setDestinationEntity(239U);
    msg.timeout = 38721U;
    msg.name.assign("LIEYKUDAZHTYLXROBACXZBKMLCDFBESKOWKUQHIPSHGJQUPPTIGJQCCRLZRMADNJGSIBUAVRLJYWXQXKYAICIIEZHCFANOKQLYOWSGNZOFTVNOWMUEPWX");
    msg.custom.assign("PLXJAPPRBGKWDIZLOCJSPNUJDT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.364114917831);
    msg.setSource(34897U);
    msg.setSourceEntity(213U);
    msg.setDestination(3495U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.798442211857;
    msg.lon = 0.23207723697;
    msg.z = 0.37128482273;
    msg.z_units = 206U;
    msg.speed = 0.274935542865;
    msg.speed_units = 131U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.916218787392;
    tmp_msg_0.y = 0.0909327548759;
    tmp_msg_0.z = 0.990696252935;
    tmp_msg_0.t = 0.627649850817;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 32535U;
    tmp_msg_1.off_x = 0.69847733838;
    tmp_msg_1.off_y = 0.637389315379;
    tmp_msg_1.off_z = 0.0799298127499;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.984704685788;
    msg.custom.assign("CBGODIFOIUARGIFFESIVFJVCZKTWKTUUGLOCZBEIKGKDZQAWLXAXLNADTNAMTTQBYPWPCOJLGBTYHXZMMSFUUZSHJOIFTCQXNGBEHVDSXIPGIEKLXOWOQRJHPQCODNMRWXURWHMTMCPNYCIEJHKVHJTVRWWQXAMSDYFVPSQLFPDMLENEJLUSSGSAZKDUAZPCVMV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.631174588031);
    msg.setSource(18454U);
    msg.setSourceEntity(104U);
    msg.setDestination(53403U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.839195881034;
    msg.lon = 0.744939679025;
    msg.z = 0.392751100295;
    msg.z_units = 27U;
    msg.speed = 0.922322666078;
    msg.speed_units = 46U;
    msg.start_time = 0.442454924957;
    msg.custom.assign("WYQCGUIZJXYYEFPCKTQQFSOEMTRLVLNOQOHAASJDPWDFEOHWMVXGXB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.2870079655);
    msg.setSource(57748U);
    msg.setSourceEntity(167U);
    msg.setDestination(45182U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.148834469887;
    msg.lon = 0.0294957021261;
    msg.z = 0.239200067556;
    msg.z_units = 130U;
    msg.speed = 0.484210351253;
    msg.speed_units = 96U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 12329U;
    tmp_msg_0.off_x = 0.854610409963;
    tmp_msg_0.off_y = 0.0440974902729;
    tmp_msg_0.off_z = 0.339377412944;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.418755879332;
    msg.custom.assign("EMPELOZWDRMMMZGXEDXITFBCUFHROKBATPYSMSFAJYQWPHVJGWXEIFNLVZKSKCGANJZDBCGWIHJHRGNSBXMWUNYBKKFVEPONLQVVKZPPLERWFACAOGNTXWHDNLLSOXKDCKNGUWTEOYHSVLYQHOFRKSVSWOITMDRTLUZPCMNUIUTAFRUQCOIYJDTPEBFAMDWLMHQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.646607031569);
    msg.setSource(64808U);
    msg.setSourceEntity(89U);
    msg.setDestination(42893U);
    msg.setDestinationEntity(209U);
    msg.vid = 45255U;
    msg.off_x = 0.0637119475853;
    msg.off_y = 0.77626611274;
    msg.off_z = 0.419876681008;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.262900949762);
    msg.setSource(19485U);
    msg.setSourceEntity(222U);
    msg.setDestination(51337U);
    msg.setDestinationEntity(199U);
    msg.vid = 17205U;
    msg.off_x = 0.834412985776;
    msg.off_y = 0.34081296408;
    msg.off_z = 0.590018237726;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.370809520156);
    msg.setSource(14629U);
    msg.setSourceEntity(163U);
    msg.setDestination(10991U);
    msg.setDestinationEntity(191U);
    msg.vid = 22011U;
    msg.off_x = 0.626969629877;
    msg.off_y = 0.336953987546;
    msg.off_z = 0.117044987342;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.904524005397);
    msg.setSource(4953U);
    msg.setSourceEntity(195U);
    msg.setDestination(34219U);
    msg.setDestinationEntity(92U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.874100612054);
    msg.setSource(48572U);
    msg.setSourceEntity(169U);
    msg.setDestination(37901U);
    msg.setDestinationEntity(159U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.0909401542329);
    msg.setSource(3838U);
    msg.setSourceEntity(128U);
    msg.setDestination(42981U);
    msg.setDestinationEntity(175U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.819884043022);
    msg.setSource(60069U);
    msg.setSourceEntity(242U);
    msg.setDestination(48899U);
    msg.setDestinationEntity(19U);
    msg.mid = 1775U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.0730507105592);
    msg.setSource(41257U);
    msg.setSourceEntity(54U);
    msg.setDestination(33484U);
    msg.setDestinationEntity(217U);
    msg.mid = 8379U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.818566945127);
    msg.setSource(14805U);
    msg.setSourceEntity(11U);
    msg.setDestination(40433U);
    msg.setDestinationEntity(210U);
    msg.mid = 47260U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.0253883275282);
    msg.setSource(62694U);
    msg.setSourceEntity(198U);
    msg.setDestination(28112U);
    msg.setDestinationEntity(231U);
    msg.state = 120U;
    msg.eta = 45773U;
    msg.info.assign("GACTBTHEFBZRPRPVDJRLGGLTMLRMHJEHSZISTLYTK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.436346648182);
    msg.setSource(47231U);
    msg.setSourceEntity(192U);
    msg.setDestination(11658U);
    msg.setDestinationEntity(137U);
    msg.state = 120U;
    msg.eta = 37579U;
    msg.info.assign("NDTTBLFOLGDVOYUCAIKEFEWTJYFAXJLZQWYXHQULPGSMQDFXBDRZGSRWKWZIVYPXXJPMZPMQMJCVYTGNWKPGLEYANZVMKAHIFVITDFUPXRLSRBUNEINJHMEODSOTSKCOZCRONUIXOQZDNEGKJISHCKZWGUGMBAJMRAVRCQYBACVUPLRRTFCYCXSFSEBWHOYIHQSHDNXBMWSE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.82698442325);
    msg.setSource(34433U);
    msg.setSourceEntity(140U);
    msg.setDestination(62619U);
    msg.setDestinationEntity(33U);
    msg.state = 220U;
    msg.eta = 57990U;
    msg.info.assign("PUDYYZHXSNNPBYDSAQKRDNCIXFILWLLLBTZQVJUBZOEHQGHKGVFZAFAYRXZMNRRXMBUOBXHTVCASYCDICUNTEKUEIAIJRBTAOAXGVONRGEUMLGXCRDFPXFCSDUWSYVKTKNGWSEWRYFBGQHIGH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.741321783119);
    msg.setSource(48738U);
    msg.setSourceEntity(195U);
    msg.setDestination(14346U);
    msg.setDestinationEntity(22U);
    msg.system = 38321U;
    msg.duration = 49457U;
    msg.speed = 0.491302051739;
    msg.speed_units = 21U;
    msg.x = 0.113496247391;
    msg.y = 0.212654794578;
    msg.z = 0.412795764221;
    msg.z_units = 243U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.694287031875);
    msg.setSource(11569U);
    msg.setSourceEntity(133U);
    msg.setDestination(39937U);
    msg.setDestinationEntity(9U);
    msg.system = 50009U;
    msg.duration = 45160U;
    msg.speed = 0.358743504608;
    msg.speed_units = 202U;
    msg.x = 0.539240173187;
    msg.y = 0.775213197847;
    msg.z = 0.769924014216;
    msg.z_units = 143U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.195641072134);
    msg.setSource(11642U);
    msg.setSourceEntity(218U);
    msg.setDestination(51997U);
    msg.setDestinationEntity(201U);
    msg.system = 24104U;
    msg.duration = 24662U;
    msg.speed = 0.71133453871;
    msg.speed_units = 76U;
    msg.x = 0.927169389008;
    msg.y = 0.154789662488;
    msg.z = 0.728164947409;
    msg.z_units = 119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.776400463093);
    msg.setSource(33802U);
    msg.setSourceEntity(9U);
    msg.setDestination(22300U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.171123736508;
    msg.lon = 0.0212453674915;
    msg.speed = 0.614682689949;
    msg.speed_units = 243U;
    msg.duration = 29049U;
    msg.sys_a = 2945U;
    msg.sys_b = 12545U;
    msg.move_threshold = 0.880229933791;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.927370286922);
    msg.setSource(8754U);
    msg.setSourceEntity(82U);
    msg.setDestination(47692U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.26553589792;
    msg.lon = 0.216908262376;
    msg.speed = 0.169680025361;
    msg.speed_units = 31U;
    msg.duration = 56426U;
    msg.sys_a = 59895U;
    msg.sys_b = 20173U;
    msg.move_threshold = 0.528716659421;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.50088341524);
    msg.setSource(37244U);
    msg.setSourceEntity(69U);
    msg.setDestination(25760U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.433820254507;
    msg.lon = 0.237464793233;
    msg.speed = 0.0175148885811;
    msg.speed_units = 140U;
    msg.duration = 24135U;
    msg.sys_a = 13970U;
    msg.sys_b = 63675U;
    msg.move_threshold = 0.337324230489;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.474469023054);
    msg.setSource(60818U);
    msg.setSourceEntity(87U);
    msg.setDestination(2810U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.0193074291198;
    msg.lon = 0.0831011748296;
    msg.z = 0.132099697592;
    msg.z_units = 194U;
    msg.speed = 0.434563892798;
    msg.speed_units = 20U;
    msg.custom.assign("KXWTVTHQOMDKETANNKLGBQEDOMVLJHMPWBFLCZPDGIYVWWZDHHLNRDTCHKIAZBUVYYWTGHGJRJZAIQFBTGHYYOUAIFTSXRPPQPHNUJZDZKBCNRSDEPLZSBMDSUOZWDLRKYCFCLSVVNPCNXPXRFEAWSELOARADUIXRIGQROYUBVMJYXXJKEVMAFOCJQMWFGAHSLFPWWCQFIUPQUEYSKEMOKJEULCFJTXNKHYMTBNMIG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.507329607748);
    msg.setSource(19512U);
    msg.setSourceEntity(104U);
    msg.setDestination(46455U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.390295693748;
    msg.lon = 0.0116772094784;
    msg.z = 0.602519810746;
    msg.z_units = 56U;
    msg.speed = 0.660701328091;
    msg.speed_units = 92U;
    msg.custom.assign("ZLOITLCDQPDMSVPAYZHKHKUTCBIOBZGHRNWLENUGUYTZZOXAYSBGULFZECYPCUFUCURETHKTRCQGBERSVYHLFTLNPZPSKTIWYHGOCNDNPYXJVWCFDTJCWVVHPLESHGMQEJLMMCNSSAWDQKIEPGIVWOWYPRKNAND");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.824981758542);
    msg.setSource(43057U);
    msg.setSourceEntity(123U);
    msg.setDestination(20697U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.752588671304;
    msg.lon = 0.237525859273;
    msg.z = 0.953944139422;
    msg.z_units = 227U;
    msg.speed = 0.409051993012;
    msg.speed_units = 116U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0729165635956;
    tmp_msg_0.lon = 0.182580086221;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("WDSJNXKTQRSXKERSZZAXOSZCOFKBVDIHBVDMLPAMMGKMTCFAWHYTFSDFQYJWRPHZPNQCRRLBAUGOWSNEAZPNXZBGVORKHXFCYTYDDWEYGCEWOKRAUAFRNFWQJUAVQOUBX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.993192360965);
    msg.setSource(64845U);
    msg.setSourceEntity(134U);
    msg.setDestination(31645U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.246782827166;
    msg.lon = 0.333329019178;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.706141965347);
    msg.setSource(23762U);
    msg.setSourceEntity(84U);
    msg.setDestination(29315U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.365631143144;
    msg.lon = 0.176970900503;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.570789338351);
    msg.setSource(11028U);
    msg.setSourceEntity(230U);
    msg.setDestination(44600U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.149860536438;
    msg.lon = 0.268982912806;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.73013414718);
    msg.setSource(12578U);
    msg.setSourceEntity(104U);
    msg.setDestination(50711U);
    msg.setDestinationEntity(106U);
    msg.timeout = 59187U;
    msg.lat = 0.843701086031;
    msg.lon = 0.951978104707;
    msg.z = 0.601114247768;
    msg.z_units = 101U;
    msg.pitch = 0.167738788662;
    msg.amplitude = 0.748054580686;
    msg.duration = 50048U;
    msg.speed = 0.923315612552;
    msg.speed_units = 52U;
    msg.radius = 0.195801796637;
    msg.direction = 134U;
    msg.custom.assign("GDLTLCUCRHASWAZQZKFOKHAFCTHJSBMKBHPGSWBZGIOEQZVPWJZQEYRKNFAYCGDQVKBQXNYYDNJRMHRAYADTRDOUILUBNHSOONDNOYPCMJIYVLEKFOVKEZRJAU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.626693871856);
    msg.setSource(36735U);
    msg.setSourceEntity(117U);
    msg.setDestination(63194U);
    msg.setDestinationEntity(95U);
    msg.timeout = 33425U;
    msg.lat = 0.00738426115659;
    msg.lon = 0.492251396415;
    msg.z = 0.73805840689;
    msg.z_units = 236U;
    msg.pitch = 0.0149882922702;
    msg.amplitude = 0.760004064745;
    msg.duration = 15795U;
    msg.speed = 0.341314656443;
    msg.speed_units = 54U;
    msg.radius = 0.319261970793;
    msg.direction = 237U;
    msg.custom.assign("YNQYRDMEZXEEUAXAYFWKYNQJDSANFPFECWFKIEFPTPGLDJZYPSGBAQIQHUAVTRREGQBTBWWCZMUAJPXVJPLVACJHSJRVLFEONKYCNWLVGPZOXHOZHGVCAXQKETXRPSKBZBONUBOOWLA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.463311808244);
    msg.setSource(24081U);
    msg.setSourceEntity(54U);
    msg.setDestination(26226U);
    msg.setDestinationEntity(92U);
    msg.timeout = 44814U;
    msg.lat = 0.125145103786;
    msg.lon = 0.404432317827;
    msg.z = 0.383809724186;
    msg.z_units = 125U;
    msg.pitch = 0.396657264246;
    msg.amplitude = 0.805372144559;
    msg.duration = 34641U;
    msg.speed = 0.353958407062;
    msg.speed_units = 95U;
    msg.radius = 0.158823278507;
    msg.direction = 99U;
    msg.custom.assign("ABMWEKMORGLFMXASSUOXFDSTPFEYCSSPYIAVUSXCTPJMRWYUNOQYNZPRMUXOJDWAEFRNWHVATDDHQCLMPYAMYVLMDDWAWZXEYNXVVNSTJGIPCKMUQKTJICDTDFNNFTVOGZCMCWQEJUJECBVLFDNRAAATIHJQIFNZWGRBLYKEH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.0724759932875);
    msg.setSource(24833U);
    msg.setSourceEntity(103U);
    msg.setDestination(23263U);
    msg.setDestinationEntity(101U);
    msg.formation_name.assign("QTBDOPGEJLAZOEMYCQHYNYZBUKRIDFHTALZZGFRKGHSAMYXJJGWWIPLWWIXEXRQTRHMQUIGEXRZEZVVCDQGRFOAKHSKOHACDHCDDUBLCKCUFCTZPZCYQSJBMZEVDLPIANQQTMBLXGSFPUKSRTJUWIQMEGLGVPOXOKFNVALNXYKWWBOPNWIVHBCXHSWYBSTRNZRVNJNJHYMWPSNODPVEYIULYEKVO");
    msg.reference_frame = 76U;
    msg.custom.assign("DMGITXBGBSQJRDEDMCPCDJEJUEDXWTQXEBQMWJHNKSLYROZWYCAYXGTQHLYFPRXBOWTSPFXKZZWOMQKQSJOXRCFYEVIJOIUQOGMVEQKELNNCUILNIZPJINAMVITHFHCLBPRZGIDFYZYJAHKNGFNZSOCYGXPWFHPSTNIUMCAULZWEHQUODNSBVLVMOGLTJPFRQTODRAURLGBBVYKWADCSRVHPUDTPGMVVNELYAWTBHZWRFK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.730511332688);
    msg.setSource(29616U);
    msg.setSourceEntity(5U);
    msg.setDestination(63931U);
    msg.setDestinationEntity(191U);
    msg.formation_name.assign("HBIYUKNHSJVWYQMTYSFCDZFYTDDQCFQXJLJTPTIAREERICVGFHZTPZMZYSJO");
    msg.reference_frame = 124U;
    msg.custom.assign("QRZGFUOPBMUVMNROUQYXALIPKWUIYFORKFQVCCWPEQRGFHZZGSCCBYOENRHJWQXOAXZRMGHIQDRSQAEEKRGEPPBZIMKLOEBAAZLTPVXCLNBJTVDCZFSGDIUJSWSYDYTKMHBYUVHDLLRIPFRKQENCATIHBHHEKFWXHASNNNEFJNXXBITAWBMUJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.860997238344);
    msg.setSource(57202U);
    msg.setSourceEntity(36U);
    msg.setDestination(49475U);
    msg.setDestinationEntity(36U);
    msg.formation_name.assign("HEADRJHYEQZISQAPUINGWISIFOWZOFBEMHNTJXMCYSRAEVDXLLVVUBPDRQGSLDKCTXECJXBOKDRHCZUMMFQRZXBOMCSQNJXTYLYXMDEUYGEPLLAKLAPPQUTZWPBBSAZ");
    msg.reference_frame = 175U;
    msg.custom.assign("INITCHAEZGCRFMUHPIGOQCPRBMKXJZGNZLOTBFBYNIDDKRHWGJSBZTXEIPA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.318816883298);
    msg.setSource(11824U);
    msg.setSourceEntity(44U);
    msg.setDestination(43257U);
    msg.setDestinationEntity(250U);
    msg.group_name.assign("LQMIKRSDTKRHUDAVLSYHOAXVBGCQEDNOKODGFLWMWYRXNTVCFKHRZIDOHIXRKHCEJGNMJUASUZUWCRJVJNPSPOFRQLVAENIGQUIXPMJIHAZPVMDGLNFSTTSBFXMWSALEYKAWTVJULUPXODTGHQORHEGFCHNOBYZPSJIBZZFLBCXFHDEVQZPKIWAQQKDGRERUTEOEUALZIBCJPKWOKBNXTZWZGXSYYWPGYUMXVNVLYMDA");
    msg.formation_name.assign("IFWIJVZAOYLTRXXLMCUIJCLYMULIQKVTOYOBWCLSUGDFRZLMGVIBAHMTXSAWOPKNDZXEZHSQWABNUUNKUPODOQQIEKRFHCWYJDFXOFZOPRTJNSRPETYSCGMFZERBGOAVSREGPVQBEDDEFRHYNQNRLPUJFWYWKSXBQLCOU");
    msg.plan_id.assign("TKAFVGNDJPUUYQYEBXIPAQOJDZLXIROLEDKMMYZAKNHZFQJQTRJQUHCQBCSIYKNPUUOSXOPLESTKZXYYEYTGNCAQDBZXXMMRJKRRSFIGHGGDSVHBTSVPGMBNARMAFAOVWDMLVQDRIDZWHPTVGFEOSEAZITWIWPXUVVTSKVYIHJHZZBJXKGMRRXCTQAUBWKECCPDFJCTQLWEEONJGMSNPHRZFULUYCHEGINYLJUDCCMLFWFIHNLB");
    msg.description.assign("CEIRJGYFJXO");
    msg.leader_speed = 0.921933635778;
    msg.leader_bank_lim = 0.92083192169;
    msg.pos_sim_err_lim = 0.405419926408;
    msg.pos_sim_err_wrn = 0.929590724092;
    msg.pos_sim_err_timeout = 32661U;
    msg.converg_max = 0.866800827881;
    msg.converg_timeout = 38807U;
    msg.comms_timeout = 55589U;
    msg.turb_lim = 0.092709496088;
    msg.custom.assign("YCHGEIHJMGIRNGSRYZZZEHSMWCJIWKFLNSXECZXGXDOKEUMJEIMLHZVDXKWCITNVVPDMDMVLUUTWDCBOQRITRTWRTJYBHBIFDOKDJFOHVNJQNMWQQQYBOQARYFRXKEHWUAPHGFQPFYPPIWZMFKULXBQUHTNZBBNYOKJXSSXOAOVAUTIDTQFDZSVOCYXCGBAPSAAVKUJLUEMYEPHBGGAQYCMLPFNOBWLIRCWTAZL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.81898665163);
    msg.setSource(30399U);
    msg.setSourceEntity(74U);
    msg.setDestination(36993U);
    msg.setDestinationEntity(37U);
    msg.group_name.assign("HRQXHDQCRYKWSVEGGJKTOGAOVCNOJTPHGYHXHHJFTZAZRGQGCRTUEQOEZYIDLYFKIGUFYCUXBRAAYWDRPMYDFBFGWENKDSMSBEISWLNRZTVPSUIHETBUIAZGLMJKFGDNXFVXDMRJXLWLXQVWJQCAAOTUPQRNIBPBOLZVVPDA");
    msg.formation_name.assign("XRHBOENTLWHGOAYOILWAJBHVQGVFWYHMOXGDVNPFELKMUKZMSVPDGGDXQYFIYVXAJRKCBKASRJHCOHDRRIZVQTZIPKGITUODUTRVBTEELSPHRMKHOQGOOUXLLIGUDZDLYQIWQJWZUEFPCOWCEXUZNNRAHAGECQZNJEYZAZXCJFRVVFPSDSYFTTASMTCLJPNLJPMMTQKFNU");
    msg.plan_id.assign("OYMARCPDULLOFLAUFELKVMWLKSYXZBYPBDURREVPBHIKAABMTKNLMEQOSFQGEFMGTUSJTNVJIHGSCXKNNZLLRWHYJKKESPEKVUPTXVWCMOBMWFUPHNUDRIZUENCEKXVWNFZDJVDIDRFYPZAVJCQFWJDDYORDXJIANUTPZARHWTXOJCYBTFTQXGTIQRWQWGQTIMGXYKXBGWZLECVISHHNGYOC");
    msg.description.assign("MFPYFTCKJRGLHSZIZDBJRAEOZRWORVEQUDAWIRXCNVRMQEQBWEKVDUCNFXJLJWYKZNXZSYJGUYOZLNWMPDIAQCMGFEDMKUZUSSDBLAHTHBYWBLTFEWZWQRJACXHMYXVTJLSMGZCSVPIQUCXAKDQFOBROUGWEMBPKKNOLTKDCHNVTBQTSTCPUAPIVTSJPGRPSGFHZHXBILTJVVNEYFOGCNBNAL");
    msg.leader_speed = 0.279587280506;
    msg.leader_bank_lim = 0.924115814724;
    msg.pos_sim_err_lim = 0.467542553815;
    msg.pos_sim_err_wrn = 0.694896751742;
    msg.pos_sim_err_timeout = 51215U;
    msg.converg_max = 0.490471082105;
    msg.converg_timeout = 10593U;
    msg.comms_timeout = 28709U;
    msg.turb_lim = 0.23343506634;
    msg.custom.assign("VIQDLVNQSPSMPNNMGSWJGEIYKEDZGWZAOXBCNRDHNVTCYFEHCEKNUOYIUNHKYBXOWATAQRSUAJXMIBATELJQZZTVVMSTTAFOWRWPIUFRCBOEDBADPHQVALXXBVIFYGVKZUBWUKKSPOLJGMBTXRZFJVDMIXKOJHEJCBU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.430096206302);
    msg.setSource(40903U);
    msg.setSourceEntity(228U);
    msg.setDestination(11930U);
    msg.setDestinationEntity(38U);
    msg.group_name.assign("XBTKGPETYCFLDGHCITABUOJNNABZMUEBTYQTSNWKXRWHQDLCVQZBFKVGEYAFYVZSFWMIKIDSIZGHWBDJHAXGMPSFGVZHEVRQNXECDSCIJJVVLDVLEBARLTMQQNCNCPJUBYXNW");
    msg.formation_name.assign("XLSIHBHDYQAWRPKZRUUDQEGDJQXBINMZLJ");
    msg.plan_id.assign("COMIXXFKGCRTXLXNHLROVBKXEOWIVIHLRWMRBMAAWZZGSPRSEKHJBDJMAABYZBRNBNSXZHDEINPQHGCTRSUFOAE");
    msg.description.assign("MPTQQJYLCFXEJGBVBSYDRJPYYBZKVLSAUWXCMEVBOMHONGPDJOSODSBXAINQGPSLPUZXANZGNOVQOPAPLERBCTHFWHINWMANMYILIXIRBTDAXZVETRCLLGBTIHOLDIBVFNOUKRGHHSBNDUWUEMCQUNKKGMZDUUZMRROWWSUJXQYMHHEAVPEHEKFCXQCFQKPAJFTXGQEOHJRLYIVVKSZRFQYJFWUZEZ");
    msg.leader_speed = 0.0916636622648;
    msg.leader_bank_lim = 0.73171150637;
    msg.pos_sim_err_lim = 0.909870577102;
    msg.pos_sim_err_wrn = 0.320508612774;
    msg.pos_sim_err_timeout = 35910U;
    msg.converg_max = 0.351881602152;
    msg.converg_timeout = 43433U;
    msg.comms_timeout = 42111U;
    msg.turb_lim = 0.10737342914;
    msg.custom.assign("YPZEUHTJRKKWYHQHCWBEPVBLCDTADPBDCTJXCIK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.0555310401327);
    msg.setSource(61667U);
    msg.setSourceEntity(87U);
    msg.setDestination(35857U);
    msg.setDestinationEntity(110U);
    msg.control_src = 34632U;
    msg.control_ent = 160U;
    msg.timeout = 0.632635878379;
    msg.loiter_radius = 0.140462755581;
    msg.altitude_interval = 0.611688877641;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.787007772458);
    msg.setSource(14720U);
    msg.setSourceEntity(84U);
    msg.setDestination(41583U);
    msg.setDestinationEntity(37U);
    msg.control_src = 10061U;
    msg.control_ent = 149U;
    msg.timeout = 0.174657898423;
    msg.loiter_radius = 0.322179824831;
    msg.altitude_interval = 0.979766733682;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.336021627364);
    msg.setSource(36610U);
    msg.setSourceEntity(37U);
    msg.setDestination(13029U);
    msg.setDestinationEntity(149U);
    msg.control_src = 28363U;
    msg.control_ent = 12U;
    msg.timeout = 0.64233440543;
    msg.loiter_radius = 0.325742228637;
    msg.altitude_interval = 0.638027821032;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.0117772037035);
    msg.setSource(18595U);
    msg.setSourceEntity(161U);
    msg.setDestination(42778U);
    msg.setDestinationEntity(107U);
    msg.flags = 111U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.444790438393;
    tmp_msg_0.speed_units = 86U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.78105242611;
    tmp_msg_1.z_units = 226U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.276200180509;
    msg.lon = 0.330511077213;
    msg.radius = 0.184164106759;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.246129480861);
    msg.setSource(55306U);
    msg.setSourceEntity(69U);
    msg.setDestination(9313U);
    msg.setDestinationEntity(165U);
    msg.flags = 184U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.627638576251;
    tmp_msg_0.speed_units = 84U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.94477450173;
    tmp_msg_1.z_units = 241U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.690127334726;
    msg.lon = 0.266436843975;
    msg.radius = 0.71916652066;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.853526802462);
    msg.setSource(62655U);
    msg.setSourceEntity(235U);
    msg.setDestination(44737U);
    msg.setDestinationEntity(57U);
    msg.flags = 99U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.728199925926;
    tmp_msg_0.speed_units = 166U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.349415784387;
    tmp_msg_1.z_units = 87U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6412143787;
    msg.lon = 0.518929028061;
    msg.radius = 0.794250824218;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.87813709219);
    msg.setSource(60314U);
    msg.setSourceEntity(97U);
    msg.setDestination(24153U);
    msg.setDestinationEntity(97U);
    msg.control_src = 30511U;
    msg.control_ent = 158U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 117U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0764398265819;
    tmp_tmp_msg_0_0.speed_units = 139U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.888261319905;
    tmp_tmp_msg_0_1.z_units = 179U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.207366283077;
    tmp_msg_0.lon = 0.102665841013;
    tmp_msg_0.radius = 0.00187327333295;
    msg.reference.set(tmp_msg_0);
    msg.state = 31U;
    msg.proximity = 120U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.694776397578);
    msg.setSource(4671U);
    msg.setSourceEntity(236U);
    msg.setDestination(16962U);
    msg.setDestinationEntity(119U);
    msg.control_src = 20121U;
    msg.control_ent = 193U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 10U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.359973539573;
    tmp_tmp_msg_0_0.speed_units = 112U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.813881305392;
    tmp_tmp_msg_0_1.z_units = 206U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.718066183014;
    tmp_msg_0.lon = 0.741985045762;
    tmp_msg_0.radius = 0.0631910257331;
    msg.reference.set(tmp_msg_0);
    msg.state = 44U;
    msg.proximity = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.752211420628);
    msg.setSource(2664U);
    msg.setSourceEntity(117U);
    msg.setDestination(24358U);
    msg.setDestinationEntity(235U);
    msg.control_src = 53926U;
    msg.control_ent = 199U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 198U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.171543486163;
    tmp_tmp_msg_0_0.speed_units = 139U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.648670372811;
    tmp_tmp_msg_0_1.z_units = 216U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.387396285617;
    tmp_msg_0.lon = 0.555038097461;
    tmp_msg_0.radius = 0.420842592274;
    msg.reference.set(tmp_msg_0);
    msg.state = 88U;
    msg.proximity = 11U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.166221646608);
    msg.setSource(14028U);
    msg.setSourceEntity(134U);
    msg.setDestination(23272U);
    msg.setDestinationEntity(134U);
    msg.ax_cmd = 0.682554417065;
    msg.ay_cmd = 0.418380191586;
    msg.az_cmd = 0.489067978829;
    msg.ax_des = 0.15338987761;
    msg.ay_des = 0.623517612725;
    msg.az_des = 0.193162078425;
    msg.virt_err_x = 0.389135046524;
    msg.virt_err_y = 0.930889915062;
    msg.virt_err_z = 0.724145191329;
    msg.surf_fdbk_x = 0.104586856949;
    msg.surf_fdbk_y = 0.145835396379;
    msg.surf_fdbk_z = 0.044733597153;
    msg.surf_unkn_x = 0.86637938728;
    msg.surf_unkn_y = 0.454855256201;
    msg.surf_unkn_z = 0.928841519466;
    msg.ss_x = 0.412978461041;
    msg.ss_y = 0.743728963697;
    msg.ss_z = 0.0426529873344;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.797839995464);
    msg.setSource(34055U);
    msg.setSourceEntity(165U);
    msg.setDestination(5487U);
    msg.setDestinationEntity(55U);
    msg.ax_cmd = 0.997523585869;
    msg.ay_cmd = 0.545039969651;
    msg.az_cmd = 0.307369133624;
    msg.ax_des = 0.336677893871;
    msg.ay_des = 0.450288577935;
    msg.az_des = 0.8009945393;
    msg.virt_err_x = 0.51138702149;
    msg.virt_err_y = 0.034608339183;
    msg.virt_err_z = 0.131756590036;
    msg.surf_fdbk_x = 0.986609428245;
    msg.surf_fdbk_y = 0.868295287974;
    msg.surf_fdbk_z = 0.211923912122;
    msg.surf_unkn_x = 0.290234469305;
    msg.surf_unkn_y = 0.783685562032;
    msg.surf_unkn_z = 0.35366998993;
    msg.ss_x = 0.122320303867;
    msg.ss_y = 0.00225491977089;
    msg.ss_z = 0.543585492801;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("KVLFEPARZEJJLSQPVUSAHNSBMVCKUVBKXQNMHGFXQGICZOOMHHN");
    tmp_msg_0.dist = 0.368430804195;
    tmp_msg_0.err = 0.226334194531;
    tmp_msg_0.ctrl_imp = 0.0258329276572;
    tmp_msg_0.rel_dir_x = 0.0432613279452;
    tmp_msg_0.rel_dir_y = 0.364778967474;
    tmp_msg_0.rel_dir_z = 0.856125223975;
    tmp_msg_0.err_x = 0.284565910795;
    tmp_msg_0.err_y = 0.581240589932;
    tmp_msg_0.err_z = 0.984101052613;
    tmp_msg_0.rf_err_x = 0.821342973472;
    tmp_msg_0.rf_err_y = 0.549187938523;
    tmp_msg_0.rf_err_z = 0.507522731688;
    tmp_msg_0.rf_err_vx = 0.681807577061;
    tmp_msg_0.rf_err_vy = 0.668090468356;
    tmp_msg_0.rf_err_vz = 0.487873328961;
    tmp_msg_0.ss_x = 0.210599494959;
    tmp_msg_0.ss_y = 0.587873972542;
    tmp_msg_0.ss_z = 0.305680949714;
    tmp_msg_0.virt_err_x = 0.352272818198;
    tmp_msg_0.virt_err_y = 0.875269453911;
    tmp_msg_0.virt_err_z = 0.652586115874;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.18077930258);
    msg.setSource(41500U);
    msg.setSourceEntity(40U);
    msg.setDestination(22130U);
    msg.setDestinationEntity(130U);
    msg.ax_cmd = 0.0119493644984;
    msg.ay_cmd = 0.622600278668;
    msg.az_cmd = 0.664943858307;
    msg.ax_des = 0.693576557141;
    msg.ay_des = 0.577791014278;
    msg.az_des = 0.838233822742;
    msg.virt_err_x = 0.151957665043;
    msg.virt_err_y = 0.350160183911;
    msg.virt_err_z = 0.794050201799;
    msg.surf_fdbk_x = 0.360587793132;
    msg.surf_fdbk_y = 0.950616125144;
    msg.surf_fdbk_z = 0.660141180836;
    msg.surf_unkn_x = 0.72769894175;
    msg.surf_unkn_y = 0.608695240871;
    msg.surf_unkn_z = 0.249350433986;
    msg.ss_x = 0.307704602839;
    msg.ss_y = 0.592417617483;
    msg.ss_z = 0.0896251428404;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.433774249085);
    msg.setSource(4211U);
    msg.setSourceEntity(236U);
    msg.setDestination(18292U);
    msg.setDestinationEntity(0U);
    msg.s_id.assign("LLACNFUPCQTVHBZBUIRSTVQDFYBPMCARJNIBENUWWGSEMVKRLJ");
    msg.dist = 0.937413151939;
    msg.err = 0.238569186131;
    msg.ctrl_imp = 0.751060924687;
    msg.rel_dir_x = 0.176216621044;
    msg.rel_dir_y = 0.135760858384;
    msg.rel_dir_z = 0.654167295637;
    msg.err_x = 0.754437072712;
    msg.err_y = 0.819963631779;
    msg.err_z = 0.346373091566;
    msg.rf_err_x = 0.190210740104;
    msg.rf_err_y = 0.323031776408;
    msg.rf_err_z = 0.432412426238;
    msg.rf_err_vx = 0.643526831934;
    msg.rf_err_vy = 0.381839746526;
    msg.rf_err_vz = 0.453672219534;
    msg.ss_x = 0.10600053214;
    msg.ss_y = 0.837099066297;
    msg.ss_z = 0.121186207515;
    msg.virt_err_x = 0.431914526243;
    msg.virt_err_y = 0.399410644915;
    msg.virt_err_z = 0.175840438145;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.704903535647);
    msg.setSource(43895U);
    msg.setSourceEntity(201U);
    msg.setDestination(25847U);
    msg.setDestinationEntity(117U);
    msg.s_id.assign("DFRPCDIWHIQCNAOFSDVJLBSJYSSUWBBDTMHPTAXCEGQUVNMGJPPLKMZYUNZTPGEQTXRIBLVQABEOWUAHHHSEPNF");
    msg.dist = 0.0393093868297;
    msg.err = 0.178143243746;
    msg.ctrl_imp = 0.969544056014;
    msg.rel_dir_x = 0.152555445238;
    msg.rel_dir_y = 0.515665346869;
    msg.rel_dir_z = 0.112804649419;
    msg.err_x = 0.00476764704864;
    msg.err_y = 0.803528913975;
    msg.err_z = 0.387538427033;
    msg.rf_err_x = 0.622625683264;
    msg.rf_err_y = 0.460076377826;
    msg.rf_err_z = 0.175838734868;
    msg.rf_err_vx = 0.0998150911076;
    msg.rf_err_vy = 0.0948588493676;
    msg.rf_err_vz = 0.195422539564;
    msg.ss_x = 0.464190388661;
    msg.ss_y = 0.999624565246;
    msg.ss_z = 0.784854812863;
    msg.virt_err_x = 0.929754365416;
    msg.virt_err_y = 0.871959105706;
    msg.virt_err_z = 0.549464912354;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.182607182838);
    msg.setSource(27853U);
    msg.setSourceEntity(86U);
    msg.setDestination(63026U);
    msg.setDestinationEntity(44U);
    msg.s_id.assign("JUOMCJQKQLCKZHLQNMOGSVZZPTFAQEZFHVNDSSBKIESTUXHYIJOQSYWCWSDCMNIOJKEBCWEMROOULRTLYHVNPXBPSNZUYAMFBRQAXFUMQZNRQYIRVGKGIJJFROCPHPWTCIPHWDMXFUFCUYEMUGSEYWBLXTUBTZJIZQXKAGAMXWPEDFRYPBEATIAZSWCGDB");
    msg.dist = 0.414783514724;
    msg.err = 0.523418476629;
    msg.ctrl_imp = 0.451630897591;
    msg.rel_dir_x = 0.545434730459;
    msg.rel_dir_y = 0.770693136883;
    msg.rel_dir_z = 0.604022094815;
    msg.err_x = 0.464998472397;
    msg.err_y = 0.08705548731;
    msg.err_z = 0.441280302581;
    msg.rf_err_x = 0.742530360317;
    msg.rf_err_y = 0.608007699989;
    msg.rf_err_z = 0.990415028547;
    msg.rf_err_vx = 0.164789800142;
    msg.rf_err_vy = 0.120446074548;
    msg.rf_err_vz = 0.171944601062;
    msg.ss_x = 0.3746482933;
    msg.ss_y = 0.852472248502;
    msg.ss_z = 0.55341497303;
    msg.virt_err_x = 0.674280758145;
    msg.virt_err_y = 0.0631687105185;
    msg.virt_err_z = 0.96882011206;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.997861976917);
    msg.setSource(58049U);
    msg.setSourceEntity(175U);
    msg.setDestination(59725U);
    msg.setDestinationEntity(46U);
    msg.timeout = 25908U;
    msg.rpm = 0.618954178218;
    msg.direction = 212U;
    msg.custom.assign("IUNSOYKODXHALMRIXKGJMZJKUYGJVJCMXTJIPWEXBSGCORAHDZPMQAFCYZIENHQBLPSRMHWSOKILYVMRLFHQROUUINIOAYXRNQVFVZMBXMVHGGVZBNELEGTHHPZDWXSYBACPFYDWCPKQBQKCNBONGVUYERTUTMGXATPOQTASDUHDOMIFBKFVO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.613006181179);
    msg.setSource(34479U);
    msg.setSourceEntity(249U);
    msg.setDestination(58389U);
    msg.setDestinationEntity(40U);
    msg.timeout = 13547U;
    msg.rpm = 0.018771397175;
    msg.direction = 249U;
    msg.custom.assign("EIHTGWGCAGDWNKNICNUBCVPQXRHVSMQVSSJKLIVFBALSZNXRATMLOXUKCHTHFTXSZJUVKRDKPRBYUBKIYLVGHAJOOOPYMZIWYQJSKUSZPYIOGUZOLEZGJCMPHWHIUP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.471593746678);
    msg.setSource(7398U);
    msg.setSourceEntity(32U);
    msg.setDestination(11924U);
    msg.setDestinationEntity(193U);
    msg.timeout = 37170U;
    msg.rpm = 0.734149500896;
    msg.direction = 140U;
    msg.custom.assign("GSOGNWEUGCPWSGWPWGGVEKANBDELOOYYFXAIQPJMBVOBDNEDRKHPTTHLLMTSUBCXFFYMVJNDPPTIMEBRMZYAHHMGZCHALGQUPVXACVIFRKQZYUOLOVW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.698006485781);
    msg.setSource(14624U);
    msg.setSourceEntity(190U);
    msg.setDestination(33518U);
    msg.setDestinationEntity(150U);
    msg.formation_name.assign("ABSGMXAXBRXTVVZGZIYNZPRZOEITTTFGKJEGOBDUQHQACTWCEKBGFDRDMAEWKOIWLQMYZHGDKJPNPQHHRUIKCFMQTUPNCCDVZRTRYGVUQJLSBLFXBKNRKQUYOEDWOLCWSDPGUZOHOHQUNHWSWMENXIJNXZUPZARFVWJMXSMTNVSCMBIABKYFDSSFXCYJWIYGLJAYVCROLFLTBYIEORXJLAINJLSGHKNYMWTQVQDAVFPUCDEEPHFEAHK");
    msg.type = 220U;
    msg.op = 210U;
    msg.group_name.assign("ZZPDBRIZNQTQFMHSJUMSRENZGWBGVUOLVQCKNYQXXYJZJOEMLAETGYIZIQOIHH");
    msg.plan_id.assign("RSFWMZDYTXDGFNOJTPUDVMYORJQFYJTOXLULVDHLMVXKUECIONGTIVHMLECTBWVZIPLGAKSSZHSSHPBPOIRAQZAIBWPEHEMREVTSLVEPGXPMAYXCYVBIJ");
    msg.description.assign("EGHRAPYCXXBQASROGDVTMXVUCFIOHMSCEJEZONYOYPGDOMZWYYNKCVKAUIFNGFZLBGUZVJGSEVVMCZGXXLYNYPIJKFIIUIWADSHMDLHLUKENFBYSDARLFJVQWGPSNHNDQPXKXNZTDFWUUSEELTJFEM");
    msg.reference_frame = 202U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 19204U;
    tmp_msg_0.off_x = 0.820128004776;
    tmp_msg_0.off_y = 0.076458191656;
    tmp_msg_0.off_z = 0.247963130023;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.512403199135;
    msg.leader_speed_min = 0.663288161823;
    msg.leader_speed_max = 0.144648087239;
    msg.leader_alt_min = 0.187667704256;
    msg.leader_alt_max = 0.852890413482;
    msg.pos_sim_err_lim = 0.193363922412;
    msg.pos_sim_err_wrn = 0.882037184253;
    msg.pos_sim_err_timeout = 1534U;
    msg.converg_max = 0.242579277025;
    msg.converg_timeout = 40504U;
    msg.comms_timeout = 51950U;
    msg.turb_lim = 0.673159322975;
    msg.custom.assign("BQSYDSUXJNXWXVAJUOCOCANTBSIETBHCSISVIDDBHKFOGGKXRLMCILVQR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.953839104314);
    msg.setSource(22654U);
    msg.setSourceEntity(232U);
    msg.setDestination(47578U);
    msg.setDestinationEntity(122U);
    msg.formation_name.assign("FARBUBPCBEJQMCPDDGSBRALHSJYTATPSGZDLMUVSLZCBMYSFVITYNXJPGDVCQGTOVYZGKMSHUSMNUMKDAWDXSURXHWLZCEEFYIBHAOXDZROTFENLRKENESHKTLIYPZEYGKXUHVWLKUEWBKCTOINNKBUGVIIRQJAGQDMJQVPBVEAZPPXBVFLFDCGFWFQHZINXPCUXYRHHMWD");
    msg.type = 252U;
    msg.op = 246U;
    msg.group_name.assign("ZSTDYRYWNZKDVCTFQZZKMOEJEJINMYENTPCVMGOTALNOOBHXJHJIFHBWPYVRDZLPZCSQAKUBOVTJHLOUIQBXEHRGCPDFTRSAPDYVIPXMEMWPLUESLMKHOAORIXEFJQOIMQXBRNLNSRETBADCTFIRWLINXYZBSJYCGIAHYABDCRL");
    msg.plan_id.assign("SLUDVSZDALPBKGPGMBZFJPRXQATVYYIMDOKEDJWUYJIIRGRSXNCTLCAQCHZNVSQEEVYNRBCTFDVYOJLUIAEJPPFCPUNKNIBRUQBWOUQQPBVHDJBCVERUYKWLFGOPFZBMXLSHGLXSTOTQPNJIZYFMJTDOATZHKBVZHCKNWPHATWGAXGAAFQJYHXOVGKMLWIUN");
    msg.description.assign("JMCNUVTLPHMSEXSVTRPJMEAIZKSWZRCQLBZACNAMEBQIRULDFBWCPAXLNHNSFRLVQQKMYYJNAVEOYZUDTYQXHMVLPBLGGKCZIXPYXIOVLP");
    msg.reference_frame = 231U;
    msg.leader_bank_lim = 0.496937589896;
    msg.leader_speed_min = 0.253869070751;
    msg.leader_speed_max = 0.364918162662;
    msg.leader_alt_min = 0.897876850498;
    msg.leader_alt_max = 0.809243130441;
    msg.pos_sim_err_lim = 0.0395366319042;
    msg.pos_sim_err_wrn = 0.274141394982;
    msg.pos_sim_err_timeout = 25342U;
    msg.converg_max = 0.555535441044;
    msg.converg_timeout = 16821U;
    msg.comms_timeout = 44928U;
    msg.turb_lim = 0.469414679398;
    msg.custom.assign("KHCJCQMJJNIUWDROOZSHGTXPQOVBEVAJQZXPLYZTPCSARRRDCXAEYJNPSKYKQUXFFHTLXBVSCEQYLMLLPHKNAGHTMCFLBXXQQKMRRMZUMMFIGYCLTVAAMZCFIWTNIWWANWIRERCMJULYKEIDFGAYSZDOGYOXLVDBPPWPSQEDSJKBQEJUDZUKXIHSWDHEETSZTWIVBONJANXPZPRKKZOUEFDQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.377990033405);
    msg.setSource(17457U);
    msg.setSourceEntity(120U);
    msg.setDestination(28499U);
    msg.setDestinationEntity(129U);
    msg.formation_name.assign("FQXXIIVGPEATQEUXOBGTTSYBBLEPPHNHPBDMRICQUMXXNTAIHWZQRYOWQXJFG");
    msg.type = 30U;
    msg.op = 185U;
    msg.group_name.assign("DUOHHFKDYCNHIVYRRUGWBMRTQMGBDJUWZIBVSSDAMPQSXLQFEAVVMNPKJKQOYXPCTHEZUNBLENSYOPFUYRLZAVKMPJLCDDRYQQXGLGTSWFBJBNLIEZZMKHHUJUPEFJCCVOWIUHAKOAS");
    msg.plan_id.assign("XAOQMMILANYOESVLDASFGRGAXJREZFVKBCJCCOTUUVYXXILNIAWTCTYTMHFCSLZGWNXSIPSKJW");
    msg.description.assign("HUBZNNFUIJSWBOEHOHOQLJDJANHSRNGSMVONXICJWYHOOFMFNQARLOXZUDMVLPAUFORPVWPYOUWLPSRWQYWBZYGKBBGPVTMKRDQEACFAZILPVJZYSCEPSUERHDUWTW");
    msg.reference_frame = 26U;
    msg.leader_bank_lim = 0.495202104865;
    msg.leader_speed_min = 0.517478243462;
    msg.leader_speed_max = 0.305432711862;
    msg.leader_alt_min = 0.830429246835;
    msg.leader_alt_max = 0.477915446205;
    msg.pos_sim_err_lim = 0.763798430138;
    msg.pos_sim_err_wrn = 0.123663571854;
    msg.pos_sim_err_timeout = 54675U;
    msg.converg_max = 0.0234168153854;
    msg.converg_timeout = 62070U;
    msg.comms_timeout = 21145U;
    msg.turb_lim = 0.8689470615;
    msg.custom.assign("UBXLQSGAYGARZMBIAOIRLMTFGJUEIXTPXNDBRSVNSERGRIUZHFGPAQLFZWZBXVBQUQLJZOIJDAFBITSTBWDVVFGELYCDCUCPEQWHPYKMOWAAMGROEGESTOVSHQWNZGMSTFLXYJPUJKMPHQEDFCOEBFTHHWPYXOD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.803373285948);
    msg.setSource(59384U);
    msg.setSourceEntity(25U);
    msg.setDestination(45306U);
    msg.setDestinationEntity(233U);
    msg.timeout = 12656U;
    msg.lat = 0.194958460457;
    msg.lon = 0.310988928205;
    msg.z = 0.0132626661917;
    msg.z_units = 93U;
    msg.speed = 0.884534798233;
    msg.speed_units = 69U;
    msg.custom.assign("GCVBTYCALGMDCQAFXXUOXAIYPUOOOKXKYWDZGGHJHGMSBAMFKNGZEAZAOJPNUGFNLLHISDQYUMKMWAYYFLAWYVCVJQQEKRAENVWBMSHNNCFRCKIXHOBXLCWEZUJJDTRPXOYRMRPBSXCJSPIBWTWJPVQSGTFXBLEKBIQLRCTDOIYHPFTEIELUADLSBBKEGZQRZFFNZCVVJSFRVDKOQXDRTNIWUWOJSPDKYQHMJHQRMITGMPHNVTPS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.496651675807);
    msg.setSource(55833U);
    msg.setSourceEntity(220U);
    msg.setDestination(41878U);
    msg.setDestinationEntity(250U);
    msg.timeout = 26430U;
    msg.lat = 0.545604985265;
    msg.lon = 0.46418957233;
    msg.z = 0.838553293907;
    msg.z_units = 202U;
    msg.speed = 0.26205587335;
    msg.speed_units = 102U;
    msg.custom.assign("YWQQZQOTZLRPYYVABCENDPXLUHLRRCGMKFTYOMERFYWNXNACMAHK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.0996445568223);
    msg.setSource(52302U);
    msg.setSourceEntity(53U);
    msg.setDestination(14758U);
    msg.setDestinationEntity(249U);
    msg.timeout = 46679U;
    msg.lat = 0.871732607587;
    msg.lon = 0.355478261673;
    msg.z = 0.784386517484;
    msg.z_units = 49U;
    msg.speed = 0.6328790005;
    msg.speed_units = 177U;
    msg.custom.assign("STIXXJPHOCQVVFZIPHNHJRUYJIFDIUQLTAECKXRHGODFSULPPKDMSDXYJDWUABPIHPTZUKZMLMSYCVVEYOLQNRJCUVCNGONWYQTUSGTSLTDORJQNRXCYMKGIFYOEBLYWRBUDCPJOMWMKWNRCNMMEGPNXTAYKPIUKETVJEAEHBRVOHGZZQGXNKQLQQMIAWFSCJSZEWBZAFWIZSDKEMREIYSBGAUHNGL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.696355934554);
    msg.setSource(43529U);
    msg.setSourceEntity(51U);
    msg.setDestination(51432U);
    msg.setDestinationEntity(188U);
    msg.timeout = 39915U;
    msg.lat = 0.0874978578226;
    msg.lon = 0.67392855694;
    msg.z = 0.146794915875;
    msg.z_units = 199U;
    msg.speed = 0.822423344263;
    msg.speed_units = 68U;
    msg.custom.assign("DMBDBKDUBDCZAZDWRMLYBJWSRTXGXYAOTRMEJGIMHTALRXGXTVSSUSCMICUOALUNZFFHGMMWJKJUAIVYAXWFUKTWNFFPFVTTBBIKEPYSQEIWZWPPHOPAVCPCWWIFLYNYLVHQBVVMZHAIPKACJMXUKKRPCXVNDLFYQXQRGOVQQIANYZEZCGLGZYICFOFUQWEUINDDNKJJXJNRTO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.495687414319);
    msg.setSource(37161U);
    msg.setSourceEntity(225U);
    msg.setDestination(36559U);
    msg.setDestinationEntity(92U);
    msg.timeout = 10697U;
    msg.lat = 0.0250273321493;
    msg.lon = 0.728521103574;
    msg.z = 0.853553886131;
    msg.z_units = 71U;
    msg.speed = 0.619335132415;
    msg.speed_units = 50U;
    msg.custom.assign("ODENDPIAWVUMGBIVJBUNHSTLCTRZYQJPBSYYDGMIXUYZNXYQSHFMMGDFQJETUPEOXGKTXDNW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.58918986305);
    msg.setSource(11335U);
    msg.setSourceEntity(21U);
    msg.setDestination(23264U);
    msg.setDestinationEntity(131U);
    msg.timeout = 52004U;
    msg.lat = 0.613977704946;
    msg.lon = 0.954695144885;
    msg.z = 0.52612126618;
    msg.z_units = 96U;
    msg.speed = 0.858976098726;
    msg.speed_units = 31U;
    msg.custom.assign("RJGBMAINPKDRNFDWMBHCSSBNEWHYHSRNZYPANKTCYPHLSHLVGCZMWVRABWGOSCUNMZYKEOGUWVAVOXJKKFIKHRWBDWAXAMNRCXJPYRX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.891199217835);
    msg.setSource(46062U);
    msg.setSourceEntity(247U);
    msg.setDestination(44295U);
    msg.setDestinationEntity(202U);
    msg.arrival_time = 0.565645142321;
    msg.lat = 0.286497489855;
    msg.lon = 0.974108462765;
    msg.z = 0.199810452001;
    msg.z_units = 94U;
    msg.travel_z = 0.505364961581;
    msg.travel_z_units = 158U;
    msg.delayed = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.118730808151);
    msg.setSource(40566U);
    msg.setSourceEntity(51U);
    msg.setDestination(6937U);
    msg.setDestinationEntity(247U);
    msg.arrival_time = 0.922811615965;
    msg.lat = 0.842387522169;
    msg.lon = 0.982771693436;
    msg.z = 0.871981089245;
    msg.z_units = 227U;
    msg.travel_z = 0.872938453816;
    msg.travel_z_units = 133U;
    msg.delayed = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.754776291482);
    msg.setSource(49590U);
    msg.setSourceEntity(98U);
    msg.setDestination(46582U);
    msg.setDestinationEntity(108U);
    msg.arrival_time = 0.284122570302;
    msg.lat = 0.455271174264;
    msg.lon = 0.267461907222;
    msg.z = 0.505200210465;
    msg.z_units = 67U;
    msg.travel_z = 0.804635596356;
    msg.travel_z_units = 31U;
    msg.delayed = 47U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.276110910697);
    msg.setSource(21988U);
    msg.setSourceEntity(217U);
    msg.setDestination(35576U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.647881738;
    msg.lon = 0.0938377900319;
    msg.z = 0.378036263356;
    msg.z_units = 5U;
    msg.speed = 0.48175382406;
    msg.speed_units = 23U;
    msg.bearing = 0.720083654843;
    msg.cross_angle = 0.551000665576;
    msg.width = 0.712057188998;
    msg.length = 0.33230957656;
    msg.coff = 190U;
    msg.angaperture = 0.804031273303;
    msg.range = 51839U;
    msg.overlap = 85U;
    msg.flags = 192U;
    msg.custom.assign("GZZBUHSPJUYPHTQCJHASUTGVIQOCNTUFKEDQQEMJTTFEQBQPTRFNEZKIAURRMOPDCVLYKEMVNMOBCOWLDMQRQYBKUKZJAGABKWMBWJPLZOUCJGCXWLSOSNIOIVAQEVWZQRSAJYKVFSHXIRFRTXEPRLSVGECWAXJNIGKXOVITFHJLFXNNDGBPDMHIFB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.581297188586);
    msg.setSource(54481U);
    msg.setSourceEntity(138U);
    msg.setDestination(31847U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.716183111954;
    msg.lon = 0.979569321998;
    msg.z = 0.979115498064;
    msg.z_units = 2U;
    msg.speed = 0.505947017591;
    msg.speed_units = 155U;
    msg.bearing = 0.0901097899256;
    msg.cross_angle = 0.114155495068;
    msg.width = 0.47071421552;
    msg.length = 0.611168788405;
    msg.coff = 44U;
    msg.angaperture = 0.035528213221;
    msg.range = 44662U;
    msg.overlap = 166U;
    msg.flags = 126U;
    msg.custom.assign("IYEUCSCKRNEUFTIHCQHAMQVEXWJMGWERVHLUOUMTWWLKDJBLKXCZKQZURRGVSHBRPZURNQVTSRICTVOJGVMBJHDXIZSEONSDAE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.277075512548);
    msg.setSource(51506U);
    msg.setSourceEntity(230U);
    msg.setDestination(10312U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.892876295973;
    msg.lon = 0.358161178146;
    msg.z = 0.62804525697;
    msg.z_units = 236U;
    msg.speed = 0.633207051987;
    msg.speed_units = 94U;
    msg.bearing = 0.14765659695;
    msg.cross_angle = 0.656908112995;
    msg.width = 0.0332551571614;
    msg.length = 0.503566609446;
    msg.coff = 253U;
    msg.angaperture = 0.598707342511;
    msg.range = 31172U;
    msg.overlap = 218U;
    msg.flags = 101U;
    msg.custom.assign("VUUCYAFJUXGOATICEBGOWLWFVDQCAOTMESAYLNJZUVXYNTIOEZWPSOBFXIFLAWQHHRLHLNAFITAIXRJJDMKSBIJLHGSYZVJMEGKSWOPKJCFBKMVZAEJCEIOPBDWSTIFQBZXNRRQVHOKQUD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.0944464605898);
    msg.setSource(65240U);
    msg.setSourceEntity(69U);
    msg.setDestination(13417U);
    msg.setDestinationEntity(96U);
    msg.timeout = 59017U;
    msg.lat = 0.571474462029;
    msg.lon = 0.667269538611;
    msg.z = 0.313380653115;
    msg.z_units = 138U;
    msg.speed = 0.423663772968;
    msg.speed_units = 123U;
    msg.syringe0 = 11U;
    msg.syringe1 = 197U;
    msg.syringe2 = 103U;
    msg.custom.assign("FRYPXUQSFCWBNAWJWEOXPLJCFICIKEVDCXNYSVJZDBXJVXLWBQPVUJGLYDCXCQMILOWGIPSRTAVGIVHAMGBZYABCKZZGULPMQSPCNOAIEFESOLPRSQMDRKUQUGKA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.546495449048);
    msg.setSource(52697U);
    msg.setSourceEntity(24U);
    msg.setDestination(29268U);
    msg.setDestinationEntity(67U);
    msg.timeout = 45819U;
    msg.lat = 0.40329447178;
    msg.lon = 0.0606838977815;
    msg.z = 0.835847499185;
    msg.z_units = 149U;
    msg.speed = 0.200389650786;
    msg.speed_units = 170U;
    msg.syringe0 = 225U;
    msg.syringe1 = 46U;
    msg.syringe2 = 96U;
    msg.custom.assign("ZMTGXSRINQLYASOYPOZVKUTDWWUIMKADJVV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.396088222634);
    msg.setSource(19342U);
    msg.setSourceEntity(12U);
    msg.setDestination(30323U);
    msg.setDestinationEntity(186U);
    msg.timeout = 61098U;
    msg.lat = 0.9136495;
    msg.lon = 0.597084589296;
    msg.z = 0.241240794068;
    msg.z_units = 51U;
    msg.speed = 0.458071354719;
    msg.speed_units = 95U;
    msg.syringe0 = 3U;
    msg.syringe1 = 88U;
    msg.syringe2 = 188U;
    msg.custom.assign("BGGCIGPHSZPBVMPUROPYLCSDJMEQDUTHHPHSAXLIHWRCPWTZGGORLUYNKMBQLSTSRVJFOSJFFXYVVGNEAOTTCPZQZFOMDDTDRIQSBBKJZYADKEVJLIFKZLDAAAFCXVWKUIPXRIHQHNSCYQYTVWWGKRLGECUMQUNMJPWMAEMOFHDSJXBGW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.322221067178);
    msg.setSource(18629U);
    msg.setSourceEntity(198U);
    msg.setDestination(19231U);
    msg.setDestinationEntity(40U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.680732988467);
    msg.setSource(56473U);
    msg.setSourceEntity(219U);
    msg.setDestination(41981U);
    msg.setDestinationEntity(29U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.59433562624);
    msg.setSource(50122U);
    msg.setSourceEntity(99U);
    msg.setDestination(32490U);
    msg.setDestinationEntity(141U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.854963387067);
    msg.setSource(10998U);
    msg.setSourceEntity(209U);
    msg.setDestination(17721U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.0133527522558;
    msg.lon = 0.051337389276;
    msg.z = 0.976853663539;
    msg.z_units = 104U;
    msg.speed = 0.775677773531;
    msg.speed_units = 167U;
    msg.takeoff_pitch = 0.0127237838506;
    msg.custom.assign("PLRPVJPSHJFXLXGNCQKBUJZVWDUQPAARKUFOPBSBXSFJIQLUSKDKHDYZCFPMVNDDTLUCGWXUZSCELBWOBTVQDCMIMXMQGFZZVYXPDOONFTEYSINDXYONIYRHCRJIAMVTAJSJJIVNRQFMFHEIHPQRRCNUBJLEZT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.66337599805);
    msg.setSource(22543U);
    msg.setSourceEntity(221U);
    msg.setDestination(56294U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.818894906997;
    msg.lon = 0.630649279052;
    msg.z = 0.537411722809;
    msg.z_units = 215U;
    msg.speed = 0.314182915431;
    msg.speed_units = 221U;
    msg.takeoff_pitch = 0.624510111352;
    msg.custom.assign("RWXLROKNQEXRMSBVKDWVGPEWYINRZYJWTKNNTRJLJUBLFUBAHLGLPYBTOXXWKQNHTCOFINL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.201628811252);
    msg.setSource(24452U);
    msg.setSourceEntity(231U);
    msg.setDestination(49100U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.22867699646;
    msg.lon = 0.237111856972;
    msg.z = 0.743743544479;
    msg.z_units = 206U;
    msg.speed = 0.506822170279;
    msg.speed_units = 199U;
    msg.takeoff_pitch = 0.968104725207;
    msg.custom.assign("ZPKCQGSDCTREMKALNTGNIAZVSLJLUUHDFWSURPNHHEQIWPXFPKWSOGTALWZMVRIBYICNKOPLGABZVYRKBSCGQCTZEFOOJJZDGFJNXGFXAWUVYHKTRNHALMIWQPKYPJCTXFBHDQCINQDXEORNPFEKIEC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.789491979029);
    msg.setSource(11298U);
    msg.setSourceEntity(175U);
    msg.setDestination(65028U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.24343996098;
    msg.lon = 0.141379247657;
    msg.z = 0.789881955531;
    msg.z_units = 22U;
    msg.speed = 0.47413163003;
    msg.speed_units = 224U;
    msg.abort_z = 0.629033075103;
    msg.bearing = 0.965856415306;
    msg.glide_slope = 211U;
    msg.glide_slope_alt = 0.374762628903;
    msg.custom.assign("AHVJBOJDUTBDDVDDLZAGWUYWZAPLR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.629154126273);
    msg.setSource(32060U);
    msg.setSourceEntity(238U);
    msg.setDestination(23221U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.738309316875;
    msg.lon = 0.65940566;
    msg.z = 0.804901172939;
    msg.z_units = 216U;
    msg.speed = 0.647940544696;
    msg.speed_units = 28U;
    msg.abort_z = 0.139599984191;
    msg.bearing = 0.69395352793;
    msg.glide_slope = 211U;
    msg.glide_slope_alt = 0.0202208463244;
    msg.custom.assign("TSYLIUGWNK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.470548863246);
    msg.setSource(40644U);
    msg.setSourceEntity(124U);
    msg.setDestination(24066U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.4931799066;
    msg.lon = 0.144228149085;
    msg.z = 0.840731700803;
    msg.z_units = 80U;
    msg.speed = 0.457037354498;
    msg.speed_units = 105U;
    msg.abort_z = 0.665469607459;
    msg.bearing = 0.163928497285;
    msg.glide_slope = 179U;
    msg.glide_slope_alt = 0.378192586841;
    msg.custom.assign("RBOICMZLNHUFVHCPFPGVNSCZUVMOFERPBUFXEROAXYAKDBEGXXVCIXGSPOSOQFWOXSIUWOWLURVOEBPILHGQYBJNVJQIAQPJXLRKQTBUWWZYLHGNEHDJTKVSKKJQZAIQXEJGZAWYMHPCSCGBHPITPLRAZFTJNTHWYWROFXOMNSDAJYLWTAYMJLFTICDKUBGMSEDNLAMCNRRUFMKQRCJSLGDMMFKBQEPZDIQDWSKVTZDNEVCANXYGUDYVZHHYK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.606508441964);
    msg.setSource(12067U);
    msg.setSourceEntity(204U);
    msg.setDestination(50553U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.491818211339;
    msg.lon = 0.840713530545;
    msg.speed = 0.218664932457;
    msg.speed_units = 233U;
    msg.limits = 68U;
    msg.max_depth = 0.97009622506;
    msg.min_alt = 0.620949408557;
    msg.time_limit = 0.473069595344;
    msg.controller.assign("VVTBMLCZQXETIYEWBYGTMHENAODJQIGMUGQAHJCFXQHIPTOMWESPVGZWYXCDFOSZCGDMUHNCSOXIKXTERFZ");
    msg.custom.assign("OAVKXGNPXQFYWZXMZMDRNIAKQIJTCBFI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.148053163097);
    msg.setSource(5060U);
    msg.setSourceEntity(174U);
    msg.setDestination(27742U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.0518750103051;
    msg.lon = 0.455490498158;
    msg.speed = 0.418771255418;
    msg.speed_units = 184U;
    msg.limits = 214U;
    msg.max_depth = 0.184216979736;
    msg.min_alt = 0.44700771542;
    msg.time_limit = 0.883135781713;
    msg.controller.assign("TPQCHLWFPVFADYIMEHGSPGVZOGLIJPUTJUDKLYXGNZKVWHBAWQHUTSFKYTVHXPTLDRMDJMXMOCKORIKECJJWUDRNVUNRAWGDFGICVKZMTEEMAFOTAWAXQUZLOKSFHYRZYJJJQFZCFOUNHDXQCXZZVQUNHQEEGMRYOXTBXPAMZSXQPIIWBDZHYBIOYNVCV");
    msg.custom.assign("FXKOUKJWAWXGBLCZZZVMCPCYWOANAQQMLVZYTRQKHDJGUSCTJXPMRSKDZIKPNHFDOHRIFSVKNFRQLLLHYAPOOOXQAVSDXCAPBTKIJEJXWKYTKFFMWUSSJDZEBEMGPQRBMQNYGQGOGMNOLENAVBYGVITRXHNBAKRTTTDQILECQNSUEPVTZHXYDSMZCXGHFAUUWFDIOPGBJBUVZFDEIRMIJUSYLZNWHAETEWIFVJIXUUDHCPWMHNYLGO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.277533868754);
    msg.setSource(1001U);
    msg.setSourceEntity(124U);
    msg.setDestination(10713U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.499148009205;
    msg.lon = 0.746356992924;
    msg.speed = 0.144891963624;
    msg.speed_units = 97U;
    msg.limits = 84U;
    msg.max_depth = 0.672285342864;
    msg.min_alt = 0.0429798134765;
    msg.time_limit = 0.00320793013539;
    msg.controller.assign("KNWQXMRAPXKLHIKMMSKQMUAWGLXNIEWYLFGQOZRKSWTCMKAOFLUOZXIZXOBCUSXVABWRPAUYRUBCQETOZNWMFTCJFDCLBACDFYRFHMJJYDHAJEVCVZNHUIMYRHOHYSKTPPPDZJQTLPGRPWBBHEDJEFYRRIQNRGLGBLJQBYPHODEELGBUGIWAZSITGUKG");
    msg.custom.assign("WLAKRGKQPHHVZEBVXMQDJRXLTHTNVJFWTASESOMYHMFMSQTPMYTEPLWTJKFMCCYREDGKAXSBWZAGJBBAJNXGXJDQOPCNGFUOZKKHLCTXZSBKSUNOAOKSRFOZGIDHITIVQHIVWRUDYUFQPNMJIXJVUPLOIRBYBESQOQZDZGFDZCUGVINYOMARCLENPUL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.729952299548);
    msg.setSource(40776U);
    msg.setSourceEntity(168U);
    msg.setDestination(2232U);
    msg.setDestinationEntity(79U);
    msg.target.assign("VKFVANSBCPOJEEGOAIPLENULTIXFHADCFDQDQGMIWEETTOBNKCYDZHVWDJGNINDRKYLHPYQJVCBBAKSCPMBYOPQRYTOJFUEVLOZRRGEDVIGHZZBLQWXIJXUTYWYTRUNBRMWSERJJABEGBSEHHZPXXUXTCCWKFYUVXGWAMNZMYILJIHVSVNZAWNCXKFKTMJHJMXAFQABISZSOZRMHOPXPLQSNTFTGYDQGQ");
    msg.max_speed = 0.587071942213;
    msg.speed_units = 233U;
    msg.lat = 0.853997216576;
    msg.lon = 0.742727236729;
    msg.z = 0.653149519661;
    msg.z_units = 64U;
    msg.custom.assign("NMFXMRDUQAXDQDWRPVOMBONDLPEQOEPVURBIICIRRFTPRGIOZWAMEGGLKBWLNEBAJUDMMDUYWQTFITHXGCAZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.522221098816);
    msg.setSource(36437U);
    msg.setSourceEntity(144U);
    msg.setDestination(5551U);
    msg.setDestinationEntity(1U);
    msg.target.assign("VKRNYWSTYFHWXAPUWMNDGOEBSMADJDCTCFOVRGPCLJDIARXZJPSANEBEOXSDTLZFEOGTEGFNAZTHIKVADSSZRHVKCYFRPTOVADVNRWIECYEUGUZKOUBMUZQWCKSBXBLIHQDRWEIFKRJPMGUEXECHHVQLULF");
    msg.max_speed = 0.535340740855;
    msg.speed_units = 32U;
    msg.lat = 0.579647429618;
    msg.lon = 0.876676648333;
    msg.z = 0.57114492678;
    msg.z_units = 100U;
    msg.custom.assign("QSOQBPFCGYZDEHPJYMLFLUIKHZWNJKZQRXCFHYYPEJKKOZNKTDEXGNPILLBKIOWWGYDNQMOMVRTPGFXUYXAWWVFMITEVDJAHIXHIETETSMBVZMBWUSWUSQBMPKYBFGFXTMJUSRDWAMVSLJQICLCTSTDGNDZRBRBNOSVTBRCVXNGAUOAQHSUYOJCEFXRVJCPJXKCQWAYHNLORIEDKUGCKFSZDXINBWFJEIT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.88049562305);
    msg.setSource(40266U);
    msg.setSourceEntity(205U);
    msg.setDestination(1172U);
    msg.setDestinationEntity(216U);
    msg.target.assign("MJTWQDMJBSJMMPPZPDZLZZBFSWTNTEHONKIGVXZXLDGFOXJFICIRUXTCQFUYZSUYZBGBGVQCGWFFJYABKVNCWTCUYWLROKRNGZPXDHPILACOAMDIYKIHHAZYLMSLLHIQBOUDOQJOFISEMDRPVHXVAERJESSBMNGILYZKFRERYVNHJDGFPXRWYXUTPABNJTCIJDLVNYRVPVGNSEQLXCAMKESVPTXAA");
    msg.max_speed = 0.704372498528;
    msg.speed_units = 40U;
    msg.lat = 0.672413367156;
    msg.lon = 0.442702861512;
    msg.z = 0.33644681696;
    msg.z_units = 185U;
    msg.custom.assign("DLTUPLOYKFDTRHSJORUVGKFXEVDLWMMNFZTEDGPOSUCZMAXQHLIJNFTAJEOIBYICHVDJKDZOLCYVWBJNEGLCSYUPXJHZROTDJSHMSEPCNLIHEUVDWEOAQURFKFKOAQWXZGMWSIWUYYNXHPGXYCWQBRPQQJMQGVMHYXLCKBRRKTNPWAHIFMQSZG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.209403542682);
    msg.setSource(53984U);
    msg.setSourceEntity(86U);
    msg.setDestination(31255U);
    msg.setDestinationEntity(103U);
    msg.op_mode = 32U;
    msg.error_count = 195U;
    msg.error_ents.assign("MEMNAJLAOEQIJBZBSHDCSOWJAPMQETIGUXXFXTADZDFCKOOFHVTVXHNCUBTRBKOSNFLSJHIKNOTIJBYUTNBMLDNQXRZRGNNKEGVQAOSPJYWEKDWHHYEFAZRCUFMWQLXSXYXGHQUWDGWGWEVDCRYVDTVPUHLAWFJZMFZBDLUPJIAZ");
    msg.maneuver_type = 18308U;
    msg.maneuver_stime = 0.157491835945;
    msg.maneuver_eta = 2250U;
    msg.control_loops = 2951334136U;
    msg.flags = 106U;
    msg.last_error.assign("IOQTCUKHYQZTOZBZWTMFAVCABNNCBWHRAUGKHSDEGUAULKYMADSGS");
    msg.last_error_time = 0.686535882641;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.52767096965);
    msg.setSource(64962U);
    msg.setSourceEntity(235U);
    msg.setDestination(57883U);
    msg.setDestinationEntity(27U);
    msg.op_mode = 221U;
    msg.error_count = 104U;
    msg.error_ents.assign("OTHCHKNABIQFPDNCXLWLQRJCDPDKBRPQDTPSJQMLEXNEEYZGOZAMSVVJKOIFLCZBPYFRMYRYAWGYEVMSIZKHDRIXTGULJTTXFNPWCPLACAPTEYNKMHEWFZOXRGGFWTVJWHWICO");
    msg.maneuver_type = 4852U;
    msg.maneuver_stime = 0.749214738683;
    msg.maneuver_eta = 11997U;
    msg.control_loops = 3525417678U;
    msg.flags = 8U;
    msg.last_error.assign("YJWQSVAOQQCWATKNXCKZLCUTLLNMKVUBBTPYZRAXZLSRRAYJNGUMQWMKBPHWHRGZNXMFQMTYIFDDZDEXHIIOVODODUFOBKTLVFKBDKZIUDSPPDCGWQTHFFGCJVGTFGSAONFABEZCYXIVHYONNUBMJZENJASVJHLIQFWVQUZAMPPORXSNFAQXSXDXRJIBVEDIOWE");
    msg.last_error_time = 0.884497839957;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.814678952463);
    msg.setSource(18674U);
    msg.setSourceEntity(111U);
    msg.setDestination(32385U);
    msg.setDestinationEntity(133U);
    msg.op_mode = 58U;
    msg.error_count = 122U;
    msg.error_ents.assign("QTBOFAUHVQFYDAKHDSBNGCXYFGSLQMNMQJRWOGQCDSPUTRLICCTMYIUXFXLRGJYJBEIDSYVBWKOZLZOQMKYIJQMRWEQRNAAEPBESIBVXNSSGAXGHTKELTXPMUZIALFCSEJKTNUAVBAIARPZMCHDYFJBKVWKDVDCZWETJHWZUOOAXVMCVRUXOITGVWRLPGTOQHPRVMLPJFFLUPNIEXNBDZSFUDOQHBREHK");
    msg.maneuver_type = 60797U;
    msg.maneuver_stime = 0.880645490203;
    msg.maneuver_eta = 55125U;
    msg.control_loops = 470756082U;
    msg.flags = 184U;
    msg.last_error.assign("ERARTNLMRRRQCSAKOTNZUOMALISFEHMXQBMLIUGEOMOXFNJQHZCLISQPSSNXAXPDYWSLFEUVGDIZVRWCWZGSZKFKIUSMXRUFZDJBKIJIXUJEYWTBBBWPTJNETDQEFCUOVHQWZMBJFOIHK");
    msg.last_error_time = 0.782796606937;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.67698738072);
    msg.setSource(35025U);
    msg.setSourceEntity(179U);
    msg.setDestination(64120U);
    msg.setDestinationEntity(48U);
    msg.type = 240U;
    msg.request_id = 2654U;
    msg.command = 254U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.849542188946;
    tmp_tmp_msg_0_0.z_units = 87U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 44488U;
    tmp_msg_0.custom.assign("NSGAYTZQKZGIGUTIUYWBXWPSSHRJWHJFXKMNLBZRJIJSFDSZTNNALSUSMKTPAVMOCTDTNJUVYNFNICMDV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 39773U;
    msg.info.assign("HKMXPTNBGCERRBLOYPQQOOZEUKWXJGKAVHKIGYXXOCHRKIANVHFJQSWCGYDDMNGNVTVFUECLDXYJSSRZTXMXUEZFJSDBTYDAHJFMMMLKXNEBWLNUFZISBARWVVAHLWQCAQOJBCDKQUEURWYFBOETRGFXCJIVWSYCOUEDJIMPANPY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.661131844226);
    msg.setSource(24764U);
    msg.setSourceEntity(201U);
    msg.setDestination(7697U);
    msg.setDestinationEntity(126U);
    msg.type = 85U;
    msg.request_id = 31649U;
    msg.command = 82U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.483073579136;
    tmp_msg_0.lon = 0.964874718835;
    tmp_msg_0.z = 0.0116899358251;
    tmp_msg_0.z_units = 132U;
    tmp_msg_0.speed = 0.608150453975;
    tmp_msg_0.speed_units = 240U;
    tmp_msg_0.abort_z = 0.576736259912;
    tmp_msg_0.bearing = 0.0399182975755;
    tmp_msg_0.glide_slope = 0U;
    tmp_msg_0.glide_slope_alt = 0.671465088201;
    tmp_msg_0.custom.assign("QAIXIUWZGPNQHROUQEBFKUJFVPSVQUJWILORMZIYJAPTSRIMBUYZMTDB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 46462U;
    msg.info.assign("TFKCGNHBQSPUZKEKRKCMPTCGBDGMNPWEDTPCNIPRQVOUTYDLWUHFAXILMHAV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.229095811475);
    msg.setSource(16688U);
    msg.setSourceEntity(16U);
    msg.setDestination(26500U);
    msg.setDestinationEntity(90U);
    msg.type = 15U;
    msg.request_id = 40791U;
    msg.command = 206U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 4251U;
    tmp_msg_0.lat = 0.0759352189335;
    tmp_msg_0.lon = 0.362880316203;
    tmp_msg_0.z = 0.316800707536;
    tmp_msg_0.z_units = 11U;
    tmp_msg_0.pitch = 0.10198811486;
    tmp_msg_0.amplitude = 0.294765956417;
    tmp_msg_0.duration = 4522U;
    tmp_msg_0.speed = 0.821312379859;
    tmp_msg_0.speed_units = 243U;
    tmp_msg_0.radius = 0.224089092359;
    tmp_msg_0.direction = 89U;
    tmp_msg_0.custom.assign("LEATJJDXHHELQLGBAWILRGCHLTUSSNVENKPSVHDQXEWZNVYIVOHYPGLADWCVYGELGRLSGBRKFETSRSYJLJTERKNWUBBCHDDOYADZZWMUCQGROUBBYXMWAZZIENSYRNITQVIXOLPUOOPFDFVJEQBIBGFDCBWUUTOQFBMQPCIDZKAX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 17211U;
    msg.info.assign("LYNWJODINVQXHRTRBNXBJPMBRQPIQANLUJIJCZJCICUZKKZICKJPJAVONARNXMSMZZVZLZQOHWGANVRITVFWMYORPHSBQIHVCSTMMTYEWEHNIPBUSFPCSODGUOWSAWLNBLAUHYOGMVGRTBKKHLKTQDGFWFSGUXEZFVFEWFQYWHMSTEAJXNOYDTYPCLCLAXDYBRBAFQGZJCIUHXZOJHETXOPQFAYMFSLXGCPREWXUGT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.667740035964);
    msg.setSource(42038U);
    msg.setSourceEntity(103U);
    msg.setDestination(39035U);
    msg.setDestinationEntity(111U);
    msg.command = 10U;
    msg.entities.assign("IBSOENZQVWWNEUDCOFXGVELSPKUAUQHYPKCVLTXBKDFDNLGLNXHTRFVADCRPFTELBSQFWBEIIYGZWOHKAOKJNARYMBWAUUIZOIIYJCRZGNYUXEYTQCSBMLYTQD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.216058963984);
    msg.setSource(39031U);
    msg.setSourceEntity(209U);
    msg.setDestination(37513U);
    msg.setDestinationEntity(72U);
    msg.command = 108U;
    msg.entities.assign("PKALUTPLSNMROWQVHXCKFPYKVGVBERQHUAUWRUJFEBSZOUXJSTISTFYLBJMLOMDTOSKXGFZJEVNYBBNECCZZOMEJGGKPHAXEMPGZSADRPSRXCJKIMYUFDNAETVYPGVEZUKEMOKVTCYNBQUBCQVDRVLJCOZNMDVYYWOJPWIWIOLZXTYIHBPTDJAIMCILUTGCTSKQBDYFJFZALRMWGFDXWLXQXINLKHWNISRWFRXQAEBCHNOSHDGUQQPZH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.293649306148);
    msg.setSource(6454U);
    msg.setSourceEntity(187U);
    msg.setDestination(32691U);
    msg.setDestinationEntity(198U);
    msg.command = 41U;
    msg.entities.assign("EUXXFRJODZQCTHXCEVFFOMGWIASTXIYOMKFJPVEZNZFDXCSAGGCRAZNHXFBLSQPGVPQBZXNQRYJNPHAVNZVKBGSINVYCGOLUOMUCKKOHLUHWGMILFZEEKSQJCBQQEVRPWZWLTWAOPZKSDIWRYDMPDHAUEITTRHZJQBKLFHOYBIEIOUUHSQLXCUYNPJUNUBAVIXJWTYYADTKRKVHDMOWSDB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.860599482853);
    msg.setSource(36323U);
    msg.setSourceEntity(31U);
    msg.setDestination(45996U);
    msg.setDestinationEntity(116U);
    msg.mcount = 230U;
    msg.mnames.assign("WXAJKAKEZDHPFYODUHFYTALPMBJSBOJYRNLUDRJSESRTNBCIWVTUIKNCKDWHUDMHAOPACFNCKXSGWDJHZLVKBPJGKCMSOQSEWCQFNZBLHZEFYKRSLZPSRFISMZEQHKQZTVIUAGFWYHOMYMXRRVYUEJCPIYXDTIOVWPGXLIBLTNNFDKGVSCMXPWDEAIVQUOJODANRBYZRLI");
    msg.ecount = 122U;
    msg.enames.assign("YOOKNFMGZMFJUPAXOOUXBJAZHHDKNVEMICLTIKQYHPTAOEUTEQLENBQIAUSYHBXSNACKYSA");
    msg.ccount = 242U;
    msg.cnames.assign("VSRKTVMQEBCHLULAXWVXTIVSBOZCINTCXMBHDYAIQGZMCTFOMFNDVMBOJSHFTTSTXARZXFIXTHRYUGZNWXPKJLWXNBZPEZKJWOSZLSUJWRNQZGAEGFUHULLYHVJEQAKDASOPHLLGKMDGRGQQTGOAFPBOMIZFEJJNDJERHPYOYCPBQGOUSIRDJSUPVXYMCWAPKGCYNPBDRBQZ");
    msg.last_error.assign("IWEGNEOPJEKISFYKHRDFYOUAQVTYERVKFGFMZPJBZWCUHBWDNHCNVPJNIQQOOIWNYUBKZGQDPIFNGVTHJRASYCTSZUZMTBMXHPBRCGTQOTOCWSKJJPF");
    msg.last_error_time = 0.845050586841;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.150678375084);
    msg.setSource(63888U);
    msg.setSourceEntity(142U);
    msg.setDestination(30568U);
    msg.setDestinationEntity(148U);
    msg.mcount = 180U;
    msg.mnames.assign("UFUTYHMNQUKPIKFKSJGKZDHPYALSEPWNMXVUCMJXTGRPAEDICBFTKSVFLIEKLNODFXKXCIOLSOORZJXQBMNEJYZSUWOYIQEBKWWERAGNVCIDSGWIPIOCSGZPLBVTLPHLVNKXMSXN");
    msg.ecount = 137U;
    msg.enames.assign("VGZZWYTNPNWU");
    msg.ccount = 214U;
    msg.cnames.assign("MJWQKBBCGOHTVYOHMYISZWDXFPIJUNQHGLPHHENOCXAKMCKSTYTAW");
    msg.last_error.assign("CJTHFNZZSLGNYQXUZOLPQPHASZLCHJXLYFXGBGUKEJUHKFNDNKRLRPWGVDYXEQCCKSFIJAOMOIXGLQUO");
    msg.last_error_time = 0.619917531434;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.969832829132);
    msg.setSource(39721U);
    msg.setSourceEntity(158U);
    msg.setDestination(1170U);
    msg.setDestinationEntity(150U);
    msg.mcount = 174U;
    msg.mnames.assign("JMVVOXFNJZWJUPRRHFKUKIPICJZFEPCGTNXOWDSXQBEIFYQLVYUAFYVA");
    msg.ecount = 148U;
    msg.enames.assign("EJVMDCPDKNKHEHWAKCUDNVSJYAXQIETPGWNXSOFAXLQLL");
    msg.ccount = 19U;
    msg.cnames.assign("OGIFGODVZFDYSJTBKNQKXVZYMRUBWJEBKKFEEQAMBASPWQCSTCCFICEMWJ");
    msg.last_error.assign("BFJTXSUBPCUWLHWFXBSKCWBJZMBBUEYQWA");
    msg.last_error_time = 0.38340082501;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.546202251837);
    msg.setSource(22176U);
    msg.setSourceEntity(240U);
    msg.setDestination(6026U);
    msg.setDestinationEntity(6U);
    msg.mask = 114U;
    msg.max_depth = 0.22590127718;
    msg.min_altitude = 0.731980113739;
    msg.max_altitude = 0.660825427167;
    msg.min_speed = 0.707835190485;
    msg.max_speed = 0.939198675983;
    msg.max_vrate = 0.605397267764;
    msg.lat = 0.21689475794;
    msg.lon = 0.868987721629;
    msg.orientation = 0.29247214984;
    msg.width = 0.0793359220132;
    msg.length = 0.242173480661;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.932655262185);
    msg.setSource(20775U);
    msg.setSourceEntity(48U);
    msg.setDestination(15561U);
    msg.setDestinationEntity(170U);
    msg.mask = 142U;
    msg.max_depth = 0.942906332717;
    msg.min_altitude = 0.579113966254;
    msg.max_altitude = 0.976362503936;
    msg.min_speed = 0.679873525291;
    msg.max_speed = 0.455896222554;
    msg.max_vrate = 0.918076125159;
    msg.lat = 0.617702449266;
    msg.lon = 0.595400328102;
    msg.orientation = 0.162372038882;
    msg.width = 0.644716687135;
    msg.length = 0.888253376692;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.810697478601);
    msg.setSource(59819U);
    msg.setSourceEntity(36U);
    msg.setDestination(55079U);
    msg.setDestinationEntity(98U);
    msg.mask = 9U;
    msg.max_depth = 0.44169643545;
    msg.min_altitude = 0.14464415307;
    msg.max_altitude = 0.880838658244;
    msg.min_speed = 0.325123399111;
    msg.max_speed = 0.729529322215;
    msg.max_vrate = 0.142419590258;
    msg.lat = 0.466082163729;
    msg.lon = 0.782753756752;
    msg.orientation = 0.304424097408;
    msg.width = 0.19518707136;
    msg.length = 0.0449642170754;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.93446819836);
    msg.setSource(44393U);
    msg.setSourceEntity(99U);
    msg.setDestination(65446U);
    msg.setDestinationEntity(110U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.716355870336);
    msg.setSource(18116U);
    msg.setSourceEntity(213U);
    msg.setDestination(59711U);
    msg.setDestinationEntity(166U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.793308261345);
    msg.setSource(53404U);
    msg.setSourceEntity(188U);
    msg.setDestination(63042U);
    msg.setDestinationEntity(9U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.929421212113);
    msg.setSource(27967U);
    msg.setSourceEntity(113U);
    msg.setDestination(17122U);
    msg.setDestinationEntity(238U);
    msg.duration = 18315U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.897429861999);
    msg.setSource(48861U);
    msg.setSourceEntity(138U);
    msg.setDestination(16765U);
    msg.setDestinationEntity(83U);
    msg.duration = 44893U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.677638509604);
    msg.setSource(28539U);
    msg.setSourceEntity(223U);
    msg.setDestination(49015U);
    msg.setDestinationEntity(156U);
    msg.duration = 26454U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.804289316693);
    msg.setSource(12366U);
    msg.setSourceEntity(93U);
    msg.setDestination(42274U);
    msg.setDestinationEntity(129U);
    msg.enable = 59U;
    msg.mask = 2804907098U;
    msg.scope_ref = 2751254211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.195376454498);
    msg.setSource(12418U);
    msg.setSourceEntity(136U);
    msg.setDestination(57884U);
    msg.setDestinationEntity(194U);
    msg.enable = 244U;
    msg.mask = 3277189394U;
    msg.scope_ref = 280688026U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.0854659596487);
    msg.setSource(10272U);
    msg.setSourceEntity(248U);
    msg.setDestination(26846U);
    msg.setDestinationEntity(50U);
    msg.enable = 3U;
    msg.mask = 1637575923U;
    msg.scope_ref = 3301779261U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.871101042469);
    msg.setSource(12681U);
    msg.setSourceEntity(135U);
    msg.setDestination(27547U);
    msg.setDestinationEntity(72U);
    msg.medium = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.806159555425);
    msg.setSource(52050U);
    msg.setSourceEntity(217U);
    msg.setDestination(4014U);
    msg.setDestinationEntity(29U);
    msg.medium = 108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.737915310917);
    msg.setSource(37183U);
    msg.setSourceEntity(92U);
    msg.setDestination(36661U);
    msg.setDestinationEntity(165U);
    msg.medium = 35U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.762732281019);
    msg.setSource(34596U);
    msg.setSourceEntity(179U);
    msg.setDestination(44346U);
    msg.setDestinationEntity(225U);
    msg.value = 0.109854078473;
    msg.type = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.853075968148);
    msg.setSource(33935U);
    msg.setSourceEntity(118U);
    msg.setDestination(38799U);
    msg.setDestinationEntity(160U);
    msg.value = 0.512270593818;
    msg.type = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.724020666088);
    msg.setSource(28206U);
    msg.setSourceEntity(162U);
    msg.setDestination(64122U);
    msg.setDestinationEntity(238U);
    msg.value = 0.929421211726;
    msg.type = 76U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.333202196852);
    msg.setSource(40255U);
    msg.setSourceEntity(250U);
    msg.setDestination(1057U);
    msg.setDestinationEntity(147U);
    msg.possimerr = 0.650205908773;
    msg.converg = 0.695544219956;
    msg.turbulence = 0.957832546985;
    msg.possimmon = 90U;
    msg.commmon = 98U;
    msg.convergmon = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.251939008212);
    msg.setSource(30481U);
    msg.setSourceEntity(6U);
    msg.setDestination(2512U);
    msg.setDestinationEntity(157U);
    msg.possimerr = 0.910936513789;
    msg.converg = 0.940264744034;
    msg.turbulence = 0.183872544262;
    msg.possimmon = 98U;
    msg.commmon = 130U;
    msg.convergmon = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.308656656891);
    msg.setSource(36898U);
    msg.setSourceEntity(243U);
    msg.setDestination(46563U);
    msg.setDestinationEntity(229U);
    msg.possimerr = 0.656851717636;
    msg.converg = 0.625041640209;
    msg.turbulence = 0.907013748163;
    msg.possimmon = 137U;
    msg.commmon = 45U;
    msg.convergmon = 250U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.401438418141);
    msg.setSource(6954U);
    msg.setSourceEntity(227U);
    msg.setDestination(60431U);
    msg.setDestinationEntity(52U);
    msg.autonomy = 210U;
    msg.mode.assign("GXFFYHIOIQSRCTJBBRDVYAWVJNADURZRXIMAVYAUDEKJVVZKELUTQZVQTBLRIPCTELTXJNBJYPYMTRBUNDHWQPJHOMCKGOLLIIIWYZEQSTLHEAGMRGFBAZMLWDKCCENPQEWTNGN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.560211510901);
    msg.setSource(45224U);
    msg.setSourceEntity(250U);
    msg.setDestination(20382U);
    msg.setDestinationEntity(81U);
    msg.autonomy = 211U;
    msg.mode.assign("CJMBAUELKLSQOGZPYHTGYKGBHWRYVCUOSHNNLWFZEPGLJGZTOOTFQQQXCJNNCKPFZRZFTCZFAVYWWFICNTOCED");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.792890343497);
    msg.setSource(55568U);
    msg.setSourceEntity(168U);
    msg.setDestination(35625U);
    msg.setDestinationEntity(164U);
    msg.autonomy = 158U;
    msg.mode.assign("CCDBHNAKLETPKLTBZRAUSMEZLFHPUOMXRGCJWVKDPQTESFGFUMDPWROSEJWRBCPFLVBEAVQTAUZORZRTMJNBWLAFYBKFGGVIYTUIVJBMOLQXITWMJNBJQWUYVQQKMYHVIQFKKBIMUHHACSDSINONDGEFADWURQOGPJJDBVOXFENZUPHWAQKXLXGHEHNIXHZZZNKK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.926382541021);
    msg.setSource(49792U);
    msg.setSourceEntity(147U);
    msg.setDestination(7014U);
    msg.setDestinationEntity(77U);
    msg.type = 155U;
    msg.op = 22U;
    msg.possimerr = 0.0380692443173;
    msg.converg = 0.0572057379501;
    msg.turbulence = 0.0168944630344;
    msg.possimmon = 173U;
    msg.commmon = 82U;
    msg.convergmon = 101U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.829573265271);
    msg.setSource(34536U);
    msg.setSourceEntity(19U);
    msg.setDestination(59830U);
    msg.setDestinationEntity(33U);
    msg.type = 164U;
    msg.op = 65U;
    msg.possimerr = 0.141916955374;
    msg.converg = 0.934758509061;
    msg.turbulence = 0.730546319454;
    msg.possimmon = 60U;
    msg.commmon = 185U;
    msg.convergmon = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.751289990009);
    msg.setSource(39076U);
    msg.setSourceEntity(153U);
    msg.setDestination(63040U);
    msg.setDestinationEntity(225U);
    msg.type = 229U;
    msg.op = 24U;
    msg.possimerr = 0.928754547674;
    msg.converg = 0.916035186665;
    msg.turbulence = 0.889262976092;
    msg.possimmon = 19U;
    msg.commmon = 200U;
    msg.convergmon = 133U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.800120774654);
    msg.setSource(65355U);
    msg.setSourceEntity(244U);
    msg.setDestination(9972U);
    msg.setDestinationEntity(153U);
    msg.op = 201U;
    msg.comm_interface = 182U;
    msg.period = 59969U;
    msg.sys_dst.assign("FLXCQAEWLPGWYYYVUKFMDCHNIIUFZJZS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.73650603669);
    msg.setSource(46298U);
    msg.setSourceEntity(169U);
    msg.setDestination(50144U);
    msg.setDestinationEntity(232U);
    msg.op = 162U;
    msg.comm_interface = 96U;
    msg.period = 21072U;
    msg.sys_dst.assign("KTQTKGQMXXAZTJCZLXDSHKLAFSNQOLFUJOOYUJMBHOTWSNLDIYCDYKLDGRGRS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.730902902648);
    msg.setSource(10214U);
    msg.setSourceEntity(15U);
    msg.setDestination(48470U);
    msg.setDestinationEntity(168U);
    msg.op = 54U;
    msg.comm_interface = 244U;
    msg.period = 6579U;
    msg.sys_dst.assign("CQGVXPHCLWZPINGKLBCGMVTGAAEIUTVODOKETJTCADIDIJODMEG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.412515089923);
    msg.setSource(41707U);
    msg.setSourceEntity(200U);
    msg.setDestination(10197U);
    msg.setDestinationEntity(46U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.506767904962);
    msg.setSource(6202U);
    msg.setSourceEntity(243U);
    msg.setDestination(61945U);
    msg.setDestinationEntity(165U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.393964321627);
    msg.setSource(29866U);
    msg.setSourceEntity(174U);
    msg.setDestination(21696U);
    msg.setDestinationEntity(81U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.427691487332);
    msg.setSource(1583U);
    msg.setSourceEntity(193U);
    msg.setDestination(54625U);
    msg.setDestinationEntity(182U);
    msg.plan_id.assign("FGLJKHANPBVDSWUUBHPBFLYLXCCTRUGIWUYTKSMGCIFENQYVQVPJLMRXHDVXXZCKRACIOWMSVERDPNKARKLXQZVKYCRYQODOUWMVPNWBGOZONDUAXZEWTSOEHSQBHCD");
    msg.description.assign("SAVIOLRSBSEMJSGBCEKEASQKRQZITWROJIYLNXRJGUXUPMXHGHTKSMOBHICOIEQOIXWUTSRPNTHZIYABALGFXFAVQZVTWRNQZGVMCTACSLJPNDWFMZPGELYIDLOYMDEKNMVEXAWUOWLPCFVDRFYBYFFRECOVPTRNCYNFYHZDAXGNXUFUHHCDDJHULPZKUVQKOYVBIDKUHQCB");
    msg.vnamespace.assign("ICIJSBHHADDCXKEHWRGFKQEHNUNTAMRYDBPFZOIEKZVMJMCAILWGYGWKBFGSFSFPPYWQDMGSMEKUCVUSBBOFBFKVMUDHBSJILTMYLLYZTOUPWYTLORXAZLTSSQJEYOJMNOELZCGNQTFPGJTTCXWCJKKRRYGQWQPWPURNNXASOMBAIQEAEZPCHXBVXRQBAUE");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZGLRDLKVKWVTLUQPXOMKOYIVGPCBNMTXGMOBCWHQJNPDIM");
    tmp_msg_0.value.assign("YAINJZZJYNOZBSKVXUQZHYATYNVXJTMPZSLOJLGYWZSQAGJXCVUBWREGVNWJWBILHKXHMGUIILTMADGKWYDZGFBHHMCJVFDALSMVABAXQXDPLHOCDCEBVWNVZITLFIUQYRYSCTGDRPQXDQBDNOEFGMHPZFLRWRGKTOSXPZFIRXBHCTBUUKMKQILRNRHUGERSFECEISSTCDMFPUDOBPPEAEFWQHNSOTNKFAJQ");
    tmp_msg_0.type = 250U;
    tmp_msg_0.access = 104U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WUHEDFGLQYWVJHVEXQNLRMUAKMKMSYTQTBQNFQPEDYGKKMTQAJQNXZKGZLPPNSJGLFWSXHPZDYALGVBHQVXVMYWUXTZUNVKPEXJOWRFURSBOLIMAZIGZXHOPWKFRZLECTMYIIWNAGBPNSDTCCCHFOVICRDPTZIURVSBUPETQUBWFBFOJXANN");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("KPQHDFEALJKDLFAROFCKYPUAZLGAZVTIUZRIYXEYQSZWENUHXFOQAJJNFJMRRJTPXXNKVEJPMTVASGEIHBBMOJYJWLOHZUSZXGBEQFTCQZFIOIIVVFSETSKQFOAIMVDSBSDNOFRCMBMWJMWLGVBCYLHMDDXN");
    tmp_msg_1.dest_man.assign("XZHYYDWCXONOATBUQBFBQSJAERTBCFCWHZYZVFPAYARXRAPATKVDAMKYEGDUWLFFXYMDTUOYWSRHREZSDHOXVHKGKGNREYNUJWKDBELWYBMGASLIPKZCNTMHOBXSGIEWJULNLQPVZFJTHQJVERWSIILIAVOUPJPBZLABXCINGKJOXDWYURVJUMFNQFIM");
    tmp_msg_1.conditions.assign("NVYVOSMFTTMLNLLNCZPPOVBXWKNDWFKOYVTTYUEAEIIEGSNIDMXRHALGTCQDRVVGQWORWDAOFXRQKHWMZMOJCSCZZOPAXDTHRBKEEJGBGBWVJATEWNBKFLECVMFLSIQIYPNUYAXJFHNWUMDBJHRDNHJWJSBQPTEIGZACUXSGYKYUHXRQAUCGARHVDKGZFS");
    msg.transitions.push_back(tmp_msg_1);
    IMC::DeviceState tmp_msg_2;
    tmp_msg_2.x = 0.89516644495;
    tmp_msg_2.y = 0.48778837307;
    tmp_msg_2.z = 0.524854604983;
    tmp_msg_2.phi = 0.733568628635;
    tmp_msg_2.theta = 0.556913575787;
    tmp_msg_2.psi = 0.706977139876;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.443714353758);
    msg.setSource(27072U);
    msg.setSourceEntity(231U);
    msg.setDestination(60982U);
    msg.setDestinationEntity(101U);
    msg.plan_id.assign("HQGSUKCWZZEPQWLSRMFTTICOBDYXYDCRJRZBMIITFFOEBXMQBKONMKIMPVTNRGALQGJXIAQCTBMYQEYKWVUQZNCGDWHSPEGBLVPOJPNYRDZYULJAPLFFEUFONCWMVWJUWPQBTSHKLFSMBPIZKNJZMCFNTOVHUZXWJIGNDHCTRSXZZNAJRLXRXJLWEHOIFVHWIXCKGADHDDTSGYIGUYEQGKSJCEVXHXDUUEV");
    msg.description.assign("TFHTSCJBRUOBINGWERXKMFMPJQWAPTFPZTMWMIIYAXIBZQZLEZEWLMYGFPZHUSEGSRATNVKRLXQJJXGYQPLYFBIKMDVKGKAQUCBQPHRQBEILHYLEBIYPEWKZCFURJPVZOWJOSSLTTSLMUUNYCFXRQUNSMTTAGULWEVHOHJXNBXYNYODTNBKJGRDKCQRGVIIOPUUCOVBSEHJCVZLXQADZWOFJDWCYWDDHNKACKMXZMSAANFDGRHDVFDP");
    msg.vnamespace.assign("TXVPOXPXBSKKIURFHFZMEWNCZGOAVTZBAAYSIBQHFLNJCXBSUDHTBIHMBODFCVEXWLOXCPDTARLGEKPSCCLIHRERYGEJVGKMDFAMZYIGPFQRHJOLDQWZWRNBSHTYMJDWCTSABZTUYAHBXJSJNZLUOPKVPJZXAUJRFTMREQECCQLXZVQLNWYFSIEFJGJWGKWYDVUSHGDINMQYUNIMRPLGWTU");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZRSGUTXQCNMTOGEKOFQKJDDCOGNGWHQKSMGPXUTCYUPTNKDDLPHEOPMRVSKAWVVZIRSAKWNMBOPIDXOFLUWISETARGREKBQHLLHFLRCXYREZSVXDYQWLBQMFIVYFKXBEJWGQMLZYZWACDSHTVNJHMZQSNQZFUZNAYOBUXDEXIPUFTRUTQYBLPHINWIVUEVJXCIAVCVIJPSTPJDZMHYHTZLJBOFCOGKRNCFAGMSKBAJF");
    tmp_msg_0.value.assign("IIJDSTGBIDOFLQVRUHYXOGWTTWCMBJUZSBCSMENZMISKJRRPVRCYTWPDXEEPCOTCJSDZADUHJDPGKYXNYRCEGRBNFLYOLTEHZTVFHTWEGGBXHDBLAZMUQEKEMURQRNYWVILSCIYRFFFOGAJWPQVFVBAHCDNGCFZJNLEUWY");
    tmp_msg_0.type = 144U;
    tmp_msg_0.access = 240U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("AWUXGEUHOEKBCQJMTLBQWILLYJTIXVAAYTESBNONVSRHSICSULIZVVTZMQXPIZEGLOIOVKJTJQCSRGABGRMDUZNKQHUDCSWPAXFECSFHPUTZMAJTCZTBRLRHQOZVWYJISJGXLWYUHXNVEJPUVWFOPFUKOZNFUDLBAMZKQDNIRAKDNCOBPDCNFIYYMHNLFKQHEXMNXMFAHVB");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("LHAIDUVAZCGLFZSAGOVOHKTZDAFTBKYFJMBERXQNUNQMXQKWNSBPMORKQUSVVYBLMZILZIJJZSXEAZPCEPGCTAAQPUOYXHJWJQQDCPNPHITWODXNNKJWKIFHUCMINHGUCEBCRYEWDWSIBSLLEAFVRDJQHRVKTNVMKSWSEVAIGIPHLKTUEOOMURXYJCREGXULFRJBNTODOGUDLPZVYYILHVYXXOQ");
    IMC::FollowPath tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 51091U;
    tmp_tmp_msg_1_0.lat = 0.803795359434;
    tmp_tmp_msg_1_0.lon = 0.995715798381;
    tmp_tmp_msg_1_0.z = 0.752608281279;
    tmp_tmp_msg_1_0.z_units = 190U;
    tmp_tmp_msg_1_0.speed = 0.240199662231;
    tmp_tmp_msg_1_0.speed_units = 14U;
    tmp_tmp_msg_1_0.custom.assign("HSVHYFXMUZJUVFOQQTKIYPEVICCEZPYHKAMEBMWWXNUJFFGHRRCIDTLZQAPWQKFUCBDVKVANARSGLQXQTFIOMSELCKCMZYAOFGCZHIQAJKBYKANOPXURXEDTRYKDAXWRVGFMPLTNNCCULHGEJORPM");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::VehicleFormation tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.lat = 0.00627119805828;
    tmp_tmp_msg_1_1.lon = 0.681368207413;
    tmp_tmp_msg_1_1.z = 0.105382905453;
    tmp_tmp_msg_1_1.z_units = 162U;
    tmp_tmp_msg_1_1.speed = 0.00762076767324;
    tmp_tmp_msg_1_1.speed_units = 76U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.vid = 63131U;
    tmp_tmp_tmp_msg_1_1_0.off_x = 0.231725667414;
    tmp_tmp_tmp_msg_1_1_0.off_y = 0.200645120342;
    tmp_tmp_tmp_msg_1_1_0.off_z = 0.657129354667;
    tmp_tmp_msg_1_1.participants.push_back(tmp_tmp_tmp_msg_1_1_0);
    tmp_tmp_msg_1_1.start_time = 0.746061912874;
    tmp_tmp_msg_1_1.custom.assign("LVIJMFZQQLCRIZSUCTGOHMNYYPFGDPAIGVSJHFSRTSFCUVDXQIRFDLOAPXTRIMATWKMTDFBLVPBNJXAHDYLKK");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::CustomManeuver tmp_msg_2;
    tmp_msg_2.timeout = 56646U;
    tmp_msg_2.name.assign("YMVQQBKWNDCOACXOTWTHIGMHSQOBAJBAYSOLMHLNCAIJPFXBENPJPEGPIKRKLULVOHZXYVLOKTDRZUIQWMSWJKCZNFHQPEXPQVENGRMORZNYCIYVGZFBSXEHSMQETLUIMGZDLVJURJTWUJJLZTPQWHLPYTWUUTWKASKBRFIPFMEXMCSIPKLXDBOGZURFSVAAHXMYYVGUKDFJNFYEHIXDDAAFQRFRJYTQCSBKGOWNZOEVDNDRTZSBCDIGB");
    tmp_msg_2.custom.assign("ABKBEIMIYJUVBTZOYVCQVCLOROVKKMHQBSNQNWKCISF");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::CrudeOil tmp_msg_3;
    tmp_msg_3.value = 0.967761439076;
    msg.end_actions.push_back(tmp_msg_3);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.0573634286944);
    msg.setSource(48929U);
    msg.setSourceEntity(151U);
    msg.setDestination(45079U);
    msg.setDestinationEntity(19U);
    msg.plan_id.assign("DTMBKNYQKHBUFLKRIPHXAHJLUUSYZCANVEFGWMSMJLJZFBMAUKPZXZFXAEGOQDFPIXTJNJYCVQRZZXAVTUTRNQBBCOMDGCSPWLBWUWDNYOZDNKAHYVMBWJHXEVUNEYRTSHDEDZJXFGVYIWTWVRMNLFFXAWDFHORXEQKJCQ");
    msg.description.assign("TNAIYKLQAAXLFEIRSJAONGYGIRQXLSTUMWUJBOKBUWSZKAJEQRVIESOBRGQETJPYGZBIAWAIYJXYFJHBJKPCSUYEHPEJSCMUNPCHOZTOHKEXPHZEMUZFWMWLLVXUCQOLIQTNCZVKMPRVPCLGNRAFVDNHCLQODLGDQSZIRDUXINGVPZWPDPKFDNYBFXEJREONNRZOYIVKXMWGDJWCT");
    msg.vnamespace.assign("EOEOFHSCUOJOHLMXATVVCFSMYQMGVJVHTMKSGUZNZZVWLPBH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QERXRJHEMFBSLRUIBJZBZPLQIVXGXFGMJUOMYXGVPIHNMVQIRRXBBUDJEQZBYWTHIAASFOTQQCPUCOKKGNZMPZJSUDWWTGXKDMKKVAVMHN");
    tmp_msg_0.value.assign("TYUNDTZAEKNQLYAUYJFNOUVLHMCOUWRZRDFCHAFJYKGAXIDSVMTYWUILOJRARQAZYEJIIBTVZ");
    tmp_msg_0.type = 246U;
    tmp_msg_0.access = 159U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NHLXICFYFPIPPHNVXFSUCTPKVIDTOBCYTOICGOBVPQSDGNXWXFUKEQDJVQRZLWQQSSIBGSKZWHZYKSEOXUTZIESAAMLPUEKRMOQZPFTWWRKNVPJCZUZLZFXYMCHKRGQDCMY");
    IMC::ParametersXml tmp_msg_1;
    tmp_msg_1.locale.assign("HPTYZSTKXJRVMZPVJZGTR");
    const char tmp_tmp_msg_1_0[] = {112, 26, -64, -23, -25, -73, 79, -3, 74, -110, -23, -123, -64, -18, 124, 44, 104, -118, 27, -105, 55, -37, 42, -43, 74, -109, 88, -98, -86, 90, 39, 17, -53, 116, 29, -94, -70, -127, 118, -68, -91, 42, -65, 61, 107, 81, 81, 65, 61, -102, 125, 112, -113, -63, 33, -19, 67, -1, 72, 32, -77, 7, -111, 37, 60, 9, -66, 42, -29, -5, 53, -110, 117, -11, 26, 119, -67, 0, -9};
    tmp_msg_1.config.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.430446973447);
    msg.setSource(41106U);
    msg.setSourceEntity(242U);
    msg.setDestination(14128U);
    msg.setDestinationEntity(89U);
    msg.maneuver_id.assign("MJCRNNLFZYRTCQHINYJVBVETDVUQFODRPQSMIKUUNJWJLYVMNFNWFFIGXDOLXFWLIBVKKSUOXMTBIARESEDCBMRJLQQWPYEAFSLHYSGYXIIMUOAUVHKUTZJTNHMMLOXQNXTIDWISZRVYAGCFHEKZHLAEXZBHKTTQPBTUVXGARCHMVKWGBDJXLHBWYDXPCZCNDEBGZWYYPSCWC");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.246085387598;
    tmp_msg_0.lat = 0.634437866437;
    tmp_msg_0.lon = 0.975360781611;
    tmp_msg_0.z = 0.96066693054;
    tmp_msg_0.z_units = 125U;
    tmp_msg_0.travel_z = 0.317281317695;
    tmp_msg_0.travel_z_units = 214U;
    tmp_msg_0.delayed = 199U;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.564384154661);
    msg.setSource(47989U);
    msg.setSourceEntity(112U);
    msg.setDestination(46869U);
    msg.setDestinationEntity(42U);
    msg.maneuver_id.assign("OTRGYOSGQQCMZJTBEDLENILORMEPDCGDHHCWTHQHFZPLGKCXTGQMV");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("DOOJMWKGYFSWMOUOPVRFZGZWZNLMPUSVYEJXCIHUQAMRQPFSYMSKWJYFHAEFKRQNEWUFGMURIPHSXTHZAANEBKZKHDTNPIDYTOYRNALABVJLFCKTUXVYNKEBCGPCYDLMEAEYRDIIGPODJTCQTZNBQZIOEFJWBBYAMXIJVLEDSIOTQAUBWFITWXKJLFHHQGGLHSLKCXOZCNGKJCZVDH");
    tmp_msg_0.max_speed = 0.259814406773;
    tmp_msg_0.speed_units = 70U;
    tmp_msg_0.lat = 0.675616825557;
    tmp_msg_0.lon = 0.44805005399;
    tmp_msg_0.z = 0.802846180183;
    tmp_msg_0.z_units = 211U;
    tmp_msg_0.custom.assign("QISVZPWCZDPSHZWVRNTTMMLGY");
    msg.data.set(tmp_msg_0);
    IMC::IndicatedSpeed tmp_msg_1;
    tmp_msg_1.value = 0.403292302846;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::RemoteActions tmp_msg_2;
    tmp_msg_2.actions.assign("DFZHHRTBAPBGXXLTLECEDJISVEMDMAJQOBPMSKNWNSFPEVPUYBDLIYOZYUYOKHTNJKXOARTZLQHTFWKVNTZJJEWFRZRHBMJWYEHCZRDGBNPALVAUQGFMILAXZMIMVZVHXGMQCTUQWFRSELQWZUIXSUDVPUKP");
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.721819199948);
    msg.setSource(4589U);
    msg.setSourceEntity(94U);
    msg.setDestination(32519U);
    msg.setDestinationEntity(206U);
    msg.maneuver_id.assign("SORYAKECLUJBRJUYQXAJSFKLFZYKKSJHEQAWLVLNMLCSPPQZNNHSQSAYFETYVMFAILONSGKZBRCPHBXXWTYPPHCVKTZOOKVPPCJBWDCIRKWFZUODOGOQQBDOOEXTHNLCDUKODTNTURMMNMQGIUERXCIKRFNHPWGILEAIGUEVWYWT");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 53660U;
    tmp_msg_0.lat = 0.848085335154;
    tmp_msg_0.lon = 0.385072881097;
    tmp_msg_0.z = 0.643640076294;
    tmp_msg_0.z_units = 87U;
    tmp_msg_0.speed = 0.0389476375774;
    tmp_msg_0.speed_units = 167U;
    tmp_msg_0.bearing = 0.746359150813;
    tmp_msg_0.cross_angle = 0.407594155148;
    tmp_msg_0.width = 0.188648157857;
    tmp_msg_0.length = 0.854008449222;
    tmp_msg_0.hstep = 0.971647074867;
    tmp_msg_0.coff = 118U;
    tmp_msg_0.alternation = 32U;
    tmp_msg_0.flags = 84U;
    tmp_msg_0.custom.assign("HAZQPQSNPJAHGMPGISJXZIZFSJEVUGWCERKPNPPBAYRKUHBANEYSRCLQOJYXOFFGDONIAEHCQVULZTSYIJOPHZINFZOIMTMQASXLCWFUVFRVHMBKCEPCVJSVUIHRJTUKMA");
    msg.data.set(tmp_msg_0);
    IMC::Brake tmp_msg_1;
    tmp_msg_1.op = 244U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::QueryLedBrightness tmp_msg_2;
    tmp_msg_2.name.assign("LQATYJDUTJLUSQJALXZOGZBSUJEFZSXJUUSPZYFVDRKGUMBQRDDLNREMEHIRVWYXRXEJHMPJLIWLYALPEAZHYPYOFYBSLBCWEQQNTKCHCKPEGZONQVDTCJRDMQRBNOGDUREIDMBHXXFUPDRWGNOWKIFXAZXBFMNIGSCAKTIQPQPKAQTMHNAJVAOOOGSIVXBVVEFCYYWSTMHGFOKZ");
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.618955312751);
    msg.setSource(30449U);
    msg.setSourceEntity(249U);
    msg.setDestination(36145U);
    msg.setDestinationEntity(56U);
    msg.source_man.assign("AINFELFEMVTEPFCNFTGUCIJRNUWYQYVWQMAEBFLHWDHDZKBRLRPGBGKAMNJCKMOUBM");
    msg.dest_man.assign("WSBLICGSNZFYYQUWULVBQNVPXZPLXWUKIKSQNMVAOXRXKTLLAKWABMBYZHGUBECLAZWJAIGCSCQCKXONMUPDJDKAPSVYETEVLHTBUNYROAPDTOKCKTHLVCDEFBEAQVOGIWJJDTDFIXNXDWSZXRNZJJXWXGOEQRPZQOGHWZLWHYBLFGF");
    msg.conditions.assign("IZYSKHKLXSABLAQSWHGXLMUOSISGQUCGUTNPTARFRTUXMICAPEXASQTWFEBLFXQIONNYWSAMQUKHKDWBIADGPXPHIEROKUZKKVUOBQVVKEMWTFLOYBJVXHKWWVRDZNNOACUJNYPVQGYFINJDBBBPZXMWHJQVRZOEZWVRLJPRTVCGYFXN");
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 3U;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.554414497345);
    msg.setSource(16652U);
    msg.setSourceEntity(215U);
    msg.setDestination(39301U);
    msg.setDestinationEntity(219U);
    msg.source_man.assign("YBYSHHAALYRLJQDBFEWSOIFTTOPOXVPNJNMEVYCJCKDRBCLXTAYEBGDIRGGGAWAQAJRKPJFAGMOUTJHCGVYBUMVIKYZSUETBSOGYRFRIEKDCQEKLFCCHIPZPLXGAHBNUDZLROOZQNKOILRWADNETHKWMMZOQVWIGITBKUNLWMZSSGJVXMQIUOEVQWZFWXFJMCPRTPEKZWENN");
    msg.dest_man.assign("TVQCEHRPPNMSBQJNATMXMEEPFCQKXGRELNSSPWQUQLKNCGOCIJXYOQSUFTYYEWULEBLIALVMIUZZUFHOWASIZEGHIDVUNRXMCXFKVQDWEXGAEZDRCFAEICRYJTYSPBMKHMAKZDBACKGHHFTOPOAOMLWDOQJVHNRJRXHYHNWDKZOLUSWJJNQTLWBPVNTHZVGYIFOODYQIRGFPXZMVXDPGYUIKZKFNJISU");
    msg.conditions.assign("QDGKUWZGGAIGNLZZHISFAZYJLSIQEZFPXRSVLTEAUFEMJIAMVUBEXWKSUUVSUHGPKOMEXICOHKCRTYNFQLJROVKKSPDINQBJACWQCUDXHJMWYCMMJZPSJODTVBFTOFGRHQYNRJVNQULZDOCWNZMRDRLZEGSELGEOEISBDXAWDQHYHYCNBMTSWBZRCYI");
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 244U;
    tmp_msg_0.op = 233U;
    tmp_msg_0.possimerr = 0.347302656882;
    tmp_msg_0.converg = 0.886954076649;
    tmp_msg_0.turbulence = 0.161797505422;
    tmp_msg_0.possimmon = 117U;
    tmp_msg_0.commmon = 253U;
    tmp_msg_0.convergmon = 62U;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.504866462626);
    msg.setSource(11021U);
    msg.setSourceEntity(225U);
    msg.setDestination(22124U);
    msg.setDestinationEntity(161U);
    msg.source_man.assign("WQKXWXDCJOGYADTOCLKGYYYGQKSWZYEYUXRNBUKMFQLJCDXJZFHSJKTRPRF");
    msg.dest_man.assign("VUYHVDMWQQIXFRJPUSFOAMSIPSAKROCMFETMVOWKYCTGSTR");
    msg.conditions.assign("TKWVCRNCRUXODUKHNVOLHTAOZGZMXFMGFMAEVQZVGHTDSBZADBPGJWWQVIJFTMHLVEPTRFALMXRTIPABEPSXWHXFJYCEJBPJYEFLOMBXYMRNUYZYUOLDZSINQYDIDUCHNASKSBALHDKIYHFLQWKWICPGMSNLCFOQQFYRXOPFKBBPQJZLBTAZTSURWZGYVRLUREQKNSJCXJIIXHVUUVMWDOOSGPPJUQGTEINCGIEVCOQKBDZWCEW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.620398230802);
    msg.setSource(34982U);
    msg.setSourceEntity(15U);
    msg.setDestination(14767U);
    msg.setDestinationEntity(197U);
    msg.command = 233U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PSZDZGZIGSIRWKMUQAVJMDQBBMEDNPUTUHWRIPNHPFVHEALJGKYKN");
    tmp_msg_0.description.assign("KQNCSDMTJYZABRNGYHCBCZLLHSNXZSXWMMJKYDSIRAQFAGOJRYREZMAQMINSNKTCTLVBHNUFYLIMHBUEVTKXDJYGWVNRDOWXQXWKFBPDDOOFOIPRTOHCPETIVPLJUUXQQFJBQCUZHSMPSXBQAC");
    tmp_msg_0.vnamespace.assign("GLXLQSFQLAKFUWXYRHZJDNBBVOWGNAOFUDHZXDVOWCIEUIRFVTBBLHRWPDLHTEBCSWUTPTETJFMDXBKHXUIZANBDWVVNAYZMJXGITWEPOXCMUYJEUQUFWMGNNSSCAQQJSZTNEGYVPEVPKYKNLKSGHRXKLQIRJGWQSYWMRVXTECHYMEOAHHIAKPAJJRQCYAMBLPSTOZBGEFTIQ");
    tmp_msg_0.start_man_id.assign("QZIYBNGVBSEWCILFBVIBKJTDWKINNRVCVTOPRMONJFXJJNEJUMXODATMYAYICNGTXPGEAECMDAPNUPGJZLRFUBAEVZTAUTJEIKXIHFKMXCLROSWKOQMFVWAZQFIBSGXFHHRQFHJRKYGMPYPVWNHOXAGWSSSQTETYHKOKCUYIVFKPWRUDOVIXRXEDVSSUHTQLMOWPLADSBDLFCPNDQOUBZUZBPYKYHELGQHWL");
    IMC::EntityList tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 215U;
    tmp_tmp_msg_0_0.list.assign("TFLSGQRHVMBYUCCXSDHJUBKSTQZFHLCIKQSXSJYBGECRHSEUMUKCCDHPRXDSPLZMNEDPRVYFFXCAWEDUQYAKJZKTIFQGWZBGYKVKGOGALZFXAFJGLYMKYXAAHDJKORXIENOHIEZXOYOGBSJEMNQCFLLBODGFMHCWWTZWNDUVVWRTOEJURITPQNFJNDXBPTMMEEVXRNCWWNABAJIYGVOYSD");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::DesiredRoll tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.388247550135;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.351175508625);
    msg.setSource(44628U);
    msg.setSourceEntity(200U);
    msg.setDestination(9831U);
    msg.setDestinationEntity(129U);
    msg.command = 99U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FOGRVVKOPHFFVMZMMBQPSPYZVJKFCOYLACISDGEO");
    tmp_msg_0.description.assign("NKOKQLFQBPINDHOAYCNJB");
    tmp_msg_0.vnamespace.assign("AJYAWIOVMWSFSXHIXUNAKVMLXMQRIFPIDYKKYRDGVTZRCPSDZRGMGUIQUDTCKGFHMLIAWBQGRUQBHFRODBVLVQEZBWSOIPXHMHNKALJDBGXAHEEXOCPHNJLZXNFRXCCAFPWMZTOTLJXNHQPNBVDCMTYLRYQSEFSVTRDULFUVPCHVQJBGUYIK");
    tmp_msg_0.start_man_id.assign("XAIGUNAEYYUHFRCDLVOUZMLAEMUNPWZNMGDSQJWETBCSHDXYLVMIKHVPSXSIGPFJOTOIFOLFZQINYBARKQVWXIIALQIOMDHRCWUPSWCYAHVOYQOBNEJXNXAXTKSTKRBUVDDIZBWEHKYTGSWBZGDFCTTCOYLVAHRVHD");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("GNKYFMNOHEYFMREOFQZPAOHXYGGKRRIWPCLHELQUZPYKFRICPEHGEVHXIDGUMWNPUVVLZLJOGNCSAGMECGISUJAVTRECEQJFSCQLWWWJIKVTIWXCJ");
    tmp_tmp_msg_0_0.dest_man.assign("YNQYLNYIVYPRVMHYNVHS");
    tmp_tmp_msg_0_0.conditions.assign("QIHIOECLFBBUV");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::DynamicsSimParam tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 32U;
    tmp_tmp_msg_0_1.tas2acc_pgain = 0.583881210348;
    tmp_tmp_msg_0_1.bank2p_pgain = 0.0341327739012;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.743550363354);
    msg.setSource(26849U);
    msg.setSourceEntity(168U);
    msg.setDestination(50063U);
    msg.setDestinationEntity(184U);
    msg.command = 203U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IJJMPOTGBUOGRWEKSJOIMQBOTVWCYSURAKQFIJWWQLLWTZRHKOSGDQINMLCFRFPYDZJJMAYZMHKBOLCEPXGHDSXNXWOPCTQMNIHUVAVOZVYJOYUXEAGFFQKCECXGRNDLJRNAXLKNJBDKAXVTKECFMEYNWYWTLXNFGEHVBBSHZSTRHUZQSDIYKIFYZHEPMIIVPLQADVZHWUXCGDACP");
    tmp_msg_0.description.assign("SBLZIAWAFSLURDSHROPWVQEMNJUC");
    tmp_msg_0.vnamespace.assign("LRJERSIKTHABERQBTLOSDLNWWXTWEREQGZDMRXELXDJCNTHNZOKWGABKCLFPPBNPWWZZSXJHACSYVTGPVRNCJSGYYQXFWGFQXQKYVLF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NGRKQXUQSIEGQLONSYXDATOPQHWUTLKTXQQKLHMZPALCYCLXKPKTXMDVEBDOMPISIBLQWI");
    tmp_tmp_msg_0_0.value.assign("SWHBYSCECQMSYXQRKDVWKFMTVPVAPIBNIBMYHOQAH");
    tmp_tmp_msg_0_0.type = 27U;
    tmp_tmp_msg_0_0.access = 34U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("QAOTEUHYXBEPJUJZCDIJMSGLFEKYTYQLRRCCMHVHCPDEKOZDRQFKAIPWNZPUYVHDYNJQQVATNXRVPVFMVOVVSIFGBSAHTVLJIZOBHFUDRAZGFYYLLYUCNEEEIAZNANXFTYOUEIGQTWMC");
    IMC::FollowPoint tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.target.assign("AWTXXYUMRJABLUKSWEWQJGVJTFTEMUMBLTGNVANNFTIQHJFJYVWCOPITNXAVDDPBPZXQCZMDQSJRZSURJKYKRBGOQWBWUOPYUVIYGCAEVHRNDZNWAOMCOKUHKLLDFAUCHCPIHPRIGSTROUERXTAITEFESFERYDGAXMZZNWHQBXMLTWLXCLDIMBSY");
    tmp_tmp_msg_0_1.max_speed = 0.96966401902;
    tmp_tmp_msg_0_1.speed_units = 168U;
    tmp_tmp_msg_0_1.lat = 0.803900955113;
    tmp_tmp_msg_0_1.lon = 0.808463978059;
    tmp_tmp_msg_0_1.z = 0.809871516988;
    tmp_tmp_msg_0_1.z_units = 136U;
    tmp_tmp_msg_0_1.custom.assign("YGPDXRRARUQCXIIDABVRIBDLBNNPMLOWHAYDKZQVRUQDWGUVHNCZAXHCDCWKWINFFOZRVZVZEDHWOIEUFBULHEOFRALJMHKBZTGFDLFXQKCSGRBFLUSWJKIQJYOFKYUNCVMUDTRLMELKGWPNHXGSBOJFCSSPZAEWSVKWPEQNNTIRXHXQOLWKHVUMXPVJBTTLGUAXBTPNJQPZYAM");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SaveEntityParameters tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("RRHSNRQVTZGQIJTCFOFLULPEUJUNOTDSDKAJUDWAKXXVIYJXOIBVXYGIRHMAQURBCLBRGQZMFIJJPLZWRSUHTTXQKBCINCNQGDPNJIWRAWGLPGMSQZSMABWDOEMNLXOPVYHFVENBKKXHQMMVTCTMWZAIKXJZKHLFWHOXSUADYHV");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.774361660719);
    msg.setSource(57596U);
    msg.setSourceEntity(234U);
    msg.setDestination(27812U);
    msg.setDestinationEntity(106U);
    msg.state = 88U;
    msg.plan_id.assign("VXNUHWRGSECUZZGBSZINXVJRRJSZUFFKIQABLMEYBAMXAFFLDAQADGAUZNRHGINKRCGATZOPXCMWEYBMQLVQIFVRWSPOTENSBSXYXZLJPNOHXYKAPDUVJFCOCPUJGQKEVELXJFQTVRKHWFSHLKE");
    msg.comm_level = 252U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.132981733188);
    msg.setSource(61346U);
    msg.setSourceEntity(181U);
    msg.setDestination(55777U);
    msg.setDestinationEntity(48U);
    msg.state = 41U;
    msg.plan_id.assign("YQDMIJPLFZLWIHZGLNYSUBYSTHKLGYYUPWDVFQJGDRAUVIBHGSBEWEXPSTUCPXBNCEBWVXLKZBOHWLNYNOTPPXCCNHOOECEKHFUQCFVTRSICTPMKJUOJVRUTLKRMBZQYYUVHFKNRSAQDJFXXALGCJWEIVKTRPJSRZETRNZMUEAQOTFZGDAYMNSZFZIMIXG");
    msg.comm_level = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.487773287589);
    msg.setSource(49651U);
    msg.setSourceEntity(199U);
    msg.setDestination(8065U);
    msg.setDestinationEntity(182U);
    msg.state = 82U;
    msg.plan_id.assign("PGHGXQEADUQBTZAHXOYOEAKRAJWVDOKXWVKMPRYNFLBMGVTVPSYPYVFVSLONWQSGFYICOPUXHTFSWQNQGDJ");
    msg.comm_level = 8U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.84038386715);
    msg.setSource(49895U);
    msg.setSourceEntity(94U);
    msg.setDestination(29918U);
    msg.setDestinationEntity(0U);
    msg.type = 124U;
    msg.op = 237U;
    msg.request_id = 11838U;
    msg.plan_id.assign("EMKPKYKDXZHIJRZOWMFRBDEKJYUTBKUVSDAGAMNVTCYTQHRKTCRNNKDQZXLPOPLISVZJZTKLGWGZTCUXUWJAFPWHAAQUJZBQIEOPMVHYRJGBEXZBRLJCCXWYBTWBIUWTIIMVSZNNJSZCANRAIBQCYWXDDGTHGSUSSVONFRFBM");
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 63U;
    tmp_msg_0.comm_interface = 190U;
    tmp_msg_0.period = 43450U;
    tmp_msg_0.sys_dst.assign("PYJCIQILVCABKBMDUONEJPDAFURMLJJFGNCFIELUFOZTKMMXDRQNNVBYKBYLXZ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VHNYICDJFXXWSJQVZUEXKOVJXAGZVWRKBPHPOUBAEFHOFDFPPKBIQMAENVYABSWNOCEUWLMQFRFISURHBHBHPOPTGLNTUPCLKYWFMYBPGJXQWDZQYNIUSOTNSD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.199828408197);
    msg.setSource(12401U);
    msg.setSourceEntity(197U);
    msg.setDestination(30690U);
    msg.setDestinationEntity(24U);
    msg.type = 36U;
    msg.op = 190U;
    msg.request_id = 27079U;
    msg.plan_id.assign("QRLBDADTYNZYYBYEOJCNJWBCCIKOGANFGJGIOXWPPYHVLCQHREHSJVARUQMWKMNHFCOXSKRVPTJXHUXTHNJWBKHJAIOCEAFSIFPPHMRQLKBWT");
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 167U;
    tmp_msg_0.angle = 0.55742655769;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NPYVUGEDSCBIQDWUJTYUNUAAUSWXHOZZAVKXLJQRSNALZFHDGDWSRSHVQYQRDEQLTAZHRULMKRTRBKSYKUCPUIFFTYXYGMASMOZBBEHONWVGFIXXFJOXNOCVLHOLQZEMDEDIKZYEJQACHSDQHNTTTYA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.456803810317);
    msg.setSource(7835U);
    msg.setSourceEntity(17U);
    msg.setDestination(3058U);
    msg.setDestinationEntity(253U);
    msg.type = 20U;
    msg.op = 64U;
    msg.request_id = 25183U;
    msg.plan_id.assign("XNOPNQHOIPZLSWMVQIELAZXAMHRKYYJJF");
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 30989U;
    tmp_msg_0.ttl = 27517U;
    tmp_msg_0.destination.assign("BGFPXXLCQYNGATFFLZOTSDBWPDXFGHWLMYQQZCVNBRBGMAQOFTOLISZLUORZTSRETKIUFAHMKGVEUNVFWLWQXNS");
    const char tmp_tmp_msg_0_0[] = {80, 93, -11, 57, 60, 9, -70, -84, -25, 83, -24, 22, -72, -7, 2, -69, 40, 102, 111, 105, -55, 51, -69, -9, -40, 59, 93, 105, 69, 18, 8, -63, 0, -46, -6, -62, 61, 40, 126, 113, -122, -78, 126, 120, 104, -111, -27, -114, -93, -81, -98, -15, -7, 98, -93, -48, 57, 121, -40, -69, -73, 71, 1, -58, -102, -118, 97, -7, -86, 38, -96, 89, -78, -51, -58, 74, 116, -79, 89, 103, -114, -28, -91, -90, -25, 106, -114, -46, 90, 102, 103, 82, -31, 16};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZJKFCHJIEKHXQIVKRZXHMYWEVYXAFXSIPHSKMPAUUTLYSJDUEQOSVWFIOLUFVASSABSSHKICVZGRGYWTVOJWVCZIXIARDVTXNNWEOISBMXXZFMUZLOLOOZPPSDCEJRTJZDPGQDPIYLUPTJQVT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.949679204736);
    msg.setSource(14585U);
    msg.setSourceEntity(156U);
    msg.setDestination(34969U);
    msg.setDestinationEntity(177U);
    msg.plan_count = 13667U;
    msg.plan_size = 2962674305U;
    msg.change_time = 0.48670587926;
    msg.change_sid = 4749U;
    msg.change_sname.assign("UWTIJYVKDXSQLVQQJVPITOZGBVOAYFCKIQDHJDFHPBUWFLCOJUDKBLLMJAGUGQPQGWZPERIXIKZYANKEHVCOZZEJYPPFTCMBJVFDEJBCCFGAFURSWQOZXXSOHVRNROKIWKTLUWTWHTUEYZESGAPINIHARVSLDEKWRVAWPXPRFMGBLMMPHMNRHCNSIMO");
    const char tmp_msg_0[] = {-126, 43, 105, -30, 42, -61, 0, 9, 115, -56, -84, 95, 79, 98, -8, -44, -124, 10, -60, 6, -52, -91, 99, 64, -53, -107, -55, -100, 50, 46, 33, 9, 3, 34, 122, 26, -109, -62, 115, -69, 38, 118, -96, 107, -98, -14, -45, 94, -7, 48, 117, -124, 27, 48, 83, -116, -27, -3, -107, -31, -8, -86, -9, 35, -32, -96, 24, -2, -94, -90, 55, 114, -82, 121, 56, -42, 22, -73, 33, 63, 48, -52, -5, -99, -117, 48, -49, -77};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("UDUNKDQGWBYAEIGKNPUZRPGHZWRAWZAKLIRXTVOMGNQVEGMYLHIAOGOXRBLRAZDAUKHJYSBHVXZKQEHUFBPOPGSJSVZOXPGYAMSBRAONAFSZAQZKBTNCCTVVYCMNXHELTYCHDDHBPILXSXMSUSIRJTMJQVNKFFMUBVJEPTEDEMIWNPFYKHEHTPFQJFFGEKFCEI");
    tmp_msg_1.plan_size = 30056U;
    tmp_msg_1.change_time = 0.469926146289;
    tmp_msg_1.change_sid = 24803U;
    tmp_msg_1.change_sname.assign("RYTNVKYLLRNNSHXCZJCVUOBRKIRAELYPBWPTVPNSZQGHRCXOLDMXIFCJNDPGFMDQTLCKKABTJDPIDNUO");
    const char tmp_tmp_msg_1_0[] = {5, -58, 75, -69, -18, -89, -9, 91, -96, 9, 4, -48, 80, -30, -69, -71, 118, 41, 15, -102, -10, 99, 124, 88, -128, -27, 84, -111, -61, -5, -116, -17, 109, -73, 89, -28, 113, -105, 91, 17, -95, -25, 49, 9, 32, -13, 74, -51, -35, 74, -20, 36, 110, -69, -77, -127, -114, 76, -90, -113, -81, 83, 44, -113, -79, -5, -2, 46, 118, 4, -83, 17, 44, 81, 57, 64, 25, -77, -45, 20, -16, -90, 101, 9, -55, 45, -115, 17, -87, -101, -60, 78, -106, 3, -128, 111, -9, -57, -26, -65, 50, 53, -72, -49, -2, 48, 4, 17, 3, 2, 26, -121, 99, -100, 77, 63, 100, -51, -95, -23, 90, -114, -60, 45, 98, 59, -81, 59, 65, 55};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.340347525195);
    msg.setSource(41856U);
    msg.setSourceEntity(8U);
    msg.setDestination(21464U);
    msg.setDestinationEntity(220U);
    msg.plan_count = 15641U;
    msg.plan_size = 3573123221U;
    msg.change_time = 0.645106586808;
    msg.change_sid = 50824U;
    msg.change_sname.assign("ALBNWIEKIUEBSVBFEFVCEBVPGRCKTNCYQJSDNZTGLCFWZYZWQJMRYURZOYHTAATKCGWZXJYCZEVLSILQPPXSHKEJKGLODTU");
    const char tmp_msg_0[] = {-82, -67, -10, -49, 96, 18, -83, -20, -79, 3, -71, -62, -112, -123, 111, -100, 24};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.418230487007);
    msg.setSource(23130U);
    msg.setSourceEntity(2U);
    msg.setDestination(53022U);
    msg.setDestinationEntity(72U);
    msg.plan_count = 63356U;
    msg.plan_size = 874551206U;
    msg.change_time = 0.0560810762088;
    msg.change_sid = 23417U;
    msg.change_sname.assign("ESDHKXTPMKTSUJBAEWUSWSHCFNXLYFZHMAVUETOJNLUALIVDICUDXDFLHOGQORGDVLMJHGPIKFOCSLDKZGIWAVRSORFDOETYJHUIWKVCMOTYOFPPHMJMEWRTRUNCQHMPVSQCOAWJUHSWVDKKEZADBZKXJMBYNLEQPRMYAJBYHRBWLFPQLFEZYXDQSEEJCP");
    const char tmp_msg_0[] = {51, 105, -5, 65, -24, -1, -33, 108, 49, -69, 94, -93, 106, -9, -15, -58, 24, 76, 94, -23, 122, 18, -101, 120, -33, 34, -124, -104, -34, 81, -57, -36, -43, 98, 76, -97, 27, 26, -106, -48, -29, -65, 115, 76, -95, -115, -55, -17, -54, -8, -18, 83, -65, -39, -10, -36, -15, 31, -112, -50, 91, 13, -52, 26, -37, -30, -105, 111, 57, 17, -44, 9, 78, 61, -98, -126, 117, 4, 58, -68, 33, -31, -81, 43, 112, -80, 96, 125, 35, 39, 31, -112, -121, -117, -104, 35, -91, -57, 11, 67, -109, 113, 47, 25, 2, 11, -68, 16, 57, -103, -105, 47, -9, 2, -103, 25, -1, 9, 61, 60, -45, -104, 57, -69, -107, 79, -6, 45, 30, 49, -61, 22, 123, 66, -98, 74, 26, 114, 28, -50, 116, 42, -113, -97, 16, 11, -3, -66, 16, -10, -120, -107, -81, -66, 62, -119, -31, -76, 59, 25, -101, -92, -102, -121, -100, 59, -113, 126, 71, -32, 42, -64, 19, 38, -43, 52, 40, 29, -98, 122, -1, -46, 61, 103, 102, 79, 45, -123, -19, 115, 98, -110, 84, 29, -34, -3, 13, -56, 118, 90, 124, 81, 12, -97, -38, 67, -1, 105, -72, 73, 103, 26, 118, -84, -53, 20, -90, -95, -110, 86, -116, -15, -116, -12, -13, 95, -60, 126, -74, -112, 108, 94, -6, -46, 29};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("GSHJZUCJCPFYEDPCXSAGUHTLHBKNNRHOFKOQJWMLKXKUTWXMWJAXFPVJWANECHQQVEGYYL");
    tmp_msg_1.plan_size = 7794U;
    tmp_msg_1.change_time = 0.904254833174;
    tmp_msg_1.change_sid = 62359U;
    tmp_msg_1.change_sname.assign("YFZMDSUHSSIVMZDBRKWGYYQBCDDTSQVZJJXQJFNONUJEHPJIIN");
    const char tmp_tmp_msg_1_0[] = {-1, -14, 116, 108, -127, -102, 29, 79, 7, -67, -83, 39, -102, -115, 2, 106, -33, -75, -26, 85, 45, -39, -15, -115, 1, -40, -27, -29, -30, 81, -67, -29, -89, 36, -125, -45, -87, 12, -2, 24, 79, -22, -125, -123, -5, 17, -29, -97, -96, -100, -34, -110, 42, 97, 12, 6, -48, 23, 17, -38, -19, -76, 77, -13, -90, 120, -8, 27, -42, 3, -87, 58, 93, 126, -31, 48, 11, 123, -116, -44, 114, -23, 33, -53, -98, 44, -73, 37, 56, 62, 83, 45, 87, 116, 88, -72, -50, 50, 0, -96, -125, -102, -44, -82, 20, -124, 109, 126, -71, -120, 43, -42, -98, 33, -39, 113, 126, -41, 50, -77, -52, 106, -58, -112, 65, -17, -116, 83, -93, 52, -19, 105, -12, -102, 91, -102, -10, -124, 16, -2, -81, -91, -122, 58, 20, -92, 21, 91, -108, 32, 14, 42, 59, -9, 115, -11, 54, -71, -44, 106, -9, -82, 5, 10, -94, 105, 27, -44, 120, -115, -5, -21, -13, 112, -28, 37, -62, 54, -106, 23, 67, -89, 60, -120, -88, 108, -44, -112, 27, -14, -123, -75, -33, -21, -112, 52, 89, -67, -82, 125, -112, -49, -120, -84, -35, 93, -100, 40, 12, -96, 31, -36, 85, 47};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.667934749819);
    msg.setSource(16656U);
    msg.setSourceEntity(15U);
    msg.setDestination(5548U);
    msg.setDestinationEntity(141U);
    msg.plan_id.assign("ZAVXKNMHDCRFMGESGIWERTKAOXMVRNSDWUCFXQGTACIFBJLEWVCFVGWRDMYDOXXQPKMOZOERSJAQLPTVHZMUSYBTCPMRKNMSZBUNPBYZCNQTWJCVOBGETWPSHOVRBQGCPIXHYRIQYKNJAXTLLJ");
    msg.plan_size = 30723U;
    msg.change_time = 0.063212955144;
    msg.change_sid = 34665U;
    msg.change_sname.assign("AKXKVPZAVUAI");
    const char tmp_msg_0[] = {89, 109, -42, -49, -66, -1, 33, 80, -92, 88, 19, 121, 85, -50, -31, -63, 51, -77, 90, 27, 58, 36, 45, -95, -10, -2, 89, 71, 24, -121, 110, 116, -94, -38, 63, -91, -9, 14, 82, 66, -92, -106, 117, 87, 72, -77, 36, -46, -35, -84, 51, -37, -119, -97, -88, 83, 97, -69, 80, -58, -3, 11, 91, 63, 5, 103, 103, -101, -99, 55, -115, -31, -62, 77, -10, 87, -29, -8, -4, -3, -113, -33, 51, -79, 98, 87, 28, 55, 32, 110, 125, 13, 31, -29, -5, -78, -72, 18, -66, 70, -48, -27, 23, 15, 116, -84, -34, 4, -32, -51, -106, -16, 118, 69, 113, 69, -63, -31, -83, 89, -2, -80, 83, 28, -122, 78, -125, -9, -79, 107, -117, -93, 51, -3, 120, 100, -17, 84};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.18136021634);
    msg.setSource(53944U);
    msg.setSourceEntity(30U);
    msg.setDestination(30583U);
    msg.setDestinationEntity(131U);
    msg.plan_id.assign("QHTHSBTRFPGABEDSUZHBOUHKEHOBLIVWLRWVEWBZKSPNEPXLUIDZLSEZRYFACTZDLQIGQIXXNUMGHPV");
    msg.plan_size = 55403U;
    msg.change_time = 0.342790465623;
    msg.change_sid = 11228U;
    msg.change_sname.assign("IOFWKMFPZLHTFYLEWAXZBMRDTDZSYSJTMDIFYFITRWTDKEQJKOBBGNNYRTLOUNNRZUDWINUXIJKPMGXSEKWOPZGEGMCSVXBPICSBUTOIEKJZAHVAONANTGOASEJPFGUHJSDLCVQXSKGVLLRFGYCMUHCCMUICRXZQAYOWKQEZVDOIPWVSUAHNYVRJDARZNQPJBUHTWPWXVQ");
    const char tmp_msg_0[] = {-104, -53, 60, -103, 33, 30, -121, -1, 123, -15, 63, 90, -73, -114, 21, 52, -111, 125, 99, 91, -67, -89, 24, 13, -124, 35, 13, 97, -86, 55, -2, -55, -122, -118, -76, -22, 81, -95, -97, 45, -126, 17, 3, 58, -9, -37, 112, 57, -27, 50, 20, 86, 75, 3, -111, -11, -103, 47};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.332486076696);
    msg.setSource(20379U);
    msg.setSourceEntity(154U);
    msg.setDestination(37773U);
    msg.setDestinationEntity(105U);
    msg.plan_id.assign("NWOCOUUEXNCABMWKCPIDRECUZKSMBHPHVAGGPOUWTONKRPZGIAJZSENYSMJPQRTTWHKJOXBCZDQLAOZVSTWBGOGPXHAJXTFRD");
    msg.plan_size = 26638U;
    msg.change_time = 0.884735773742;
    msg.change_sid = 22939U;
    msg.change_sname.assign("JHRQXOREPWODXUIHAHRXFMIZJDFDZACDQAGMFATNYHXUMZLQWCVBIAQPPICFLUDJNTEBZQDFUEVZZYDCATWWFSCJBHNVGQGNCPILTOHXCWJSBOVZRNLWEFLSOGXMBFYEKIG");
    const char tmp_msg_0[] = {-113, 109, -9, -112, -81, -26, -19, -27, 117, -19, 25, -4, 44, -76, -76, 56, 103, 98, 103, -120, 114, 91, 80, -102, 81, -7, -44, -44, 54, -13, 12, -75, -72, -77, -102, -53, 71, 5, -92, 16, 34, -34, 26, -102, -126, 98, 103, 100, 91, -51, -37, -101, 59, -105, 86, -23, 13, 73, -33, 100, -15, 58, 2, -34, -102, -110, 19, -74, -122, 119, 47, -46, -26, 36, 33, 86, 68, -103, 83, -32, 17, -11, 38, 74, 52, 53, -119, -81, -126, -2, 10, -40, 100, -6, 2, -31, -90, -19, 114, 0, 84, 110, -107, 5, 22, -69, 36, -100, -78, 78, 67, 73, 41, 60, -6, -62, -44, -81, 80, -75, 109, 113};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.146761652393);
    msg.setSource(65024U);
    msg.setSourceEntity(194U);
    msg.setDestination(64333U);
    msg.setDestinationEntity(146U);
    msg.type = 166U;
    msg.op = 128U;
    msg.request_id = 58631U;
    msg.plan_id.assign("WUEYTAIVMSBGRIYLHNXQHTKBTUFTVHNUDQLVKOLMPGAFOGGSSIREXEKYFHDXNRSWAFJKYLMXDIOEZZRNWIERAJMUMPCQEZTSMAQNEFEUOIZVZKHEXRLUJXHMLQFCCJOPRGCOLBBYDDXIDFZBMWQWVNPLGOODXRNITTIWQFKLAR");
    msg.flags = 21919U;
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 246U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SROERWLMLOLTSNLRWSCWBMFIYGPZASCDTQTYNVPTQAUFQGTXGVQAZWTAYSFJOIIXNHBAOQOYCREQDJKEGAIVHHUJWCWTIBEMPOOVPHKKKZNGXPSJIMBPXNC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.368585912731);
    msg.setSource(14513U);
    msg.setSourceEntity(127U);
    msg.setDestination(21553U);
    msg.setDestinationEntity(198U);
    msg.type = 60U;
    msg.op = 184U;
    msg.request_id = 35063U;
    msg.plan_id.assign("JOEIDAHAPIPNIMBSFOVZFOZJFVCDOZOPPISTIDINKXURTVJGRMDAVONAKBFNAOWXSVIXYHFXGUUJHTMQTLWEWXRRNDLFJHKBSMFXGSAEV");
    msg.flags = 11245U;
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("ODMNKSZXOFKMSOAYVRMWAYENIQXYUFWTPBTECATKFPYSXLMNKCVBJGFUIPNIPZECHEBELHRZTBADXHBRFHPGCOMEKYWESCSB");
    tmp_msg_0.lat = 0.330423424649;
    tmp_msg_0.lon = 0.847683547737;
    tmp_msg_0.z_units = 165U;
    tmp_msg_0.z = 0.0414392183269;
    tmp_msg_0.accuracy = 0.777049869411;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IIUQRBECGZTNSAHXMCFYHJOSDBLYLXPGNMNXYYFCFJUTXHBZWCRBDMNTPTCLRNOYPBYZEEWLUXNADKAXDVLEKZLVTWRAVGKHXMAOPOBMIWKPBIJUGVSVLEHXYGYJUBVFWOOIZGUKE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.0893922360711);
    msg.setSource(15292U);
    msg.setSourceEntity(175U);
    msg.setDestination(19669U);
    msg.setDestinationEntity(31U);
    msg.type = 253U;
    msg.op = 16U;
    msg.request_id = 20034U;
    msg.plan_id.assign("QMGQINOWCVZMDEXGVSEUJQSSDGCZUNXBHTDCYVFRSKFQZVITZKMNNYOWHTAAQGFWFLFRTIJEYUFJADLATJGPLYIYHOI");
    msg.flags = 7977U;
    IMC::QueryEntityState tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NEENCIHYSSUKLTWVHSZXIRQUFDQNXYNKOGWGMUISQJUBXHJIADSMKAZCF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.923320775787);
    msg.setSource(165U);
    msg.setSourceEntity(136U);
    msg.setDestination(11750U);
    msg.setDestinationEntity(237U);
    msg.state = 66U;
    msg.plan_id.assign("MXWBINCXKFIFPWYMDQHJMCOJVAGDIYKENVQSTBRXBHLBUSSHGUDAZCLKHMRYOXPVJTBREEENZLDLEZYFRGERESWZGKDVPJMVKKZWUGXMCKEPRIIUPUHVUIJOUCGLORIOQSDQPCOADFHTBVATZKTAZYOLPFNDGDNXMFHJGFNIGXEJLRCWPWTDUCABCHZZLXVNAMX");
    msg.plan_eta = 160185906;
    msg.plan_progress = 0.914116424381;
    msg.man_id.assign("OCCTUTOVDIKXWOLSEUKJPXUNHKESPWAWHUDJMGDNBMFZUVRADBFZZEIFIAYXHKHQQZQPXYLOSTAVDWWBSYNFZANDSHXQMMPZMVNVRBXMURGQKLUOYBHVTDOWJCGYATGGRXBFYE");
    msg.man_type = 23791U;
    msg.man_eta = 1305525447;
    msg.last_outcome = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.551822897987);
    msg.setSource(15952U);
    msg.setSourceEntity(57U);
    msg.setDestination(31571U);
    msg.setDestinationEntity(39U);
    msg.state = 47U;
    msg.plan_id.assign("LIDZGTBASHEFGTNXODSEZMZOZBGSPKNXRCOWXFLDKTVYFSYGKPTHYUUUMFNNGBRRK");
    msg.plan_eta = -757561081;
    msg.plan_progress = 0.278577418557;
    msg.man_id.assign("TXZXVRZYUNOCTNHIHAAALKIUGQYQKOEHESAQIWRJZJRNNVXUPFDQJADE");
    msg.man_type = 63208U;
    msg.man_eta = -457640856;
    msg.last_outcome = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.177086553312);
    msg.setSource(62212U);
    msg.setSourceEntity(19U);
    msg.setDestination(59612U);
    msg.setDestinationEntity(51U);
    msg.state = 175U;
    msg.plan_id.assign("DECUCAPDFUHEIYVZGOETIPVUKVKVFGBPLYLXHSONHGVZLLMHASNWMXHQJHWSTZZCQOEKOABWSA");
    msg.plan_eta = 1873035571;
    msg.plan_progress = 0.406491643103;
    msg.man_id.assign("FOBKWJOIJDKRWVTUAJBPVUKCJSCFHBWXJAJPNBRDEKTXLVNLPAPNRVNIFQTFSIOCPZXYBA");
    msg.man_type = 21522U;
    msg.man_eta = -1226062139;
    msg.last_outcome = 78U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.168205264874);
    msg.setSource(9774U);
    msg.setSourceEntity(243U);
    msg.setDestination(64060U);
    msg.setDestinationEntity(246U);
    msg.name.assign("BXZFLJFLJNKYDPRKVLZVWLEVKNSGNYPGUNLROIIMKRTHHIDJOUUCAFEYCZKVZCATGHFDGBBSWOZEJTMHLGZRJMERBESNHTRPAKPQWEPCPXVZUYGEIEQTLUIXHHSCDWYVGPKDUWFDMCYUAXLNIXFQYWBNOUATRLNDMJIQRATCYUQYGXVYFPNJGVQPMMOJKEFKJIZSOZXKQGXZAMCDOTHFRXHIDAPLFRTBHMWNEWSQBSJBBCOQVATAWB");
    msg.value.assign("BCKPBVFOJGUSYRDBODIJWYRDHEQILHTOIVVTFNTTXJLXSSWETUKQIKANQDKCNGIZMROKPPMUUTEZRSHKNHDONXMFGNBZOOLHYQRICQFLXODUCXAKVUAISRCJPSCTNYQELMEXHFBBPDJEVBEYDLZRRXWYMCCOB");
    msg.type = 143U;
    msg.access = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.651466599748);
    msg.setSource(38941U);
    msg.setSourceEntity(132U);
    msg.setDestination(53805U);
    msg.setDestinationEntity(82U);
    msg.name.assign("GTHSDSAYUZZHVQPICQWZSGCKCKSMWLRNUXURDYUXCTOOAEFTLEJWYAXQSFSBRDZOWREKMRLIZUPBKGSKLAIDZBPBETVXROMGNFVNGCTCC");
    msg.value.assign("FDCONWNFKMMPBWPUEEDGBJZCTIXXNMKNDRFFTUALOAAMFYDLEZZBTRLTRJFPVRYNCTCIDOGPPHBTZYKVDXQXRZGWCCVSHLYJZIVCXHHQAHKDNWOGSUMKAKEHZJYGEWLVRYXO");
    msg.type = 224U;
    msg.access = 78U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.585123378961);
    msg.setSource(29468U);
    msg.setSourceEntity(161U);
    msg.setDestination(15300U);
    msg.setDestinationEntity(163U);
    msg.name.assign("HFKHPXDMVCGNUPJXSEAZNTVHXFFDIMICWUMCUQKXQAUEZANMOOHXQTKEAYINZVOYBKPBCNUGILPXYWITKLHRMMJZCEFROHBBOFDURPTHAYSJJUYWQYPZVYFYXDDHQEPGRTZUVIBMZMZNZDEJKCJCSVOERDOBLGSTRRTCTQRTS");
    msg.value.assign("DVFXCMQDBKQKNAXLPEGWIQHDHSEKRODOICSVSQBPXLU");
    msg.type = 158U;
    msg.access = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.0963807152384);
    msg.setSource(38933U);
    msg.setSourceEntity(218U);
    msg.setDestination(56931U);
    msg.setDestinationEntity(174U);
    msg.cmd = 181U;
    msg.op = 249U;
    msg.plan_id.assign("WYLQMJNYAVJDXIWEUGNMUSMSJFOBWSHUFZBKQKTUCXYUDPSVWJAKQKPYENOPFSSQERIIQTOPHNUNXKFZHFPQHTGLCPGCXCLRJNVAAIDOWVFXCPAARGWOZTVWVKRMVQDQFMEMTKLBJATVMSHDYXSCNDZTOIDBWAGBRYZRHNHJBMHXOUKLNPLHTXRYHGFZXZBIGBOGTEICZWYKDDCOREIQNEI");
    msg.params.assign("XOFFQLYUYETQGUPJMA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.335169481963);
    msg.setSource(31330U);
    msg.setSourceEntity(105U);
    msg.setDestination(20650U);
    msg.setDestinationEntity(217U);
    msg.cmd = 110U;
    msg.op = 152U;
    msg.plan_id.assign("GSBBEEWSLPVLIQURUCXHZSZRTWUDZIWJIJTOIHNMVXKBTOFHFAKZGGQPFBRSZAKODBRYMNFOXQCQVQDBLQRSIJYSNIGTILVNEREJXUSBEMJLZIDAKAERJSDPNOEBKTKTXBHYSSTUPOATAPEYYBNVLCVNACOJCZYZFUOHGNWEVDTRFFUHPAOYPVFHUHXNMWWWCRUZDMHYMLDJIDQKMLGFPKVET");
    msg.params.assign("KOMAWDDVWJBHYHGJRVMJDIVWCIZCIMLWOHCKEKYSBXMPFPUPFDJUZLKKNVSHTBQCAZLLBESORVNQTPGSEFGGUTSTHRJPJHRLFYDWUEXXLPRLUAASVLUOCNDFABEQPOSLGWOJSYOZAUBNKOTGYQOECGERXYXTIUBOIMHTRWWQQMYENWKGKERJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.754288447517);
    msg.setSource(25564U);
    msg.setSourceEntity(237U);
    msg.setDestination(13039U);
    msg.setDestinationEntity(143U);
    msg.cmd = 113U;
    msg.op = 55U;
    msg.plan_id.assign("FNLTZQNIWGPRDBTUQVCWYPUMKXBVIJDBDIIUXHAEOFJFZEHKHEMRESCIGHGOQJOJCFZSMZNPATASRYXLFTMOJFWVPNPKBXDCEHOLRUVYMAYAZHPKICDCNC");
    msg.params.assign("TXBVBCLQKBJLIMDJSJYTNPTIXZFCTJLCLYUYRGRPBQLOGRELRWBCFRDQMXADKDUWHUECVSKZOCMVHSQMSPBTVXGEWOBNQEJFALTSVGMNUH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.492104477047);
    msg.setSource(7878U);
    msg.setSourceEntity(45U);
    msg.setDestination(50145U);
    msg.setDestinationEntity(183U);
    msg.group_name.assign("ODHREXIDEWKMGLQWUISUIUWRDNBXIMFODAOPYCCTYOOVGKSFLPYZTGRHJZNCZQNAFXAQPMTRDBBCMN");
    msg.op = 225U;
    msg.lat = 0.839543110533;
    msg.lon = 0.387303988002;
    msg.height = 0.130791663491;
    msg.x = 0.492736280332;
    msg.y = 0.0438524751053;
    msg.z = 0.0438885067947;
    msg.phi = 0.415871002509;
    msg.theta = 0.332666110528;
    msg.psi = 0.769739632821;
    msg.vx = 0.488319719902;
    msg.vy = 0.322128627451;
    msg.vz = 0.826145736817;
    msg.p = 0.589244295937;
    msg.q = 0.917168740041;
    msg.r = 0.799156468134;
    msg.svx = 0.0247938695289;
    msg.svy = 0.272417593568;
    msg.svz = 0.527391352036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.746669964732);
    msg.setSource(30238U);
    msg.setSourceEntity(13U);
    msg.setDestination(5338U);
    msg.setDestinationEntity(226U);
    msg.group_name.assign("PNWHPOALSPQERDWIXWIVFPHBCTYXZKWWRDV");
    msg.op = 124U;
    msg.lat = 0.232100371961;
    msg.lon = 0.164960923647;
    msg.height = 0.16162396478;
    msg.x = 0.456303340001;
    msg.y = 0.848987036196;
    msg.z = 0.949626941577;
    msg.phi = 0.954900526888;
    msg.theta = 0.899444228844;
    msg.psi = 0.113692040859;
    msg.vx = 0.519458226964;
    msg.vy = 0.332605359953;
    msg.vz = 0.20626491406;
    msg.p = 0.343647211076;
    msg.q = 0.0852469407326;
    msg.r = 0.805877134581;
    msg.svx = 0.413352918704;
    msg.svy = 0.88244355931;
    msg.svz = 0.563220980751;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.550664804691);
    msg.setSource(60952U);
    msg.setSourceEntity(8U);
    msg.setDestination(51276U);
    msg.setDestinationEntity(65U);
    msg.group_name.assign("PEAPSKWYWNLPJKCDWOHKDDIYJDOGHQNGIRWODULCTQKUWFNBYFCZFFFAVQLTWIQUYRHPITKLTLYCJUTW");
    msg.op = 242U;
    msg.lat = 0.308799191957;
    msg.lon = 0.322529667578;
    msg.height = 0.662792026063;
    msg.x = 0.100773843687;
    msg.y = 0.818513148687;
    msg.z = 0.219281266215;
    msg.phi = 0.755558165253;
    msg.theta = 0.0173713296603;
    msg.psi = 0.983264744754;
    msg.vx = 0.107925105579;
    msg.vy = 0.722755444661;
    msg.vz = 0.231997186808;
    msg.p = 0.370734870934;
    msg.q = 0.69541375411;
    msg.r = 0.0485864640688;
    msg.svx = 0.271372653845;
    msg.svy = 0.489358895193;
    msg.svz = 0.919589619194;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.914980697881);
    msg.setSource(65245U);
    msg.setSourceEntity(185U);
    msg.setDestination(42187U);
    msg.setDestinationEntity(88U);
    msg.plan_id.assign("VGWENYUBFTTIHKXIGZAEZAJAQAENZLAFPXIHTEVHOMWRJFBTGLTWUHUBKYMQYJDVGJPTXXFVYXUOPTEQZJIETQVZUVSRTHLGNPHDCXPUVLPHRJYSIKQOUZPINNBSFDESCCYSLLWAZUHQCCRVBXBGKINEDCJFFWQBIWDDGRDZCSCQLPXSYRBSYMMKBMMLBPRDTPMXHYOOAUNNKVGLNJFKZUMISEARWJLMKVZMYEOFQQ");
    msg.type = 164U;
    msg.properties = 27U;
    msg.durations.assign("PLVZXTHOMTUFPIAYENMMKCFBJSJLQJHELVFPEQNWOVTRRWYSBRLIBSYZZZSUXQRRZKGCMWIWRSPDVUKDSFALVQTNLLMCCBUXFFINHFVNUOKN");
    msg.distances.assign("ZVIFAWCIMCXXCSXJSPWUYEISOSUWHVZOGVWVUKSRFNYILSLDGUPBICRYPTJDZYYMIRLXREFZOMCJLNCBPCBQOFKZRWTQTRJVDTVTBEFGBDDWYXHRAGVNYUBQOQPXLNJHILIYJKDXNKSANHXFHUHZCPDPUMVZSXEFMEPWGQPOENOMMNWD");
    msg.actions.assign("ICEVMOQUYLMZZXNQODIKWWHRYGFANYXCPAMPNMZNXYJPRAKZQNUWSVUEBOGPLJAKGAXQJDERHIJEHDHGIYFQVPQKZFESBVPTWLKLCUFHDVWJX");
    msg.fuel.assign("IFJJXHRDBMRYFIECXTSKSFYRNZCGARASJRKWFCEQTYUIGRDXBDJGRZWOQNHGZKXJSYHYQYHOIEVGAUDXBLQTLWGHCQPPGEOLJXHXQPMKNURJWTVOSQGVPJYFYLGBPPLAWKKTKKIMEVXUSCCPMVJFSDHPRZBMMWZGUUBBWANLNLBQTICODHRCXKJMLTLBENENDXVAMFLOQUZMO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.000331505119354);
    msg.setSource(38362U);
    msg.setSourceEntity(118U);
    msg.setDestination(15494U);
    msg.setDestinationEntity(218U);
    msg.plan_id.assign("HHMDKAKIFSNOWPROHJUCYSQEMOVTJTDGZTGSICHGNVPDRQQZLMYFAWMMPFEAKPLXZXLEQOMESTBIKMXKHADCQTWXGIMJOLEBRJIAHIPVHZBVEIBBVEZFBSGUBIKWDMDFQJYNUWNZRULWMWCNIRNJUTCSRZYVUXFDXTCTTQVQYGGPNQX");
    msg.type = 235U;
    msg.properties = 122U;
    msg.durations.assign("KDSKMTUKLVTXYJUUXCZZMYTIJQLZDIGEBVQFFBQBTEIPLEYBLIGBBOUHHFHOGWZVFQXFDECPYGMXHFIKDXWNCJCDRPIOXQZDYFPOTVMCAZTNHPXEJHHNWYPQTGJRCWJGOAWVKYAZQADRPIOVBFCMOBUBWSMPNWX");
    msg.distances.assign("EVHVGELJODTAUWUCWKVPCKHHDNLMBIHCGHQGSBZKEWKSCIOINFWJXXQSCGYFMXUQNRTTJYDDPDGGXMCLWUTCRSOVRJPS");
    msg.actions.assign("RGVVZUNEIFGFNKHCSDJTGXTOQLBPYOJZCVBKMHPWZVNIFDOHSRSJINTYIHBZATHWKMLXLJAPPJINHDCWWLVQGJSFDYVNTTNOWEQMMCISY");
    msg.fuel.assign("BZIHLDRYWUASMOQNOSUTGMNLHCYJRRGPDCOCUHPXMYJOUCVEFGNNKUEWEUEYQDYDZTFQOIYCNPZAUVBVIGKZJVRTCEOVPFOCXZJBUTWQTSEVSFCSBLMGXEKAAKIPTIBRDGHMCKWIAHNTAYTOMDHQXDWOXXIQJRXXJYIZKPHGEVHEEPMUXCVNBMPKJKVZBQSMNLDSPGRFSILMDLBAFTSYAUXBODYSKNZVFHFWWLLLQAIRZJAQLGHWJTFBFR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.491886269198);
    msg.setSource(4116U);
    msg.setSourceEntity(93U);
    msg.setDestination(61829U);
    msg.setDestinationEntity(175U);
    msg.plan_id.assign("FJROWLNPBJIPL");
    msg.type = 187U;
    msg.properties = 77U;
    msg.durations.assign("JXUAPKRBCLTWJQTAA");
    msg.distances.assign("VPJUSLPWIFYYKOGSMBVEYZEQOLLBCWIWZNBGMKTSJXUAHRVGADKQPOQNEGWERGUTMHFLYWVUBUSIVJKAFGIZSXDXEQHRZPDBVX");
    msg.actions.assign("XXOSINRMQJJGAGNZHOXBRORTDCAQINHXMDFDWSOLGQZRCJTKFKSYVIYOGFLGKXKYVKJNELMVEXBHJZBNLYUABTCTHOBNSTDEWZIGPFUJDRTKHHZFGTOWXWKCYEVUGMFASONXPNSRVKWCIEBDRHEPDMUJKUBAPHJGCWLRUQIEWPYSMZASICYVYQGLPFPIELVNPOTOXMDCYZACADFBLYRM");
    msg.fuel.assign("XKIXRZMKZLC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.00946961737465);
    msg.setSource(13209U);
    msg.setSourceEntity(152U);
    msg.setDestination(52663U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.269565611237;
    msg.lon = 0.878344089944;
    msg.depth = 0.366229495288;
    msg.roll = 0.349322217939;
    msg.pitch = 0.90887671303;
    msg.yaw = 0.961735617188;
    msg.rcp_time = 0.494741848981;
    msg.sid.assign("LHFTYZRYBBOLPDDJDJXNOABRTMZVWMKVKPHISOELNPAQZVXMQGJTTBUTXXHXGHIJQHGEKUSQQRVRYLONFEQMZURCMFVGAAEINUMLEFSGUYOODEYPCZ");
    msg.s_type = 50U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.906349046119);
    msg.setSource(36238U);
    msg.setSourceEntity(27U);
    msg.setDestination(48083U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.251387906723;
    msg.lon = 0.84553442619;
    msg.depth = 0.209989005064;
    msg.roll = 0.0485334933618;
    msg.pitch = 0.165117029237;
    msg.yaw = 0.287818955989;
    msg.rcp_time = 0.17528597015;
    msg.sid.assign("NABDNDDVLGOZNDHQGXSWMWIURMFAHQRJYZLQAHJHWULYHKPTKJVCOJSNTSYNPLJEKNKRYHZQFSWWBYPUEKOZGPSWSFGEUOXXMVGFZBTOLGTLTDEQRWNILGQCHKDETAVIALHAMMIMBFRXMXBKFLCGDXABBFSXNXULPSDMJUFYIITDBFCVVOPKPGQTEHZYGCQQZREBYRUYCNNAMUEYZCJRPWXSCEACBVOCREROOSPITIVWWZMUQHKKJXVU");
    msg.s_type = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.945125954763);
    msg.setSource(51177U);
    msg.setSourceEntity(49U);
    msg.setDestination(22974U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.442809766192;
    msg.lon = 0.461004693088;
    msg.depth = 0.829718487194;
    msg.roll = 0.54600963151;
    msg.pitch = 0.264705647624;
    msg.yaw = 0.53884813033;
    msg.rcp_time = 0.654724873181;
    msg.sid.assign("ISHOMJGWBDKJLKVDSPZUOCEOYKZCRABXEHQGFAZFTOTMGVMGRAWSFWAUOUUFHTDMJASCTNVILDDJJHLVPLEPBQIERGYPBMPBCGYQIEX");
    msg.s_type = 110U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.943657471419);
    msg.setSource(41608U);
    msg.setSourceEntity(197U);
    msg.setDestination(13102U);
    msg.setDestinationEntity(156U);
    msg.id.assign("LBHNDWHHPVPFUABSFDKRJMPXOR");
    msg.sensor_class.assign("WGFNEKAAYURDBCLDRJJNURVUEKQIZLJEBLDBCJIQFDDELXVZTSFOEALMGFCJGFT");
    msg.lat = 0.0989045016042;
    msg.lon = 0.751272450008;
    msg.alt = 0.533580122059;
    msg.heading = 0.524760530629;
    msg.data.assign("HBJWDUDUHQZFKMPXMMEFRVNFGJKOCGKYNSQOHPEQYQIEZNUFEOULVXZDNDIDEMVNYHCKLIWXEJCDNLGFSKSHEYRXHKQPWBRSRFXVISBXRAOHBWWLSIAUJCWUALHNRPGGTYWBMOQDOFHYAORKJJZJCGICPVZCKZWWMPZNBUCRAYYITKIATUHIZJTNFLNOTPAQZAXZBXVBMSWRXMS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.815241940263);
    msg.setSource(3981U);
    msg.setSourceEntity(59U);
    msg.setDestination(3773U);
    msg.setDestinationEntity(177U);
    msg.id.assign("VCZDONWVMEPHRVTEVIKOQUNBYTEPLRQPDOKXKSIQEVCZFGDSBSYFDOFUQHZYTBXXRMBGPAFMGEYUNXJLJBUWVOAQO");
    msg.sensor_class.assign("UDPCMMELLFCAXERIZUOMOSLPAUKHIGTISPWGXZWPVNETGBTIJYXHNWIVFLDTCZXHEKYHDMCFOJDAGNPDWBJRYLEJTCBBLVQETYRQAYDYYQRWOFQTQZCZQCKTGKOTZEQUVZQSNHZKVSJXZPNWHKEPDUOWVWRPGUOOCYXLUGLXENRHKCRACTKDROMSUOIPYWRXBDLSSQMHMVJVAX");
    msg.lat = 0.658456930193;
    msg.lon = 0.894283014958;
    msg.alt = 0.596203598014;
    msg.heading = 0.910029946771;
    msg.data.assign("OPULBCKIPIJYDFRLTHVESLLMLHLQAXARQGVOWHQDWVURSVQTFOUAGNNSSMBOEZCDWGGAZKAOELSMZRWNSMJYEYYCNBTYIXEEBCZSJPCOUPCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.479479430072);
    msg.setSource(40037U);
    msg.setSourceEntity(141U);
    msg.setDestination(36809U);
    msg.setDestinationEntity(154U);
    msg.id.assign("PUIRVGGQEAHGPXISILWCJRMXZNJWOASIFHDDFOKZKTZEFC");
    msg.sensor_class.assign("IFJMVSEHRELJFLBNOTFGPIHRIUHABWOHG");
    msg.lat = 0.587215134103;
    msg.lon = 0.047113977889;
    msg.alt = 0.616877699807;
    msg.heading = 0.460656494177;
    msg.data.assign("GOTSGXVZXERMLDIRHBUUXSZWGUFYEJQXGXUHTJOGZROBVEPYDULQIZTRIDPTFDCOUUH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.382811017508);
    msg.setSource(16440U);
    msg.setSourceEntity(111U);
    msg.setDestination(44344U);
    msg.setDestinationEntity(1U);
    msg.id.assign("EQHGHNBTTQLCRCEFKIMYPXMEPKZQBHHAA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PPFHCCZPPSGWLVCGAVVTRZZDWEJRQEIBTVBQSNXNRWRPHPUKCSDEYYMMUHUUMLHDGAKADQTVLYZREBLFXICSUFAJJZECIKHJSGOHOGQEAUISOXZSYJQQIDUJQPKJWICOFLNORXMLUPVAWSEXJBIHEUDKTYKXTWFYQZZOBIHKYPBNWRYRQKLDWCTFHPTUIVNNOBTXBMOKMMFLAMOAM");
    tmp_msg_0.feature_type = 167U;
    tmp_msg_0.rgb_red = 206U;
    tmp_msg_0.rgb_green = 19U;
    tmp_msg_0.rgb_blue = 176U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.261088764138;
    tmp_tmp_msg_0_0.lon = 0.815250627148;
    tmp_tmp_msg_0_0.alt = 0.208509685215;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.450599314578);
    msg.setSource(64769U);
    msg.setSourceEntity(160U);
    msg.setDestination(24995U);
    msg.setDestinationEntity(30U);
    msg.id.assign("OGAMHTGLQVRCEIGJNZUOUEOHJFRYKFUKQTJQSKDAVEYLKCNDTCDTJXRRCHOOFRMCVXXPSCHBRNPJSLIDQVZLCASYAGNAGQBFNLKYXRWRDO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CMGSHQAMYAKVMSKDCXZUMHTLONWIOEQLDXNCBDRDYAUREAKNHTLXQPEASZYVUEAWQNDHCRQTYPCBURZYFXRJJVIKTVEEPNNRWITBQLVICDDVHNMUGJJMYSERPZRRHXBLNVXPQVIWFBGEQKZFIMOXLODCMUJFHKPCFHTFWGEVOTSDSKOYFZFPETZFGKIGAMOBICZTGBZUOSSNOLOLUUIDPYB");
    tmp_msg_0.feature_type = 1U;
    tmp_msg_0.rgb_red = 160U;
    tmp_msg_0.rgb_green = 163U;
    tmp_msg_0.rgb_blue = 213U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.462924722097;
    tmp_tmp_msg_0_0.lon = 0.777470955345;
    tmp_tmp_msg_0_0.alt = 0.94262909248;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.232688130632);
    msg.setSource(17326U);
    msg.setSourceEntity(77U);
    msg.setDestination(55558U);
    msg.setDestinationEntity(15U);
    msg.id.assign("GKSNOHVFNEAJIOQEBXDSKTNIFUHRWLYUHXBXPOXYLITMPZPORXEPTHMAIXXPPQGLFUFBFRNLSOYJJUIKUPTYLIUPRQMKJMUWDWHSVMGDSWTSNCNYCLOIVALGVJWAMFTVNGWRITYWFTDOHVZCNDBHBFLVKMHYUFHQGVEBKRGCEUKZDZUWVXAVWQZQRJEBZNSSJEMEMLOIQGJKCCBPAGZXQXTYCRDBAERL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.833822198372);
    msg.setSource(18470U);
    msg.setSourceEntity(189U);
    msg.setDestination(49218U);
    msg.setDestinationEntity(37U);
    msg.id.assign("PPTYCXVGJRASTUAXQLBCWHDZXUNUQLMTVSECJMAVWOZXM");
    msg.feature_type = 121U;
    msg.rgb_red = 89U;
    msg.rgb_green = 23U;
    msg.rgb_blue = 8U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.191784496865);
    msg.setSource(23956U);
    msg.setSourceEntity(86U);
    msg.setDestination(43722U);
    msg.setDestinationEntity(114U);
    msg.id.assign("KOEMLHOTWZODLRPBGKXXECTYMMWYGEBPRVNCSPPZCEOGHOBLTKYGWSIFRXSIHDIVPBQQAIAWFGKRDSKQDGMMNTJCWXVRY");
    msg.feature_type = 230U;
    msg.rgb_red = 51U;
    msg.rgb_green = 232U;
    msg.rgb_blue = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.7346476471);
    msg.setSource(45100U);
    msg.setSourceEntity(176U);
    msg.setDestination(26367U);
    msg.setDestinationEntity(120U);
    msg.id.assign("TBSXRYYPIZULVAPDCIALZDBMACKFEONHSYNORDTTLNBIVERCRKNFIYPBUOKPUUXGJVTYXSFRBMONMLPQXAWEEDBXUXCDTLGISEJJWQZJPSOOVKIMLJGPUKQYKQBZSVAJROQHTSZKYCOWIEWCVNHVWIDHATAMJEWDVQOJUPFSEZHGJWRL");
    msg.feature_type = 49U;
    msg.rgb_red = 244U;
    msg.rgb_green = 208U;
    msg.rgb_blue = 111U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.948578370511;
    tmp_msg_0.lon = 0.627527326818;
    tmp_msg_0.alt = 0.287326246125;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.719400242139);
    msg.setSource(9566U);
    msg.setSourceEntity(114U);
    msg.setDestination(9740U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.718326646136;
    msg.lon = 0.265304523941;
    msg.alt = 0.822299390596;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.746842341402);
    msg.setSource(4159U);
    msg.setSourceEntity(77U);
    msg.setDestination(8630U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.133053910191;
    msg.lon = 0.415211435144;
    msg.alt = 0.818687145025;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.25188858505);
    msg.setSource(49075U);
    msg.setSourceEntity(14U);
    msg.setDestination(61063U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.807403668877;
    msg.lon = 0.51747291483;
    msg.alt = 0.444593490402;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.187611550927);
    msg.setSource(36010U);
    msg.setSourceEntity(55U);
    msg.setDestination(20692U);
    msg.setDestinationEntity(241U);
    msg.type = 194U;
    msg.id.assign("AIVDHOILUCXXVVYTISFNAGLBZHWHRFMSAFEBKDLYZMMEEHTTUSUJLIKQEGKPJDJQAZOZPSXWQKVEDHVXSFAMCONPLNOGMGXEUOYNASCMULULPACFVZXLFLTRJKGVPQMNWCJHINZILBDRERPTIWHTFYJGZCVH");
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("WHYQYETKSCIFFTNOLKDJQAQTTYMZGORCCCKMKKGQOSARXPHVBSTW");
    tmp_msg_0.type = 12U;
    tmp_msg_0.properties = 92U;
    tmp_msg_0.durations.assign("NGZELJVZBSPHNZDURNAWJOYOUJHYEZDIJSLUYDCJMGRPFGTUMISWFLXGWGTOSXZQHAHJLOVIRBBPJKLYOIQFEXAHBTZOGUBDATGYKPWGXQFLVCWLPYKBNWBZLSXPFTTBKJXCQQVCHMXIIXCHKYKLFJEOFRPZFRDCQMDGWUVMVPDCENEESIXIWXTBVWZACRUKQMQOCKASCUFJMRNNYVUWPREDSUMBTSYOVNNKNSHGEDMDQFKRQLHATEMHY");
    tmp_msg_0.distances.assign("BVRLYPVPCKACCEYHEKWADASIBTZJFETGPYIGOMKFNBKNBTMHTQPQFDKWCPBZFCGXFIXWQBXJEMFRSXNKGJCRIQSUCVQDRUWYJHGVRCCIWKOOJEGXVOUAGZXOYHJAMSUTSZZDDBHYISJUVLDYUQEENZMGWUDUQIPWMQTYLAFMHLQAVEBGSSFTEIMLZNHO");
    tmp_msg_0.actions.assign("GXPIDHFWAKKFGCPOAQUIXHDBQQLJHKUYKPOQPWQTTVMIOS");
    tmp_msg_0.fuel.assign("ZMVHHDQVDCXWZDUBTHJZKPDQHZRAHJQBOUWVYNWCYSPCJNUGTUGVFALADEZDJHCMWQRDQFCAJOFXIHYZKRYGWSUDVIGEQIKKPIZONTLUERGPMERXJTRFEBKLGUBFGCJURSPPZJKMFHOEBAXVUTJOFRFPDXXXNBBYCAWPLROTYZUEQKHAWSGVQYAMZNYLNKQPXJINWBLADIVTMBYATLFINWPHMQRGCILTOEVSKLEY");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.27157168542);
    msg.setSource(48246U);
    msg.setSourceEntity(22U);
    msg.setDestination(14401U);
    msg.setDestinationEntity(138U);
    msg.type = 150U;
    msg.id.assign("MEBPQQAPSLIHDLOKMNBZNMKUXNVFHEKXGWUVIBMSAONWCZSRPTDQJHUQWUHITDGDBEUYEGAVPYJKCBAZHELRXUITWTHSPAGWBTUCMRB");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 2060U;
    tmp_msg_0.flags = 3U;
    tmp_msg_0.lat = 0.273162103152;
    tmp_msg_0.lon = 0.0399969342854;
    tmp_msg_0.start_z = 0.996738391262;
    tmp_msg_0.start_z_units = 89U;
    tmp_msg_0.end_z = 0.577900211273;
    tmp_msg_0.end_z_units = 31U;
    tmp_msg_0.radius = 0.488568315689;
    tmp_msg_0.speed = 0.118630197534;
    tmp_msg_0.speed_units = 207U;
    tmp_msg_0.custom.assign("FQKYTMAGKDMNYWKFWRGKPFIYJRWNJBOCPWOFBBQNKLWDAKYESYDOHFZDHCUYIGURAOBSREUUSYJVLMCTHIXTBCCFZXVHRJRAOQQBDPKLUSBRNTMRJAGOAJZNKGQ");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.400698766909);
    msg.setSource(57413U);
    msg.setSourceEntity(197U);
    msg.setDestination(38768U);
    msg.setDestinationEntity(31U);
    msg.type = 213U;
    msg.id.assign("UIAKEVDNNUSZARUCYAMAMZQWPDXKDLCZRMBSUOPQCFYRRUFDDTDXDFHZTWSXSJTSICIVCIKMLGVTBEKFGRZEYVTIEJZTMVG");
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("KXHULVPOQMYSDPHQMKXWTVEAHXENHYSSCSWNPHZYEHNGSTZOIUIRNLVBQLUCECKNHSHJIKFURNNZMXZBJAGVCATVCFJIZRULRPRIZQWALOSMCTKUXLJTYRGLFLGDKBHFGEMBKXMGPJRUWFPVFIAJIEVIEABUDISBMCZWTTNFWIFAUCWOQWNOOJCVPYRRKTLDKQXBQJQDZD");
    tmp_msg_0.lbearing = 0.0188942866179;
    tmp_msg_0.lelevation = 0.272153981647;
    tmp_msg_0.bearing = 0.371653614738;
    tmp_msg_0.elevation = 0.584248919498;
    tmp_msg_0.phi = 0.0997610956555;
    tmp_msg_0.theta = 0.766210697128;
    tmp_msg_0.psi = 0.115738042371;
    tmp_msg_0.accuracy = 0.801864197496;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.227659912399);
    msg.setSource(57917U);
    msg.setSourceEntity(184U);
    msg.setDestination(17950U);
    msg.setDestinationEntity(121U);
    msg.localname.assign("JWHOGWWTXQINZUGQJMTOQEMRTBGKSCUEAFITTUATVPEXYMMADLBUFHGXKYHQKUALDIFJLMJNRFBVPSSHFNUOQPKRAROPKUSVSCHZPYISGTJBXVGLZIRDMIRWTWQFJRBONZNLOEXUOAP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.0204836066898);
    msg.setSource(62155U);
    msg.setSourceEntity(143U);
    msg.setDestination(14890U);
    msg.setDestinationEntity(6U);
    msg.localname.assign("HTPXVICVDLMLMPTFEQYMJHHLVHAOXLKZPCSBUWVQBANZDSRSPWAPCBEDQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BDDRSCHQDDMBWFLWCJBHHOKGBHUTCHEGQPYGJETCYKXNQQUFVCNOSWIXLMKZHZAMVCGJZPPPJUZRSBCQBJLJMAFGIIRVNZPKQZSIFAYEFAUSLXGFSXETMGKFJYVXIVOZRMNWULQJAXUYFECTAPLSOWUUVWHPRMAUTNILABSWCBZTOWDPLYIZYROQOPGPOKKDVQEXBTDEJEQAAWNVIDDLEHNGROURBYKSTOTV");
    tmp_msg_0.sys_type = 182U;
    tmp_msg_0.owner = 18923U;
    tmp_msg_0.lat = 0.643073200749;
    tmp_msg_0.lon = 0.0952832801847;
    tmp_msg_0.height = 0.496921959514;
    tmp_msg_0.services.assign("MBZNHZCRZXMGCAGPTSRQNONNKMDJQDJRIBPVSHGFCFCJCWNPXOGBLUUMIVDXHDPYEEGSEOWQHXAPFOAWFYJHTWLKBDGKVVTWOAEAUNCQYCRQMSLLBXEXYREKPHSZWJPKIQXVTMUKVYJF");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.356328201173);
    msg.setSource(52840U);
    msg.setSourceEntity(173U);
    msg.setDestination(63852U);
    msg.setDestinationEntity(188U);
    msg.localname.assign("OZUDOMCWKAMHPNLMQNINAYZNFTJLMCFIOPBOJHMTXOULUIBGSXIZVSBCLBTXSRQPERKHPVPYATXSJHYRHHJUZRUAGRYDTGJIWWYRLCGRMLQKKVKBALFSEXHMYFSVQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.829282901377);
    msg.setSource(22832U);
    msg.setSourceEntity(131U);
    msg.setDestination(50433U);
    msg.setDestinationEntity(231U);
    msg.timeline.assign("VIWZKEHIAHXDCJXWRZVLVUGOXTLOGBNUMAOMSMOKWCNTGVSIMEGAIBABORRYBMQXQVTMRAINHCWKAGYVZRKREHAVZTWOKCRNSXFCNT");
    msg.predicate.assign("ZZPHUGYYSOJGCCFNBQTRYTMHBIAHMWATSKCBVBRUDLROEFQKWJLTDKBUQYYALHURLFLVDBJJPGQWEGVMYKKEFINAOE");
    msg.attributes.assign("SJTLLAGAVWXUKCBVUHRAPTEXZZDOSJLPRKKVSHSNCZTEZQYNYASPHMPRUIAFUJHWCEGHVDIFYTWWKMVNIRFIDSQJXDJGVHXZYRAGYRUMZJCMBAZTANXPBIXOKNPQT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.941719651886);
    msg.setSource(24915U);
    msg.setSourceEntity(254U);
    msg.setDestination(13496U);
    msg.setDestinationEntity(198U);
    msg.timeline.assign("WANOREXIBEVQQRNSKRTWAPGAJPJDCUYZKMFYPXEBVJAKOLMDBGDBFRGNVENNTJYHMELLPNXJTUJQVVRRDUWXBYMCIQZXFCRTOIZBZSSHMIPOZUGSVUEDKAQOIUZLOXHSYXGDQHZWSRBCNCAVIPLBPECUYFVXQKMWGGGMXSWDLIMDKAATCV");
    msg.predicate.assign("YJPXHBBMCKLIVTAXYYZIBBIJDQHFWBTCSYTUFKKDNLWMSJOISZAWCXQDFUM");
    msg.attributes.assign("OHQTENJOQLKNHMREJSXTLJEZHAAHBBRLAOTEBPCUAYOGQRXIOSKFUHPNHPKGNQVBROVVFKLNSHRADMBJHVXIGYTNSFYJYMCIWWKPDBQNLFZVADOFGUFGPOWIPXUEGCESRQKFERSSTHQNOGNYTUWDZREGXYBMUGSDZXDPZFTWSZPCQXYLVZULFVUTBZKIDACJIWPSDTLWYVMEABUTKWAXMXICEVZHWMIIQR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.897127001013);
    msg.setSource(2891U);
    msg.setSourceEntity(62U);
    msg.setDestination(39074U);
    msg.setDestinationEntity(199U);
    msg.timeline.assign("NUAUDQTPZIMEWTZIPIEMULGQRXBHEKWJARLIDOGPSGQLFYEOTCHLFHVXLAMFUMWFRIGLFHQRGPWDIDSHYZRZEKOVUSJHPKPDALJGHFRHLCIOJRWELMOOEZYYDNMRJZAGEAFQWNKTWPOQSTTBAMBVOBEFXXCWTCCJXARGBYBBVILQQZHNSSDOPBYMYNNJBTSTHUPXSZEVSXCKJGSYWFTUQ");
    msg.predicate.assign("GOWKDKMMMCLOABMILWRSFEJEINETCFKWCTKBVCYVGJDNGKLQEZOGOQSDEEWATAJYNDHUAEXJQUGDVMGJZL");
    msg.attributes.assign("PFYRKXVESUPLDCSGTIIJRAMXAAULFSEWCENT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.868507014693);
    msg.setSource(47404U);
    msg.setSourceEntity(175U);
    msg.setDestination(52722U);
    msg.setDestinationEntity(114U);
    msg.command = 108U;
    msg.goal_id.assign("LKKGMWMUHCECVLRFRJUZBFYXWEJXEUSZGZQKDIRVRAPDSLXBVLGXUNGWMHIWRPFBMPEHJOPDJMLBOEQKPJASYCGDHXIOYFVBYQYHLVUKSKCJCUHBVQOJONFDADQRMTTJVLVASNWMAOEIZGWPUQJGBPRWYYNUIGNQVCDEOQTCJCSFTKOAPBWZXRRALOUVCMKNWSYPKCZNTQKSMRNGSHQFPXAEUXHDSMHTLBWZHOI");
    msg.goal_xml.assign("WNEZZQATWBLFQKTHVVAVHFMEZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.249750987717);
    msg.setSource(23597U);
    msg.setSourceEntity(89U);
    msg.setDestination(31905U);
    msg.setDestinationEntity(6U);
    msg.command = 251U;
    msg.goal_id.assign("JYTSXLTZNZHCYJWGLCGJDDFARSUHVXUTFORDHGDLCTHKOGIKNENCXSUMAKLSFGWUKBQUQZALUKNZHFROJBCIJIEUVENPBQVACOLOFAWMCHHWZBEYZPTAOEMFZYWDWYXVBGJPJFZZFYLXUDRVMLEAVZIKBUEEEYXQPPQMFRVQMAGCLSJQSISSIBHNTDDVYBXIQYNWPIIE");
    msg.goal_xml.assign("LVCBGFFAICRWHVLVANPHFWOUWAOGMPHVTMRVOYMAUUADEJZCAGBMRNJCWQBJGELVHCDJAGSDQEPNFDSYHCXZBQPGBIYXYRQQKWXDMGLFQIKREZTUQBRSFFXDOCY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.20079689761);
    msg.setSource(36063U);
    msg.setSourceEntity(175U);
    msg.setDestination(44169U);
    msg.setDestinationEntity(184U);
    msg.command = 26U;
    msg.goal_id.assign("EXWCBAXCTCUNQQVHIHZFOKOLYLIYD");
    msg.goal_xml.assign("NVGDVIUKHAWYYBAEPETECPKDWTMKEHJAYASVWQZONBXPCUFUZBGFBWJRIXLGWLFZLATXYMZPXNFRQGGDLCKGCKCPHFASACREQLBHMUVQMJPKOMVTVUMJYRMSBTQVHLQCZSNTTOWVOWBTUJVSDZILPEGGMHXHEJQXEQRNWP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.19958963442);
    msg.setSource(7668U);
    msg.setSourceEntity(133U);
    msg.setDestination(1168U);
    msg.setDestinationEntity(183U);
    msg.op = 173U;
    msg.goal_id.assign("SGSBBVHURYWEWZEYQACARRZSJNEAKBTIKVUFMOPAAEOMUINXHSOJWGGAIIXAFWKRQSVSEMQJJIAIDDNJKNPZYZJGDHKAFQYCSHTOZRLLCNQDQUKVCFCITWYTMHBXJUISQXQPGZGWVJFFCTCVMIYAYMVYEIPRGZCDKGMTHKLVOOLPSDPNOZDLEQLYBFYMUGPCBLBFETHETRXLTUPVM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TOBDZMHDRMCHRXOHPWIQVSHYYRZPYYFLNUYTNLAAWZDQYUIVXHYQZAJDLMEGPJSRIKMOXAUNHAQCSIVIRLAYCRLTCNSHMDBFUQFGEOOCRSZDGBVOJEOZFCTZKKWYQNSFEIIEQRUMVKJCWQULNBPDFSPQXJXGVGEPUSWNGBVCFPFVZWTJCFOZJIRGULP");
    tmp_msg_0.predicate.assign("NZHCDTMLUHFXAUQUPJCWAMEIDJXBJKSDTLFFSADDJZCIJFBSHTBBOFUGGGSOWECXTCVVYGXVRNZNOSYPELGTHKVBRZXRMNPBKSTXOFK");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.435441290214);
    msg.setSource(48527U);
    msg.setSourceEntity(141U);
    msg.setDestination(38492U);
    msg.setDestinationEntity(146U);
    msg.op = 30U;
    msg.goal_id.assign("MEAHZULPYYKDSRPTHCGMBEKQDMLYNHMYXPHVNOOTVCIMYWFBUIJJARQISRPYNHJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DTSDQUZSKNJRJEQBIQMSJHPXSCXVWBXYRTCSONXIUXKLODZYPUYCWJHUQDNAAXPHHKJLJNWLWXJINKCCTRQYREQAVOQFHZLXSCIPTGBUANPQACAIJBSVDMCOGVBQYOAROXPITEKOBWUSOESJBIGTEAKWMVNUBDLIG");
    tmp_msg_0.predicate.assign("YSDSNYOVGRRNUXDZKBENDBVQHXIGGNYSIPBANRLXMMADUWFHBOTDKMKRQPRGBKTEWJWSSXQBRFTZLZGFYFF");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.414734124853);
    msg.setSource(36179U);
    msg.setSourceEntity(88U);
    msg.setDestination(8858U);
    msg.setDestinationEntity(130U);
    msg.op = 47U;
    msg.goal_id.assign("EDBIDULYNARORMDZGGQHVUCHIOTLARJBBMTRWRQVSFCOKSHNNKEALEMZOWFKTUVHJQFVUFTZDZTXBJKHPJSYAKEBWLMKXUSPHOFUCVZVLZSYXITADYTSXDALWWWEJNNACFICIOPOGPKOQRPNEXFZXRHVXNAPIKIUDDPCJCZBJIREAXCQLOKQRYGTSUEVUHHWGIBPQQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BQXMKMHSFGPITIUZXXCZVPPTGTSEMQOSCYQOQL");
    tmp_msg_0.predicate.assign("MCRNSAMMCZTIFCQSRSGILIIUPOMPKSUZMRRDVEDQSEYJZADOKTVMOPDBKYBOKPJCQAZWXAZFH");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VCWPKTOAAHKQRPSQVTVAIFWJHNQOXIA");
    tmp_tmp_msg_0_0.attr_type = 152U;
    tmp_tmp_msg_0_0.min.assign("AXFXUOYULCMMBCFIRNDBTFURTEIHLIBPSCFZWPPCOFFVSEAEIVLCJNZWCQUPTGKWGEXHDAJWLALPMSGWDINZGPUMLGYTXMCNOWSXJOVTNXBEXOAHWSGJKUWTINHLYGFJSYVYSFMFTIARJRNDLKEZOOICWRMSKDMQUHFLDZSODMZJAHJECUBVQYHZNAOVVLWZVQXEVQGQR");
    tmp_tmp_msg_0_0.max.assign("NMANCLVYUTZIRSFFVQPOIQQLGHWZXBSYQWXYSEMWXZIUOCZSTFEEQGRIFBZKKMNVADOBTMYGYYKRSOZPEGDBBOFCPIAQPWNKMEDJQFJPTVKDOUDKPEWUJGMYLZQWEAFL");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.536849718225);
    msg.setSource(49050U);
    msg.setSourceEntity(94U);
    msg.setDestination(57424U);
    msg.setDestinationEntity(218U);
    msg.name.assign("EQMTIRQVBFUKJVYBEZMNTYPTLXPVDZRPGRSLNAJAFUBFGGIQTYHSPHRWSDVQADEFNEOAOXXHFLCMQBMIHNQXFRCGJEWNUAESAOLXYYWMYGOGJTTNRUPJMJSFUZZAZYIHWGZUOLCGAIJFHRXDMMWUQKABCCSHVTOXNCSPXQBSWPR");
    msg.attr_type = 178U;
    msg.min.assign("WVKMBTEUNDFVCPMOOUJKZJXTIGUBEVSJQPWEQRXLSUNROQAYCFNJDLUTNZOMCWXLPHZSTETZVNTPBKEYGWXDIMQVCHUAOPI");
    msg.max.assign("QWQEUHIHWTWPCACQVRNSHSXRJLPOMCPLVIRMYZENUSCNOFVXKPSXODJKPBTNJDWBSUMFHSKZYYDGXBIWIFPDZMXBTGNJZWMLPAFSYUKECCCIXNDRGHIMCJQKAQFRAEWTHFONQAPLQBTAGEVHJDXNUVSNMMUYDGZYSGXBEGULGUYTBYQFXLBLAZMZEAISVYKTAKJFQOVHAKERCDGIKTRLVRJUCIHOPZPQDFOTLDKVZVUWOLFIBTO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.2280153951);
    msg.setSource(51229U);
    msg.setSourceEntity(168U);
    msg.setDestination(13064U);
    msg.setDestinationEntity(17U);
    msg.name.assign("FMTGGFUVAZHJTNLUSXISWAZKJGOHZEP");
    msg.attr_type = 137U;
    msg.min.assign("YFWAUHOVSBJWMUQUBZGRTDDVMUXTJSHHHMGRENIGMXELRXIDYZBQJKWKIURSLOKBSVAOACUUWCKWCAPPRNBFQHAHCCPLQJKJQQXMYIVMAKWPRSVXEMQTCDWMPAUSOQLOFYVYXBDIFFJLURTJHRVOJNLCISKSBFOIDQFLGZPLTE");
    msg.max.assign("YEICTJQOVJXFIWHCBABKATBEFHBIMLFNODCTKXSXCJSSENCIGANEIAXIPQOKPKGUQYUKUNQUTWDMHEPNFCRDXFZMYJJTKRKRSRCLSJMNKXLVWPGOGTHGDKELLTLVVEPYNWKUVOBMZQQDWVQXSGFWUDMDUMNSBZJURHHXMTVLZNSYCVDVBHWJQFZIIRQBHRTGDTALSHOXUPXYCZAYJLDWCFZA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.484777318445);
    msg.setSource(61323U);
    msg.setSourceEntity(210U);
    msg.setDestination(2474U);
    msg.setDestinationEntity(90U);
    msg.name.assign("ZKWFLFFACTIEDPXOHPFPWXGWGYJBWADHMPZXHBRPLQAJJJBTMDUVOAYGVHRJQXDOKYISOIDGNGLUSLRNJAYTZHDDQPRZLOWXKJUEHYWTVPWMWTGROVZMUNGCLRUTKBIHZSMREICDYYKQUG");
    msg.attr_type = 31U;
    msg.min.assign("AAXDXFLPIZUYCJTIHLSUVQJSUXLUKALKOZZMQVGLKSBCTHDGIRUJBTALMWATCYDCFGPPZKMOWWATIABJRSYYEKFJLENVFRVCEQMSDHZMESTSQKBDRRDUFKORFXBCYOFLXGXHWNEBMJWNPQSKUXUFITPRVBYKPSTJMHBWFGTACJOJQIGZQNCIYYLQXGVPVORDNYNXSNVPFUHDM");
    msg.max.assign("AFAWUFNRLDSBJYBEUMTYGUMNDQRHYQH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.138775662747);
    msg.setSource(37546U);
    msg.setSourceEntity(149U);
    msg.setDestination(49372U);
    msg.setDestinationEntity(58U);
    msg.timeline.assign("TTTSXCXQKRMFVSNYAJPFYMYEJLUHPFZQRRVZHHSFMKXUTCSGKFSJVYKFWOXGBGZMNOPYRNWETUZWMADMBAIGZVITECURTXQIYCNXFLMPSWNEWKZAIEUKTDCVORHOU");
    msg.predicate.assign("PPAUSBHQTTIINQAZCIOYWGSSEJQBBMUUODSOBEMHAKEZBVUNTTSVXXHTRZIEERTMPDZTZGJUYJFCVVBKGKIHZPKYGEZIEJOSHUAWLFOKPIYPMCRNMKDRQLTCFVSRLZGKXHOHAUEEFVNOGMXUNOCFWOLCJLUQAQIDWNTFRBCQQTWDVDLMAZAFSGNCGXKXL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RUBCZCGKXWGTBDCKASULFFDLGKRSZSEKSFINLMQGYTRDDEPLCNOWQPTLDPFKIJXYVREBPLNUATYGZCGJRKXTRCQMCXGVYBJEASAQQPSOVFBDLWBENCECQNVXHYEYOHMMHBXZUOUIKFVENKKZBGVUAFDRQJWOIOZMQWJLLLUIIHREGRYIITPVZJBSJYQHMMDYGPWRHVZ");
    tmp_msg_0.attr_type = 192U;
    tmp_msg_0.min.assign("HLHXMEVWMIJXMZTUAEVUKBRXVPAIKYFBCWWDMTTCMSQUENSNAVHWOWUBIIJXMWPMHDOARJDCOJSKAGRXCTGFVFV");
    tmp_msg_0.max.assign("UPBHSBTSAEORHDAVBFKRHIIMROFSUUXGQCDWNIOZETEKLLFTZRQUXJCSYFWHJHZNUVYBYNQGPLQEREBUMVZMTKYVBWVGVEAFLMIGSCWLMAZCCHAEAGRYWIOFDOZSDTBNJDGMVBLEDMYAWVYHWCPVARECNJSNQFKOZFHLGJPXIOPYWXEALTQXXKPGWQGJCYISONXODIDWTZDIBKUKBSH");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.387448675549);
    msg.setSource(15556U);
    msg.setSourceEntity(91U);
    msg.setDestination(49092U);
    msg.setDestinationEntity(70U);
    msg.timeline.assign("EMQTXVBQRIKLKTZZFSFSCDWLNZNKUFCMARTBEYVPYEZWTPMJDNIDWOQLCCHLKWPOYXZAPIATAVKIOSGRRXDFBZQNVYEKALXUJCHVBZNGJGSXKUEUHFAWBFESISMYIMVHWTPNHTHXAPODDYBCMLRUCCYWYHQTQVWECXQFHXPRPAHGAMZYLRHMPDLRGFONOQOELLVKFGSUZPEGODFORVCUTJOXAXNBUSRSUDTWJGNUSBJVDMQMIIYZNKJBI");
    msg.predicate.assign("EXHEVLVKKEUAFSLMTJPTGJSZKMSTPTTUOPUOZOMWYHDSRHDNJXKZOGFAQAUEBAUERLDSYNCDTNCOOMYPXZE");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HXPDBNJCAFQWONBPDHMFZRQMPGEWTIRKPUFRUZFBVDBATPTGKSLDNPXISEGWQEUZQSSJZLG");
    tmp_msg_0.attr_type = 32U;
    tmp_msg_0.min.assign("ETHRDFCZXSKIZHEOWBU");
    tmp_msg_0.max.assign("QHIAJBMNJGSMRWDUVUFYSVAPRGXTLBWFJOPGOQNDSHPSAWAGHQZJKGWKVIUBMQROJQOPRZDIKBEHVFESPJOTFNXMXVKLXXPUAIKSZQDKMVRVTPCCWFACTAGIIPHQWQNFLNDMBODWYCYRZJHNLOTHWMGAZIUFYDOCSPRLCMXDCLXRMJGAF");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.820943663222);
    msg.setSource(9950U);
    msg.setSourceEntity(227U);
    msg.setDestination(41379U);
    msg.setDestinationEntity(144U);
    msg.timeline.assign("IGHFEFLXIOADWOYKDFUNFTASQAHHCTRWJKCZVCVZLXGBYNZYIHMCXQRUWMUBKDTWCSEZQDAEUKNMCGMASJSHRYRY");
    msg.predicate.assign("QTLZPOVISLEYFYOFIZAQZDRSFKZBJJSTTTAPLTEOKXLSDWDTUMDCYFACXQRLUWKHQTPXSGUBXCMIEKXYMVGWINHKFGGNMUPZQGQZLAOROSGNNKDYNRSTIBWWBADYAGBGRNEWNFMJAHFRFKFEIKS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.879268608472);
    msg.setSource(14881U);
    msg.setSourceEntity(118U);
    msg.setDestination(8822U);
    msg.setDestinationEntity(142U);
    msg.reactor.assign("VIPTFYATBGHIOFGQUAUZFXPEODDMXKCROKUJKIWDUCLKSNIWSQYYIWFMAMUFBMXPPCFGSOJWYEYUJFRJIMPIYZOOSTBXGZKNRVDQYTIJLLRPLLBRZCCOLOXHAQGGXRSKXPNPLHKDDWWWBNJNDEUSJYEACMNUCEHZNTSQSTBAEFVHTGFPYOZIBVRKTQJWXGHNMHHVF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VMIUKFDEQDONULCOGENNMERIVSVHBFWQSYUOLYYPALXJXBAOMGPRLPVDFVEREMVQRJFPCVHMWQDVCJMKBJJEZPNLWWOYRWGNYHMYAUCTIIBKBCPGGXGZXMYHBVQSUBBIAAHANUFOXZSWWFLTWH");
    tmp_msg_0.predicate.assign("YMTEEDXNZHTPKVUJA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EDTMNPSYAXMEJBKHQJOBAJ");
    tmp_tmp_msg_0_0.attr_type = 210U;
    tmp_tmp_msg_0_0.min.assign("ALLWGTRFMKIXHRUUCZRPXVRWYNGONQMZBNUQDMIZCTCIQCLPEEBATIZXYDSEMIGSLASVVYIDOESMFWTKFHJMMXIEJWXOJJQZTTVVLNLRUKCOOJHZSUKTNOJESPRFHBHULISWFEQYUTPDPGOXUBPYNPNEPFWFTWWXYDBVJYIEKZLFCCWOIQBVKVAZQKQLHTCYKAUDQAGPCASRHN");
    tmp_tmp_msg_0_0.max.assign("PEHQVACCNRKVUGXKJGUQIYSJPZDWHABV");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.951251352928);
    msg.setSource(56006U);
    msg.setSourceEntity(219U);
    msg.setDestination(18040U);
    msg.setDestinationEntity(19U);
    msg.reactor.assign("VYJZSDVNKLJEBZURUOMWIPHLBPDNMHQOYXHMIUVXFARTEENJJMMTYULKNGPQDNEIAIARLZDXPVHOSWTOJRBNSMQWFXLJTSYGVZXKRUXFAIWDNGBHAPOPNCQKXOYZQZGKCBNHURQCVCMAVNITLFBQEYJRQKDBCDGXXUIYDKH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IAVHSWCPDFKKEJXCORSFBIG");
    tmp_msg_0.predicate.assign("PBGMWFPUYKFCCBMESUUWMADBJKQKUNLSLACFFVZFOGFNNAIPXLMYQJWNRNISJXASYJXPRLGTKVDWZIKJCZZPXZRTSBTAXCWZEFDUMSLTATNRBGEKQAPOQMJHEFWNIVQUVXIRQPHUOLVVDEESIHRWRGJDNBDIYYHDTDLREPCVOYKVGKEDOSHHYPZHSFNCROXVBVWTNWXMEABQOBHCDUWOJIZLXKGKMTQHZBIJUQHTPFCYZUAMASITG");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.00142218817273);
    msg.setSource(61059U);
    msg.setSourceEntity(93U);
    msg.setDestination(58404U);
    msg.setDestinationEntity(247U);
    msg.reactor.assign("VOPGWKODCBSGTNWXGZGOHVODWFXCFYUKGDCTTJMNEBRUNEOAPKAVBAQYBRPSZDWJSZKQCMLTNGAUQRBITQUKZNBEZIYXFFJFHRX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SGUELBPWUDQHWQWCXAARULENQVLIYNFXQTSEDVTZRDHDF");
    tmp_msg_0.predicate.assign("IHZFHEMBOKANGPCZCNXTKRWPAIMIVJYFMLBRKHCJKJNDBDAERKAJZRPGYOIHSLBRQCROISSTGGZIVQJLRDYRFLZTHNJYQVQBKYFWUUXVL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EAHTRGWNXANGWRMCAQKVYVRXFNDIDWHDZOIHWNVNBUMZGDQBIMBZFJYOPCELMWIPKGPUTFSQVZGKKMLRWJQRYJYLOCJB");
    tmp_tmp_msg_0_0.attr_type = 155U;
    tmp_tmp_msg_0_0.min.assign("PYFSOIOVRMMXFIUFLEBJCVBJZB");
    tmp_tmp_msg_0_0.max.assign("VULVZHYQWHINZKTVSHMRNEWQNXLVPJJFKYMLVYNTOLFSFYYWDQKOGITFOXVKHCPSIZBNXICHCZIRVBCJTLXPAVEMBZABRIFYGFXWPHAXAEAERW");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.245353127194);
    msg.setSource(36947U);
    msg.setSourceEntity(138U);
    msg.setDestination(50867U);
    msg.setDestinationEntity(154U);
    msg.topic.assign("MQOWREVYJRQHIHGNTEADSAMOBNKMUFSVBDKLJABDGYALJUCQZVRUNCLHBMZKFYIBYSDJUAMCNTTWGLULRZHHZRUQGOXTCWUJSHWZITASOGWOXILOFSLVJNIQYHGAETPTXJSKRBGXCIJBDVJKVQPPQRKMWVNZNLTMAMNNOFCXQEXDRGNDPFECUKLZDEXXXSEKGJVEGZPPFSBIWFFVTFMWPICBUPRLAVKUWIEORCKDOMHCEOAFT");
    msg.data.assign("GCGNTKLCWFTOVFCSBNWHPKPDBUAYDJEWMZPIOSRYXVLVPLPPQVCSKORZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.0684944388038);
    msg.setSource(2991U);
    msg.setSourceEntity(126U);
    msg.setDestination(5707U);
    msg.setDestinationEntity(231U);
    msg.topic.assign("SKBSBNQCATOLCEQIMGKDJJYKPRGSFGSUQVATXHVAASYTUHENANXUPQDFWDAOOJBNGWVKHWETZZEDATBJGXDARCCILMREVDQJHYDZINEMFIETUCGPRZEQNQOZABUQOKKJRNVIGSBOICLWCYUFLSHMIUFLXRLFAMTPWXKREZGKNTIVNBKKSOMMUBWCDWSZOLMTPXVZMLY");
    msg.data.assign("TVKMJCXZLKOLSJDWVYGFYJBMCROHGSMMKUWMDBEKNEHHMUMWSZVBBXBFAVKCGPEBTXDHBKPPAOIHCSYRISQGRNYRRDWIUEKLHTRQVYLNCLAOWANZQOSTYRFZYHZGRFFJTAPUGUSDGSXRXCFEPZHXLVLNYDQVXFMLGJJZITOWYEPXIVJJMWALKCJETPEQESPIOXYQSKUTGFZZGOPLCH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.837968748184);
    msg.setSource(56312U);
    msg.setSourceEntity(28U);
    msg.setDestination(32240U);
    msg.setDestinationEntity(180U);
    msg.topic.assign("WDIUTWRCHBCHEKHNGTGMVXSUXRIVGILPDHHTYFSLEJUAZHSJDAWWBZQTQVQNRDPEOFXYSBWAPBUJYKKRUTBQAXAUGKZYYNDMKWLPCVSHUVMEOXMEHICZMTQFGTZLVQLDCOFFYMSJ");
    msg.data.assign("XGYBWNZLKCMALRJPLBIRQPFGRYJBRJCPFKWHADKWUVONNLSKYJABEDRYURHVUTGDOHVYBTGRMUMQTLIWHTQMC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.238906847825);
    msg.setSource(39478U);
    msg.setSourceEntity(88U);
    msg.setDestination(46683U);
    msg.setDestinationEntity(44U);
    msg.frameid = 207U;
    const char tmp_msg_0[] = {94, -14, 64, -45, -7, -96, 74, -26, 99, 109, -82, -50, -48, 74, -121, 94, 28, -111, -106, -116, -106, -117, -71, 81, -62, -2, 33, -128, -92, -52, -79, -96, -108, 74, 86, -53, -124, -12, -97, -4, -107, 3, -117, -76, -81, 16, -105, -98, -18, 66, 100, 104, 28, 34, -49, -83, 104, -70, 6, -55, -2, -5, -120, 106, -31, -102, 69, -46, -69, 1, 104, 16, -59, -34, 89, -25, 94, 24, 91, -40, -9, 3, 110, -65, -25, -37, 2, -47, -64, 5, -77, 118, -118, -4, 120, -74, 118, -14, -63, -74, 32, 0, -89, -83, -88, -127, 116, 90, -114, -38, -117, -55, -20, -42, -34, -6, -40, -15, -53, 85, -32, 53, 7, -114, 112, -22, 5, -90, 124, -116, 70, -19, 79, -117, 3, -6, 52, -44, 117, -87, 104, -61, -48, -32, 98, -16, 65, -32, -35, -20, 117, -52, 87, 79, 15, -57, -105, 9, 119, -42, 23, -8, 24, -20, -91, 27, -90, -50, 111, 115, 5, -19, 10, 121, 58, 23, -69, 56};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.798603476688);
    msg.setSource(10657U);
    msg.setSourceEntity(137U);
    msg.setDestination(14080U);
    msg.setDestinationEntity(225U);
    msg.frameid = 123U;
    const char tmp_msg_0[] = {112, 109, 39, 38, -112, -12, -111, -44, 10, 28, -30, -80, -66, 119, -68, 84, 63, -101, -104, -102, -86, -96, -83, 76, 17, -104, 51, 118, -30, 125, 101, 89, -39, 47, 4, 88, -45, -60, -64, -123, 96, -3, -7, 26, -44, -52, -46, 29, 72, -24, -115, 42, -112, -120, -87, 104, 62, 101, -115, 117, -122, -100, -120, 64, 25, -104, 48, 80, -8, -26, 51, -90, 17, -108, -109, 104, -41, -78, 101, -73, 26, 87, -28, 94, 22, 110, 89, -53, 124, -99, 113, -122, -46, 86, 71, -7, 53, -110, -125, -123, 24, -93, 66, 21, 64, 39, -58, -71, -70, 39, 105, -125, 110, -50, 71, 122, 110, 12, -116, 48, 62, 64, -30, -24, -72, -62, 10, 67, -98, -39, 55, 67, -69, 98, -49, -1, 17, -90, 37, 22, -99, -40, -17, -2, -107, -18, -55, -71, 64, 111, 39, 4, -19, -29, -37, 80, 29, -29, 25, -69, -128, -22, -51, -12, -40, 94, 4, 20, -70, 96, 25, 109, -3, 83, -125, -94, 1, 37, -94, 0, 49, 8, -21, 29, 111, 14, 86, -100, -88, -68, 55, -89, 30, 1, -94, -72, 6, 2, -56, -9, 107, -103, 56, 76, -78, -74, -98, 108, -69, 71, 117, -34, -6, -101, 98, 88, -69, -115, -104, 9, -63, 34, -37, -2, -24, -106, 4, -104, 48, -77, -77, 46, 24, 108, -68, -31, 81, 105, 67, -24, 22, 27};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.388287161572);
    msg.setSource(43368U);
    msg.setSourceEntity(84U);
    msg.setDestination(20335U);
    msg.setDestinationEntity(63U);
    msg.frameid = 110U;
    const char tmp_msg_0[] = {-56, -31, -37, -91, 43, 6, 46, 70, -4, -51, 93, 125, 41, -49, 10, -111, 49, -98, -34, 34, 51, -120, -32, 47, -82, 47, 20, 42, 79, 36, 117, -91, -55, 31, -58, -20, -32, 2, 27, -93, -94, 115, -72, 97, 19, 66, -32, -2, 104, -18, -15, 46, -77, 114, 11, -80, -117, 126, 38, -86, -62, 23, 62, 89, 58, 62, -116, 102, -94, 51, 106, -27, 14, 20, -51, -25, -113, 115, 121, 0, 119, -98, -122, 0, 85, 61, -124, -12, -112, 71, 126, -126, -111, 50, -54, -50, 122, -91, 57, 27, 64, -82, -3, -100, -9, -47, 104, 44, -49, -119, 81, 56, -89, -98, 121, 121, -121, -4, -94, -92, -26, -75, 1, -66, 18, 124, -102, -34, 120, -78, -13, -64, 28, 18, -100, -30, -41, -105, 44, -125, 79, 103, 113, -75, 126, 83, 70, 16, -14, -60, 1, 90, -84, 11, -78, 48, -121, 35, 112, 64, -48, 31, -16, -73, -98, -2, -44, -7, 20, 7, 20, -104, -122, 120, -79, 64, 32, 13, 105, -95, 24, -2, -2, -42, -56, -19, -123, 23, 26, -60, -68, 61, -19, 99, -106, -5, 21, 30, 52, 23, 61, 18, 14, -115, -33, 28, 59, -87, 4, -11, 126, 19, 126, -45, -47, -92, -56, -49, -128, -92, 92, 124, -54, 0, 125, 1, 97, -43, -126, -126, 102, -2, 108, 12, 108, -92, 74, 67, -11, 101, 7, 126, -77, -22};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.94980163185);
    msg.setSource(30065U);
    msg.setSourceEntity(151U);
    msg.setDestination(46011U);
    msg.setDestinationEntity(84U);
    msg.fps = 77U;
    msg.quality = 54U;
    msg.reps = 41U;
    msg.tsize = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.970493852483);
    msg.setSource(58726U);
    msg.setSourceEntity(149U);
    msg.setDestination(50571U);
    msg.setDestinationEntity(106U);
    msg.fps = 250U;
    msg.quality = 97U;
    msg.reps = 104U;
    msg.tsize = 130U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.86160545535);
    msg.setSource(6096U);
    msg.setSourceEntity(122U);
    msg.setDestination(8146U);
    msg.setDestinationEntity(127U);
    msg.fps = 174U;
    msg.quality = 50U;
    msg.reps = 147U;
    msg.tsize = 254U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.675210351745);
    msg.setSource(39174U);
    msg.setSourceEntity(126U);
    msg.setDestination(28060U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.472986529315;
    msg.lon = 0.897727844879;
    msg.depth = 93U;
    msg.speed = 0.105509538186;
    msg.psi = 0.179043787069;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.143678064541);
    msg.setSource(2900U);
    msg.setSourceEntity(43U);
    msg.setDestination(2984U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.19327169248;
    msg.lon = 0.661019274227;
    msg.depth = 48U;
    msg.speed = 0.859848397926;
    msg.psi = 0.238054073138;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.671993680688);
    msg.setSource(47781U);
    msg.setSourceEntity(65U);
    msg.setDestination(45380U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.603741018759;
    msg.lon = 0.0723473074022;
    msg.depth = 99U;
    msg.speed = 0.189568860846;
    msg.psi = 0.108785810438;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.850147348509);
    msg.setSource(24084U);
    msg.setSourceEntity(228U);
    msg.setDestination(57328U);
    msg.setDestinationEntity(236U);
    msg.label.assign("OJFMTPUITVSDYPHANTJPBRHQRWEMXYYDUIANHKILRJSLXABMFVWPCZQVRCHXPFIDNYSVDCJXNZHPZZEGFYZVUMLYDOISDDFGGQIFVXBLIFICMOOYBMBTECWNLSKVAMGLUTHZCVQTQEITQWNKGNQXDKENBNYEWPMWMOKWTQEJRJUUTZRWXABROQKVJKOBCOJAGSPFUOFNYZGGSQZYWEGTJUHRMOI");
    msg.lat = 0.618880341724;
    msg.lon = 0.970311617939;
    msg.z = 0.286861910027;
    msg.z_units = 33U;
    msg.cog = 0.7522649776;
    msg.sog = 0.273760892023;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.75393500404);
    msg.setSource(27629U);
    msg.setSourceEntity(52U);
    msg.setDestination(56579U);
    msg.setDestinationEntity(19U);
    msg.label.assign("XTQMSCANTRYVPEFEMMEEMRIJPDUKQJTILGRPGIIYBZCOLLJAZKSXOXIXDQAHZPDBJHAMTWENKLAZUODYVBSXNSUIDGFYQZHOJWSYENADSQIBSKHEPTJYILHEJFVZFAPNNMKYOOTQVGJATUWBVOSVRCZNCDLVOWHXBQMPOFCMKELZAFCNVIW");
    msg.lat = 0.888218457628;
    msg.lon = 0.298074554117;
    msg.z = 0.263049431614;
    msg.z_units = 22U;
    msg.cog = 0.0435122577262;
    msg.sog = 0.0506440165214;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.71273130116);
    msg.setSource(12418U);
    msg.setSourceEntity(20U);
    msg.setDestination(20948U);
    msg.setDestinationEntity(212U);
    msg.label.assign("DVLWSBEZGUPLRX");
    msg.lat = 0.248888726363;
    msg.lon = 0.371446571299;
    msg.z = 0.244830203189;
    msg.z_units = 228U;
    msg.cog = 0.485037678397;
    msg.sog = 0.0433591841707;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.318826487731);
    msg.setSource(49902U);
    msg.setSourceEntity(150U);
    msg.setDestination(49956U);
    msg.setDestinationEntity(145U);
    msg.name.assign("CTUNKBOLVYUAFFGEMYXHQEZOQHTPXYNOVSLXATUZGAPTQGCESURSTPXCSLPQWSSXNCQLDJJSVRRODFCFPRPNUFBXWWFNAIHYSMCZUFTSKKMIJSJKJYDPEUUQMQLBMDJREARIAAIEDKBCXUMIMMGBWOZLPENTZWZYDUERVNTMEJWY");
    msg.value.assign("EEZSOUGIMYBQUCJLITVSKNXFCTYOBKUFVUCHBMOAGOXLOMXQFWZYISTEHRSIBJPKKRIQPAWUIUYKXWBJVLNHKPMNQTSGXATPWMRZKNEBEUBXTTPSYIAMFWHOL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.739192787221);
    msg.setSource(60127U);
    msg.setSourceEntity(139U);
    msg.setDestination(31916U);
    msg.setDestinationEntity(24U);
    msg.name.assign("DYRHHJPRBPXDOIWBYYZRYGGJHMVUYTAKNZRGVZDCPLFIOXBOMVPWCDQNUWRLYUOCSNJLTXILPSNGCSVTOUYEIWBBUHAAPXLYJESPCGOZVAMJKSRESCEBVMIVMJBMDZCKHHCHZBZKLKORRXUKJGBLOCIIIUFUSKZQRFUTSMQXTEOTNFWEWAOHFKMWJANEXDHDFALEEIGA");
    msg.value.assign("ZWTZYSWVSBKBCHQJPRBKIDWYTEBQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.297836581953);
    msg.setSource(16371U);
    msg.setSourceEntity(13U);
    msg.setDestination(9008U);
    msg.setDestinationEntity(143U);
    msg.name.assign("XQDKCOWVZGFQCTCXKGBLULWBIMHZNLCMDUAFWEZTHCMJBGQANJGLXIMNAIESDONITEGNQEPXUMVXKCWCBVKAQKLSDGHCNOSQYAQO");
    msg.value.assign("MBQIKHXNGDWSXGRXWMVSCMJGOKVDBHQQCUHVPEVBALUL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.301072944967);
    msg.setSource(33274U);
    msg.setSourceEntity(198U);
    msg.setDestination(36383U);
    msg.setDestinationEntity(29U);
    msg.name.assign("IZCWKPYFAZCZUDLNGMAPRNGHQPKOIYMIWCVXPNTRKVKSQZUXDMLBZYQJIPCGKSRVMYDLFTVRTYEGIYBFRVBGHRKSEPCJUGGZRHAAOGWQFYTTJOP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.541346783286);
    msg.setSource(32623U);
    msg.setSourceEntity(234U);
    msg.setDestination(47827U);
    msg.setDestinationEntity(169U);
    msg.name.assign("QGKCEKXEAGHWHBWKMSCUYYPGYBPBCINUSILPMQSJTRWUQCVOSJOIEOGMBSLJHNMZJEWFHTVRHOXTGSROVXUORYOENIVKYTJGFKTRXVUHLVFWVLLAJPQRRVPE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.472789952079);
    msg.setSource(30495U);
    msg.setSourceEntity(249U);
    msg.setDestination(13437U);
    msg.setDestinationEntity(31U);
    msg.name.assign("QLHOZSUHAYCTXVBZECMIXHQXETVBYCLPUXURLVLAOAZLUVXUFDPMZGMDSHNCJRGBGDVMISRWYDNGJFSKN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YUUYHTKNKXSPRJOCSNQDHVBEMAHWYQMCAJPQRBTJDIAYPQMBNRVKUGOFAPIGPNKPOZLOOXWYBCPZHTTZLHIHFLFKLDSLNQVLFRZSRDHGAMWZRCVUQMGNZJPOAYOEHELVFCIYOIIOVVCBSUSZHDSDFWTPTJVGLANCNCXBJCUXTKIQIJPVXMTFAERSEECLZGJSMYBNHGJMRUIA");
    tmp_msg_0.value.assign("EPCDGUUNCGUTPZCURZUATWVMZHSIJMYPNNBJPQXJJHH");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.0982495347478);
    msg.setSource(43443U);
    msg.setSourceEntity(221U);
    msg.setDestination(49199U);
    msg.setDestinationEntity(117U);
    msg.name.assign("UZLKPICECUXIXVYXNKWTABJLFNWPHXGFNBPUSBOHMORASBTQVICBYMKJRGEDLLEHQFMSEHQTMBRNFAXUNJWRIKIZVTGJHREDASESKOVXLODGM");
    msg.visibility.assign("IZVLKFOSAJFTYCQRADJYIQMRJHMZCZAQNAIHNUDEZGLBSNFPBGWNYKHXQBAM");
    msg.scope.assign("RLPLMJMWBJDQTHSTVGVJNXSXODGLFLGCOPKESOAUXMZDEBLGWWITJIAFVWKYWXXXBCNPNSQBWAGTCAUKDZHTOIUGXADZTHOLXNHMKZFBU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.205613833161);
    msg.setSource(59949U);
    msg.setSourceEntity(173U);
    msg.setDestination(39442U);
    msg.setDestinationEntity(134U);
    msg.name.assign("HPDEIYUZORREBTPPQULMCQQWBVVNIMGSCCCKNCRRJTMWZAGYGVHKEHJYGLPZIOAUQBGNKHOMDWWEZTKYWUBASIGGESJAPVPJYDMKNTETRFBYXAXVSIJWBILUMRTIRZRDNXHUXAJCYIDIYUQCTODFTFWTMXOKVOOHMNAZUFCPQJZSVLSJFDEYDJFFVIQAALQSLCDZVVKUUGEMHPJEBFXNLOEBLTSXDWALQMRFOHSQWXRGXSXBKLNBCOYH");
    msg.visibility.assign("FAVQJIXTFHXEWHREPUEOTWCUZJWNGDNUFSRKKTZEUGKUBKRLNLEOXIBZLJITLDGFQNIXMWJSOSYCMDYYWUTURIBSVKITCZERPDWHOXZMLDJXLNPSVYHEKBBHBVQSABDFCPRSAYYKBAHVNDMRGYCLJIRNE");
    msg.scope.assign("EOPSGDSCIIQBNTEMLOHRUXLVXMGOZLCVZQZKCEDCZIJHMVIUTTYWNIYUFQVFTJHKZIMWALGFRGPRFJXHPFAZGDSZFISJMWIRDPORSHQXBRAXTBOZHKTMEUUUAYTEEQFNICHBAQJLX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.21654325132);
    msg.setSource(26650U);
    msg.setSourceEntity(224U);
    msg.setDestination(27640U);
    msg.setDestinationEntity(248U);
    msg.name.assign("HATNBLAKENAKLJJWDFANHRNOJZGTRLYWJMPETUOZSRLAUMCOERBVLQUFFTBCCBIIKEVIRBFCTYWIGYVXMMNYSHMWSEDMSFQSGEJGGYOIFGPEIDZPJCOIDBXOVWIXKAPIZYYGUH");
    msg.visibility.assign("GBVUGQKJECIFJRTFVOZLENKRIOINCABWDLIINGWUBYAY");
    msg.scope.assign("QANKLYFZYOAVJNCRMTLUJUALRQOVASSLFOMEOSEXMFGGKMRHLWNWONCSGNYBCZLAMPRXMYHJIIUDZYRTQBKFWYWOPPELSTMZYWGNHXDAOCKNDDICLFBLZKXNZEQQTVRWIBCUDNAZTSEIHTCIQJTJEDUAMHBDPUUYDBJVJVI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.68357029321);
    msg.setSource(18699U);
    msg.setSourceEntity(85U);
    msg.setDestination(35906U);
    msg.setDestinationEntity(11U);
    msg.name.assign("JBBJTXBKLMSVHDVWWXOGVHIQHKNQTLOVXLSCGAOBKJGKZQNOMAFEICBGFWREYMFFOHIEWHZFSRIJRGACTNCTOZSDCTGIUPMZGFPNDCNEEZODFAQFVPHJSISKYBKEYXVFPCUMWSASBLPDWIXTLULPCERWMBZDXUAXLAALRWCKAGVAVDXJPIEDZFPTZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VCCFLAFNDWFYNCBDSBWEEEZMYTVJVIHTBHTUBJGUPETTGNWDWSCNMMKYATFXMQKQLIQPQ");
    tmp_msg_0.value.assign("WPZEYNGRBMXHMYQUVFWSYNHMXECZYVWEYGCQNHAYTOSGTOFQHYNDVLXWWPMVJMFKOUHUSTQGMXRBGZOVBQDNECUECZUCLWFAMVLBZJJHJUOYZLEBACNKQPUDWPPONIXFWCIPZ");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.211671270007);
    msg.setSource(35536U);
    msg.setSourceEntity(19U);
    msg.setDestination(7485U);
    msg.setDestinationEntity(34U);
    msg.name.assign("RGUNGSDWYRUJMFOGOYLNXSDHGNKMVQXERXCMAGTVQKKPKETEJVWNZIFTYZQYOJEDYPNJBDJHSZKIIETNVPHKXVADYJPXYGEOUXZRZFMTGSGYLSTLQGVIEMFUPLPWTRRJMFDUBHFSCMAUQHLDOBXSHENLXRBZZSWIUCINCIWPRYFQHOAAECIDTLNUKPBCABFCKZBJDFMKVAOXEBLCHHULVSQOVCJJACWXTYIOMSBTWZQWANGAQPQI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GJTNQDZONABQFSBIDUYIIJBXOGNUXLUMMONIWOZHYQGMSSKTBICPNIKRORTJMLMAUHGIWSHJJHVWEAUZUPXVAWZKGXFWDZQKWZUZPYJKDPBBDCLSWTGFFXCKHXRRRMTTGZIFHYFNYLKYAVEASDBJTMEEQRGCPPYHDESOVQPEUCWLJDKAWSJAMVMLVJLFLFCFIGXKYUNXZTOUPODQNBHXCVCMRBSRYTKDOQTVQPOBRE");
    tmp_msg_0.value.assign("BUWGYCLPBTDCNVKRXRGLJZTOZDAZQ");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.585226481252);
    msg.setSource(6651U);
    msg.setSourceEntity(78U);
    msg.setDestination(11981U);
    msg.setDestinationEntity(42U);
    msg.name.assign("YDIEZXWRCNTEKFRYITATCEFVQCEKIUIFYDPFVEZNMXHBCYD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QBJUTOXYYQXNNBCFTGGICUXDIXWKDMJGKQLELU");
    tmp_msg_0.value.assign("JCWPVKWXBPFFJKUWMZXMGQZASJNSLVUTXEHVOPPLYIVZGCRTGCYCEOOGPTMMRAHMCSIQWXLJYQABPHQVWTBNXRDLDLFQNRCWIBDBAYLYJVGFDWCDTBABZIPYLSNEGQUUMNHCDCYOYEQHRVMROKHJHONMJOKHNRJOEUOPZFYIKWKZPUEIGRKUEBFKDSFRXATECVSHIRQIMLXIZMXQIDFVUABNDTKHTZPBVWSSTJX");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.229575370526);
    msg.setSource(52170U);
    msg.setSourceEntity(20U);
    msg.setDestination(21126U);
    msg.setDestinationEntity(238U);
    msg.name.assign("BVHXWVSXBTAJTZQEDYJRSDQZRPIIXUKOMPEDPBDPRPIFHOLCCLTJILMZQGVQGUUSMMEPSBNPFPZPYWWBRRBYGUZHG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.899548524258);
    msg.setSource(8341U);
    msg.setSourceEntity(243U);
    msg.setDestination(15708U);
    msg.setDestinationEntity(114U);
    msg.name.assign("TVDZNZWHAHOKULHTDJQIFKQJVWZQIUGGRCZZUSHCMQIEMETUCKVOJPMVRYLRZPURWRMDHIBBSYBWMIFGNXWCBFCPMOTBVNHSQGUGFVNLAXILWMTDADPSMPTVPWQKYSONSXCEGYKSJXJHLXYCELLGZIZGJIPYKLSQAVJOXWHGCPBADYBDDWTNXJRLIBFOEK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.92311410205);
    msg.setSource(45964U);
    msg.setSourceEntity(85U);
    msg.setDestination(16296U);
    msg.setDestinationEntity(240U);
    msg.name.assign("ALRYSWDYDOYPHAOSUQHRMBIFJYJMMNGDDLCZFQFCQLIHSOUTSNECLCKUFLKOSIBDFDLAZRUTYEOWGDPYRKCQWGKPXHGQALNFANZPRKBCTJVBXUERKGXBKCEZLISBVNZZKXOREARSHEVEIAYTEVLFTZHBJSVZQPHISUHXXQGNEWBTGUKAJOIWUMOWHNYFDQIMJHOZVXGRGFJMOCVIWXRUPPXMWPTIWNDGTN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.414205999217);
    msg.setSource(57707U);
    msg.setSourceEntity(1U);
    msg.setDestination(9210U);
    msg.setDestinationEntity(229U);
    msg.timeout = 1294687517U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.115644196825);
    msg.setSource(47215U);
    msg.setSourceEntity(217U);
    msg.setDestination(41152U);
    msg.setDestinationEntity(189U);
    msg.timeout = 26625321U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.181193362301);
    msg.setSource(43285U);
    msg.setSourceEntity(7U);
    msg.setDestination(14059U);
    msg.setDestinationEntity(69U);
    msg.timeout = 2208311260U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.843686358142);
    msg.setSource(175U);
    msg.setSourceEntity(211U);
    msg.setDestination(24986U);
    msg.setDestinationEntity(251U);
    msg.sessid = 1383287259U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.58797887151);
    msg.setSource(51193U);
    msg.setSourceEntity(228U);
    msg.setDestination(3646U);
    msg.setDestinationEntity(251U);
    msg.sessid = 1239749222U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.788941804404);
    msg.setSource(17380U);
    msg.setSourceEntity(28U);
    msg.setDestination(47377U);
    msg.setDestinationEntity(222U);
    msg.sessid = 653941197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.976362810181);
    msg.setSource(27624U);
    msg.setSourceEntity(152U);
    msg.setDestination(38895U);
    msg.setDestinationEntity(15U);
    msg.sessid = 2908718112U;
    msg.messages.assign("YMNITSERQTPNHLDBFACLBKBYCDEMWWPNWELDQEVAAHNQWUEIRFGHVWHLJTQJJTUWJXOVCHKXQOFZBGIUXTFUOBAHJPN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.527106601879);
    msg.setSource(17301U);
    msg.setSourceEntity(230U);
    msg.setDestination(22138U);
    msg.setDestinationEntity(75U);
    msg.sessid = 2270109399U;
    msg.messages.assign("LNBPLWDCZXGQUMXGNI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.163526241672);
    msg.setSource(26817U);
    msg.setSourceEntity(128U);
    msg.setDestination(52674U);
    msg.setDestinationEntity(150U);
    msg.sessid = 935527490U;
    msg.messages.assign("SVXNEWBEDPDJXWRPBXKUJUVTBGJBHQBCXEZKZTQIIFNAPMBEFBHHLSURSSOQMIFVCUNCNZQWTTUVXGYTUNOFYRGLKMNIJANVMZONKGZGSWAMKLFGSZHQXJSYZDPULZIVYAVYTGQRIHQOC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.493017243564);
    msg.setSource(11579U);
    msg.setSourceEntity(88U);
    msg.setDestination(30521U);
    msg.setDestinationEntity(7U);
    msg.sessid = 2426375297U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.813206022084);
    msg.setSource(17651U);
    msg.setSourceEntity(37U);
    msg.setDestination(60551U);
    msg.setDestinationEntity(82U);
    msg.sessid = 1924199254U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.246942215848);
    msg.setSource(20819U);
    msg.setSourceEntity(110U);
    msg.setDestination(39600U);
    msg.setDestinationEntity(144U);
    msg.sessid = 2498589658U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.80417883995);
    msg.setSource(61381U);
    msg.setSourceEntity(26U);
    msg.setDestination(51690U);
    msg.setDestinationEntity(40U);
    msg.sessid = 3098324784U;
    msg.status = 133U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.588391134638);
    msg.setSource(28848U);
    msg.setSourceEntity(125U);
    msg.setDestination(28679U);
    msg.setDestinationEntity(220U);
    msg.sessid = 1370796422U;
    msg.status = 191U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.595754173936);
    msg.setSource(10449U);
    msg.setSourceEntity(144U);
    msg.setDestination(57579U);
    msg.setDestinationEntity(151U);
    msg.sessid = 112834671U;
    msg.status = 198U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.793684268954);
    msg.setSource(42009U);
    msg.setSourceEntity(61U);
    msg.setDestination(44611U);
    msg.setDestinationEntity(155U);
    msg.name.assign("YHKBPRUUJGXLKGLZLXKWXFKYSGJGZAHSAJFRDSDPEZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.482277242179);
    msg.setSource(26681U);
    msg.setSourceEntity(23U);
    msg.setDestination(23443U);
    msg.setDestinationEntity(93U);
    msg.name.assign("OUCATTCXNFOZRIHSPYXWHWMFACSMYSJGTRGAOQCESCBABYRLXKPKVOVJXCYJKUZBJZHJHENDXNTTIRABPLIJYSAPVEDKLIEPHVLVZEUWREFBJOKPQUKVOGQTLXO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.982609519626);
    msg.setSource(30647U);
    msg.setSourceEntity(137U);
    msg.setDestination(53022U);
    msg.setDestinationEntity(120U);
    msg.name.assign("ZQTXGBUIHQHYSJLOYMTQFJDXDPOCDUGIWUYTMCPXECSWYJIWNKMZWKEJFJURODBVXYHTAWFRUJKRPRDPGTJGBDRYSAUGKVXAGSVGHQZYQZCMOKIGIUOYXLNHHANAOVBLQCALTUPTSWKCCFKBIXOOONZBEDSWZCRRWSEBWEKVENPKMFZTRS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.0591321873276);
    msg.setSource(7623U);
    msg.setSourceEntity(47U);
    msg.setDestination(16985U);
    msg.setDestinationEntity(9U);
    msg.name.assign("OOWGMHAWWRMKQVTCUAKFEUQJJCGDAPXHNLINOUDERJPPNNCLTIWGCBBLOUUX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.77744703294);
    msg.setSource(12973U);
    msg.setSourceEntity(43U);
    msg.setDestination(28764U);
    msg.setDestinationEntity(58U);
    msg.name.assign("APHDGPIUBWJCFSMEYNUZBSWKYMMKAEGQTBLFSQXDDUTADHW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.0517251868702);
    msg.setSource(58354U);
    msg.setSourceEntity(2U);
    msg.setDestination(12048U);
    msg.setDestinationEntity(232U);
    msg.name.assign("VQHNGPHSVCGAXQAPSPVCKQYPUANDXCFGPAWFNSMVCGGUDNXZIZJILBRMOUXSOSSFBQEWIJNBZPNSDTFJEHQDDCUKYNZVJFCVCIOYAMRVUSXAGVCMQIHYTGXPSKYWNBHUERMLUIKPKELVJKWDHSBMLRRJRWJFWHTFTMGZUIMQYTNYEZKEZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.0664183139197);
    msg.setSource(43468U);
    msg.setSourceEntity(163U);
    msg.setDestination(49846U);
    msg.setDestinationEntity(206U);
    msg.type = 70U;
    msg.error.assign("VYYVDUKXSPWVSPSNWDOPOXVOLMWXGAUXKEIQVRDLONIRSPCRTKKLJKMRPDOFEWTLJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.757675987484);
    msg.setSource(52325U);
    msg.setSourceEntity(216U);
    msg.setDestination(30579U);
    msg.setDestinationEntity(84U);
    msg.type = 222U;
    msg.error.assign("QHDAOHAKGPNXMUSITCWZFBLFXJJULLPIXOGTSPUMVCDDBNURZPINWVECVORJLKYSFMLYUHZJFCKTKEYWPFOZAXUJXSZXCMGLWYKBMEGITPWIQCRPOBTIVLBDOBQXMCCVEXDSXKWAPQIUZNFEAFHQYATZQMEVNGGSWRDSUJPYKEJPYZVQKNOHZRAGYXKRTBGNADEOIQIMTTDWVHOFLRRHEKEVAUSJWNQSVQHYMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.0603817352307);
    msg.setSource(22424U);
    msg.setSourceEntity(81U);
    msg.setDestination(57633U);
    msg.setDestinationEntity(147U);
    msg.type = 217U;
    msg.error.assign("TWMJVEMENMYRRKKEYTHWNCLMNJVNBLVJZSQDPPXCMOXJLAHZWAVQLPEWZRJOIQBKMQPYWOCOURLZNIFSVCSGBUAIFTEWRSULZSDRBACKDUZGDPYTDDDQQJWVHYUBOJAKCB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.692353420954);
    msg.setSource(5738U);
    msg.setSourceEntity(191U);
    msg.setDestination(23921U);
    msg.setDestinationEntity(102U);
    msg.seq = 63357U;
    msg.sys_dst.assign("LYDKVZXDKWYQUGLVHNCUNBTIVFNHLASREBVKZTDMMPWPBVBZFMTIITMNVKJGGOQYPIZQEJFMKLQPVHKADBUCDUIVPHUPZOOKFAJTZAPFODOSHTCREJCRGIGGFYXRZGXJWGXXQSNSCJVNASNMDQPXAIXMOEBRHS");
    msg.flags = 172U;
    const char tmp_msg_0[] = {-33, 100, 59, -36, -106, -46, -32, 98, -2, -89, -94, -43, 114, -84, -13, 109, -58, 93, 113, -86, -91, 15, 66, -111, -52, 45, -86, 21, 106, -21, 7, -21, 75, 122, -29, 108, 110, 114, 37, 92, -76, -112, 8, -17, 69, -11, -33, -44, 99, 63, 112, 15, 27, -78, 98, -66, -5, 114, -76, 26, 16, -114, 56, -63};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.172911784336);
    msg.setSource(26577U);
    msg.setSourceEntity(198U);
    msg.setDestination(37800U);
    msg.setDestinationEntity(186U);
    msg.seq = 56801U;
    msg.sys_dst.assign("IKWOEEGUCGTTQUILHHDSQWRUMOTERDPIJXDYKJSRBCHHESRQMLFVLTHYOYJBGYVQWZBMVJMGBAVBHLZFSIFRYAJXAXNCZCNZMPJENDCLYFRXAUNXCHOITTTIGFDCJFSAPWDBAQYZDUUDYKHCWMNNWXENXVFVMKEGHEHZQRLLEWOLA");
    msg.flags = 170U;
    const char tmp_msg_0[] = {7, 66, -23, 7, -50, 28, -86, -122, 3, 60, 16, 18, 13, 76, 124, 125, 6, 80, 65, -86, -120, 11, -60, -52, 107, -110, -28, 40, -15, -120, 75, 16, -38, -86, -20, -5, -34, -82, -21, 16, 5, -108, 57, -4, -54, 109, -37, -61, 69, -128, 57, -45, 26, -59, 27, -115, -1, 15, 97, 98, 123, -35, -63, 27, 51, -90, -115, -68, -26, 0, 96, 21, 60, -44, -85, 37, -73, 92, -120, 10, 26, -16, -98, -121, -44, 90, -57, -123, 75, -29, 8, -107, -12, -125, -65, -72, 38, -6, -85, 103, 48, -14, 49, 87, 58, -81, -39, -18, 115, -79, 4, -47, -123, 71, -16, -92, -84, -7, -67, -35, -59, 88, -108, -117, -18, -54, -47, -35, -8, -47, -50, 9, 111, -72, -79, 9, -115, -125, 113, -118, 31, -128, -92, -71, -43, 66, 29, -58, -73, -93, 5, 103, 78, 41, -80, 31, 80, -54, -32, -32, -38, -7, -42, -105, 45, -10, 62, 67, -45, -76, 83, 25, 21, 123, 100, 81, -4, 56, -17, 91, 50, -10, -43, 96, 14, 42, 106, -60, 126, 52, -95, -121};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.0385313473385);
    msg.setSource(4164U);
    msg.setSourceEntity(183U);
    msg.setDestination(38642U);
    msg.setDestinationEntity(251U);
    msg.seq = 57444U;
    msg.sys_dst.assign("GVGJNYCKAMGLPKYLJJEJCRTFIARWSUXLTSPPXKKVYWAPLNMVZYNPGVUXMUIHEERPYHKCRIBZBOHOYRSBFQPNIKOQFWQHRJAJVALUDULEMHSZBWXCLDSCBCCEUEASFZTXCWOOGHXASFMYDSDEBRSZJIOYGNKMGCGKLLVHDELQWQO");
    msg.flags = 231U;
    const char tmp_msg_0[] = {4, 1, 102, 7, 77, -17, -101, -31, 30, 0, -66, 114, -40, -53, 41, 6, -65, -92, -115, -76, -9, -128, -69, -82, 1, -45, -10, -57, -5, -92, -69, 57, -116, -25, -57, 59, -19, 117, -21, -15, -74, -121, 21, -3, -8, -56, 77, -59, -122, 114, -125, 28, -77, 56, -18, -24, 39, 36, -47, 34, 103, 21, -66, 86, 48, -62, -118, -95, -124, -28, -52, -78, -127, -44, 22, -70, 46, 120, -37, -117, 15, 73, 32, 28, -18, 123, 41, -52, -45, 82, -77, -16, -128, -87, 35, 68, 67, 72, 100, -125, -56, -55, 109, -33, -17, -94, -68, 78, 54, -87, 118, 60, 67, -95, -5, 86, 3, 97, -88, 114, -60, 113, -94, -110, 45, -90, -92, 0, -94, -118, -26, 13, 58, -4, -108, -98, -24, -55, -70, 11, -103, -36, 105, 100, -43, -1, 57, -49, -98, -69, 79, -71, -103, 34, -45, 50, -97, -41, -71, -92, -63, 111, -91, -82, 61, -88, -26, -19, -67, 81, -26, 82, -29, -65, -95, -25, 4, -40, -77, 99, 55, -38, 5, -98, -54, 13, -71, -55, -80, 80, -99, 23, -102, -105, 1, 94, 88, 32, 95, 99, 74, -7, -46, -84, 103, -84, 75, 120, 109, 102, 14, -15, 47, 6, -63, -6, -112, -31, -51, 50, 22, 90, -15, -128, 40, -76, 113, 92, -28};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.199680376229);
    msg.setSource(524U);
    msg.setSourceEntity(65U);
    msg.setDestination(3683U);
    msg.setDestinationEntity(200U);
    msg.sys_src.assign("DBROICHXPUAPBJQDWEZMMOGSQQFGXXXGKSMRVSYPKKDNFIREUVUVGWOHAMYZVIJODTKXEAAPZOXVRJZPLVASJLDBMHKLLOIHMYGWWIWNCSETGYXDZRXFLQAJOIDARZP");
    msg.sys_dst.assign("PIAANZBMINBEECBKOESNNTCDWGOBBXNSOGXYUHXKYFWGEIISZIZCEWMAIYPXHRQIXWKFZPTVHPWALLJGUXOZGFODQWDBHDIJRVSLKLUGZVZQHRVWNKMJQGSHLTETRMAJTRNCJSPFLWJOVLAQQFCQRMYJDXLMVEYYBDMCIFNPUKYUXKUDRBXQOVBCLWBKMSTUQCIPYNZFJJATRSZHWS");
    msg.flags = 176U;
    const char tmp_msg_0[] = {-2, -9, 18, 79, -45, 97, 62, -72, -39, -25, 20, 83, -90, -11, -17, -99, 64, 56, -108, 19, 85, -116, 11, 31, 70, -4, -25, -47, -67, -17, -83, 11, 37, -78, 0, -73, 72, 66, 64, 62, 15, 108, 1, 101, 13, -98, -53, 34, 34, 93, -27, -22, 8, -119, -7, -17, 57, 81, 101, 66, 106, -99, -21, 76, -92, -31, 23, 92, 35, 89, 45, -119, -79, -92, 39, -16, -82, -38, -71, -56, 99, -74, 102, 99, 40, -96, 0, 21, -48, -8, 41, -72, 15, -122, 61, 81, -110, -82, -75, -62, -66, -1, -107, -63, -83, 54, -35, 20, -13, 27, -98, 48, 34, -30, 84, -40, 82, 39, -56, 2, -126, -45, -68, -89, -58, -34, -74, -27, 42, -19, 79};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.0865474360012);
    msg.setSource(43325U);
    msg.setSourceEntity(91U);
    msg.setDestination(52358U);
    msg.setDestinationEntity(28U);
    msg.sys_src.assign("DYTUEMINRDBWKLHZZASFQFVIWCFHHKOFMCHEDKCETQYYUNXTCORIILMCMHJLNUQZEPCJXWRTB");
    msg.sys_dst.assign("WQIEOLXKYUUUBKAQZMSRWUOQFUZPHWGAWTDKSTBIIBFAEH");
    msg.flags = 58U;
    const char tmp_msg_0[] = {-119, -8, -89, -123, -63, 76, -34, 104, -69, 8, 74};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.0778301496574);
    msg.setSource(26386U);
    msg.setSourceEntity(54U);
    msg.setDestination(56104U);
    msg.setDestinationEntity(150U);
    msg.sys_src.assign("CWCWWQTTDYAOBAANKKURIPRSYNMHHCXLXRBWEUTNOHZZTFIHLSQDDUUOKFXQHMWGZQDVHCIVXVGWGBUVLDZLOIZWXYQMIETROEJEZNSVIBQXZO");
    msg.sys_dst.assign("ROSWXJUVTZRJFOUHPJZVHFSXNCDSDBTPXQSUZWBEAUXPEKPAPANTGDIQBJTHGTCKEHGIXPEZDMHJDOUGYVSYTWBIZKUYYMZXCKRIUJISKFCEKQWYPYDXVYLBCWTQIGNAYTMIIKLDKPZSMWXCLENJJLEAZATLBMUANLPONANEUMQLFRQMNCRVSIDKJNSONGGOFQFZIBVFFFHLTUQVYCEBXOQOXHBVOAWWRBMDVGRYGWORCWFMGMPVK");
    msg.flags = 144U;
    const char tmp_msg_0[] = {-6, 25, -90, 92, -64, -23, -11, 107, -88, -100, -119, 84, -117, -3, 28, -65, -110, 115, 2, -95, 55, -86, 44, 48, 46, 29, 107, -15, 45, 46, 96, 125, -1, -62, 70, 25, -100, 114, -106, 35, -56, 54, 89, -73, -33, -48, 4, -110, -53, 49, 17, 77, 104, 115, -102, -47, -111, -41, -92, 123, 50, 22, -74, -117, 109, -91, 50, 15, 8, -99, -48};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.824030518922);
    msg.setSource(42009U);
    msg.setSourceEntity(134U);
    msg.setDestination(44697U);
    msg.setDestinationEntity(32U);
    msg.seq = 5674U;
    msg.value = 246U;
    msg.error.assign("ZKYLODKWPUGBDSVDEYIBWFJIRDPPTHLTUXCYAEISNSYNJOSOPDKKPUKZIEQLQAWOGTGLFYJTRUCHDBHRYSQXQCFMBEYVBVXKJDURZZWDWBALTHHARNVMLNMOOFRVFXGXL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.109341583934);
    msg.setSource(53389U);
    msg.setSourceEntity(184U);
    msg.setDestination(37459U);
    msg.setDestinationEntity(235U);
    msg.seq = 47326U;
    msg.value = 192U;
    msg.error.assign("LZYRAVMGOZRZZUFEXIHRBKXAQBKQAMUTDXBIMTLPRPY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.693579251977);
    msg.setSource(28109U);
    msg.setSourceEntity(15U);
    msg.setDestination(11667U);
    msg.setDestinationEntity(46U);
    msg.seq = 65508U;
    msg.value = 111U;
    msg.error.assign("CXFZRTMDLOYIKNSOBJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.984239080569);
    msg.setSource(320U);
    msg.setSourceEntity(117U);
    msg.setDestination(31983U);
    msg.setDestinationEntity(88U);
    msg.seq = 5120U;
    msg.sys.assign("TDXXDLJGNRIBNDNTMAYIAQUNKQSUCGFZFXSHBMUGCKYBUQWRVIMWHZHHALXRXRBMXVXEDEIIFPYZWAJREQLPKVAVEYBGZKLJVZWWXWCRINPLABSHGKIJLFXPU");
    msg.value = 0.936303952803;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.87926914438);
    msg.setSource(38102U);
    msg.setSourceEntity(181U);
    msg.setDestination(28075U);
    msg.setDestinationEntity(186U);
    msg.seq = 54728U;
    msg.sys.assign("SLXMNPIEYGBVXBICCTOPYQXL");
    msg.value = 0.391269399111;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.972537179349);
    msg.setSource(60455U);
    msg.setSourceEntity(49U);
    msg.setDestination(36157U);
    msg.setDestinationEntity(5U);
    msg.seq = 35997U;
    msg.sys.assign("NZRFVTVHIXTJBLJAIONVSAQEXCDLZWWBDHWWBOZMQFHDXYDQSIGOVOLELLILIMRBMCBMJFMYGGSESPGRCVPMSLGGSOZVIDMGWNEOGAREOXCNJNUGRAGFCPRCPXCUJVJUHURPCATKCIKLZYTQTPARELKBNSMFDWYVXBATAQRHQMUWFEZHYPKIHYFZAWFVDTQUENKU");
    msg.value = 0.441208962736;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.486789209858);
    msg.setSource(32194U);
    msg.setSourceEntity(57U);
    msg.setDestination(4729U);
    msg.setDestinationEntity(126U);
    msg.action = 166U;
    msg.longain = 0.363942516599;
    msg.latgain = 0.886545914503;
    msg.bondthick = 1895579200U;
    msg.leadgain = 0.877678691081;
    msg.deconflgain = 0.433622329111;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.837336768605);
    msg.setSource(38222U);
    msg.setSourceEntity(130U);
    msg.setDestination(56573U);
    msg.setDestinationEntity(142U);
    msg.action = 233U;
    msg.longain = 0.550808767565;
    msg.latgain = 0.33681329807;
    msg.bondthick = 1969979547U;
    msg.leadgain = 0.623295974926;
    msg.deconflgain = 0.864508595956;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.825134835235);
    msg.setSource(29577U);
    msg.setSourceEntity(83U);
    msg.setDestination(57705U);
    msg.setDestinationEntity(159U);
    msg.action = 4U;
    msg.longain = 0.492177260172;
    msg.latgain = 0.699200892055;
    msg.bondthick = 3113426041U;
    msg.leadgain = 0.290590738047;
    msg.deconflgain = 0.174983806944;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.226151202896);
    msg.setSource(2597U);
    msg.setSourceEntity(4U);
    msg.setDestination(10083U);
    msg.setDestinationEntity(176U);
    msg.err_mean = 0.197100637691;
    msg.dist_min_abs = 0.0820819422575;
    msg.dist_min_mean = 0.829545407223;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.0707609637919);
    msg.setSource(40502U);
    msg.setSourceEntity(40U);
    msg.setDestination(55577U);
    msg.setDestinationEntity(170U);
    msg.err_mean = 0.860105938043;
    msg.dist_min_abs = 0.17253684583;
    msg.dist_min_mean = 0.913454345207;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.368564528886);
    msg.setSource(27857U);
    msg.setSourceEntity(132U);
    msg.setDestination(54302U);
    msg.setDestinationEntity(64U);
    msg.err_mean = 0.859174128155;
    msg.dist_min_abs = 0.725928185125;
    msg.dist_min_mean = 0.156571722353;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.20783216435);
    msg.setSource(25952U);
    msg.setSourceEntity(6U);
    msg.setDestination(51776U);
    msg.setDestinationEntity(249U);
    msg.action = 169U;
    msg.lon_gain = 0.17918572081;
    msg.lat_gain = 0.439141093047;
    msg.bond_thick = 0.0159056227351;
    msg.lead_gain = 0.598217190456;
    msg.deconfl_gain = 0.935378240074;
    msg.accel_switch_gain = 0.742065952975;
    msg.safe_dist = 0.628457580307;
    msg.deconflict_offset = 0.0264071684589;
    msg.accel_safe_margin = 0.0376130582173;
    msg.accel_lim_x = 0.0488865374281;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.534247696125);
    msg.setSource(62611U);
    msg.setSourceEntity(52U);
    msg.setDestination(929U);
    msg.setDestinationEntity(110U);
    msg.action = 66U;
    msg.lon_gain = 0.623038358038;
    msg.lat_gain = 0.214269224891;
    msg.bond_thick = 0.0778214218313;
    msg.lead_gain = 0.295162122689;
    msg.deconfl_gain = 0.0587954649354;
    msg.accel_switch_gain = 0.843123233435;
    msg.safe_dist = 0.923626679408;
    msg.deconflict_offset = 0.0845300995549;
    msg.accel_safe_margin = 0.200981887858;
    msg.accel_lim_x = 0.625732529562;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.0663640361196);
    msg.setSource(37759U);
    msg.setSourceEntity(183U);
    msg.setDestination(44142U);
    msg.setDestinationEntity(106U);
    msg.action = 45U;
    msg.lon_gain = 0.471688440606;
    msg.lat_gain = 0.741907306406;
    msg.bond_thick = 0.445723515997;
    msg.lead_gain = 0.424055899718;
    msg.deconfl_gain = 0.424418085378;
    msg.accel_switch_gain = 0.914532018277;
    msg.safe_dist = 0.376495478611;
    msg.deconflict_offset = 0.656546501764;
    msg.accel_safe_margin = 0.194600849285;
    msg.accel_lim_x = 0.828825949127;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.39148498637);
    msg.setSource(52740U);
    msg.setSourceEntity(144U);
    msg.setDestination(56610U);
    msg.setDestinationEntity(12U);
    msg.type = 36U;
    msg.op = 204U;
    msg.err_mean = 0.355300518594;
    msg.dist_min_abs = 0.251970103611;
    msg.dist_min_mean = 0.840247382985;
    msg.roll_rate_mean = 0.369600766415;
    msg.time = 0.965476083396;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 0U;
    tmp_msg_0.lon_gain = 0.576851543557;
    tmp_msg_0.lat_gain = 0.727381557484;
    tmp_msg_0.bond_thick = 0.236222098126;
    tmp_msg_0.lead_gain = 0.236101847376;
    tmp_msg_0.deconfl_gain = 0.716892628136;
    tmp_msg_0.accel_switch_gain = 0.497165439752;
    tmp_msg_0.safe_dist = 0.0799784775985;
    tmp_msg_0.deconflict_offset = 0.383671869456;
    tmp_msg_0.accel_safe_margin = 0.897570989083;
    tmp_msg_0.accel_lim_x = 0.542804859369;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.580159307522);
    msg.setSource(53421U);
    msg.setSourceEntity(98U);
    msg.setDestination(16819U);
    msg.setDestinationEntity(168U);
    msg.type = 225U;
    msg.op = 89U;
    msg.err_mean = 0.132581987994;
    msg.dist_min_abs = 0.475617053485;
    msg.dist_min_mean = 0.00188645893356;
    msg.roll_rate_mean = 0.82656591993;
    msg.time = 0.90422631722;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 21U;
    tmp_msg_0.lon_gain = 0.357286214477;
    tmp_msg_0.lat_gain = 0.118464952257;
    tmp_msg_0.bond_thick = 0.661971068888;
    tmp_msg_0.lead_gain = 0.967964692799;
    tmp_msg_0.deconfl_gain = 0.248403034926;
    tmp_msg_0.accel_switch_gain = 0.691237709124;
    tmp_msg_0.safe_dist = 0.865845487169;
    tmp_msg_0.deconflict_offset = 0.0129111755131;
    tmp_msg_0.accel_safe_margin = 0.904996446135;
    tmp_msg_0.accel_lim_x = 0.475199929947;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.428071690565);
    msg.setSource(30861U);
    msg.setSourceEntity(69U);
    msg.setDestination(37509U);
    msg.setDestinationEntity(171U);
    msg.type = 34U;
    msg.op = 158U;
    msg.err_mean = 0.0314358297858;
    msg.dist_min_abs = 0.39358399599;
    msg.dist_min_mean = 0.672317212572;
    msg.roll_rate_mean = 0.347966424078;
    msg.time = 0.980883078293;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 79U;
    tmp_msg_0.lon_gain = 0.291018836082;
    tmp_msg_0.lat_gain = 0.0630586797971;
    tmp_msg_0.bond_thick = 0.207080782612;
    tmp_msg_0.lead_gain = 0.404273132449;
    tmp_msg_0.deconfl_gain = 0.621539720674;
    tmp_msg_0.accel_switch_gain = 0.7516462083;
    tmp_msg_0.safe_dist = 0.678671505873;
    tmp_msg_0.deconflict_offset = 0.680020096321;
    tmp_msg_0.accel_safe_margin = 0.735514046933;
    tmp_msg_0.accel_lim_x = 0.897909366749;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.325035001145);
    msg.setSource(62291U);
    msg.setSourceEntity(168U);
    msg.setDestination(49428U);
    msg.setDestinationEntity(46U);
    msg.uid = 181U;
    msg.frag_number = 107U;
    msg.num_frags = 223U;
    const char tmp_msg_0[] = {-120, -45, -39, -77, 113, 14, 98, -29, -45, 7, 98, -111, -21, -79, -78, -27, -89, 28, -28, 3, -125, 29, 34, -70, -73, -6, -14, -53, 13, 45, 22, -93, -97, -21, 76, 113, 119, -83, -5, -10, 71, -78, -101, -8, 88, -74, -52, 49, 62, -31, 123, 106, 7, -112, -106, 112, 85, 30, 24, 1, 100, -106, 108, -8, 63, 92, 61, -114, -31, 117, 57, 43, 89, -94, -81, -59, 38, -31, 119, 51, 2, 126, -30, -100, 13, -19, 45, 113, 76, 23, 11, -10, 54, 109, 8, -9, -47, 13, -88, -103, -31, -87, -14, -71, -42, 2, 122, 123, 114, -69, 72, 43, 71, -9};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.0375342828766);
    msg.setSource(56879U);
    msg.setSourceEntity(56U);
    msg.setDestination(18978U);
    msg.setDestinationEntity(251U);
    msg.uid = 91U;
    msg.frag_number = 46U;
    msg.num_frags = 130U;
    const char tmp_msg_0[] = {-53, -93, 26, 73, -55, -55, -37, -31, 10, -110, -122, -32, -83, 1, 5, 121, 10, -115, 117, -51, -74, 62, 64, 19, -16, -106, 44, -82, -90, -13, 29, 92, -53, -50, 106, 76, 65, 29, 109, 45, -111, 0, 106, -71, -70, -83, -41, -51, 6, -64, 17, -46, 97, 119, 80, 89, 112, 32, 47, -112, -125, -41, 96, 52, -19, 83, -73, 117, 59, -47, -8, 86, -23, 66, 105, -110, -27, 66, 98, 26, 111, 104, -58, 68, -44, 82, 63, 26, -100, -7, -56, -15, 21, -97, -41, -4, -26, 32, 91, -29, 100, -1, 36, 48, 11, 123, 1, -3, -46, -115, 65, 122, 91, -116, -121, 81, 35, -101, -63, -117, 62, -26, 57, -44, -89, 87, 75, 126, 78, -106, -22, -28, -114, -77, 11, -58, -124, 92, -128, 46, 47, -60, 70, -95, -109, 69, -112, 41};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.733618225845);
    msg.setSource(31366U);
    msg.setSourceEntity(11U);
    msg.setDestination(15107U);
    msg.setDestinationEntity(86U);
    msg.uid = 60U;
    msg.frag_number = 208U;
    msg.num_frags = 87U;
    const char tmp_msg_0[] = {-24, -101, -17, 31, -96, 71, -59, 28, -54, 84, 61, -87, 51, -59, 86, 68, -58, 96, 60, 50, 108, 125, 116, -101, 75, -49, 14, 121, 71, -41, 92, 70, 9, 60, 58, 10, -76, -46, -32, -49, -3, 47, -2, 33, 109, -11, 92, 38, -127, 86, 91, 115, -34, 94, -89, 68, -105, 81, -62, 119, -28, 13, 108, -86, 15, 17, 99, 119, -63, -125, 56, 99, -10, 34, -90, 102, 126, 121, -58, 107, -113, -2, 10, -127, -99, -12, 29, 40, -34, 1, 6, 34, -114, 17, 45, 22, 113, 110, -73, -114, -52, 116, 72, -64, -72};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.617877521311);
    msg.setSource(20385U);
    msg.setSourceEntity(150U);
    msg.setDestination(58877U);
    msg.setDestinationEntity(157U);
    msg.content_type.assign("EOTICSRNXLXHPROMLZGSFAQDMHBWZQRGKFTDKPXIJTOHSGFEHOITGKURWGQW");
    const char tmp_msg_0[] = {52, 122, -52, 29, -66, -34, -51, -122, 60, -71, -8, -34, 40, 34, 10, 2, -114, -87};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.208398787474);
    msg.setSource(60971U);
    msg.setSourceEntity(159U);
    msg.setDestination(16878U);
    msg.setDestinationEntity(9U);
    msg.content_type.assign("ENVXFSILSPNDUTGIWDCGYFZBDIHABXWJJERUMZACRJWHHKTOSTKYKXRWGLBPVHPBZORXKFIMEASO");
    const char tmp_msg_0[] = {-85, -82, 15, -53, -55, 105, -51, -39, -107, -102, -90, 87, -21, 65, 32, 3, 100, -124, 48, -18, 10, -3, 68, 79, -19, 58, -61, 15, 28, 73, 29, -114, -101, 72, -73, 39, -109, -78, -108, -34, -98, 81, -21, 81, 6, -5, 12, -67, 108, -9, -56, 101, -116, 88, 125, 50, -119, -23, -36, -104, 22, -56, -43, -57, -80, 14, 63, -20, -51, -75, -52, -103, -97, -125, 18, 99, -35, -59, 78, 66, 125, 105, -31, 62, 26, 8, 58, -53, 24, 91, 12, 99, 12, 3, 63, 118, 17, 8, 27, -67, -44, -116, 82, -45, 0, -31, -47, -74, -67, -7, -94, -55, 23, 44, 6, 14, 69, -103, 35, -64, 121, 7, -68, -105, 66, 12, -83, 116, 87, 111, -53, -66, 5, -44, -108, 75, 83, -40, -104, 26, -50, 42, 122, -3, 7, 54, -45, -48, 25, -12, -48, 71, -86, -82, -115, 126, 69, 26, 26, -31, 82, 0, 125, 56, -95, 53, 25, -41, 34, 45, 22, 114, 41, -69, 61, 41, 92, 2, 51, 67, -27, -41, 91, -89, 95, 93, -72, 3, -18, -12, -36, 115, 113, -23, -89, -7, -58, -51, 0, -5, 39};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.591986508793);
    msg.setSource(9459U);
    msg.setSourceEntity(240U);
    msg.setDestination(55288U);
    msg.setDestinationEntity(114U);
    msg.content_type.assign("MNZWSUSVBAFUUFDIHVEONHRSHXXWDEBIBYTQZBASESHLFNKVVPWVSWDEWOKCOTEPJYKLUIGETRHJDKCLFFLIFNLJKKPSHXEYDBMAPDJNRGXMYPQOKYXXKSMGQMSPMPQUVQCMTCRNJRYAKOOTEYSVQMXPGZNVQIHEJJHCHBBBCFBAGZHCCDZQJZUIIZOKAUUYATZENCWZVBDJQWQCGZGVLDYPXGIWULOILIAMGN");
    const char tmp_msg_0[] = {-85, -94, 89, -72, 45, 71, 0, 102, -96, -121, -64, 44, 6, 30, 65, 73, -52, -41, 4, -56, 115, -32, -77, 75, -103, 37, -119, -95, -78, -23, 7, -18, -111, 90, 125, -4, 30, 33, 3, -43, -1, -112, -86, -86, 0, 116, -65, 79, -9, 79, 111, 23, 93, 75, 63, 14, 124, -122, -66, 18, 20, -15, -51, -116, 44, 104, -85, 31, -94, 51, 94, 27, 29, 15, 89, -32, -17, -92, 60, 20, -16, 35, -29, 10, 24, -88, -1, -30, -105, -14, -96, 52, 96, 62, -106, 5, -63, -87, -64, -28, -109, 102, -35, -119, -70, -106, -106, -100, -48, 13, -122, 67, 32, -84, 8, -7, 18, 118, -61, -65, -63, 20, -38, 108, -27, -42, -63, 4, 19, -12, 109, -57, -86, -106, -11, -94, 111, -10, 25, -124, 103, -79, -98, -12, 65, 123, 120, -19, -15, -44, 100, -104, -59, 101, 8, 91, -88, 101, 65, -65, -32, -91, 48, 68, 25, -110, -111, -69, 31, 36, -88, 90, 102, 48, -122};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.895268202899);
    msg.setSource(43350U);
    msg.setSourceEntity(187U);
    msg.setDestination(5072U);
    msg.setDestinationEntity(0U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.95314268819);
    msg.setSource(36736U);
    msg.setSourceEntity(15U);
    msg.setDestination(27129U);
    msg.setDestinationEntity(47U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.16992113233);
    msg.setSource(42023U);
    msg.setSourceEntity(115U);
    msg.setDestination(39650U);
    msg.setDestinationEntity(46U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.380706008659);
    msg.setSource(4397U);
    msg.setSourceEntity(143U);
    msg.setDestination(23040U);
    msg.setDestinationEntity(84U);
    msg.target = 36903U;
    msg.bearing = 0.403259387516;
    msg.elevation = 0.235613838846;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.0302750993368);
    msg.setSource(53941U);
    msg.setSourceEntity(145U);
    msg.setDestination(51536U);
    msg.setDestinationEntity(195U);
    msg.target = 58911U;
    msg.bearing = 0.0432292030098;
    msg.elevation = 0.916013873386;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.597433527859);
    msg.setSource(2898U);
    msg.setSourceEntity(247U);
    msg.setDestination(5635U);
    msg.setDestinationEntity(140U);
    msg.target = 52341U;
    msg.bearing = 0.370906532256;
    msg.elevation = 0.0146136628417;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.683354286161);
    msg.setSource(6113U);
    msg.setSourceEntity(23U);
    msg.setDestination(53894U);
    msg.setDestinationEntity(2U);
    msg.target = 19869U;
    msg.x = 0.672539374376;
    msg.y = 0.531104321868;
    msg.z = 0.0777735313108;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.652489524737);
    msg.setSource(11597U);
    msg.setSourceEntity(41U);
    msg.setDestination(26129U);
    msg.setDestinationEntity(190U);
    msg.target = 61662U;
    msg.x = 0.574177904164;
    msg.y = 0.0661489978382;
    msg.z = 0.458245661671;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.75854547148);
    msg.setSource(3325U);
    msg.setSourceEntity(172U);
    msg.setDestination(4582U);
    msg.setDestinationEntity(104U);
    msg.target = 52089U;
    msg.x = 0.387093693243;
    msg.y = 0.335516671393;
    msg.z = 0.478539423129;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.653156231534);
    msg.setSource(25587U);
    msg.setSourceEntity(252U);
    msg.setDestination(23993U);
    msg.setDestinationEntity(185U);
    msg.target = 59039U;
    msg.lat = 0.426238360372;
    msg.lon = 0.743401289286;
    msg.z_units = 198U;
    msg.z = 0.131661614123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.722647330417);
    msg.setSource(2370U);
    msg.setSourceEntity(24U);
    msg.setDestination(58646U);
    msg.setDestinationEntity(126U);
    msg.target = 35140U;
    msg.lat = 0.827410306356;
    msg.lon = 0.195936278061;
    msg.z_units = 195U;
    msg.z = 0.199954324977;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.765172512395);
    msg.setSource(51003U);
    msg.setSourceEntity(195U);
    msg.setDestination(18679U);
    msg.setDestinationEntity(204U);
    msg.target = 1733U;
    msg.lat = 0.710106570579;
    msg.lon = 0.937842335957;
    msg.z_units = 88U;
    msg.z = 0.657961445531;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.977711544293);
    msg.setSource(39614U);
    msg.setSourceEntity(70U);
    msg.setDestination(28801U);
    msg.setDestinationEntity(139U);
    msg.locale.assign("QUHNQAEHEUVIHLWRPZGGRZTKRKBMYVAGYRELCPVAEJTAGXOGABIUZMXBLJFZCZYEBEYPQPXYQJQGYKGLGSTHMMYPIXSMDDXNJEIMKBREVDCIUJBV");
    const char tmp_msg_0[] = {14, -46, -125, 93, -11, 25, -117, 113, 15, -103, -55, -72, 64, 115, -18, 115, 101, 71, -107, -19, -6, -33};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.660854718566);
    msg.setSource(19870U);
    msg.setSourceEntity(222U);
    msg.setDestination(32973U);
    msg.setDestinationEntity(115U);
    msg.locale.assign("XGPDMEJEXAIZUBYOUXIRQSNBFAUTRRWHTFFIXLXJVSIREGSRGZMQPHVEVDVEOSJKYMVCGRHKBLDKMLARYSCZZCFHWDBTNFAJVQZWBYBPQIPLRCLFKHPLJTUPTRMZNBAFMUIZCKWZ");
    const char tmp_msg_0[] = {-43, -101, 121, 97, -123, 67, 51, 92, -38, 18, -28, 108, -38, -73, -33, -1, -124, 39, 85, 45, -41, 69, 89, -84, -5, 90, -86, -81, 102, 70, -127, -115, 56, -68, -72, 13, -84, 103, 94, 83, -6, 12, -75, 113, -112, -75, 103, -81, 118, -9, -39, -18, 106, 87, 75, -102, 77, 126, 14, -92, 109, 59, 56, 35, -87, -115, -23, 11, 77, -59, 5, -45, 65, -23, 97, 90, -32, -17, -23, 120, -46, 4, 101, 98, -55, -96, -68, -62, -121, -118, -3, 27, -95, 62, -91, -69, 92, 93, 19, 36, 109, 30, -90, 68, 17, 98, -58, 77, -7, 100, 80, -77, -73, 84, -29, 74, 20, -127, 72, 69, -77, -73, 44, 50, 3, -50, 102, 13, -13, -102, 39, -51, -74};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.971130978069);
    msg.setSource(63959U);
    msg.setSourceEntity(70U);
    msg.setDestination(13198U);
    msg.setDestinationEntity(173U);
    msg.locale.assign("HDTKDZWFAFIJKXBTHLCLFKQPVUXXDFQNDMPYFBTKSVYFDJEOMWAZRFQPOIPLOREIUFWMZLBIMAZIJXJJSCYOANTVPUXDRNZMZVQEOQO");
    const char tmp_msg_0[] = {-18, 34, -44, -75, -19, 63, -55, 116, 101, 82, -86, 60, 87, -13, 16, -90, 83, 26, -13, -38, -103, 44, -49, -41, 79, 23, 7, -92, 37, -5, 54, -69, -52, -110, 75, -44, -8, -106, 21, 11, 99, 1, -53, 50, 53, -119, 1, -75, -80, -16, -31, 108, -42, -52, 67, 116, -87, 4, -109, 111, -49, -126, 126, 76, 12, 2, -124, -99, 41, -91, -88, -63, -22, 32, 72, -105, -109, 112, -109, -123, -125, -67, 5, -98, 119, -18, 20, -107, 45, -61, 22, -14, 96, 45, 48, -25, 74, -100, -75, -61, 72, -88, 29, -65, 49, 93, -95, -24, -107, 91, 66, 69, 116, 19, -106, -105, 13, -44, 75, -9, 56, 117, -70, -113, -66, -84, -124, 26, 99, 103, 69, -85, 107, 77, 101, -123, -115, 26, 89, 75, 55, -127, 120, 16, 18, 87, 57, -72, 15, -36, 70, 61, 9, 15, -109, 18, -20, 49, 39, 22, -28, -127, 75, -113, -16, 42, -89, 78, -2, 37, 61, 116, 120, 12, -105, 50, -72, -112, -41};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.838305090322);
    msg.setSource(5243U);
    msg.setSourceEntity(195U);
    msg.setDestination(53201U);
    msg.setDestinationEntity(242U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.228530787462);
    msg.setSource(27732U);
    msg.setSourceEntity(98U);
    msg.setDestination(33334U);
    msg.setDestinationEntity(111U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.0332280945633);
    msg.setSource(54893U);
    msg.setSourceEntity(155U);
    msg.setDestination(21856U);
    msg.setDestinationEntity(100U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.00258481795833);
    msg.setSource(50067U);
    msg.setSourceEntity(0U);
    msg.setDestination(43576U);
    msg.setDestinationEntity(3U);
    msg.camid = 232U;
    msg.x = 45578U;
    msg.y = 5938U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.900558259074);
    msg.setSource(51435U);
    msg.setSourceEntity(232U);
    msg.setDestination(15530U);
    msg.setDestinationEntity(235U);
    msg.camid = 27U;
    msg.x = 9942U;
    msg.y = 50158U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.487963237566);
    msg.setSource(51255U);
    msg.setSourceEntity(93U);
    msg.setDestination(14934U);
    msg.setDestinationEntity(177U);
    msg.camid = 21U;
    msg.x = 39687U;
    msg.y = 33157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.828192602425);
    msg.setSource(31369U);
    msg.setSourceEntity(139U);
    msg.setDestination(12721U);
    msg.setDestinationEntity(91U);
    msg.camid = 213U;
    msg.x = 28150U;
    msg.y = 45204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.938272736445);
    msg.setSource(16913U);
    msg.setSourceEntity(109U);
    msg.setDestination(13035U);
    msg.setDestinationEntity(209U);
    msg.camid = 251U;
    msg.x = 57448U;
    msg.y = 64709U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.504152330873);
    msg.setSource(5457U);
    msg.setSourceEntity(250U);
    msg.setDestination(37988U);
    msg.setDestinationEntity(185U);
    msg.camid = 31U;
    msg.x = 58268U;
    msg.y = 3674U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.645712376173);
    msg.setSource(60738U);
    msg.setSourceEntity(133U);
    msg.setDestination(4282U);
    msg.setDestinationEntity(224U);
    msg.tracking = 56U;
    msg.lat = 0.89539248192;
    msg.lon = 0.342107560251;
    msg.x = 0.693454467035;
    msg.y = 0.727858823886;
    msg.z = 0.647902059677;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.416718169836);
    msg.setSource(25830U);
    msg.setSourceEntity(74U);
    msg.setDestination(29087U);
    msg.setDestinationEntity(150U);
    msg.tracking = 129U;
    msg.lat = 0.386171584478;
    msg.lon = 0.308759801431;
    msg.x = 0.279310534167;
    msg.y = 0.67755422148;
    msg.z = 0.278423082076;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.345694866175);
    msg.setSource(45458U);
    msg.setSourceEntity(57U);
    msg.setDestination(38185U);
    msg.setDestinationEntity(242U);
    msg.tracking = 205U;
    msg.lat = 0.0153788599355;
    msg.lon = 0.248266632216;
    msg.x = 0.571772938696;
    msg.y = 0.25485087989;
    msg.z = 0.910461643914;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.0333675652245);
    msg.setSource(47871U);
    msg.setSourceEntity(132U);
    msg.setDestination(40183U);
    msg.setDestinationEntity(112U);
    msg.target.assign("MFKJCABYBZ");
    msg.lbearing = 0.488866051254;
    msg.lelevation = 0.924069192573;
    msg.bearing = 0.115358283398;
    msg.elevation = 0.649429281602;
    msg.phi = 0.303964242449;
    msg.theta = 0.749726192709;
    msg.psi = 0.377716494204;
    msg.accuracy = 0.176485855002;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.326427708855);
    msg.setSource(53360U);
    msg.setSourceEntity(40U);
    msg.setDestination(21697U);
    msg.setDestinationEntity(161U);
    msg.target.assign("KABAZFFOEPUCODERVQCIPSLGDCNDNYPNBLLZESWXUEQSJKFMHEQHSFYRJZCCIHXEBZTNXFGGBHJYRFJOMURANAUKMZDPKWMXEZEGDUHTYQQVLIXUXHDJRXXKANATDPBTLBOFEVYGJSNRVIUGVWCGQUYBCWKRPLKDTQOFWTHMIIYFLJCYWPVJACGHDZTOAKKSNTGLNPUWABSORTHWQQTYFMXQAHZVOYIRZDLGVBOPPU");
    msg.lbearing = 0.375386545076;
    msg.lelevation = 0.113155178103;
    msg.bearing = 0.679998400286;
    msg.elevation = 0.930875741516;
    msg.phi = 0.601499772795;
    msg.theta = 0.775215172527;
    msg.psi = 0.654105924222;
    msg.accuracy = 0.374507095195;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.816305930614);
    msg.setSource(48339U);
    msg.setSourceEntity(181U);
    msg.setDestination(29515U);
    msg.setDestinationEntity(254U);
    msg.target.assign("RHMSPGDEXJRKALWEANJBDHYPYMHTGSXGKVIMKHMIUFCWBBDRQRYOUVSKHISXMLVSQNRLO");
    msg.lbearing = 0.538932685392;
    msg.lelevation = 0.631601611723;
    msg.bearing = 0.529184832667;
    msg.elevation = 0.3616245535;
    msg.phi = 0.925822226194;
    msg.theta = 0.117805419208;
    msg.psi = 0.830342601665;
    msg.accuracy = 0.195646119776;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.949849445621);
    msg.setSource(4550U);
    msg.setSourceEntity(174U);
    msg.setDestination(51616U);
    msg.setDestinationEntity(106U);
    msg.target.assign("URVXJXBINQHQGMFFTFYPDLBZCYIDQZMYHOCJVBIKAOTCLKZWWLUHQRHUKJAPIFANGJTJHETJDSIFLOZGCUHVVRCWVPDVOMDXNYGEMWLAUPSQSHIISWYUAHEMX");
    msg.x = 0.691419300436;
    msg.y = 0.974479918951;
    msg.z = 0.874169034792;
    msg.n = 0.129789602503;
    msg.e = 0.741589914946;
    msg.d = 0.399661482692;
    msg.phi = 0.359039182795;
    msg.theta = 0.0831106554487;
    msg.psi = 0.287788223461;
    msg.accuracy = 0.117800243368;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.0960326253813);
    msg.setSource(22122U);
    msg.setSourceEntity(215U);
    msg.setDestination(51790U);
    msg.setDestinationEntity(43U);
    msg.target.assign("HKTIUNCXDFYPEVTURFNWQEMJKCXWIKHIYYXGZHGTPNKRBMMSEDYKBZ");
    msg.x = 0.658226454614;
    msg.y = 0.585402970688;
    msg.z = 0.0599452477788;
    msg.n = 0.193439794285;
    msg.e = 0.720145405164;
    msg.d = 0.887918283419;
    msg.phi = 0.50725656048;
    msg.theta = 0.567625889227;
    msg.psi = 0.269136808227;
    msg.accuracy = 0.67005437368;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.299859057813);
    msg.setSource(53332U);
    msg.setSourceEntity(26U);
    msg.setDestination(57449U);
    msg.setDestinationEntity(77U);
    msg.target.assign("WXKXCLOBFMQGIMYIQRQWFOZAVJOECJEPBWSBCIFBYKEABIZGKTSKUTIRGRPXLLXEDCFSKDUKZJLPPKBKRHYRTBLIFOXSRHNQZSQGHFLUBVPVVRCHDAFECLQXFOBBWZCUDDWAAOQJXJZMLQMTNPWCYQPHWJCTJPUTISNYGOMGVNJYADWSTUREXZHWAYVVFJEAIGXRNEREUNHNYPGPFZMITLTWGXHOZDVVDGOJUUNDDMNAKUQ");
    msg.x = 0.435552888474;
    msg.y = 0.556384658405;
    msg.z = 0.345926895452;
    msg.n = 0.745447228019;
    msg.e = 0.86006509928;
    msg.d = 0.335891958324;
    msg.phi = 0.928306229127;
    msg.theta = 0.378755319357;
    msg.psi = 0.0730296550209;
    msg.accuracy = 0.172113233094;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.113949801209);
    msg.setSource(30390U);
    msg.setSourceEntity(55U);
    msg.setDestination(33237U);
    msg.setDestinationEntity(63U);
    msg.target.assign("UNHUPNQWWQGWIHKRTJXOFBVERHLGJOJKNWYFDZZXZRMVJULYSNDBKBNILRNOZKJSAUWTISZGCTXXRAYYOFHXMARVPUIOVEXYISCHLMFGCBNZQRZIZLPCACPEGPMDNVLURFFLOQOFTIDCSAISFKEDLSKBMVYKQELETNTJSUKHZWJYVPHEZXCXYWQQ");
    msg.lat = 0.1383303897;
    msg.lon = 0.712671672267;
    msg.z_units = 148U;
    msg.z = 0.898043468565;
    msg.accuracy = 0.451739381564;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.580635049276);
    msg.setSource(32297U);
    msg.setSourceEntity(54U);
    msg.setDestination(60900U);
    msg.setDestinationEntity(15U);
    msg.target.assign("OFTGJSBEDXDCBFEKNOEGURDPKSUHIRVHOWPJQWEMNTDFTDHYRWGPKNXCPCIJYWDUOWMXTEAZIWLXCVINMOCWVBHSBGNOLKGDZLASJNFCMMPEEUVGXPOBAWFIEYPHGCHYTZXZJZGUXRROCQCQCRBMHSJTQMSIEXNHSOTPBLJVYLVYDINZZAFWSRFGOTGLJLBDAEQAIFZRAJKVIFSXARUVVMAYSKBMZKDVIBNQZKRJHPQLUUWKULY");
    msg.lat = 0.84254676986;
    msg.lon = 0.6952505571;
    msg.z_units = 177U;
    msg.z = 0.0856354380842;
    msg.accuracy = 0.906241581456;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.779090246591);
    msg.setSource(61433U);
    msg.setSourceEntity(67U);
    msg.setDestination(39796U);
    msg.setDestinationEntity(17U);
    msg.target.assign("IAFOXOARMXGSWTHGFYNGKUKWEYCHVDCZISRJKMUDRNQPSVZNYWDZDIPFNICJTHHBYUCPPVLXPPZYMVTYEWIRMNNLXEDFFGLGMMLAMDPJZJBGPBKJDJJURYTQRYOFKVVZPVKTTNQHEDALKCNXPBBNGOSTCHNMKTXBDABUFUUVULOSMSLMELSASROEZCWWIQWLFCAWZHRHEDZGHAYXUVKOXEIETJVLBQGWQFOHQXROJQCBWTQQYGJAU");
    msg.lat = 0.898296378033;
    msg.lon = 0.394609988859;
    msg.z_units = 87U;
    msg.z = 0.995688767018;
    msg.accuracy = 0.822450760674;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.516690349545);
    msg.setSource(28955U);
    msg.setSourceEntity(46U);
    msg.setDestination(47443U);
    msg.setDestinationEntity(249U);
    msg.name.assign("XQEVXVZBBLHADICYPCSZF");
    msg.lat = 0.973596924125;
    msg.lon = 0.898453831968;
    msg.z = 0.885265368969;
    msg.z_units = 196U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.209099297651);
    msg.setSource(2546U);
    msg.setSourceEntity(136U);
    msg.setDestination(4298U);
    msg.setDestinationEntity(49U);
    msg.name.assign("OQMSVKXUPQZDYUCNDRTTXDKXFRASFAIDYJPYOCOLKQLGRVFPHQUZXZOJCJIZINCOAHPUDGCYEBNBSQCABASIPQIIEMRFGYADVXYHUKMZIKULWERABPFRWUEHXBN");
    msg.lat = 0.079983983083;
    msg.lon = 0.125083746541;
    msg.z = 0.964735805019;
    msg.z_units = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.136076002256);
    msg.setSource(37567U);
    msg.setSourceEntity(131U);
    msg.setDestination(34885U);
    msg.setDestinationEntity(236U);
    msg.name.assign("YHQCLFGKPEUXSBGHTIDSSBAXGXZYWXBZFROAQGRMPQRHIELFNUPRBZRWKASOAJWJ");
    msg.lat = 0.238695003329;
    msg.lon = 0.359115991439;
    msg.z = 0.850150119492;
    msg.z_units = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.125248495013);
    msg.setSource(2739U);
    msg.setSourceEntity(229U);
    msg.setDestination(51885U);
    msg.setDestinationEntity(252U);
    msg.op = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.790445412318);
    msg.setSource(23346U);
    msg.setSourceEntity(140U);
    msg.setDestination(9566U);
    msg.setDestinationEntity(231U);
    msg.op = 213U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.360426040998);
    msg.setSource(20365U);
    msg.setSourceEntity(35U);
    msg.setDestination(20813U);
    msg.setDestinationEntity(33U);
    msg.op = 80U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("GUCFVUXHXXZDHTESOPKDHOLLKOGXTUVFJWSVVFYAFHIM");
    tmp_msg_0.lat = 0.0979514241904;
    tmp_msg_0.lon = 0.978196327714;
    tmp_msg_0.z = 0.549073255698;
    tmp_msg_0.z_units = 12U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.96390903766);
    msg.setSource(48529U);
    msg.setSourceEntity(30U);
    msg.setDestination(30484U);
    msg.setDestinationEntity(167U);
    msg.value = 0.531928327894;
    msg.type = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.330672107057);
    msg.setSource(2877U);
    msg.setSourceEntity(198U);
    msg.setDestination(49185U);
    msg.setDestinationEntity(107U);
    msg.value = 0.890100471205;
    msg.type = 193U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.931210130757);
    msg.setSource(656U);
    msg.setSourceEntity(123U);
    msg.setDestination(54100U);
    msg.setDestinationEntity(69U);
    msg.value = 0.931876745727;
    msg.type = 91U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.53070772941);
    msg.setSource(57940U);
    msg.setSourceEntity(189U);
    msg.setDestination(10312U);
    msg.setDestinationEntity(182U);
    msg.value = 0.260235367588;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.795211058968);
    msg.setSource(44616U);
    msg.setSourceEntity(144U);
    msg.setDestination(5129U);
    msg.setDestinationEntity(213U);
    msg.value = 0.0129720237157;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.108220598459);
    msg.setSource(41231U);
    msg.setSourceEntity(113U);
    msg.setDestination(62297U);
    msg.setDestinationEntity(186U);
    msg.value = 0.61009875201;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.91821689679);
    msg.setSource(8198U);
    msg.setSourceEntity(206U);
    msg.setDestination(15646U);
    msg.setDestinationEntity(174U);
    msg.timestamp_last_service = 0.97110665948;
    msg.time_next_service = 0.447068855231;
    msg.time_motor_next_service = 0.0050112845685;
    msg.time_idle_ground = 0.575158141884;
    msg.time_idle_air = 0.643756198883;
    msg.time_idle_water = 0.862569698352;
    msg.time_idle_underwater = 0.629852005264;
    msg.time_idle_unknown = 0.692097087869;
    msg.time_motor_ground = 0.52194445508;
    msg.time_motor_air = 0.423793552838;
    msg.time_motor_water = 0.469624582116;
    msg.time_motor_underwater = 0.399125945012;
    msg.time_motor_unknown = 0.196439191281;
    msg.rpm_min = 23344;
    msg.rpm_max = 10286;
    msg.depth_max = 0.716330770173;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.473821329968);
    msg.setSource(19586U);
    msg.setSourceEntity(111U);
    msg.setDestination(41656U);
    msg.setDestinationEntity(133U);
    msg.timestamp_last_service = 0.620414592719;
    msg.time_next_service = 0.0940268912952;
    msg.time_motor_next_service = 0.38162615079;
    msg.time_idle_ground = 0.688741814897;
    msg.time_idle_air = 0.572221745805;
    msg.time_idle_water = 0.60323096346;
    msg.time_idle_underwater = 0.190411772698;
    msg.time_idle_unknown = 0.495156235222;
    msg.time_motor_ground = 0.161388267135;
    msg.time_motor_air = 0.677297329633;
    msg.time_motor_water = 0.775454111249;
    msg.time_motor_underwater = 0.195396377548;
    msg.time_motor_unknown = 0.604893360095;
    msg.rpm_min = -17067;
    msg.rpm_max = -3212;
    msg.depth_max = 0.417786210865;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.812772848012);
    msg.setSource(63184U);
    msg.setSourceEntity(157U);
    msg.setDestination(64339U);
    msg.setDestinationEntity(22U);
    msg.timestamp_last_service = 0.798617148489;
    msg.time_next_service = 0.866445302108;
    msg.time_motor_next_service = 0.6237155654;
    msg.time_idle_ground = 0.183420540485;
    msg.time_idle_air = 0.655222793106;
    msg.time_idle_water = 0.811109657968;
    msg.time_idle_underwater = 0.413166322907;
    msg.time_idle_unknown = 0.695840700518;
    msg.time_motor_ground = 0.34348522969;
    msg.time_motor_air = 0.569130299277;
    msg.time_motor_water = 0.248099388759;
    msg.time_motor_underwater = 0.113909463027;
    msg.time_motor_unknown = 0.367058612893;
    msg.rpm_min = -5909;
    msg.rpm_max = -11668;
    msg.depth_max = 0.207795082484;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.0527914963032);
    msg.setSource(10255U);
    msg.setSourceEntity(76U);
    msg.setDestination(32907U);
    msg.setDestinationEntity(168U);
    msg.severity = 75U;
    msg.text.assign("YHSHRFDIYNZMCJUCECKBYOWFGECVBFXWQMPSITUKZHHOKQBYEADKKKOZFQBWPOMGQFUPFBDSRSPMOCIUVCEPYAGJIDCRVAQMEHRENVSMKGNTHYJTTCLLPMGVGZPILHDTGEMERJFEDLNAUKFLHNMVJAUIGBHKOVBPXMELDXBFLR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.639289437783);
    msg.setSource(63932U);
    msg.setSourceEntity(164U);
    msg.setDestination(29494U);
    msg.setDestinationEntity(178U);
    msg.severity = 245U;
    msg.text.assign("MYMIDNFVSOHXQGAJUSHJQMNNCUVGBOFULTETPMELSFRYUNXZGBIOFMYZABSRGKPGRXPIGEP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.69216902196);
    msg.setSource(35861U);
    msg.setSourceEntity(27U);
    msg.setDestination(27469U);
    msg.setDestinationEntity(34U);
    msg.severity = 222U;
    msg.text.assign("ZHXHRBRYVXEONZGDUVMBQOQMPESQTZLBIRQHWPMNRUWWUIWPRGOJMBXKYLBJFHXPKTZDBHBVPTGFSTWSAHYWCFDYTUNJKSCCZOAZELKSUNRMEJJLVWKNOOEDTOPMQQWLAFDMONHIMYKBFIWJFCVTUDVRYQILACJKCDWBCZJNEGUGITQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.81202677493);
    msg.setSource(566U);
    msg.setSourceEntity(239U);
    msg.setDestination(38905U);
    msg.setDestinationEntity(14U);
    msg.channel = -23;
    msg.value = -29905982;
    msg.gain = 162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.331568492722);
    msg.setSource(23397U);
    msg.setSourceEntity(218U);
    msg.setDestination(34044U);
    msg.setDestinationEntity(180U);
    msg.channel = 116;
    msg.value = -637454176;
    msg.gain = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.711249063307);
    msg.setSource(33877U);
    msg.setSourceEntity(68U);
    msg.setDestination(8612U);
    msg.setDestinationEntity(144U);
    msg.channel = 118;
    msg.value = 2100114318;
    msg.gain = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathFollowState msg;
    msg.setTimeStamp(0.174879191668);
    msg.setSource(60174U);
    msg.setSourceEntity(154U);
    msg.setDestination(52694U);
    msg.setDestinationEntity(17U);
    msg.gamma = 0.413472967387;
    msg.gamma_dot = 0.759476214814;
    msg.x = 0.494688058166;
    msg.y = 0.824177738631;
    msg.z = 0.273992085124;
    msg.vx = 0.910172562099;
    msg.vy = 0.286938852141;
    msg.vz = 0.749066877514;
    msg.err_x = 0.393919370672;
    msg.err_y = 0.583471873271;
    msg.err_z = 0.698623349215;
    msg.start_x = 0.931762302559;
    msg.start_y = 0.441467467941;
    msg.start_z = 0.314499512104;
    msg.end_x = 0.748114936195;
    msg.end_y = 0.253492776858;
    msg.end_z = 0.557298361511;
    msg.track_bearing = 0.379224113376;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathFollowState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathFollowState msg;
    msg.setTimeStamp(0.526818071349);
    msg.setSource(48405U);
    msg.setSourceEntity(195U);
    msg.setDestination(44832U);
    msg.setDestinationEntity(24U);
    msg.gamma = 0.636762837145;
    msg.gamma_dot = 0.799181363051;
    msg.x = 0.540649431429;
    msg.y = 0.0644304466086;
    msg.z = 0.380464118877;
    msg.vx = 0.81040084064;
    msg.vy = 0.713432027471;
    msg.vz = 0.93869702061;
    msg.err_x = 0.0128398350984;
    msg.err_y = 0.678032759378;
    msg.err_z = 0.352169020463;
    msg.start_x = 0.782408797971;
    msg.start_y = 0.333978302571;
    msg.start_z = 0.113357167566;
    msg.end_x = 0.1483069712;
    msg.end_y = 0.512614251783;
    msg.end_z = 0.273885392222;
    msg.track_bearing = 0.0777406217357;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathFollowState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathFollowState msg;
    msg.setTimeStamp(0.722941032148);
    msg.setSource(2151U);
    msg.setSourceEntity(77U);
    msg.setDestination(60436U);
    msg.setDestinationEntity(40U);
    msg.gamma = 0.691037555807;
    msg.gamma_dot = 0.79557819138;
    msg.x = 0.094827987754;
    msg.y = 0.10603127669;
    msg.z = 0.00337219790145;
    msg.vx = 0.338833964967;
    msg.vy = 0.946905775607;
    msg.vz = 0.783291710013;
    msg.err_x = 0.597162065079;
    msg.err_y = 0.523301543758;
    msg.err_z = 0.498057136607;
    msg.start_x = 0.590196359364;
    msg.start_y = 0.959159717231;
    msg.start_z = 0.257603281155;
    msg.end_x = 0.154070403341;
    msg.end_y = 0.459713507452;
    msg.end_z = 0.0313538174599;
    msg.track_bearing = 0.314122023857;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathFollowState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlState msg;
    msg.setTimeStamp(0.0257079295162);
    msg.setSource(64008U);
    msg.setSourceEntity(134U);
    msg.setDestination(32944U);
    msg.setDestinationEntity(231U);
    msg.agent_id = 4234669019U;
    msg.x = 0.231159407925;
    msg.y = 0.816928478701;
    msg.z = 0.884045041125;
    msg.gamma = 0.857752254481;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlState msg;
    msg.setTimeStamp(0.956285441479);
    msg.setSource(50549U);
    msg.setSourceEntity(61U);
    msg.setDestination(54278U);
    msg.setDestinationEntity(121U);
    msg.agent_id = 151152992U;
    msg.x = 0.933929270844;
    msg.y = 0.577283930672;
    msg.z = 0.591576740862;
    msg.gamma = 0.282925830443;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlState msg;
    msg.setTimeStamp(0.773176090418);
    msg.setSource(58484U);
    msg.setSourceEntity(126U);
    msg.setDestination(14600U);
    msg.setDestinationEntity(51U);
    msg.agent_id = 3175749591U;
    msg.x = 0.320935951348;
    msg.y = 0.299350363445;
    msg.z = 0.618508683778;
    msg.gamma = 0.672651109209;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::STCInitiate msg;
    msg.setTimeStamp(0.117661606897);
    msg.setSource(23378U);
    msg.setSourceEntity(179U);
    msg.setDestination(18504U);
    msg.setDestinationEntity(249U);
    msg.value = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("STCInitiate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::STCInitiate msg;
    msg.setTimeStamp(0.158433538476);
    msg.setSource(6614U);
    msg.setSourceEntity(24U);
    msg.setDestination(28914U);
    msg.setDestinationEntity(245U);
    msg.value = 123U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("STCInitiate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::STCInitiate msg;
    msg.setTimeStamp(0.818651326278);
    msg.setSource(33783U);
    msg.setSourceEntity(193U);
    msg.setDestination(30086U);
    msg.setDestinationEntity(4U);
    msg.value = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("STCInitiate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::STCoordinationState msg;
    msg.setTimeStamp(0.0459929557145);
    msg.setSource(61974U);
    msg.setSourceEntity(188U);
    msg.setDestination(20885U);
    msg.setDestinationEntity(63U);
    msg.value = 0.804911528564;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("STCoordinationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::STCoordinationState msg;
    msg.setTimeStamp(0.951769914422);
    msg.setSource(33741U);
    msg.setSourceEntity(208U);
    msg.setDestination(37070U);
    msg.setDestinationEntity(35U);
    msg.value = 0.586254545107;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("STCoordinationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::STCoordinationState msg;
    msg.setTimeStamp(0.755579901063);
    msg.setSource(26607U);
    msg.setSourceEntity(88U);
    msg.setDestination(4767U);
    msg.setDestinationEntity(136U);
    msg.value = 0.652158333524;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("STCoordinationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::reqSTCoordinationState msg;
    msg.setTimeStamp(0.0781491821242);
    msg.setSource(9073U);
    msg.setSourceEntity(83U);
    msg.setDestination(1100U);
    msg.setDestinationEntity(59U);
    msg.value = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("reqSTCoordinationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::reqSTCoordinationState msg;
    msg.setTimeStamp(0.762199912398);
    msg.setSource(63996U);
    msg.setSourceEntity(28U);
    msg.setDestination(5214U);
    msg.setDestinationEntity(170U);
    msg.value = 104U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("reqSTCoordinationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::reqSTCoordinationState msg;
    msg.setTimeStamp(0.45591339446);
    msg.setSource(4065U);
    msg.setSourceEntity(61U);
    msg.setDestination(5217U);
    msg.setDestinationEntity(41U);
    msg.value = 101U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("reqSTCoordinationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::STAverageState msg;
    msg.setTimeStamp(0.209066231956);
    msg.setSource(20940U);
    msg.setSourceEntity(201U);
    msg.setDestination(55223U);
    msg.setDestinationEntity(233U);
    msg.value = 0.748346109623;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("STAverageState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::STAverageState msg;
    msg.setTimeStamp(0.183414462703);
    msg.setSource(3775U);
    msg.setSourceEntity(76U);
    msg.setDestination(27008U);
    msg.setDestinationEntity(179U);
    msg.value = 0.195991603206;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("STAverageState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::STAverageState msg;
    msg.setTimeStamp(0.808080265936);
    msg.setSource(12221U);
    msg.setSourceEntity(12U);
    msg.setDestination(28760U);
    msg.setDestinationEntity(190U);
    msg.value = 0.887057805703;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("STAverageState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
