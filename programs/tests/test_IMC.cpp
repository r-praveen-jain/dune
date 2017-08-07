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
// IMC XML MD5: effd4cbd28affc98a1c85210d7edaa2b                            *
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
    msg.setTimeStamp(0.452824603387);
    msg.setSource(1075U);
    msg.setSourceEntity(32U);
    msg.setDestination(55289U);
    msg.setDestinationEntity(46U);
    msg.state = 228U;
    msg.flags = 224U;
    msg.description.assign("MYSIRNJYDLDOCQSQVCAJNRGXJDWQKJLDHOIMSONZVYURIRPMKLVMVNXQLWVCYFGWDKWITYCKEGUPSQTUSQCDOFATMRWHDMHIEKZRUVPGB");

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
    msg.setTimeStamp(0.350998729002);
    msg.setSource(29120U);
    msg.setSourceEntity(203U);
    msg.setDestination(61792U);
    msg.setDestinationEntity(105U);
    msg.state = 25U;
    msg.flags = 170U;
    msg.description.assign("SKCPMHFSEUZRPINTRDUMIHCKAYDSQTMMESYHHOELQMQGOAHXCRPWASIUUBJVDZUUHVPLGKXUONQVFJHFIKEKVCNYZAQQAB");

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
    msg.setTimeStamp(0.519150384819);
    msg.setSource(39007U);
    msg.setSourceEntity(97U);
    msg.setDestination(4785U);
    msg.setDestinationEntity(212U);
    msg.state = 45U;
    msg.flags = 97U;
    msg.description.assign("ZPDDPRQWEYCSUXJTYCXJOXGQBLTLYRMNOBMOBFWJHIGGOJWXPPYSVLLDVDFPLJILIIHZABZYNOZRCQ");

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
    msg.setTimeStamp(0.461684389285);
    msg.setSource(27770U);
    msg.setSourceEntity(18U);
    msg.setDestination(63179U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.407062058488);
    msg.setSource(1701U);
    msg.setSourceEntity(69U);
    msg.setDestination(4155U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.0523253262464);
    msg.setSource(50064U);
    msg.setSourceEntity(33U);
    msg.setDestination(56809U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.661040736246);
    msg.setSource(35855U);
    msg.setSourceEntity(64U);
    msg.setDestination(62226U);
    msg.setDestinationEntity(74U);
    msg.id = 171U;
    msg.label.assign("FHZAVEDPANOQMZUULIHTHGDKERZTN");
    msg.component.assign("NGXMXZDYKNOMERAWGTH");
    msg.act_time = 21771U;
    msg.deact_time = 35515U;

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
    msg.setTimeStamp(0.951061257494);
    msg.setSource(6242U);
    msg.setSourceEntity(22U);
    msg.setDestination(54973U);
    msg.setDestinationEntity(212U);
    msg.id = 246U;
    msg.label.assign("YCMUUGXNUVTCCWPNVPCUIFRKEHWGNRZBVOZVBKIXYHLVMXAVPZJJDDMQGERFTESHYDLSCIACSYWUATMSSJPIDRLNBFNXY");
    msg.component.assign("WCLYEQJFXXZPIRDOFKJAUJOBIXROXHMAJPTNDGLZYQUSJXDTZCUFOJDWKAVSYPHLUGFWBSGQRKKNYVUBYKINZVWSCIJEJBRPPDNIQRBSYFOIVQCNAZEPGMOEEUFRMLBVYWUZHOBBTKGCXVQGVYTMFMQGEYFCSFASTUSDZRJNFKLMGDZIKMHOTDZALLHXSQCAPTWBPHIWAPWHQEUPNNOKCMALJIKHCCVNGMWEVHEXIWANESYVZXBXUDQTDRL");
    msg.act_time = 1518U;
    msg.deact_time = 28723U;

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
    msg.setTimeStamp(0.26753806877);
    msg.setSource(2846U);
    msg.setSourceEntity(212U);
    msg.setDestination(59291U);
    msg.setDestinationEntity(42U);
    msg.id = 69U;
    msg.label.assign("QABDNQXHNVJYAANUSETFKBRLFXKWPICXFDHVVDPFVDPYBQUUUOYSWAUHGYNQIWSBKARYUOCRCNTUTTQQXKWLLFJMIACMZZLWQEGPSAHHTOJSKEDTPBWYVYNGRCIOSIOWLFGMCOXXVNBZGPOMFLQPMXQKLXFNMRJMGMHSWCVGLRZCYMZXQTOUOADIILMPEGWVZNEJBXDSDUBIZEREIETAHEGSKFCRFNCDPEGVUKJDBWOSIJLHJBVPAKRRTZHY");
    msg.component.assign("WHKNEHKIWUNPYMLOBZFRNHSZKCQYSSFNNDDZCZDPGRHJLTECXVAYXMZGQBWEVAMXITGDWJSYQBTZNTGKIWHOWSDCFZGLBOVUAFOJSUKTDGOMRSIVAAILTSAJVHICBVONAMYJMVHKXFRJGUVCIPEMRIVIHXUJQDSOXUEHGRRCPPAYUMEQWFPPDPZXQRVKZCFYCBWDOQPOURWFTCAJYEXNELILDOTXKJGTNJBKMGNQRHBXPLLWT");
    msg.act_time = 614U;
    msg.deact_time = 59165U;

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
    msg.setTimeStamp(0.0488818702748);
    msg.setSource(6549U);
    msg.setSourceEntity(48U);
    msg.setDestination(8854U);
    msg.setDestinationEntity(156U);
    msg.id = 139U;

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
    msg.setTimeStamp(0.985599579762);
    msg.setSource(30543U);
    msg.setSourceEntity(66U);
    msg.setDestination(25861U);
    msg.setDestinationEntity(121U);
    msg.id = 220U;

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
    msg.setTimeStamp(0.837581474671);
    msg.setSource(42679U);
    msg.setSourceEntity(232U);
    msg.setDestination(50977U);
    msg.setDestinationEntity(90U);
    msg.id = 238U;

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
    msg.setTimeStamp(0.328304466463);
    msg.setSource(13518U);
    msg.setSourceEntity(143U);
    msg.setDestination(41659U);
    msg.setDestinationEntity(105U);
    msg.op = 29U;
    msg.list.assign("EWEPHBDNCGVMXZIDFGGSZAKWLCIRHLBZNRBZSGKCELUOOZYVLFGKQNZTGNCTDMYCOUSLYJSKIBAHOGHPQOJQUVUFJFOASVYOJSVEDP");

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
    msg.setTimeStamp(0.691373385511);
    msg.setSource(47269U);
    msg.setSourceEntity(124U);
    msg.setDestination(56586U);
    msg.setDestinationEntity(102U);
    msg.op = 94U;
    msg.list.assign("CUQYEEBJZPVWHRWWXDVOVBKQFUGQDSHVJUHPOZSPKRXHEBUOXNCKMTQWCBJYUYNACLGMBWASHPYARUOJAVPFTHATYGIBLITZWJYJLFLVPNCENIWFQGIRUCDMYWERXFGZUHQZVJMOYMKBLXIKTPHNFDSCWKFODOE");

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
    msg.setTimeStamp(0.274824109227);
    msg.setSource(4117U);
    msg.setSourceEntity(80U);
    msg.setDestination(58681U);
    msg.setDestinationEntity(138U);
    msg.op = 30U;
    msg.list.assign("ZLWXKQMRLQIEJSMISGQTUJUAEJKFDBGWUCYCIVGBCDTWRIJIRRQYTELCSEETAS");

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
    msg.setTimeStamp(0.554799936367);
    msg.setSource(6693U);
    msg.setSourceEntity(74U);
    msg.setDestination(929U);
    msg.setDestinationEntity(248U);
    msg.value = 89U;

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
    msg.setTimeStamp(0.852297356001);
    msg.setSource(34584U);
    msg.setSourceEntity(253U);
    msg.setDestination(34551U);
    msg.setDestinationEntity(232U);
    msg.value = 89U;

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
    msg.setTimeStamp(0.701440221799);
    msg.setSource(54718U);
    msg.setSourceEntity(224U);
    msg.setDestination(26208U);
    msg.setDestinationEntity(198U);
    msg.value = 24U;

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
    msg.setTimeStamp(0.263733252651);
    msg.setSource(64406U);
    msg.setSourceEntity(181U);
    msg.setDestination(14919U);
    msg.setDestinationEntity(15U);
    msg.consumer.assign("ACWWZRTQPHMYVNXG");
    msg.message_id = 9316U;

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
    msg.setTimeStamp(0.758396099905);
    msg.setSource(17949U);
    msg.setSourceEntity(43U);
    msg.setDestination(45803U);
    msg.setDestinationEntity(251U);
    msg.consumer.assign("SYFAMGJOKHWKKPDJZXSOXRLXAONYLJOZCSCVMNMFQWRTYRNZRIMHLFFJYBZPMZYKPHKUMVYVSGGUFKAJVBAZWIHPHQDJEUITQBULTRWPEXQXHREXDLWBMNENDIQGMPQDSGXTNZPAIEEDRAYXIFVYCTIVFAEGZJIALJWZPKFSZHHCNH");
    msg.message_id = 64341U;

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
    msg.setTimeStamp(0.734649930573);
    msg.setSource(33809U);
    msg.setSourceEntity(55U);
    msg.setDestination(2243U);
    msg.setDestinationEntity(15U);
    msg.consumer.assign("EHQJUEOPBLKQXNK");
    msg.message_id = 15584U;

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
    msg.setTimeStamp(0.281885033505);
    msg.setSource(62740U);
    msg.setSourceEntity(130U);
    msg.setDestination(6780U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.895328157379);
    msg.setSource(41181U);
    msg.setSourceEntity(109U);
    msg.setDestination(34840U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.832582698457);
    msg.setSource(15513U);
    msg.setSourceEntity(146U);
    msg.setDestination(42037U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.124934779171);
    msg.setSource(32120U);
    msg.setSourceEntity(95U);
    msg.setDestination(20435U);
    msg.setDestinationEntity(213U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.730163234203);
    msg.setSource(56637U);
    msg.setSourceEntity(209U);
    msg.setDestination(55986U);
    msg.setDestinationEntity(247U);
    msg.op = 50U;

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
    msg.setTimeStamp(0.452695714472);
    msg.setSource(48215U);
    msg.setSourceEntity(229U);
    msg.setDestination(53987U);
    msg.setDestinationEntity(131U);
    msg.op = 254U;

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
    msg.setTimeStamp(0.472746556285);
    msg.setSource(65055U);
    msg.setSourceEntity(103U);
    msg.setDestination(33802U);
    msg.setDestinationEntity(32U);
    msg.total_steps = 27U;
    msg.step_number = 73U;
    msg.step.assign("HQKRHSINWTGWIFTNXPPCNUENIELZFZRSHBDIJAIVCMIGPRFEUKWMGQTBUYGQEPFSAHMCLNCJLXRGR");
    msg.flags = 226U;

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
    msg.setTimeStamp(0.737602502832);
    msg.setSource(39309U);
    msg.setSourceEntity(14U);
    msg.setDestination(47461U);
    msg.setDestinationEntity(109U);
    msg.total_steps = 3U;
    msg.step_number = 135U;
    msg.step.assign("TYKRDRDNBRVJWTDMRKUHOVRNLXETLHFKDZJTAPSJIJFRLJZUNTJAHIYCZZQDKNEYAGOTFHBMZVIVEDCO");
    msg.flags = 186U;

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
    msg.setTimeStamp(0.972082137347);
    msg.setSource(4434U);
    msg.setSourceEntity(168U);
    msg.setDestination(49840U);
    msg.setDestinationEntity(248U);
    msg.total_steps = 179U;
    msg.step_number = 150U;
    msg.step.assign("VBNJFCASHJNBAWSMWDNZUXTYNQSAOBQKNIFKXECKZLNUGNCVYTEDXJYJWZJPMQQIDLSPEPRWNQLOUHFGUFAGKVMODCZDWAFPYTYIHKGLAMVAMASPQUMERGPDFHJTTIGWPJVGIUYOTRFIDEWDYBZBBYXJTVEILWKHHZRIQLKHXEUTXGOHCHWEYCPKSNXXQRRREFCRNBL");
    msg.flags = 117U;

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
    msg.setTimeStamp(0.314879054929);
    msg.setSource(32743U);
    msg.setSourceEntity(210U);
    msg.setDestination(6658U);
    msg.setDestinationEntity(241U);
    msg.state = 71U;
    msg.error.assign("ZUNWMRGFYAJLJEERFJNCOSSGELVIQALJHHAIKCPXORBFYCDYTPQQVJMVXRNKOKMARTHEQMCSKDYMOUEWFWRGUPUYXQZLDUDLIIGDJPEPSCDWECUSXIMBYNOZBZBNJWOZAPVDVQVADTIYLFFXZCLFUZFHSWIHWVA");

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
    msg.setTimeStamp(0.207149843455);
    msg.setSource(24937U);
    msg.setSourceEntity(168U);
    msg.setDestination(56032U);
    msg.setDestinationEntity(82U);
    msg.state = 151U;
    msg.error.assign("QWVRFCRPMLGUYYLCGQSHMDOCAXDQBWPNHRAITYWTKFQOQBECRHJFBAJJQMLYAYPLJJMEKFGOYUUWJONLOKZXCEVNSCDPIVXJOAWWHXJEFBAZWZHAPIBKSUEUDMGNIYKUPMRTZTHMCNIHXFVVBXPQCPVIBEXXIIFYDSRHNKAPOMZLVNTGMMZZOOOEHKUZSRBDSVRSZXUGFTSEYGDBDDGAUSCZXPTFWDLSCGQBLFHQNNWWELLTYIUKRNAITQ");

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
    msg.setTimeStamp(0.616059867412);
    msg.setSource(12005U);
    msg.setSourceEntity(41U);
    msg.setDestination(41681U);
    msg.setDestinationEntity(210U);
    msg.state = 167U;
    msg.error.assign("BWBTANDOHHMNILTYECGHKQVOMQXXLOUKCDQZMFBCBSLCPGPVDFIPNQPBNFBKJFWQTGTAHCTZULYMVZVSWUTSSFLLAFEIWVWRIVWSUJ");

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
    msg.setTimeStamp(0.36478271006);
    msg.setSource(59021U);
    msg.setSourceEntity(187U);
    msg.setDestination(63514U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.922349854509);
    msg.setSource(57846U);
    msg.setSourceEntity(33U);
    msg.setDestination(54940U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.83014770466);
    msg.setSource(65224U);
    msg.setSourceEntity(113U);
    msg.setDestination(61529U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.282873045849);
    msg.setSource(49471U);
    msg.setSourceEntity(119U);
    msg.setDestination(17941U);
    msg.setDestinationEntity(47U);
    msg.op = 73U;
    msg.speed_min = 0.712999527179;
    msg.speed_max = 0.511691452783;
    msg.long_accel = 0.603084994342;
    msg.alt_max_msl = 0.935622426307;
    msg.dive_fraction_max = 0.322505581287;
    msg.climb_fraction_max = 0.120095390013;
    msg.bank_max = 0.219671052639;
    msg.p_max = 0.917513111337;
    msg.pitch_min = 0.493461847077;
    msg.pitch_max = 0.960089489674;
    msg.q_max = 0.392949635182;
    msg.g_min = 0.118348396994;
    msg.g_max = 0.76281901609;
    msg.g_lat_max = 0.801961097556;
    msg.rpm_min = 0.148237951511;
    msg.rpm_max = 0.86064170191;
    msg.rpm_rate_max = 0.873598392126;

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
    msg.setTimeStamp(0.0406842876791);
    msg.setSource(52546U);
    msg.setSourceEntity(74U);
    msg.setDestination(9934U);
    msg.setDestinationEntity(7U);
    msg.op = 113U;
    msg.speed_min = 0.817118843024;
    msg.speed_max = 0.710551118845;
    msg.long_accel = 0.685578706425;
    msg.alt_max_msl = 0.632346596314;
    msg.dive_fraction_max = 0.749865305504;
    msg.climb_fraction_max = 0.40054964822;
    msg.bank_max = 0.911491478672;
    msg.p_max = 0.718062200093;
    msg.pitch_min = 0.161605085475;
    msg.pitch_max = 0.874346131677;
    msg.q_max = 0.297502490734;
    msg.g_min = 0.0833531537615;
    msg.g_max = 0.882202812066;
    msg.g_lat_max = 0.411916824825;
    msg.rpm_min = 0.519176082914;
    msg.rpm_max = 0.854285288909;
    msg.rpm_rate_max = 0.759465518432;

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
    msg.setTimeStamp(0.524132509094);
    msg.setSource(52039U);
    msg.setSourceEntity(134U);
    msg.setDestination(52040U);
    msg.setDestinationEntity(191U);
    msg.op = 189U;
    msg.speed_min = 0.0197718573497;
    msg.speed_max = 0.645930340778;
    msg.long_accel = 0.833490953938;
    msg.alt_max_msl = 0.366478809263;
    msg.dive_fraction_max = 0.292530603525;
    msg.climb_fraction_max = 0.979961527924;
    msg.bank_max = 0.567315607084;
    msg.p_max = 0.811288445264;
    msg.pitch_min = 0.979998852938;
    msg.pitch_max = 0.907393276813;
    msg.q_max = 0.152493649955;
    msg.g_min = 0.94122064447;
    msg.g_max = 0.00387244241096;
    msg.g_lat_max = 0.866524699879;
    msg.rpm_min = 0.23635497298;
    msg.rpm_max = 0.713345900626;
    msg.rpm_rate_max = 0.375450570359;

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
    msg.setTimeStamp(0.243236481015);
    msg.setSource(13103U);
    msg.setSourceEntity(212U);
    msg.setDestination(10323U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.468258269413);
    msg.setSource(27395U);
    msg.setSourceEntity(177U);
    msg.setDestination(31421U);
    msg.setDestinationEntity(195U);
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 862636736U;
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
    msg.setTimeStamp(0.412393690809);
    msg.setSource(28187U);
    msg.setSourceEntity(154U);
    msg.setDestination(34054U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.349663429002);
    msg.setSource(35731U);
    msg.setSourceEntity(240U);
    msg.setDestination(52777U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.478920980728;
    msg.lon = 0.846351335943;
    msg.height = 0.238219020849;
    msg.x = 0.533081821843;
    msg.y = 0.907637530198;
    msg.z = 0.642328721207;
    msg.phi = 0.49444662059;
    msg.theta = 0.468875607307;
    msg.psi = 0.320746444782;
    msg.u = 0.966667520586;
    msg.v = 0.880898940993;
    msg.w = 0.120729266576;
    msg.p = 0.455514318095;
    msg.q = 0.564159796542;
    msg.r = 0.625175460059;
    msg.svx = 0.256038906577;
    msg.svy = 0.0397970931156;
    msg.svz = 0.637526194657;

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
    msg.setTimeStamp(0.345818227487);
    msg.setSource(24753U);
    msg.setSourceEntity(65U);
    msg.setDestination(42750U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.917184410165;
    msg.lon = 0.811693409506;
    msg.height = 0.74521866333;
    msg.x = 0.241643394612;
    msg.y = 0.742532201373;
    msg.z = 0.480197515243;
    msg.phi = 0.818814343133;
    msg.theta = 0.445810855499;
    msg.psi = 0.0646421928031;
    msg.u = 0.243625536225;
    msg.v = 0.800388390656;
    msg.w = 0.283661387001;
    msg.p = 0.535057769085;
    msg.q = 0.234324246734;
    msg.r = 0.671950902399;
    msg.svx = 0.102596014363;
    msg.svy = 0.590340687085;
    msg.svz = 0.289283636245;

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
    msg.setTimeStamp(0.451370507623);
    msg.setSource(31586U);
    msg.setSourceEntity(208U);
    msg.setDestination(23256U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.347215355531;
    msg.lon = 0.807029760941;
    msg.height = 0.594176512616;
    msg.x = 0.312208739509;
    msg.y = 0.561289937818;
    msg.z = 0.942126403053;
    msg.phi = 0.373945442009;
    msg.theta = 0.767620928925;
    msg.psi = 0.126799345301;
    msg.u = 0.0718792555793;
    msg.v = 0.180399041978;
    msg.w = 0.419306927185;
    msg.p = 0.867435972824;
    msg.q = 0.465515347243;
    msg.r = 0.0385046985862;
    msg.svx = 0.775916376352;
    msg.svy = 0.551920614415;
    msg.svz = 0.678867998714;

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
    msg.setTimeStamp(0.200627188);
    msg.setSource(38849U);
    msg.setSourceEntity(97U);
    msg.setDestination(65143U);
    msg.setDestinationEntity(184U);
    msg.op = 119U;
    msg.entities.assign("WTTHWRUOJUZWLRXVZWS");

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
    msg.setTimeStamp(0.971349522606);
    msg.setSource(30714U);
    msg.setSourceEntity(58U);
    msg.setDestination(25200U);
    msg.setDestinationEntity(19U);
    msg.op = 170U;
    msg.entities.assign("ZABXFUXJHBJUSMAVDSYIDWINSETCCMFUHQAQGADGKJEQASVNAMDLJVEIKCBLQYJWWLPNNENXTOYHJAHUQVHQRMBOR");

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
    msg.setTimeStamp(0.156005323253);
    msg.setSource(52702U);
    msg.setSourceEntity(84U);
    msg.setDestination(63385U);
    msg.setDestinationEntity(56U);
    msg.op = 22U;
    msg.entities.assign("KJRTFLWDFSUCZYCZASZADYGDLMXWEWNJXAYLWWGFVEZVBMOOJNNMTHQKSSYYBSLJPL");

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
    msg.setTimeStamp(0.815658057171);
    msg.setSource(1414U);
    msg.setSourceEntity(193U);
    msg.setDestination(38278U);
    msg.setDestinationEntity(227U);
    msg.type = 70U;
    msg.speed = 11166U;
    const char tmp_msg_0[] = {63, 110, -126, -51, -110, 59, 79, 67, 92, 79, 21, -51, -16, -65, -109, -65, 26, 64, -57, 56, 99, -6, -34, 33, -40, 70, 89, 121, 101, 69, -65, -86, -52, -54, 94, -4, 110, 6, -81, 33, -64, -19, -79, -16, -59, 13, -46, -33, 78, 111, 121, -46, 78, 11, 122, 124, 120, 115, -43, 59, -48, 69, -92, 57, 2, -109, 60, -72, -45, -91, -103, -41, 56, 8, -12, -75, -10, 81, -55, -107, 33, -74, 80, 39, -99, 68, 101, 115, 18, 2, -117, -42, 111, 64, -113, -87, 109, 18, 48, 0, 105, 41, 30, -114, -79, 84, 58, -7, -68, -98, -85, -49, 120, 124, 9, -5, -119, 81, -11, 99, 87, -45, 106, 102, 60, -86, 96, -92, 124, 103, -4, -35, -65, 96, 37, 110, -48, -120, 71, -6, 94, 58, 105, -30, 12, 47, 56, -118, 3, -108, 4, 54, -95, -30, 22, 12};
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
    msg.setTimeStamp(0.46399502218);
    msg.setSource(2685U);
    msg.setSourceEntity(104U);
    msg.setDestination(56903U);
    msg.setDestinationEntity(52U);
    msg.type = 42U;
    msg.speed = 58477U;
    const char tmp_msg_0[] = {-9, -63, 97, -52, 55, -11, -23, 45, -38, -75, 11, -31, -88, -10, -91, 53, 46, -74, -57, -23, 52, -20, -59, 117, -125, -104, 110, -28, -100, 53, 99, 14, -107, -15, -121, 39, 106, -90, 20, 68, 99, -81, 96, -3, -18, -69, -93, -80, 26, -66, -112, -39, 111, 12, -27, 78, -22, -25, 122, 29, 48, 109, -121, 125, 94, 62, 46, -13, -115, -28, -115, 54, 26, 88, 22, -86, 102, -89, -39, -116, 85, -22, 115, -49, 60, 116, -28, -51, 87, -56, 74, 7, -73, 41, 9, 102, 61, 18, -94, -26, -120, 37, -69, -107, 119, -40, -116, 64, 46, -43, -33, 28, -107, -125, 64, 41, -116, 6, 21, -78, 102, -126, 91, 117, 97, 95, -70, 104, -93, -98, 124, -127, -115, -43, 125, 66, 61, 74, -101, -59, -34, -101, -43, 31, -101, -50, -125, 31, -63, 125, -26, 5, 68, 60, -95, -116, 54, -77, 31, 37, 4, -72, -94, 2, -112, 103, 109, -109, 10, 28, -94, 101, -97, -31, -79, 36, 18, -49, 48, -45, -36, 50, -21, -45, 20, -127, -41, -26, -108, 51, 89, 109, -82, 13, 74, -64, 43, 32, 24, -69, -56, 32, 35, 116, 79, 92, 50, -30, -63, 28, -88, 45, -1, 21, 60, -51, -20, 71, 101, -4, -50, -49, -86, -127, 53, 103, -115, 98, -37, 93, 116, -114, 113, 87, -34, -103, -110, 114, 59, -46, -123, 82, 68};
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
    msg.setTimeStamp(0.0758567995163);
    msg.setSource(53091U);
    msg.setSourceEntity(219U);
    msg.setDestination(47834U);
    msg.setDestinationEntity(193U);
    msg.type = 54U;
    msg.speed = 57626U;
    const char tmp_msg_0[] = {-32, 65, -127, 0, 109, -97, -29, 16, 92, 124, 122, -44, 9, 45, 76, 10, 96, -100, 16, -26, 24, -114, -83, -90, -49, 74, 87, -86, -65, 83, 89, 19, -17, -73, -48, -81, -110, -123, -25, -73, 79, -16, -47, -65, -62, 108, 120, -75, 69, 62, -92, 17, -60, 70, 31, -1, 60, 120, 119, -84, 70, 39, -53, -41, -50, -126, -52, -100, 20, -42, 10, 45, -39, 109, 55, -106, -48, 65, 126, -63, 68, 43, 57, 82, 86, 100, 22, 52, -70, -72, 39, -54, 125, -22, -37, -84, -114, -91, 36, -60, 21, 117, -19, 39, 71, -24, 41, -58, -65, -67, 40, 28, -114, -101, -118, -29, 8, 9, -75, -73, -74, 72, -90, 90, 16, 47, -8, 77, 30, 59, -36, -91, 37, -54, -124, -34, 85, 107, -120, -114, -10, -32, 123, 81, -66, -1, 18, -114, 121, 111, 77, 8, -120, -114, 121, -125, -114, 23, 26, 106, 94, -116, 84, 0, 17, 25, 110, -23, 90, -28, 59, 7, 20, -52, -111, 52};
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
    msg.setTimeStamp(0.603009481177);
    msg.setSource(7931U);
    msg.setSourceEntity(56U);
    msg.setDestination(10520U);
    msg.setDestinationEntity(203U);
    msg.op = 118U;
    msg.tas2acc_pgain = 0.443950637797;
    msg.bank2p_pgain = 0.0436577408572;

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
    msg.setTimeStamp(0.783528838435);
    msg.setSource(36698U);
    msg.setSourceEntity(234U);
    msg.setDestination(31547U);
    msg.setDestinationEntity(224U);
    msg.op = 37U;
    msg.tas2acc_pgain = 0.833878863242;
    msg.bank2p_pgain = 0.61967933149;

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
    msg.setTimeStamp(0.366011287747);
    msg.setSource(20963U);
    msg.setSourceEntity(243U);
    msg.setDestination(23862U);
    msg.setDestinationEntity(184U);
    msg.op = 185U;
    msg.tas2acc_pgain = 0.566856114549;
    msg.bank2p_pgain = 0.238124945089;

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
    msg.setTimeStamp(0.142103976428);
    msg.setSource(29097U);
    msg.setSourceEntity(231U);
    msg.setDestination(6219U);
    msg.setDestinationEntity(252U);
    msg.available = 695650651U;
    msg.value = 61U;

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
    msg.setTimeStamp(0.596590295187);
    msg.setSource(6220U);
    msg.setSourceEntity(4U);
    msg.setDestination(50914U);
    msg.setDestinationEntity(161U);
    msg.available = 1937790535U;
    msg.value = 140U;

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
    msg.setTimeStamp(0.55221344028);
    msg.setSource(56026U);
    msg.setSourceEntity(186U);
    msg.setDestination(61814U);
    msg.setDestinationEntity(227U);
    msg.available = 2582780420U;
    msg.value = 186U;

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
    msg.setTimeStamp(0.485493796864);
    msg.setSource(56694U);
    msg.setSourceEntity(82U);
    msg.setDestination(15433U);
    msg.setDestinationEntity(95U);
    msg.op = 97U;
    msg.snapshot.assign("RXTOUGEZMVQHULNNKPCIYYWSJRHY");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.12544969645;
    tmp_msg_0.lon = 0.77667228108;
    tmp_msg_0.z = 0.26410866547;
    tmp_msg_0.z_units = 87U;
    tmp_msg_0.speed = 0.66135740849;
    tmp_msg_0.speed_units = 154U;
    tmp_msg_0.abort_z = 0.178228391799;
    tmp_msg_0.bearing = 0.561279821195;
    tmp_msg_0.glide_slope = 223U;
    tmp_msg_0.glide_slope_alt = 0.278487927841;
    tmp_msg_0.custom.assign("GMMJBCUKKKQOXJLGWUOGHRNRABEWYOTOWXUYWFGBUPNMKQAHNPIRAVOEYRVTOXTFTEPYFELSSBHDXPVZUYHWBODCPBOBBMBMYFWCRGTFTDRYPFLCHZDRDHRXCDIIBKOLVCPFPNSRGGJFJGMLEJGUIKCJLSZLJVCILECVXNXNDIQQLSPAMVUAOANJNEHU");
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
    msg.setTimeStamp(0.845455686718);
    msg.setSource(22276U);
    msg.setSourceEntity(133U);
    msg.setDestination(14619U);
    msg.setDestinationEntity(225U);
    msg.op = 159U;
    msg.snapshot.assign("JTCOUNHRYYTXJVNUVHUEOWOWMDICWXFIITTJQWQDBZBJDKZURFJFAABGWNTCNPTWVACZSOSIRXBJXRAPETPZDFVKDIBTFOLMNKQOGNUXDPFVPWZXIFBJLWVPYPHYNRMMICHONJ");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 251U;
    tmp_msg_0.value = 0.879679569167;
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
    msg.setTimeStamp(0.295186257234);
    msg.setSource(3134U);
    msg.setSourceEntity(59U);
    msg.setDestination(2211U);
    msg.setDestinationEntity(103U);
    msg.op = 212U;
    msg.snapshot.assign("FUBPCMGKIDQASIBGRBNPFWDEQKYCHKHATOUEIUCWFBHNVRNKSMRTILHCJZFTVPCSNCRVJGOJTWWEAWDLZAOBPWEGJKXZIYCQKZVBNMMGNERPD");
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("DDPGYVVVQQTSIXHMOKBJWLVYEZLRAMIKKYKIRCEWJGKSHLQNAMCYGQOCNEVAGQYXSDZJNQMJSNZBXUKAZUXRWFIWJGHXEMF");
    tmp_msg_0.predicate.assign("EGEPZDTZSJNDXEYSIQAXAVCBBVCGWQKNVUPFMTUVQCGTBRNZYXPFDXPRGDPHHOMXIFJBKOOJBJELCTSWOFUNAJFOAJOVUAAGZPFMPWLYLIUFRZMLUNREBLDSRWTFWSMRQWHGFIZMGODNDIXKVUUWZDQWLCEVEHZQMLSHASPKETXERKCWYUHTCMGHBKSMKNBNCKQDYLAVPPFXOYTZHRYTWIJKIIYQHBCDJAQXJMVBIATN");
    tmp_msg_0.attributes.assign("XBFSNYXKDILLARWCOHRXEQGJGDUFAVBCHFZUWOUJJPXGDYOEQKSRTEENWATTNILRQXHZWRZAPWSIQAIPSZVMSIZWLFNPKEJFBYOBVKVNDTCJGK");
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
    msg.setTimeStamp(0.590723050498);
    msg.setSource(15393U);
    msg.setSourceEntity(21U);
    msg.setDestination(14677U);
    msg.setDestinationEntity(77U);
    msg.op = 216U;
    msg.name.assign("NKPJPKOMTWSTRKNOGDFBIXENUGYAUCQVTFIVBXITJBZPGYDRVJZEXSSLHGYXOQCLNICQVRSTIRIABOGYEC");

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
    msg.setTimeStamp(0.678742723298);
    msg.setSource(26388U);
    msg.setSourceEntity(47U);
    msg.setDestination(24893U);
    msg.setDestinationEntity(132U);
    msg.op = 76U;
    msg.name.assign("EAXWFUYYBEJVHNAOEPBITGPIBWASVICBLWYYMMURSHZOZW");

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
    msg.setTimeStamp(0.540152941757);
    msg.setSource(23338U);
    msg.setSourceEntity(123U);
    msg.setDestination(20663U);
    msg.setDestinationEntity(133U);
    msg.op = 66U;
    msg.name.assign("VYQLYNIELPMBETOCFISCGIUREHMOKQCUESNSKQTTGAVNZLVAJJBMPBRKJWXODYGZFUUGNLLFZDJAEDYWODDJKBMVXDKPFCCOSCUIGGZVPPAUEBMKTQYKQERMXFEQAZXFRWHZIHKGTIZCBKVUZMNEAQTYTXUMHZAIRXDHRMSRCINHZAXWRDHVBNBEXYHCBPJRWKSSNPWJRVYGFSUWGLWTCSLJHQAOFDVFP");

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
    msg.setTimeStamp(0.747501952567);
    msg.setSource(30571U);
    msg.setSourceEntity(244U);
    msg.setDestination(35052U);
    msg.setDestinationEntity(6U);
    msg.type = 38U;
    msg.htime = 0.494322046641;
    msg.context.assign("TERJNONMNDZKXMEDVJESDSGVOTSVQAUCOIYGKSQQQWUYVHLGZPBIQPNOCKMGGMXBXKHEYDBQXELRMKTAYIAOPBETSARKWWJJYOTNCRLQGZCWXWFIQKDGZAITVHKSPZYDG");
    msg.text.assign("BAAJNUBGVMZGKRGWIPDGKXPSQMLVSCGBCDBXPVBQFIXMNEYRCTKULCSANIPHYGYZVTAZMWXQEV");

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
    msg.setTimeStamp(0.325701676592);
    msg.setSource(20477U);
    msg.setSourceEntity(154U);
    msg.setDestination(12038U);
    msg.setDestinationEntity(36U);
    msg.type = 171U;
    msg.htime = 0.575179345928;
    msg.context.assign("FVOYYUZHZKXWUEVFRIDKSQKVNZMIBBANWCGQTYQHMNNOCLLAKCDJEABGUWONLCIZXLMDYACTIACZEHDPSFJDXGWIJZBPMBNVXVQLTRFRJPYLKAMXDX");
    msg.text.assign("EYLITVPNHZBBTXGDLERAEMEGSQPOJRDBAWBWKHIPPTDUJFHUTLYVUGARGTQAZJMOLYWFSLAKXWOEXOQRVGQWHIIXGADNBWVCVDCPYKGRMMUDYGKQCQFWCFIZCYNVMZPKMAOWFKZZSSPLQCECEQJJKAXNDNBIHCFKRSTFMOYEFPBNHEHUPKTUWXXQJUON");

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
    msg.setTimeStamp(0.200772950419);
    msg.setSource(31903U);
    msg.setSourceEntity(52U);
    msg.setDestination(1565U);
    msg.setDestinationEntity(118U);
    msg.type = 8U;
    msg.htime = 0.861013097721;
    msg.context.assign("PNEFIGUVPUZYCMPQOBKCXDDJRIBAJAPZYJZFFERGKRVUAREMOYGJDFNQXFCYYHZCIFRLKYSHMGMJLBZONCLVHTRVSWJEFSHCUNFFZPUXMAEETTBUGPGUIGODJKFIBNMPOHJYQIILWZYXXATQLWVGLTBRSAXOVXWMTYJLAZKXHUZSAKPIPDNNONRWECQMSSWRETABDTEWBSHVMLVKOQHYQKQECAIPVBQLQSGWGNWVJKUBS");
    msg.text.assign("WKCXLGZLNCHYZGXMKZAMKWRNWEWUPBOKKEFLLNBRHEHKTUSWGSVYWIXQOZJIADKOMYOBRDGMTDMQLVGEHBDMZSJMRJNDIPRSOCCLYFVXAL");

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
    msg.setTimeStamp(0.28999808086);
    msg.setSource(63098U);
    msg.setSourceEntity(186U);
    msg.setDestination(8624U);
    msg.setDestinationEntity(158U);
    msg.command = 186U;
    msg.htime = 0.0123646110106;

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
    msg.setTimeStamp(0.910205706393);
    msg.setSource(9818U);
    msg.setSourceEntity(36U);
    msg.setDestination(27529U);
    msg.setDestinationEntity(13U);
    msg.command = 143U;
    msg.htime = 0.287086981693;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 6U;
    tmp_msg_0.htime = 0.185557775011;
    tmp_msg_0.context.assign("YRVCTAQOZYZRJZBOCSDOAJRHQNIYYMCUHPFHUGPZEOBZTLXVYGPMODPKRNXANVPZVOZHXGKQCJMJCZWUESYFGUIXEKYUKGHDBBOYNSHISZLXFTPOAVIEBIQJOVLQJBWLWTBMQTQUCXVA");
    tmp_msg_0.text.assign("RTMZPAFSYCKSGRTZPKJFJGLITQMNXELOBOVHLDNVFBHLSKWXCYDZCUZWIGHKYGFTWUAZHOZJYUIIUBEKMASYLBHPKRDBYOVXXSZXMV");
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
    msg.setTimeStamp(0.21300840423);
    msg.setSource(40171U);
    msg.setSourceEntity(82U);
    msg.setDestination(4683U);
    msg.setDestinationEntity(21U);
    msg.command = 71U;
    msg.htime = 0.336039558684;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 176U;
    tmp_msg_0.htime = 0.141078962566;
    tmp_msg_0.context.assign("CBGVTOFTRMPKCZVBPBDHCLDKHXEMMODLKYEGAMNLPFPOGIHDYHXEUWEAHHAGJFOKJKUWEBMJUTQYRIGONGSXGUYBHSQSCPZNPOGTPJDVDDUINQOCJLYXTVRJBDFYVR");
    tmp_msg_0.text.assign("EGCVUIRGFQEBBFYRBWGCYOJOHGVRMTAKLHWMEXPBZLCXHPSHALAXCFNJVISFAOLDAFUXDWGUHMJWKQTLJPVYORVVDQPLFJDBMXFSVRSBYJIIEXRMVWZMTONFEZZPIPZTDNVCAIZQRSBQOTTUPEGWUHBKNCTYSCNYUWVWPGZFOJOCDRNEFPLLDKQXLTGYUIPURKQSTZEMJQRUKAKSCCUSDYMMSNGIXIH");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.428284203246);
    msg.setSource(33032U);
    msg.setSourceEntity(76U);
    msg.setDestination(14600U);
    msg.setDestinationEntity(119U);
    msg.op = 221U;
    msg.file.assign("EDZRWXJGQHG");

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
    msg.setTimeStamp(0.834863632354);
    msg.setSource(30580U);
    msg.setSourceEntity(2U);
    msg.setDestination(61039U);
    msg.setDestinationEntity(214U);
    msg.op = 100U;
    msg.file.assign("MVMDXEIHOXYLIFSQZCLFAJOVHDNGMMYASKBTHLPIPNCIZUURZHBCFKQGJDORYMBECTYGTPGVVQPYJCSFWWDANUHWMSBAPMBOSONKEKFIUOXGYNYFHGLTEKHIWVQKGLPQXQNQXJCGQLXDSFLLLTTNQNAWKQJBZTNWIPUOHCBFARSHEUDVSJEXXISVWCURRXYJTEJOVTYDOZWIKEHZTJWJAKVFIPFRSDNPRGRAVBCR");

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
    msg.setTimeStamp(0.603205777681);
    msg.setSource(30004U);
    msg.setSourceEntity(189U);
    msg.setDestination(24942U);
    msg.setDestinationEntity(4U);
    msg.op = 224U;
    msg.file.assign("OJAOHGZGOAQWMVZHMZCROAAMYWDQBZWYULTAPCWJEOLYJNQMOVNYFTTDMPJBULZJVTJSQAELNXOTIJIBCISUYXFKEESZASOQLFLRIDAAGXJVHXRUMCECXUNDIQWCNXPFTKODFGWMKWRYNEZRKXQQPSFYBDNJKVGUISFRFCFGLIQIXYSEJTRRDUXWKLNPTMLZTHDBKUECO");

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
    msg.setTimeStamp(0.513576712458);
    msg.setSource(61818U);
    msg.setSourceEntity(24U);
    msg.setDestination(6184U);
    msg.setDestinationEntity(123U);
    msg.op = 16U;
    msg.clock = 0.517485682274;
    msg.tz = -60;

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
    msg.setTimeStamp(0.245930674449);
    msg.setSource(34099U);
    msg.setSourceEntity(131U);
    msg.setDestination(19628U);
    msg.setDestinationEntity(132U);
    msg.op = 49U;
    msg.clock = 0.115425967325;
    msg.tz = 125;

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
    msg.setTimeStamp(0.458811391757);
    msg.setSource(10835U);
    msg.setSourceEntity(130U);
    msg.setDestination(21991U);
    msg.setDestinationEntity(19U);
    msg.op = 54U;
    msg.clock = 0.904532126073;
    msg.tz = -18;

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
    msg.setTimeStamp(0.776652118113);
    msg.setSource(6875U);
    msg.setSourceEntity(77U);
    msg.setDestination(23445U);
    msg.setDestinationEntity(93U);
    msg.conductivity = 0.823342858023;
    msg.temperature = 0.891864546173;
    msg.depth = 0.963346706456;

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
    msg.setTimeStamp(0.229673066872);
    msg.setSource(5160U);
    msg.setSourceEntity(42U);
    msg.setDestination(43574U);
    msg.setDestinationEntity(188U);
    msg.conductivity = 0.637052239893;
    msg.temperature = 0.0186938990996;
    msg.depth = 0.671091797368;

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
    msg.setTimeStamp(0.18250181786);
    msg.setSource(24315U);
    msg.setSourceEntity(230U);
    msg.setDestination(35354U);
    msg.setDestinationEntity(23U);
    msg.conductivity = 0.134558537008;
    msg.temperature = 0.906745900524;
    msg.depth = 0.619496041868;

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
    msg.setTimeStamp(0.85209634954);
    msg.setSource(56435U);
    msg.setSourceEntity(9U);
    msg.setDestination(62666U);
    msg.setDestinationEntity(206U);
    msg.altitude = 0.311260679045;
    msg.roll = 22095U;
    msg.pitch = 3546U;
    msg.yaw = 62231U;
    msg.speed = 3963;

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
    msg.setTimeStamp(0.0256984926399);
    msg.setSource(38056U);
    msg.setSourceEntity(196U);
    msg.setDestination(31917U);
    msg.setDestinationEntity(67U);
    msg.altitude = 0.541764175961;
    msg.roll = 30359U;
    msg.pitch = 7116U;
    msg.yaw = 23943U;
    msg.speed = -22459;

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
    msg.setTimeStamp(0.857798149765);
    msg.setSource(42230U);
    msg.setSourceEntity(42U);
    msg.setDestination(5293U);
    msg.setDestinationEntity(210U);
    msg.altitude = 0.133995888703;
    msg.roll = 54221U;
    msg.pitch = 58017U;
    msg.yaw = 64859U;
    msg.speed = 7671;

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
    msg.setTimeStamp(0.995223623835);
    msg.setSource(65043U);
    msg.setSourceEntity(156U);
    msg.setDestination(57355U);
    msg.setDestinationEntity(14U);
    msg.altitude = 0.583819926407;
    msg.width = 0.197966658407;
    msg.length = 0.85506992576;
    msg.bearing = 0.430595873191;
    msg.pxl = 24963;
    msg.encoding = 113U;
    const char tmp_msg_0[] = {-18, -101, 12, -92, 60, 110, -8, 116, -13, 69, 53, -108, 84, 79, 98, -78, -114, 50, 13, -120, -109, 69, -14, -93, 62, -82, 60, 23, 95, -121, 8, 23, -122, -42, 104, 17, -10, -87, -23, -93, 96, -44, -100, 59, 1, 84, 0, 117, -2, -71, -25, 39, 50, 52, -49, 81, -71, 12, 43, -93, -6, 58, 29, 78, -89, 47, 67, -37, 113, -126, -102, 8, -6, 87, -61, -103, -86, 106, 95, 93, 100, -99, -122, 114, 1, -93, -84, 53, 67, 59, 110, -76, -22, 62, -104, 90, 97, -36, -34, -110, -14, 107, -95, 95, -61, -18, 50, -19, -107, 40, -100, 101, -102, 42, 18, 68, -63, -123, -49, -71, -89, 73, -59, 115, 26, -90, -70, -92, 70, 8, -81, -123, -47, -85, -92, -3, 56, -6, 113, -115, 79, 78, 46, 18, 109, 108, 94, 78, 79, 25, 53, -116, 44, 21, 31, -44, 5, 45, 19, -104, -16, 58, -101, 85, 4, -121, -90, 14, -91, -49, -65, -11, -121, 39, 69, -59, -13, -54, 56, 16, 13, 81, -23, -105, -55, -32, 27, -70, -14, -53, 84, 3, -78, 72, 60, 11, -49, -26, 49, 75, -79, -53, 107, 38, 67, 34, -113, 13, 81, -68, 57, -107, -8, 122, 121, -41, -110, 26, -28, -128, -3, 9, -112, 25, 74, 44, -108, -38, -28, -1, -56};
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
    msg.setTimeStamp(0.917101290669);
    msg.setSource(27823U);
    msg.setSourceEntity(1U);
    msg.setDestination(40796U);
    msg.setDestinationEntity(126U);
    msg.altitude = 0.188176157883;
    msg.width = 0.693120020133;
    msg.length = 0.955984631979;
    msg.bearing = 0.323770467321;
    msg.pxl = -17319;
    msg.encoding = 197U;
    const char tmp_msg_0[] = {90, 70, -13, 66, 16, 97, 119, 70, 15, 11, -3, -39, -14, -103, -5, -36, -114, -77, -48, -2, 70, 72, 86, -94, 55, -117, 16, -75, -34, 64, 7, 59, -95, -4, -100, -61, -38, -59, -41, 18, -17, -85, 41, -116, -113, 24, -79, -107, -54, 61, 98, 9, 30, 100, -107, 63, -72, -57, 6, 100, -34, 11, -39};
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
    msg.setTimeStamp(0.0296377607029);
    msg.setSource(32362U);
    msg.setSourceEntity(166U);
    msg.setDestination(21534U);
    msg.setDestinationEntity(219U);
    msg.altitude = 0.208213972055;
    msg.width = 0.704715818768;
    msg.length = 0.736093382902;
    msg.bearing = 0.412570810163;
    msg.pxl = 31358;
    msg.encoding = 127U;
    const char tmp_msg_0[] = {-3, 106, -12, 111, -95, 94, 83, -11, -44, -104, 102, 0, 81, 50, -97, -118, 2, -27, -66, 109, -56, -23, -79, -106, 21, 44, 66, 19, -117, -34, 28, -85, 62, -46, -95, 2, -56, -123, -86, -70, -7, -109, 110, 61, -127, -95, 63, -125, 39, -15, -102, 113, 109, -79, -38, 107, 107, -14, -82, -111, -56, 66, 100, 60, -87, -76, 114, -40, 111, 36, -103, -74, -86, -48, -7, 123, 6, 62, 47, -83, 81, 67, 76, -103, -69, -31, -105, -91, -109, -46, -59, -126, 54, 18, 89, 52, 1, -65, -30, -76, -117, -28, 15, -118, -24, 12, -92, -78, -68, 85, -112, -113, -126, 58, 104, -36, 57};
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
    msg.setTimeStamp(0.476411659322);
    msg.setSource(65470U);
    msg.setSourceEntity(217U);
    msg.setDestination(11147U);
    msg.setDestinationEntity(141U);
    msg.text.assign("OYOZNWPJENBSYMKUGQHJJZGTUSNNPYBEKZIHT");
    msg.type = 56U;

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
    msg.setTimeStamp(0.650611793799);
    msg.setSource(53798U);
    msg.setSourceEntity(170U);
    msg.setDestination(8079U);
    msg.setDestinationEntity(214U);
    msg.text.assign("RYGNBKJFQUHXDULRVJNTKWPEOAAMGRJPZAVEXMJKENCSWRLLHWVRGSHDCQMUWUYVAYXPSPTHKTGVG");
    msg.type = 154U;

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
    msg.setTimeStamp(0.528198358255);
    msg.setSource(35519U);
    msg.setSourceEntity(234U);
    msg.setDestination(17872U);
    msg.setDestinationEntity(3U);
    msg.text.assign("WBBXPZSQWFINDTDJMAROZQMUDAPJQFUJDQCEMFWOZBFHSIVWZNRKMSKUNRRYXNXETIIJOUGYMGEKFXLHMJMQPFXXJNYSUSBPWXYYYSZAKUPLCPFOGNBVVOGLGDBEN");
    msg.type = 242U;

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
    msg.setTimeStamp(0.119413772444);
    msg.setSource(44848U);
    msg.setSourceEntity(46U);
    msg.setDestination(12740U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.761806978205);
    msg.setSource(39552U);
    msg.setSourceEntity(214U);
    msg.setDestination(1669U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.45887464985);
    msg.setSource(36802U);
    msg.setSourceEntity(163U);
    msg.setDestination(32995U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.0188619597928);
    msg.setSource(47864U);
    msg.setSourceEntity(3U);
    msg.setDestination(2091U);
    msg.setDestinationEntity(158U);
    msg.sys_name.assign("VUKRQVSZTWOLUKCSNGNZVBPIICYUEUOYIHMSGZRUYAXZTWSMAHVFITQVYBXHJEBQQKCFYWQACSPUNDZDJPWZMQFRYUSNGZNTAKLIMDAJFNMEEEIJBVGQMRWTKBFPTYOJSSCONZHAOVZKXELFRIOPXDN");
    msg.sys_type = 196U;
    msg.owner = 24033U;
    msg.lat = 0.63915664058;
    msg.lon = 0.525963858842;
    msg.height = 0.430893077387;
    msg.services.assign("DYLXKATERVMXDZIOCRCFIFWQGGNQTOIDBGHHFEXZEZVTWUFEEVAKBMWVOZZWJHNEKZXSWVMUEALNQUZPATTUQRLYERLRYJXSJNPXYCJAKRPSQMBKIYSPYMQGRHUNIHOTNNDOLXXLWQUVOADJEZYBNLDCKRVOURCAWDJLHAZCWDCLPJCFKQHSXVFJHFGTMOPDGJPZUVWSAAQSHPBMTGFN");

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
    msg.setTimeStamp(0.965271086461);
    msg.setSource(46631U);
    msg.setSourceEntity(241U);
    msg.setDestination(46493U);
    msg.setDestinationEntity(177U);
    msg.sys_name.assign("AITTLFVCSKNWEGRYPFKEAXBENGQIPJZQMSWZHFLZZOKIGPZBLNQLWWTMXBQZDMOSSOSITFNYANLDHUIAUGXDHFNBEAXU");
    msg.sys_type = 8U;
    msg.owner = 42128U;
    msg.lat = 0.244100266098;
    msg.lon = 0.158463367334;
    msg.height = 0.685736040046;
    msg.services.assign("GTTECULVWABJOPSWDZSHAAFEAKYKDCULJJOYDQTOUEHFGYGZXUVRSCMAYNKBEMQXOMLVGSIBPDGEXCMJXCRNIWIISSKNPDIHQGZYWLKARTQIATWFYRFGUOEQVHLJMGENDRKOXLNHTUMJWVHTXNYZRGESVDIEHLARNYDCOUCCNYPTVMWUQXKN");

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
    msg.setTimeStamp(0.641711430822);
    msg.setSource(28666U);
    msg.setSourceEntity(14U);
    msg.setDestination(35269U);
    msg.setDestinationEntity(27U);
    msg.sys_name.assign("RGHOBXHWFHIRREXEBBPBZXTTLSKMBIQZFBGKGSRUEKLTDFQYABFJWRLAXN");
    msg.sys_type = 194U;
    msg.owner = 32023U;
    msg.lat = 0.111167551203;
    msg.lon = 0.365618311289;
    msg.height = 0.110051018669;
    msg.services.assign("RAUOUJJXIWSNCNPUAMFXRB");

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
    msg.setTimeStamp(0.948999240893);
    msg.setSource(11668U);
    msg.setSourceEntity(157U);
    msg.setDestination(33425U);
    msg.setDestinationEntity(196U);
    msg.service.assign("DPKKJQWPREJUOZACTRQAHBSAUPGYYUDWLNMRLVOYUAZFXPAKXGJNIEVTMNHEMPDCTIGIZKDZAGHGSISWZTLQWUTSSLEEWGLJHRYTXHOBVFOOVKFVGSMIQCMJNIIHUUDEINWSASROMBTSFANWDOQCKXBQIQVPRDCBKBRJCVNAKTZFJIQFJ");
    msg.service_type = 133U;

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
    msg.setTimeStamp(0.119835597377);
    msg.setSource(45221U);
    msg.setSourceEntity(212U);
    msg.setDestination(65178U);
    msg.setDestinationEntity(55U);
    msg.service.assign("KNYPNAIFKTZWPXBIGKGPOFRBTAMJBLNGAJNQLAHASUTIVCYCERMQRCDQVQDCBRSBMYRPZLUWTFVKXDSQZNJPHGOGODKSHZKIRHELHSNJFEWWFGJPSDBKIFBDGXMDZVOWAXIZTUYNGMCIIUTCCGAGJUEPUMCTVHSFZQOEPFELAKXTMOFXBTDJEOYSHBHZTMKQOVLQXAWWJLHXVALWYCEMMYJSYRWPRVHWXDSNOIBCZUDQIFYOREVUQXVJL");
    msg.service_type = 224U;

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
    msg.setTimeStamp(0.892633745907);
    msg.setSource(28057U);
    msg.setSourceEntity(149U);
    msg.setDestination(49924U);
    msg.setDestinationEntity(216U);
    msg.service.assign("DCDENIPBUOOHKDZPYORUNLVEUFZYDWQAYRZAOQAAIRHLAIJTGSUGDHIXBWKYHVGGLHFQGWILKZSMHEJRCQMKATPDANLERVXFSEPBEFTVCGSJCRENBXXOWNCHMNEYUMDXPWQMMIGJPTWFJXEFJZVBUMHKKLKZJDNVESVYTATCZYBSOUCIKMRMFS");
    msg.service_type = 82U;

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
    msg.setTimeStamp(0.0237345239169);
    msg.setSource(21283U);
    msg.setSourceEntity(197U);
    msg.setDestination(52743U);
    msg.setDestinationEntity(125U);
    msg.value = 0.615418801709;

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
    msg.setTimeStamp(0.835653642872);
    msg.setSource(29235U);
    msg.setSourceEntity(55U);
    msg.setDestination(60474U);
    msg.setDestinationEntity(172U);
    msg.value = 0.632995710625;

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
    msg.setTimeStamp(0.812118324387);
    msg.setSource(44980U);
    msg.setSourceEntity(23U);
    msg.setDestination(36189U);
    msg.setDestinationEntity(178U);
    msg.value = 0.00691886443926;

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
    msg.setTimeStamp(0.876804966836);
    msg.setSource(5566U);
    msg.setSourceEntity(122U);
    msg.setDestination(32110U);
    msg.setDestinationEntity(113U);
    msg.value = 0.668364631156;

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
    msg.setTimeStamp(0.0817897087528);
    msg.setSource(4576U);
    msg.setSourceEntity(78U);
    msg.setDestination(49233U);
    msg.setDestinationEntity(26U);
    msg.value = 0.253263389356;

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
    msg.setTimeStamp(0.361752014135);
    msg.setSource(39891U);
    msg.setSourceEntity(71U);
    msg.setDestination(31441U);
    msg.setDestinationEntity(196U);
    msg.value = 0.0528482723438;

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
    msg.setTimeStamp(0.310745775126);
    msg.setSource(13506U);
    msg.setSourceEntity(130U);
    msg.setDestination(54518U);
    msg.setDestinationEntity(68U);
    msg.value = 0.501559549872;

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
    msg.setTimeStamp(0.170094605802);
    msg.setSource(45349U);
    msg.setSourceEntity(57U);
    msg.setDestination(59062U);
    msg.setDestinationEntity(200U);
    msg.value = 0.00176932380319;

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
    msg.setTimeStamp(0.760252839081);
    msg.setSource(56211U);
    msg.setSourceEntity(113U);
    msg.setDestination(57390U);
    msg.setDestinationEntity(112U);
    msg.value = 0.0603565066868;

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
    msg.setTimeStamp(0.350486389186);
    msg.setSource(58638U);
    msg.setSourceEntity(57U);
    msg.setDestination(59998U);
    msg.setDestinationEntity(181U);
    msg.number.assign("MZPIODHQZZTVJCEIKGVUTWGSDMRCSMBPQENJBWDNOUUXWWTOVOSLXXZWYHTNUKZBYDXNULBJAJLQXZGHAYBXVESTFIZUSUUKCECARNVVYPTOBDMIQWCMRXHLTJTDIUIFMLJJKWJFXRFKJPFOWAASPQHHRAFGCEORDTYBZSIAEZPHBOKFKYMGOCHLQX");
    msg.timeout = 45166U;
    msg.contents.assign("BGWTYHHXDIQUYJPALJSTGLJLKRNFIFAKIWRIGVZDOUGBDPUHZWNNAVVWDICJPCLUMCCIXKUBVEFUTTUPCBQGTEYIHCYZARMZHHSDEHFXXNEUZODOOLKAQTXNRFIKLAMOMQNLXERSAXOKSYKBPLDCQREYWLIMONHGORBVTSGQEMZBVPYSVNDUWXEXFFGKPGZAHJKEPYYZWRI");

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
    msg.setTimeStamp(0.752491550262);
    msg.setSource(266U);
    msg.setSourceEntity(213U);
    msg.setDestination(17812U);
    msg.setDestinationEntity(149U);
    msg.number.assign("WEEMGRBQMVAEDPULCWRFQMQSWQXEABIUKVGXTBLQVMEKXXMXBQRDPUHFHJWCHXLTRUYCMCNVVMGDDZGACOAPSSPZLIPJHRYBYWTBTDKRZZUENGZJSIROEMAHFUSKEDCXAGZLZYWGPFWNQFZBXKCUBPJORFGKFNEQ");
    msg.timeout = 34909U;
    msg.contents.assign("RINBGAPGDJSIDDWBZFZXUWGNPGBQOEXOUZJQAJEKYOELVELDHCOCPLUFGFMPGPAJNEIQSKRMYYBLKTXIPBVZMTGRVDHYHMDNHYQITFSRLPJNXJUJTRZOTKNSXVKEWOYEAKQEXLYWUMDCKHMX");

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
    msg.setTimeStamp(0.810687960799);
    msg.setSource(14089U);
    msg.setSourceEntity(243U);
    msg.setDestination(12220U);
    msg.setDestinationEntity(174U);
    msg.number.assign("IFISEDWDDZYQGDSQBYSWJEXG");
    msg.timeout = 39221U;
    msg.contents.assign("OLIYRXMPFDMXGOFPTIVUZPJCKWJXUCDZNWWSFKNZSKNZRJXIOHKOMYWDETDJPYQNHUSAXOEFVRXGYLCYBDXLXYWEARQLSSAOIIIDTTOWAIAQVIDPMBJGRZOMMQAMBUCNEUKNTKPZKGDJRBTLWZFSCUSQRHBCYBVEPFVGSGHZQBEUWGZAAYIPNHHMLYMTFVBJEAL");

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
    msg.setTimeStamp(0.735523621485);
    msg.setSource(52586U);
    msg.setSourceEntity(5U);
    msg.setDestination(22910U);
    msg.setDestinationEntity(179U);
    msg.seq = 2271881571U;
    msg.destination.assign("VXGZQZJMBTKPXABEUGUPJDTZPSDYSOAWDEXPPKKXJWLMDNVSLURZMINCMSCROWWVCYFLOYHRDTRJLJPTKXESAYCJMYHAVAEHQKFUNBWUEBTZHDQNPLWRUCROGOLJIJJZGJVIOYRVOTZQIPSQNUUXKXNHLLBQHVMGWSYFFZGQTBQEE");
    msg.timeout = 22621U;
    const char tmp_msg_0[] = {87, 28, -88, -47, -62, -118, -42, -113, 31, 40, 17, 57, 7, -70, -116, -104, -82, -84, 13, 79, 25, -47, 6, 97, 115, 4, -34, -65, -65, 41, -121, 49, 86, 74, 53, -122, -44, -93, -7, 118, -31, 96, 2, 24, -30, 96, 5, 69, -21, -54, -76, -81, -125, 85, 95, -90, 112, -105, -23, -2, -21, -80, -54, 84, 68, 67, -119, 66, -69, -86, -31, -96, 17, 98, -92, -121, -30, 71, -5, -114, 46, 2, 99, -64, -98, -51, 109, -72, 28, -114, 84, 4, -40, 123, -4, -83, 51, -120, -110, 25, -17, -112, -101, -3, -71, 11, 28, 39, -115, 90, -99, -35, 26, -27, 8, -51, 21, -32, -41, 92, 28, 126, 24, -112, 10, 122, -1, -118, -53, -5, 117, -83, 71, -11, 74, -58, 60, 3, -58, -10, -107, 103, -38, 26, -88, 26, 18, 122, 6, 51, 58, 54, -13, 124, 14, 90, 109, 104, -45, -62, 55, -103, -20, -126, -99, 107, 75, -110, -99, 58, -128, 78, 63, 15, -83, -5, -47, -43, -63, -27, 31, -12, 1, 101, -118, 119, -4, 113, 126, -123, -5, 118, 9, -8, 101, 84, -76, -104, 92, 10, 73, 49, -8, -60, 47, -61, 6, -63, 22, -87, 110, -48, -15, -83, -100, -46, -110, 27, 27, -46, -50, -64, -93, -102, 89, 82, 43, -13, 14, -68, 38, -110, 10, -110, 74};
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
    msg.setTimeStamp(0.029173286688);
    msg.setSource(480U);
    msg.setSourceEntity(140U);
    msg.setDestination(59884U);
    msg.setDestinationEntity(157U);
    msg.seq = 1944685484U;
    msg.destination.assign("SUCAEHGTSFUTE");
    msg.timeout = 45528U;
    const char tmp_msg_0[] = {58, 48, 30, -75, -19, -4, -69, -21, 110, -123, 52, -40, -124, -123, 117, 126, 124, 23, -80, 49, -75, 19, 0, 43, 99, 117, -124, -110, 56, 27};
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
    msg.setTimeStamp(0.367940742672);
    msg.setSource(54934U);
    msg.setSourceEntity(69U);
    msg.setDestination(14880U);
    msg.setDestinationEntity(112U);
    msg.seq = 2929337008U;
    msg.destination.assign("RORCPFRPQPBPITBVZURNWKLLMFEJHWYKILLGERYURSQGMQMWAYMDEFOSPOVYZSKNZHYDWXOSHNCQXUOKQIVKFYOBKLXUYQDVSOBTGVIXHHPUKZCIXAUEYXRONZUZDAVUHBMBGFIHGAJWAKEVPKMSDICGIAQGTDVXKWUTWAOTIXMQJEBLVSLNGMWLTZHCJXZCNFWBPRUJMQGVCPRENDSTJJECBAFNTJSEHDFCNIQWOTNXYZYLJRMBCSFT");
    msg.timeout = 2189U;
    const char tmp_msg_0[] = {-101, -11, 28, -53, -117, -2, -22, -123, -61, -3, -95, 116, -124, 50, -36, -119, 85, 121, -3, -60, 106, -4, 24, 86, -46, -127, -117, -76, 78, -120, -99, -94, -105, 73, 9, 32, -31, 119, 54, 86, -103, -66, -125, 86, 15, -69, -44, 103, 89, -122, 66, -45, 69, 94, -110, 91, 29, -122, 85, 26, -9, 4, -75, 124, 42, 83, 95, 116, 18, -12, 23, 74, -4, -104, -74, -121, 63, 3, -55, 5, -11, -49, 34, 59, -72, -56, 62, -41, 8, -33, -34, -25, -115, 42, 69, -123, -120, 12, 64, 89, 39, -29, -83, 33, -47, -118, 74, 94, -115, -27, -44, -83, 42, -118, -3, -8, -69, 89, -47, 65, 59, -115, -77, -46, -29, -111, -64, -31, -91, -106, -122, -54, -128, 88, -125, 119, 27, -110, -51, 85, -46, 124, 33, 56, 5, -12, 86, -95, -38, -113, -57, -3, 45, 89, -53, -33, -50, -116, 43, -39, -16, 80, 33, 77, 101, 101, -29, -29, -23};
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
    msg.setTimeStamp(0.573197650206);
    msg.setSource(1664U);
    msg.setSourceEntity(1U);
    msg.setDestination(32085U);
    msg.setDestinationEntity(164U);
    msg.source.assign("YYKVLPZEVQX");
    const char tmp_msg_0[] = {64, 20, -106, 12, 58, -121, 26, 89, -110, 51, 101, -93, 84, 9, 22, 124, -88, -114, -71, -115, -80, 85, 110, -23, -51, -71, 105, -105, -95, -10, -59, -55, 109, -42, -125, -26, -62, -91, -1, -73, 50, 83, -18, -55, 40, -11, 94, 108, 105, -124, -89, -9, -86, 34, 8, -118, 46, 84, 71, 108, 9, 107, 112, 115, 55, 99, -36, -9, 122, 16, -74, -58, 76, -37, 92, 96, -87, -117, -38, 103, 98, -28, -100, -124, -122, -12, 82, 91};
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
    msg.setTimeStamp(0.879645354008);
    msg.setSource(44039U);
    msg.setSourceEntity(77U);
    msg.setDestination(9765U);
    msg.setDestinationEntity(117U);
    msg.source.assign("HRILYJKHDPSBNCYDFYOSJYGTEILVJJVITLOPBXUTPVLOCGGQKNBEKTOELGWJAGPVSDFYIPBHAKEJUCIARWDRKTHXLBCWPAUUYQPNMRRTJZHLXZWQQKOPKRHXRYZODIBMIZFRQQJCMOXNKYNCARDGDMHFIMZZGZWLDSGSXEWXNTDUANRWPTFVDOBWYXWWSCUVGHOFTVEUYFUAMBUEUZSPKMONVQMBTFAQSIESKBNZLIGHJXSLMACNHVE");
    const char tmp_msg_0[] = {15, 118, 37, -12, -68, 55, 11, -45, 76, -90, -22, 74, 3, 99, -30, -29, 108, 91, -107, 93, -31, 47, 102, -27, -53, -97, 95, -36, 7, -122, 99, 27, -15, 30, -36, -114, -42, 29, -25, -88, 3, 70, -53, 73, 38, 74, 120, -14, -10, 75, 36, 95, -118, 79, 15, -103, -48, 84, 69, -33, 115, 11, -15, -125, 51, -128, 13, 68, -9, 121, -46, -119, -127, 29, -45, -50, 58, -104, -61, 81, 26, 96, -38, -32, -83, 64, -11, -34, -95, 66, -121, 79, -71};
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
    msg.setTimeStamp(0.0363027530373);
    msg.setSource(21024U);
    msg.setSourceEntity(220U);
    msg.setDestination(14459U);
    msg.setDestinationEntity(64U);
    msg.source.assign("ZHLTZTKGKOUBVLIUCZIIXF");
    const char tmp_msg_0[] = {30, 2, -92, 44, 69, -124, -125, 123, -80, 123, 8, 9, 77, -66, -63, 39, -20, -101, 26, 79, -21, -80, 96, 17, -64, 120, 61, -19, 112, -122, -8, -72, -76, -119, 44, -53, -43, -7, -24, 25, -86, 41, 34, -45, -109, -40, 93, 17, -21, -54, 63, 104, -71, -3, -84, -73, -4, 1, 40, -84, 25, 125, 84, 112, 82, 122, -13, 42, -58, -83, 96, 19, -32, -48, 78, 75, 17, 88, 95, -44, -2, 15, 91, -52, -16, -18, -5, 36, 56, -25, 67, -105, 59, -76, 17, 103, -3, -27, -41, -102, -24, -27, 11, 95, -26, -79, 21, -37, -87, 0, 39, 102, -93, 110, -37, -92, -32, -13, 8, 82, 41, -122, 100, 99, -59, 54};
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
    msg.setTimeStamp(0.61019881828);
    msg.setSource(59216U);
    msg.setSourceEntity(175U);
    msg.setDestination(2980U);
    msg.setDestinationEntity(95U);
    msg.seq = 1171385342U;
    msg.state = 102U;
    msg.error.assign("YDCFFKEQRIJ");

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
    msg.setTimeStamp(0.406887799307);
    msg.setSource(31014U);
    msg.setSourceEntity(34U);
    msg.setDestination(38134U);
    msg.setDestinationEntity(130U);
    msg.seq = 3321828627U;
    msg.state = 113U;
    msg.error.assign("LJCQHRSDOSIPQWCNVOAOMRGMOEMFCYQVUPZKVAVFRIMEPBERUXNUAPJTDLOFNKRAVXJTECZUBYSWCDIEGXBXVYQSFQPIRCHKNTZAOGGQTXSSHIDEYMEECTLXZWYTTBGEODS");

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
    msg.setTimeStamp(0.3663808688);
    msg.setSource(63302U);
    msg.setSourceEntity(157U);
    msg.setDestination(36893U);
    msg.setDestinationEntity(42U);
    msg.seq = 264795434U;
    msg.state = 38U;
    msg.error.assign("WJBOTLOPJVVGVBRBLWMYNPMQHQVIQGDKPRSSCFZMMXTVIVCEXUHGAJJMDQPAVXWLOPUYPEFPZGGAFYDGFAHXNDLJWEARBNBDJSRXKSWVSMQZAICGULIEBYTPDLIIYWGBKKCKKSQGHRIJFJXELNRUUOHQDOSJCCZOATOEYCAQIDMHUFWM");

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
    msg.setTimeStamp(0.630817960118);
    msg.setSource(10969U);
    msg.setSourceEntity(192U);
    msg.setDestination(58479U);
    msg.setDestinationEntity(11U);
    msg.origin.assign("YCQTNMVYITWFQYIGMMKXYSONZDWOHGTZKGJYGASDBONPVCHCCOLFRORASJSFSPPSSWENFEFVEKBPRDWTGAOJFVWBKEFNECDUIWLUACMUUDXVVVYIEHOANGHDNMMAIEPJHFPLYWHLTCGVCBUEIPDNOBRGXMZLTRQLKERRDXAQKHMFQWAUKJBMARDQPUGHSTIJQBZKUBYWQZITPJQZFGYBXVSUCBQMWNZRVKXXAZPXHJOSTNILTLIKJDELOZ");
    msg.text.assign("AIHQORAQYIRTHNRFUNYPWIVJZBZYHHAMJEGHJZRNZTJHWMEDVLFNBJDMIALEFIBQSYFFTKQSPZEDHOHGBJRVOEZFNHOLZCENQMUGVTKOTLCIXQWYATEQMFTDDTXVSLLUUSYGNCIOLPBFVDKNMUXZDPCSENRCQWKJYIKWX");

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
    msg.setTimeStamp(0.992472429938);
    msg.setSource(41663U);
    msg.setSourceEntity(156U);
    msg.setDestination(44120U);
    msg.setDestinationEntity(123U);
    msg.origin.assign("AXITTRGOCXZYXDAJTNDKFXVUYOHXFZWQTWQYARMSEIMZLUOPOSADCOLRUBKNHWRIJTHJEPBZSYNPSPSMGIALKVAVCNIDNAJENFLQXMRBVDCFSVGIGNKITOZMQIFBWEUHBCEJUAELTAQWKGRRZLFOKHVTEUSKRMLGCDUEHHTHUVBBYEMDJPWZQDNAQFRIKOBPYCFPJ");
    msg.text.assign("EIOFYUWOSDAHOSNBQQASDRAMVEBXJVOCYJXMGJIHSTHGDRYUCLNHBLMAFDXXFUSEYKXNUPNTIAGZIPFBLSUUGDSBQTXBETOQFWZLMZWZRLWSXNTTEZEECPMIMAEIYZCYUUVQGYQKGWTUJCPDKKJWGBAWFCMLGKOJYFLNRRNHRVIKRWMVBJQIXQPAAEMKIOVWPAHPDCPVDWLUZOTYCBZTPS");

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
    msg.setTimeStamp(0.763268002081);
    msg.setSource(49467U);
    msg.setSourceEntity(213U);
    msg.setDestination(630U);
    msg.setDestinationEntity(254U);
    msg.origin.assign("YOYLZAMARQDDJLENFALOALQGSXWJXHTMBXNRCEXKPVQFDWUGIYEFFMEZXNTCYDKIHXVWZGZTVHPLZORQBNRPCVLUMAOPKIFVSPVNSGIXZCANBISERFKLFWUOHJKVQEUKADRUSMWZKGPYIKZCMQIJILSUCPJDJEJSWYXYCPQESDWRKATGETIKBUVRBQJOEIZMRAFWROTPVUTGCHGMXOJTFOTCNLUHSXZBJHOYVTWBN");
    msg.text.assign("ZSAMBEULJEMVMWRNDNTZIJKNXZVRUKFEWZEUESWGQPAIQBUHIKYUGZMWHBKVTPOTWGAQAHDASKYPRG");

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
    msg.setTimeStamp(0.688223953714);
    msg.setSource(2395U);
    msg.setSourceEntity(191U);
    msg.setDestination(48559U);
    msg.setDestinationEntity(139U);
    msg.origin.assign("ADXVNAAKWDEIGULKOAZNIQKEMOEBDTOBJRIP");
    msg.htime = 0.212876890915;
    msg.lat = 0.474293655581;
    msg.lon = 0.569943498478;
    const char tmp_msg_0[] = {-82, -114, 111, 101, -16, -36, -87, -1, -45, -124, -60, -19, 48, 68, 87, -116};
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
    msg.setTimeStamp(0.636991262731);
    msg.setSource(32393U);
    msg.setSourceEntity(232U);
    msg.setDestination(17887U);
    msg.setDestinationEntity(24U);
    msg.origin.assign("QQILSAYSIEDLTWJUJKQRVUKHPYCDYFCZZIDSXAXXBDPJGRUGOOXYKOGTWOBTQEGFQSMGUIPBVORZFHHIWNMHWVLFVZGNPPYGJMPFPUPZNPAALWCMQDOIQLDCBJKOISASCHFMMJLHZPSBYFNTWOCJKXEKLVIBVLUNELKMYUANCHUTEEFRMMDYUGQVMRTCCJAHVRQKSONCWKRXBFEVZZEXXGTNRTWWVXHJR");
    msg.htime = 0.93280217024;
    msg.lat = 0.739085408763;
    msg.lon = 0.430147644899;
    const char tmp_msg_0[] = {5, 78, -48, 11, 25, 115, -108, 74, -104, 113, -108, 105, -12, 1, 28, 120, 64, 18, 95, 115, 88, -11, -54, 38, 114, 12, -9, -42, 58, -51, 57, -118, 76, -14, 51, 124, -56, 40, 67, -63, -60, 55, -48};
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
    msg.setTimeStamp(0.697583116914);
    msg.setSource(20938U);
    msg.setSourceEntity(80U);
    msg.setDestination(42553U);
    msg.setDestinationEntity(125U);
    msg.origin.assign("XLHROAITCHWLLFXLHUYGYVQYBEJEIPCWUTFEUQPRANVGLEOIBXMBHZZWDTNRQGTIJOSHJPRJKSPASXNXEQDDAYGZORCZQS");
    msg.htime = 0.917937571239;
    msg.lat = 0.45188512371;
    msg.lon = 0.117463996273;
    const char tmp_msg_0[] = {47, 11, -83, 34, -22, -89, -99, -47, -113, -100, 21, 39, 22, -102, -71, -40, 83, 22, -111, 49, -108, 45, -90, -73, -112, -74, 35, 121, 75, -4, -32, 4, -74, 22, -68, 107, -59, -26, 111, 29, 126, 40, -49, 49, 105, 55, -63, 11, -115, -36, -77, 39, 72, -101, 2, -121, -99, 45, 69, 37, 29, 65, 83, 2, 36, 12, -8, -120, 94, 0, 31, 38, 68, -80, 38, -86, -29, -108, -124, -50, 92, -104, 29, 43, -113, 94, 106, 46, -38, 69, -10, -79, 14, 77, -54, 74, -44, -84, -39, -1, -26, -93, 75, 120, 73, -61, 28, -91, 27, -96, -19, -71, -29, -115, -24, 25, 66, -20, 69, -60, -109, -36, -108, 100, -13, -72, -80, -22, -19, -93, -29, -109, -106, 39, -103, 123, 33, 28, 126, -3, -117, -88, 11, 28, -53, -84, -87, 30, -109, -21, 112, -113, 90, 12, -13, -64, 38, 10, -65, -56, -3, -5, 80, 59, 30, -111, 107, 54, 8, -60, 25, -6, 119, -100, -127, -20, 38, 88, -111, -126, -39, -30, -60, -78, -26, 100};
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
    msg.setTimeStamp(0.8046014966);
    msg.setSource(6568U);
    msg.setSourceEntity(131U);
    msg.setDestination(63019U);
    msg.setDestinationEntity(217U);
    msg.req_id = 63731U;
    msg.ttl = 44491U;
    msg.destination.assign("CIBIWTOEQPNNEGBFFBEGQTUWBNYUEUIHNAZNRJCGYZRWCXXTAMSNPRDJPVBCYMQDHPGFZVMLLDOAAOWDBOLJHTKNACOCUZVZNJJQBWOSPKAQJCVDPBEQRGVVZUUWSRIWRKKHFGOMSDNYHJTCGPZAFTIOELABXTPFIMYNSQAEMOHUZHF");
    const char tmp_msg_0[] = {-24, -20, -95, -53, -14, 88, -110, -64, 87, -24, -85, 110, 116, -23, -92, 119, 109, 15, -100, -89, 105, 79, -126, 20, 73, -114, 6, 69, -38, -104, -118, -104, -92, -54, 77, -8, -74, 58, 31, -18, 33, -93, 6, 126, -61, -54, 43, 70, 126, -123, -67, -7, -28, -2, -13, 35, 122, 9, -12, -79, 105, 98, 97, -42, 7, -102, -16, 69, 72, 89, 74, -94, -57, 32, 30, -3, 69, 28, 40, -80, 40, -112, 94, 55, 84, -82, -8, 42, -39, 75, -65, -102, 96, -109, 76, 65, 83, 117, -57, 73, 10, 59, -38, 90, 76, 60, 79, -30, -19, 90, 124, 58, 64, 68, -52, -55, 84, -122, 84, -8, 62, -23, -50, 95, -48, 93, 10, -116, 112, -56, 95, 67, -117, -75, 28, -104, -104, -34, 111, -51, -100, 26, 117, -91, 6, -68, -31, 110, 94, 43, 101, 37, -69, 124, 61, 35, 26, 119, 59, -58, 17, 53, -105, -113, -108};
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
    msg.setTimeStamp(0.416105235316);
    msg.setSource(16734U);
    msg.setSourceEntity(99U);
    msg.setDestination(50839U);
    msg.setDestinationEntity(194U);
    msg.req_id = 32257U;
    msg.ttl = 19467U;
    msg.destination.assign("ZEUJCXMIVOVEOPXRXTYJ");
    const char tmp_msg_0[] = {30, -68, -32, 114, -111, 118, -30, -100, -118, 80, -57, -115, 110, 97, 123, 80, 75, -87, 49, -22, -23, -52, -5, -75, -90, 0, -109, 2, 60, -20, 64, 75, 107, 27, 12, 53, 92, 90, -14, -77, -5, 62, 12, -70, -51, 11, 61, 3, -53, -84, -18, 98, -55, -102, 8, -70, -37, -27, -36, 79, 35, -82, -105, -36, -51, -89, -32, -79, 72, -5, 106, 71, 51, -58, -107, -30, 102, -125, 54, 86, -115, 26, -128, -90, 121, -128, 47, 109, -22, -34, 56, 109, -41, -64, 48, -12, 112, -36, 36, 108, 109, 81, -48, 36, 80, 41, -97, 69, -63, 2, 98, 26, 72, -115, -105};
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
    msg.setTimeStamp(0.0159025359394);
    msg.setSource(10479U);
    msg.setSourceEntity(37U);
    msg.setDestination(39U);
    msg.setDestinationEntity(25U);
    msg.req_id = 16868U;
    msg.ttl = 32294U;
    msg.destination.assign("KWEHDTKLJYGSNJTXIPREYNCSYDOIRMEZOVFOJKGDWRXFQBCADECYPOLPFWBDINVFCUBKKCVOQIHDLTNUDDZC");
    const char tmp_msg_0[] = {77, -71, 120, -32, 79, -6, 33, -19, -108, 73, 15, -90, -62, 0, -58, 13, 33, 121, -75, 19, -48, 56, 33, -88, -95, -51, 31, -57, 115, 111, 126, -59, -49, -51, -90, 76, 62, 48, 35, -94, 94, 77, -104, -24, 87, -80, 14, 33, -67, 94, -18, -51, 50, -45, 47, 47, 75, -26, 96, 38, 72, -61, -107, -23, -121, 116, 6, -4, 92, -106, -106, -30, -127, 107, -32, -79, -116, 119, 68, 58, 91, -10, -34, -55, 3, -88, 11, -26, 42, -38, -65, 125, 124, -81, 96, 7, 80, -54, 45, -126, 17, 0, -97, 17, -11, -86, -113, -36, 112, -96, -35, -69, -13, -3, -94, 23, 25, 119, 5, 46, -97, 10, 99, -4, -71, -108, -16, -87, -87, -1, 59, -18, 56, -31, 9, 44, 45, 35, 113, -64, 15, 126, -73, 53, -9, 84, -71, -125, -10, 52, -3, -14, 73, 83, -3, 65, -22, 66, -84, 115, -19, 22, 99, 46, 57, 118, 91, 123, -92, -49, 71, 22, 16, 63, 111, -108, -1, 58, -95, -37, -21, 90, 41, 57, -85, 112, -104, 59, 1, 40, -82, -11, -7, 52, -79, -88, 23, -110, -76, -70, 81, 58, -42, -82, 84, -84, 6, 91, -65, 43, 42, 24, -66, -116, -70, -94, -66, -7, 76, -80, 90, -11, -78, -20, -96, -121, 14, -29, -81};
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
    msg.setTimeStamp(0.79158858994);
    msg.setSource(60142U);
    msg.setSourceEntity(6U);
    msg.setDestination(56819U);
    msg.setDestinationEntity(50U);
    msg.req_id = 38959U;
    msg.status = 38U;
    msg.text.assign("DJRTWWZMSHOGXEBJLKBANHNAWSDUVYNLDSKVPFHYJNDBSFEUIHKVPTEGBCJXWGFEYKQTHYQYVCRQIKZOKMLQUUWELVCPOCTAXGZZPSIUCTPGYCQFHHZNJEKQOMXYUEJXRWNDRBFVNHZMYRSAHBIZYVM");

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
    msg.setTimeStamp(0.474679179721);
    msg.setSource(50332U);
    msg.setSourceEntity(172U);
    msg.setDestination(33413U);
    msg.setDestinationEntity(140U);
    msg.req_id = 25178U;
    msg.status = 169U;
    msg.text.assign("UIHZXROOUNVIFSDCZCWDGYMVF");

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
    msg.setTimeStamp(0.0542365822203);
    msg.setSource(2473U);
    msg.setSourceEntity(33U);
    msg.setDestination(59398U);
    msg.setDestinationEntity(194U);
    msg.req_id = 32994U;
    msg.status = 155U;
    msg.text.assign("RVLNDKKAQOGLVRJSKOBZNCUIMJWHGKPPXYCJTDDEOMPJEJFYMLHBYDSNGUJAOMQRQZXLTAPCUGSZWUMIS");

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
    msg.setTimeStamp(0.899835513069);
    msg.setSource(10491U);
    msg.setSourceEntity(83U);
    msg.setDestination(51988U);
    msg.setDestinationEntity(254U);
    msg.group_name.assign("ESYXKNREPXWYNMNJPQLATPLBDNLZBWGZPHIGDGZSMVWYUHWFUBASUHPTBNBECTOFUHBGFFCXQGCFNMRRLKPPIEEOUOIWOMBQKDJCYNSKVDZCJEUOZHVCLXTGSFROKZJGQAUXFJOXRGYNQVDMCRDTCTQKWYFISOVXAITHUDJSEAPHIWIRRJAKOXCPLRKZLXAZHGOYVKBTAZZQDSGWEMMIHUMME");
    msg.links = 934198026U;

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
    msg.setTimeStamp(0.414991996325);
    msg.setSource(52668U);
    msg.setSourceEntity(40U);
    msg.setDestination(35613U);
    msg.setDestinationEntity(181U);
    msg.group_name.assign("SWIRDNRGDNIKESRGMVOULXWLUNYNLYLHTXXLKPHCHIHITBCXAVMGMOJKTXQQEZEQXOFIHSGKPJZURLAWOXIPGSYHAVQCFDOKYMNRVJFKGZBWNGZXPATBYCOAAAQEJISTFDZPCEHRVKQLFUEOZPJZV");
    msg.links = 3536882119U;

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
    msg.setTimeStamp(0.579422973415);
    msg.setSource(26286U);
    msg.setSourceEntity(5U);
    msg.setDestination(57632U);
    msg.setDestinationEntity(148U);
    msg.group_name.assign("DYZULDKEGOINOZKBJFMICGJSXDGEWQCIJAZMVHJMDLXAYZDKVTWGGTBUAUCKKEKNWPVYRJCHXZQFPJRNJZVTTIVHSLGTPNLDCUFFLWIJXPJPYZTSFQZETZUCQROSEDLRHFNERHGTAGWPSOSLUCRAWTAWBZGIQHKDOFCISUGQBACYRRKQVBSBLWNEUSUJXXHMLBDKBAUV");
    msg.links = 1855261302U;

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
    msg.setTimeStamp(0.167403141088);
    msg.setSource(9525U);
    msg.setSourceEntity(179U);
    msg.setDestination(17583U);
    msg.setDestinationEntity(156U);
    msg.groupname.assign("CNZMIIRTZZKYHQIWMVJFWYKRZFXADELUXNRZKHYBCOVKXGFNBBYDJVIATWOVBTKAQXTQRDDTGDWLXBKDYZCIRSESPMRUFRNXGSQJCAFRIGYFFEOXHMHSJEUMTMPJPAZVILVDLPPWYZDNOAXHOWSVTHOKPGGMCQOSDLJLSPIGKUJDAQSBHHWTXOZBFIHFOARCIPQLVVEOUGMSWH");
    msg.action = 213U;
    msg.grouplist.assign("LWCGTSQGYSMJGPNMWEFAWAZSMGY");

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
    msg.setTimeStamp(0.214016260996);
    msg.setSource(28509U);
    msg.setSourceEntity(175U);
    msg.setDestination(1451U);
    msg.setDestinationEntity(121U);
    msg.groupname.assign("GZNZJXVHAMLZZZRTQQIUYBAXOUDMQNGBWIEWBOJREDXIVLPMIWDCGEGYVVVPBULOWHTXHDPAIPZPWKLJHJYQSMBCYSJNFBFKKBYFUUVXHZKKSSFEJPEEOIOUKILNANUWRQPXTIKDLTFCNGD");
    msg.action = 99U;
    msg.grouplist.assign("JTJPUFKFBMXSMQIWDHSSEPS");

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
    msg.setTimeStamp(0.284836162966);
    msg.setSource(49324U);
    msg.setSourceEntity(215U);
    msg.setDestination(32286U);
    msg.setDestinationEntity(62U);
    msg.groupname.assign("ILANSWEHCWXVUMWMPQGQWYSRWMZOVRQBYNZPGOIV");
    msg.action = 211U;
    msg.grouplist.assign("SAURIKMSZFRJBUVKHFBHKZDKIFSTSLRHCAKHEBERCJDTFATZYUYVRMBMXTCQXQTBLXRFTUIHWIYUUATGWWMRWPIGGOJAPDAENUOTJUOQPGJSOCMOKNCUPNEALJYIESCWPLGBEVJVBVOWJDMDILVAMVZGHOMKPNDZDVTXDZRJKZNQIXWQOPYEBEISQGYPMYXLHASZLFJ");

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
    msg.setTimeStamp(0.547039636963);
    msg.setSource(50197U);
    msg.setSourceEntity(173U);
    msg.setDestination(47013U);
    msg.setDestinationEntity(95U);
    msg.value = 0.044776041053;
    msg.sys_src = 33973U;

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
    msg.setTimeStamp(0.13178690061);
    msg.setSource(41170U);
    msg.setSourceEntity(79U);
    msg.setDestination(42009U);
    msg.setDestinationEntity(13U);
    msg.value = 0.44836886882;
    msg.sys_src = 20850U;

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
    msg.setTimeStamp(0.112048487598);
    msg.setSource(62809U);
    msg.setSourceEntity(46U);
    msg.setDestination(8530U);
    msg.setDestinationEntity(122U);
    msg.value = 0.964268734715;
    msg.sys_src = 8154U;

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
    msg.setTimeStamp(0.299723129478);
    msg.setSource(57117U);
    msg.setSourceEntity(219U);
    msg.setDestination(2225U);
    msg.setDestinationEntity(15U);
    msg.value = 0.496263761639;
    msg.units = 154U;

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
    msg.setTimeStamp(0.454018639879);
    msg.setSource(29572U);
    msg.setSourceEntity(216U);
    msg.setDestination(56823U);
    msg.setDestinationEntity(239U);
    msg.value = 0.772002060353;
    msg.units = 134U;

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
    msg.setTimeStamp(0.527432908618);
    msg.setSource(9466U);
    msg.setSourceEntity(200U);
    msg.setDestination(18357U);
    msg.setDestinationEntity(81U);
    msg.value = 0.486518547621;
    msg.units = 27U;

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
    msg.setTimeStamp(0.139295793672);
    msg.setSource(26586U);
    msg.setSourceEntity(174U);
    msg.setDestination(4607U);
    msg.setDestinationEntity(71U);
    msg.base_lat = 0.88491694721;
    msg.base_lon = 0.254161959437;
    msg.base_time = 0.858807020114;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 52401U;
    tmp_msg_0.destination = 3315U;
    tmp_msg_0.timeout = 0.732356880753;
    IMC::ClockControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 96U;
    tmp_tmp_msg_0_0.clock = 0.829493019805;
    tmp_tmp_msg_0_0.tz = -78;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.817417924582);
    msg.setSource(55482U);
    msg.setSourceEntity(71U);
    msg.setDestination(58033U);
    msg.setDestinationEntity(127U);
    msg.base_lat = 0.170408528601;
    msg.base_lon = 0.382151851287;
    msg.base_time = 0.996392749894;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 6416U;
    tmp_msg_0.priority = -124;
    tmp_msg_0.x = 12368;
    tmp_msg_0.y = 14208;
    tmp_msg_0.z = -30788;
    tmp_msg_0.t = 2523;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.580267407037;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.360297125843);
    msg.setSource(50868U);
    msg.setSourceEntity(203U);
    msg.setDestination(45983U);
    msg.setDestinationEntity(152U);
    msg.base_lat = 0.43751616963;
    msg.base_lon = 0.443057071766;
    msg.base_time = 0.190424942212;

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
    msg.setTimeStamp(0.0330705145762);
    msg.setSource(40943U);
    msg.setSourceEntity(86U);
    msg.setDestination(50537U);
    msg.setDestinationEntity(21U);
    msg.base_lat = 0.125280050058;
    msg.base_lon = 0.533052499538;
    msg.base_time = 0.673563673004;
    const char tmp_msg_0[] = {82, 121, 84, -6, -73, 60, -51, 110, -56, 39, 33, 7, -24, -48, 60, -125, -10, -45, -100, -67, 94, 96, 11, 2, 101, -34, 47, 19, 68, -86, 58, -52, -49, -24, -107, 29, 120, 91, -43, -112, 16, 60, -58, 57, -93, -61, 115, -103, -59, -88, 57, -84, 8, 80, 104, 37, 53, 113, 11, 82, -24, 107, 16, -11, 76, -76, 121, 125, -55, 3, -24, 74, -68, -117, 109, 103, -17, -34, -73, 59, 106, -10, 0, -87, 30, -71, -124, 120, 73, -114, -66, -60, -53, 46, -105, 16, 45, -112, 119, -16, 117, -114, 115, 42, -58, -53, -13, -47, -124, -91, -35, 35, 53, -99, 70, 40, -20, -11, -99, 23, 90, -103, 84, 27, 28, -92, -100, 18, 70, 48, -6, 12, -87, 80, 116, 48, 71, -34, 22, 9, 56, 0, -39, -89, 15, -113, -125, 97, 15, 81, -45, -14, -49, 56, 25, -27, 34, -1, -98, -60, -18};
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
    msg.setTimeStamp(0.329282210281);
    msg.setSource(58815U);
    msg.setSourceEntity(100U);
    msg.setDestination(65011U);
    msg.setDestinationEntity(91U);
    msg.base_lat = 0.993190491475;
    msg.base_lon = 0.60977361973;
    msg.base_time = 0.163660788209;
    const char tmp_msg_0[] = {-118, 4, 121, 54, -127, -12, -27, 42, -37, 116, 8, 40, -58, -99, 61, -41, -115, -39, 104, 15, 79, 78, 48, -45, 22, -64, 94, -61, -53, 26, -71, -37, 110};
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
    msg.setTimeStamp(0.818162500188);
    msg.setSource(17242U);
    msg.setSourceEntity(79U);
    msg.setDestination(2468U);
    msg.setDestinationEntity(29U);
    msg.base_lat = 0.0561157141246;
    msg.base_lon = 0.453551522267;
    msg.base_time = 0.0528773972751;
    const char tmp_msg_0[] = {-121, 2, -3, -83, -99, -106, 75, -21, -122, -15, 38, 103, -126, 79, -121, 113, 68, 59, 53, -104, -102, -48, -125, 27, -3, 53, 86, 90, 121, -125, -6, -21, -26, 77, 49, 75, 18, -5, 34, -8, 11, -58, 66, 67, -124, -84, -74, 75, 86, -5, -75, -71, -63, -121, 61, 108, 124, 67, 25, 5, -45, 51, -16, -80, -64, -83, 121, -16, -100, 61, -8, -105, -48, 110, 123, 54, -114, 102, 10, -31, -76, -21, -60, -29, 49, -74, -77, 118, 50, 7, -63, -119, 84, 50, 6, -19, 11, -47, 94, -91, 81, -19, 58, 66, 99, 83, -65, -51, -120, 22, -12, -86, 19, -15, 40, -12, 54, -84, -30, 90, -62, -103, -72, 28, -83, -50, 71, 108, 99, -125, -30, -16, -5, -93, -22, 33, 20, 80, -85, 2, -36, 91, 110, 42, -40, -103, 85, -114, 40, -74, 23, 59, -46, -83, -115, 33, 106, -31, 126, 126, 112, -41, -58, -14, -5, -126, -21, -89, 116, -57, -108, 70, 100, -92, -99, -3, -79, -15, -44, 66, 69, 68, -112, 125, 15, 60, 58, 72, -40, -22, 60, -60, -120, -109, 77, 101, -110, 73, -92, -89, -34, 92, -88, -1, -63, 48, -31, -26, 81, -34, -60, -19, 68, 74, -73, -98};
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
    msg.setTimeStamp(0.390512799933);
    msg.setSource(10401U);
    msg.setSourceEntity(58U);
    msg.setDestination(45856U);
    msg.setDestinationEntity(3U);
    msg.sys_id = 58213U;
    msg.priority = 51;
    msg.x = 26156;
    msg.y = 16652;
    msg.z = 23084;
    msg.t = -30308;
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.714078605764;
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
    msg.setTimeStamp(0.22501998344);
    msg.setSource(37128U);
    msg.setSourceEntity(14U);
    msg.setDestination(4038U);
    msg.setDestinationEntity(199U);
    msg.sys_id = 7052U;
    msg.priority = 75;
    msg.x = 1831;
    msg.y = -25520;
    msg.z = 3309;
    msg.t = -4444;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 2963058938U;
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
    msg.setTimeStamp(0.265350249821);
    msg.setSource(31729U);
    msg.setSourceEntity(194U);
    msg.setDestination(50409U);
    msg.setDestinationEntity(198U);
    msg.sys_id = 24305U;
    msg.priority = -48;
    msg.x = 17167;
    msg.y = -1010;
    msg.z = 24921;
    msg.t = -3791;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.275982561649;
    tmp_msg_0.base_lon = 0.0443831980399;
    tmp_msg_0.base_time = 0.682191922594;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 16717U;
    tmp_tmp_msg_0_0.priority = -68;
    tmp_tmp_msg_0_0.x = -11826;
    tmp_tmp_msg_0_0.y = 13577;
    tmp_tmp_msg_0_0.z = 29692;
    tmp_tmp_msg_0_0.t = 17947;
    IMC::PlanSpecification tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("WQSEVCRMNFWPOYQTCASDELWZEZWWIUEVVMUFIPUFAENALRQTPOFWSFNJKMDFYJKNDOBGJ");
    tmp_tmp_tmp_msg_0_0_0.description.assign("AYTUPNVMFHHYRCJHKWEXXUGGINRSTNOPDPRKBXDGSBIBJQSZMDGUYRMTADVIQQIEJYVMHZAPSAPOZZAZYKOSDOFWQCUWTPTWREFMZLYFJCOOFLQOHHUWXZXLWLFBNPGLCJQMTVEYVQSXUMTQWVLUDBRJXTEDSCFWJUAYDPNCAKCFIZKVWCHALNOXEDKYGQSEPNIVJNMUJIMPVNBQCISTWKUZZKEHRGREB");
    tmp_tmp_tmp_msg_0_0_0.vnamespace.assign("TDJTIOVIENBFBNNREYOWZTGGKWEZWVODICSLUEKUDINQZZXQYGIEFWPTUCFUKXXOQJFFUTLANORPFGRWGIGJMLADPAHNEAKUBSPDTXCVFEHMFRQCSTEUMKHDBIPOXQCMYVYDQGTWH");
    IMC::PlanVariable tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.name.assign("BJEXMRGRIGVSLEYKEDGFPKCEMUJSPXDLODRZIQLHIEGZIVVTOAOOVNXJCKTRSXMHPKXTWLYTNIBQNPWGUMZJMOFNPBBUBNOUJRIWPKBRCAFDDILQZCEHYLSETHYLDACJSMVLKJGONZA");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value.assign("PVICRTTBSUAPFTNUCKDVOPJKTRHVAQYZFMVZZOEILB");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.type = 104U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.access = 136U;
    tmp_tmp_tmp_msg_0_0_0.variables.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.start_man_id.assign("HXRTYLISTUWXFWTOOEPAICTQHEIXKCQARYCQFHBZGLZJUMEFVIGRSUXYQEGDTKGSNUWVHACEKENKATIQAUMHZKOSWDANXBCGFJZJMKYVRFOPUSVBBNPVWMRLIVDBJEPFVCSASLRXBAMQKHIQYGONXZDLLROSUQYXRIFQCEUULBSWNLXTDCMBOEPNFKQDLJWFTOZPPUZJIOIVMHWPGHWNMRYKGCYXMYJZPESBAHADPVGKTJZDMWNR");
    IMC::PlanManeuver tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.maneuver_id.assign("XAOYMXSAFKXPDCTPFGSRZRILYOHFTODYALDYZQRGIVUFWRTNA");
    IMC::FollowPoint tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.target.assign("NEPUFKVKQUOIYGVWOIWRFSQRRNSLTCIGKQFRXVXWULNCKGWRDBOAHCQXRAXXDAENXBLZETDOYKQZVDVLKJENZ");
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.max_speed = 0.0388910610615;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.speed_units = 17U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.lat = 0.0918124314315;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.lon = 0.824683297263;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.z = 0.397978354419;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.z_units = 128U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.custom.assign("BNZPSOERZACOCSPHFTPEHLAPJRIUOACVKDEPBYYBOTGKWCGIFXDJSQQWKMGQCHORSOZZUYPHMGIPDITSEOTWGJOJBTFKLEZWUUUZNXBXIXEKBQYGFZFAAWASRFYKXQNJLKXJHDJKVVMHWWCHIMCLVYDDRBWSMTKOHLRJCVMLYBSVNQNGNDULYNNYQTXERIFDAFUDMEGUQTILVWNVVZEMJCPVBMJUYSHTRNGLARABFAZL");
    tmp_tmp_tmp_tmp_msg_0_0_0_1.data.set(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0);
    IMC::UASimulation tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_1;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_1.type = 213U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_1.speed = 44982U;
    const char tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_1_0[] = {65, -74, 99, 45, 111, 71, 103, -30, -113, 82, 49, 77, 100, -108, 16, 120, 60, 49, 58, 49, -67, 3, 72, 81, -11, 100, -50, -1, 120, 49};
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_1.data.assign(tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_1_0, tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_1_0 + sizeof(tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_1_0));
    tmp_tmp_tmp_tmp_msg_0_0_0_1.end_actions.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_1);
    tmp_tmp_tmp_msg_0_0_0.maneuvers.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    IMC::TrexOperation tmp_tmp_tmp_tmp_msg_0_0_0_2;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.op = 27U;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.goal_id.assign("YGSBIHONLYQKXEHTENHFWXXZTGTUCCBBNPVCEKZKORRKJIPHFQLYILZCCSZMEFPJOAQVUTHVQAQEBQLUWOGFAVOMHYFCDDTWXPCGSNVIDZGVKUXIDZQDAZRYJIUPZXMALRAMRVWXWKYGRIBUJUT");
    IMC::TrexToken tmp_tmp_tmp_tmp_tmp_msg_0_0_0_2_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_2_0.timeline.assign("JMJCFBIDMHPVWMGYTITICGYACFCUSGXXVCUKQIVBSAKZOYQKNGYGBOSKLVSWGZQLDGAPXUTCIJLZOUBMVRYIZQEQNKWOYPXXBSEDTEEOSFJQHSPZPMJWAVRDFXTINLOFZARNWWOJQZSLMKAPUCRCKHAXROUZNAFBUCJVBBMRBGEAWVZIODEZYDPPDCSMXJDJLIYHXRNHWVMBFWKSVFUDNHDTHXULL");
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_2_0.predicate.assign("DTTDNQROISEJIDKZCGPOPNFCANMDOQRHUSLXFYZAYAQVAKRBXZCVFTUYXVQNGXAYUVDVHWNHOJPFSVBTMWXCQFVLRSZXONUWBCENSGEDVMXUGJRKDMZRFPLWSGBYWBKYZMAIJUIWNNTLUIOLCGPADCHUSF");
    IMC::TrexAttribute tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_2_0_0;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_2_0_0.name.assign("IAFEMTWELGRMPNCDHHKERPUUGKQCXGCCTSBBTFDEYMFIVWNRULVMBEIOLOYKSMSNVQYAUJDNYCQPAMLGGDNPTWTQTIVMIRBWZFGXVQATLTHZOJBQSEOHEPUFCSKDFRKOUJXQKDZSFMVZKZAFZYYKCHMSPNDHJR");
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_2_0_0.attr_type = 176U;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_2_0_0.min.assign("UUFPSNLEDQGJNESDXAITMATOLPLSMJWNYRXGCXOQCEUHCJNKOTUAOGAOKRPBWPQBQDZCIKMQDQCNEMRZMKHILBHXWCONAKDQPQRVTCDEFLMITHVBQYSNSZKCJZBXHFYAGIRXWAXVWXIUTTP");
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_2_0_0.max.assign("CNTIVVDVMBTZTDKIPQQGPHKXSARXPTAPJNPAUZFXYWBJGOHEMWCPWJUBFQURYWROBRGBHMFKCOHVJLFZSYNEVDDSDGVXLNXSNEXOOEGMWEIIYXUXLZSCLQAJBLVSRDZMWNQYJKZBHX");
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_2_0.attributes.push_back(tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_2_0_0);
    tmp_tmp_tmp_tmp_msg_0_0_0_2.token.set(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_2_0);
    tmp_tmp_tmp_msg_0_0_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_2);
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.46402092261);
    msg.setSource(62005U);
    msg.setSourceEntity(20U);
    msg.setDestination(35749U);
    msg.setDestinationEntity(9U);
    msg.req_id = 47781U;
    msg.type = 176U;
    msg.max_size = 4430U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0079720065061;
    tmp_msg_0.base_lon = 0.809870795017;
    tmp_msg_0.base_time = 0.362145760183;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 44196U;
    tmp_tmp_msg_0_0.priority = -51;
    tmp_tmp_msg_0_0.x = 167;
    tmp_tmp_msg_0_0.y = -25700;
    tmp_tmp_msg_0_0.z = -28031;
    tmp_tmp_msg_0_0.t = -11077;
    IMC::UsblModem tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("YXVMRLQAWSSECNUXIAQFJEEGNEYMNZLYVZAZNOXFWFEEBADMNGASFIHSLZRYUBJCPTXEMINFFPMFTWYDAGUBOSCDNGJIUFNHQHSUPERMTQGBIWXSBBLLRZWHXDYKGUTJLXPVTCWCLDBOKLX");
    tmp_tmp_tmp_msg_0_0_0.lat = 0.928877296387;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.729152198877;
    tmp_tmp_tmp_msg_0_0_0.z = 0.949974635796;
    tmp_tmp_tmp_msg_0_0_0.z_units = 173U;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.564635942491);
    msg.setSource(46359U);
    msg.setSourceEntity(8U);
    msg.setDestination(40559U);
    msg.setDestinationEntity(54U);
    msg.req_id = 39203U;
    msg.type = 149U;
    msg.max_size = 10835U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0197548891189;
    tmp_msg_0.base_lon = 0.312825918157;
    tmp_msg_0.base_time = 0.546747897214;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 56949U;
    tmp_tmp_msg_0_0.destination = 7616U;
    tmp_tmp_msg_0_0.timeout = 0.386594427945;
    IMC::CommsRelay tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.180853129351;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.49839061516;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.655671557288;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 202U;
    tmp_tmp_tmp_msg_0_0_0.duration = 26232U;
    tmp_tmp_tmp_msg_0_0_0.sys_a = 65218U;
    tmp_tmp_tmp_msg_0_0_0.sys_b = 5621U;
    tmp_tmp_tmp_msg_0_0_0.move_threshold = 0.956325517763;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.683200959597);
    msg.setSource(47526U);
    msg.setSourceEntity(122U);
    msg.setDestination(63341U);
    msg.setDestinationEntity(32U);
    msg.req_id = 37189U;
    msg.type = 4U;
    msg.max_size = 48296U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.265312217847;
    tmp_msg_0.base_lon = 0.307605318365;
    tmp_msg_0.base_time = 0.84285295536;
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
    msg.setTimeStamp(0.84800331455);
    msg.setSource(35893U);
    msg.setSourceEntity(8U);
    msg.setDestination(27262U);
    msg.setDestinationEntity(210U);
    msg.original_source = 52670U;
    msg.destination = 2452U;
    msg.timeout = 0.800051873436;
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("ZOFICLTGEKPAQWQQWSWQFNLQXXDQRTZIEVYCCNJBHZAPJFMINHPGICNAIFAXDDEAFBEQJRQBTGRTNJSIKDLSXDDDOCRAPBPOMISEHIKJHRZIBKHYWFUMRVXVVVTWZEZAPSDYYJY");
    tmp_msg_0.data.assign("ZAGIERFCBMAMFBGUJSUSPSYOCKARQPBEOI");
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
    msg.setTimeStamp(0.0195867109828);
    msg.setSource(50361U);
    msg.setSourceEntity(146U);
    msg.setDestination(39362U);
    msg.setDestinationEntity(107U);
    msg.original_source = 5184U;
    msg.destination = 38857U;
    msg.timeout = 0.167768228529;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 78U;
    tmp_msg_0.error.assign("EUWZCVVEUFQJGIIBTHNRFCDWAECYUNUQIMZI");
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
    msg.setTimeStamp(0.127282362792);
    msg.setSource(42169U);
    msg.setSourceEntity(58U);
    msg.setDestination(55137U);
    msg.setDestinationEntity(187U);
    msg.original_source = 2863U;
    msg.destination = 19449U;
    msg.timeout = 0.29812151793;
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 72U;
    tmp_msg_0.entities.assign("YXXFMMUKJYGSNDPVINLSNRIHKXSIYQNNPKVQZCHTQUDKPXTWKAOGJKBZDFJTQSRCQOMYIAXOHVCRLGNQELVKWEKHDGTFXCMSBALVOUVAHAFPPXOBZBOPWJAYZWM");
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
    msg.setTimeStamp(0.0892191652495);
    msg.setSource(7959U);
    msg.setSourceEntity(33U);
    msg.setDestination(64604U);
    msg.setDestinationEntity(201U);
    msg.id = 210U;
    msg.range = 0.108990836076;

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
    msg.setTimeStamp(0.122400203352);
    msg.setSource(60793U);
    msg.setSourceEntity(184U);
    msg.setDestination(10452U);
    msg.setDestinationEntity(68U);
    msg.id = 27U;
    msg.range = 0.193699865471;

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
    msg.setTimeStamp(0.461680198257);
    msg.setSource(63573U);
    msg.setSourceEntity(74U);
    msg.setDestination(2769U);
    msg.setDestinationEntity(112U);
    msg.id = 178U;
    msg.range = 0.579142633501;

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
    msg.setTimeStamp(0.572758308401);
    msg.setSource(35023U);
    msg.setSourceEntity(20U);
    msg.setDestination(10608U);
    msg.setDestinationEntity(166U);
    msg.beacon.assign("GWATKVBLQRTNYOVIVPJYBPGFVTZUQABZHILSODYPQLYUREWMJQFBSXQTHEPGYQCLTGXYKHNLJPHKDYSUKKMCVFVMZDCMOGBUWPWICCBZFYLAHRSUOHFZFMNOWRVSDXKCOUTNJRXKHTRSQPA");
    msg.lat = 0.0680234354828;
    msg.lon = 0.606728727916;
    msg.depth = 0.481870426701;
    msg.query_channel = 60U;
    msg.reply_channel = 230U;
    msg.transponder_delay = 33U;

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
    msg.setTimeStamp(0.610181475999);
    msg.setSource(56882U);
    msg.setSourceEntity(26U);
    msg.setDestination(19167U);
    msg.setDestinationEntity(203U);
    msg.beacon.assign("NZJFCZYNQQGKRUKVNVQIDAWUPZMZIDHRGHVVBJX");
    msg.lat = 0.829866808966;
    msg.lon = 0.199453344299;
    msg.depth = 0.113810885515;
    msg.query_channel = 219U;
    msg.reply_channel = 32U;
    msg.transponder_delay = 243U;

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
    msg.setTimeStamp(0.583537679625);
    msg.setSource(28717U);
    msg.setSourceEntity(134U);
    msg.setDestination(53127U);
    msg.setDestinationEntity(194U);
    msg.beacon.assign("LLZJFTXWOCQXYQKXUWCZQNRQNQRAPXEWSGMFFXSCCYXEXWAJGFKAVSPIYJZIKJYYRZGDWHJYVNBZDKDSPPMUTWCOYHTTHMBMTUWUSDVHYALLCOJDSEJMAKBBGUDPMWIFFGHSICVEJBESUONQNVIZYFGGQVORZPFRHYANRQIMHAXBETIIZKPJNKELTOBIKEVOMNUSJOMGNDEBQBRXBLUPQDKTFRVTGFGULVCTORMEARNAP");
    msg.lat = 0.543585492468;
    msg.lon = 0.343922066248;
    msg.depth = 0.862601190425;
    msg.query_channel = 140U;
    msg.reply_channel = 46U;
    msg.transponder_delay = 151U;

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
    msg.setTimeStamp(0.471659437557);
    msg.setSource(38878U);
    msg.setSourceEntity(185U);
    msg.setDestination(46851U);
    msg.setDestinationEntity(184U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.636200975623);
    msg.setSource(63474U);
    msg.setSourceEntity(113U);
    msg.setDestination(39547U);
    msg.setDestinationEntity(142U);
    msg.op = 73U;

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
    msg.setTimeStamp(0.605500083022);
    msg.setSource(55049U);
    msg.setSourceEntity(90U);
    msg.setDestination(10208U);
    msg.setDestinationEntity(165U);
    msg.op = 76U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FVKYHJOVUXHJPPIDUSWOPBMEUM");
    tmp_msg_0.lat = 0.94067778265;
    tmp_msg_0.lon = 0.457463282096;
    tmp_msg_0.depth = 0.627432574439;
    tmp_msg_0.query_channel = 56U;
    tmp_msg_0.reply_channel = 189U;
    tmp_msg_0.transponder_delay = 166U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.157455895413);
    msg.setSource(54133U);
    msg.setSourceEntity(36U);
    msg.setDestination(9764U);
    msg.setDestinationEntity(5U);
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.674324642858;
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
    msg.setTimeStamp(0.529040389043);
    msg.setSource(34074U);
    msg.setSourceEntity(148U);
    msg.setDestination(4036U);
    msg.setDestinationEntity(100U);
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MCVGFKYIPAFLNJTTUOSMPAEUCVQHFLUGXYLTKPWHDJSDAVWDDJGZMPSCNOYBEQOMJZMHHOXZKDYKGLIPWRZMSWTRMJKQIVGFEBQMSMDLKBTYZJUWCIOXKLLCJJO");
    tmp_msg_0.value.assign("QVEOWJCKAYYHAPZRNTYPWABDSJJBTIXLVTOWAIEIJUXHJIZFYTJPOUDFCVMBPCJOSVCYWLKGPNNROGKCBMRKCDYQXCHQFEWQZJGUUSFWEULVYIELUSXNOGZBMDKHLFMHREHYFAYWRGMTTLHNVREXNMPODRFKBBFGZALHTV");
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
    msg.setTimeStamp(0.769413545822);
    msg.setSource(5658U);
    msg.setSourceEntity(95U);
    msg.setDestination(2529U);
    msg.setDestinationEntity(118U);
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 2394U;
    tmp_msg_0.lat = 0.582247864637;
    tmp_msg_0.lon = 0.86085887028;
    tmp_msg_0.z = 0.778128443216;
    tmp_msg_0.z_units = 98U;
    tmp_msg_0.speed = 0.962989781276;
    tmp_msg_0.speed_units = 215U;
    tmp_msg_0.custom.assign("BXMITYVMNZNRYZLOKORJFKQWNVVMFQCXHLJNGJGQRYXQEQCNGLEKYFKCBUQTIIDKUFPKAEWWIUXKOLHPKZGZEXJBZWDTHVPFFETJAAXWIPUIVYPVHTLBTOCTVCIGCYOSFQDGLGTULBUGVHSIRPFBROZKJWWACDVCBMPQHBOEESYDZAQPSRXHZXIQDWUSZMUFU");
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
    msg.setTimeStamp(0.539411219306);
    msg.setSource(60309U);
    msg.setSourceEntity(245U);
    msg.setDestination(12880U);
    msg.setDestinationEntity(244U);
    msg.op = 4U;
    msg.system.assign("DDNZOUHUMBQJLJKRYPGEVJXXHMRBBRWQOWTRFTFAVOQFZVRGGQKJRKZPOZDHMBEKXIJCTSBYDHVOPLOLTLWXIMLQQLZFYVHKITLMNWRZPXUQYGPIE");
    msg.range = 0.10587954746;
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 47995U;
    tmp_msg_0.x = 0.844255990864;
    tmp_msg_0.y = 0.00902108346258;
    tmp_msg_0.z = 0.451020575454;
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
    msg.setTimeStamp(0.832167573856);
    msg.setSource(1403U);
    msg.setSourceEntity(64U);
    msg.setDestination(38640U);
    msg.setDestinationEntity(184U);
    msg.op = 93U;
    msg.system.assign("UNLCIRGKWQNHYJVHTJOGFZFWRXPDHNPBTMIVKHMUWTTNAREVGJAWEKGXIKOHZTGQCCXPPTLFWFBCYTOCGFUZTVZUNYWDLQQWSMZDJFYVBKZJMRRDYSHDGNCIKMBKIAOJJCFVULZEUSSPIOADXCBYSHTRDWHLLLUHAWXMCPJFNEQDZEXAZBUPZOVIGATNMBQCDSOEYYAEOEV");
    msg.range = 0.121252929538;
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("LPPICRRKQZGLMDDUFPSBG");
    tmp_msg_0.action = 30U;
    tmp_msg_0.grouplist.assign("QZLGWBZFIDWTRGRQNWNWAUYODKQDNEXJUGIFFSMTPICBHLVGDEJOXDEABTGFBMVOGVWDQDHWM");
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
    msg.setTimeStamp(0.606542876023);
    msg.setSource(58842U);
    msg.setSourceEntity(1U);
    msg.setDestination(64050U);
    msg.setDestinationEntity(71U);
    msg.op = 244U;
    msg.system.assign("IHRQZLTBRYZOLBYIEJUYMGENALTEPJWDUARRUGNKPTCKBWAXVJFPMBUUSBHGYOFGFPZNLJWKDXUVCSCWFUVXCAJOHHXYCNPMMEK");
    msg.range = 0.5374503836;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 34878U;
    tmp_msg_0.plan_size = 117028846U;
    tmp_msg_0.change_time = 0.520151467875;
    tmp_msg_0.change_sid = 54931U;
    tmp_msg_0.change_sname.assign("FXNTYKOJJP");
    const char tmp_tmp_msg_0_0[] = {68, -16, 45, -112, 62, 81, 17, -9, -91, -80, -128, -109, -94, 72, -50, -13, 48, -126, 59, -111, 102, 81, 24, 4, -37, 55, 70, 10, 26, -72, -93, -52, -41, -67, 92, -6, 3, -44, 21, -80, 29, 63, -36, -121, 23, -6, 23, -86, 31, -29, -69, -95, -114, -64, 6, -1, -10, 21, 11, -118, -127, 87, -110, 40, 1, 12, -13, -110, 100, 33, -50, 72, 22, -93, 100, 102, -45, -64, -10, -38, 95, -12, 73, 45, 8, 31, -56, 85, -110, 65, -3, 107, 101, 15, -62, -19, -3, 34, 14, 126, 56, -41, 112, -75, -81, -61, 77, -78, 112, -100, -105, -48, 111, 29, -18, -30, 26, -2, 87, 46, 48, -114, 76, -1, 117, -21, 105, -33, 0, 114, 16, 65, 28, -44, -103, 97, -21, 95, -21, -67, -63, 76, -62, -71, 120, 20, -45, -26, 103, -100, -20, -20, -77, -15, -57, 106, -10, -91, 89, 29, -113, -110, -100, 110, -54, 104, 8, 17, 36, -69, -103, 53, -82, -7, 111, -56, 126, -61};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.80481635295);
    msg.setSource(3274U);
    msg.setSourceEntity(79U);
    msg.setDestination(12939U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.853776252371);
    msg.setSource(53724U);
    msg.setSourceEntity(193U);
    msg.setDestination(61983U);
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
    msg.setTimeStamp(0.352647836265);
    msg.setSource(37477U);
    msg.setSourceEntity(158U);
    msg.setDestination(22440U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.529953020929);
    msg.setSource(63390U);
    msg.setSourceEntity(114U);
    msg.setDestination(22318U);
    msg.setDestinationEntity(49U);
    msg.list.assign("XAQTTIRUNUZLNWMFTMKQWRFIVFIHGXCFKLOUSPAFQIXVXNQQPYWVHYGNKLWDRMBHDUSZYZANDARROBDHUFSYJ");

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
    msg.setTimeStamp(0.0976207962396);
    msg.setSource(47925U);
    msg.setSourceEntity(133U);
    msg.setDestination(23767U);
    msg.setDestinationEntity(205U);
    msg.list.assign("GNZBQBFLPYSABZYTMEZVVVXCRJIWMJVKHQVIPIGHKOEMAOEWPVUXPOUFZWZYEANEHNUGSDYBSR");

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
    msg.setTimeStamp(0.466668880015);
    msg.setSource(43001U);
    msg.setSourceEntity(98U);
    msg.setDestination(39848U);
    msg.setDestinationEntity(190U);
    msg.list.assign("UHMMFTNCZUVQAFRIMUDSASLUKYQJPYOMTRKTWXMMAGVTZBYWBAHQVOBRHOZTEXCIZIANZVDVWEMPJAENGUCNUCPPHGLUXSCQOWFLLFSXTMSQNLNHWWJLVOGSQUPGYYIQUTDNBGFOLBRRENPPNDWKRCDJOVAIKZYYWWEGLLWPOXOGVDJRELVXUC");

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
    msg.setTimeStamp(0.998624916737);
    msg.setSource(28188U);
    msg.setSourceEntity(98U);
    msg.setDestination(35990U);
    msg.setDestinationEntity(211U);
    msg.peer.assign("RALCKQVUJOJYIOKGDXHGCPZGZYJXUPMGLFTXEGCBNPFLMAOPVXPMRLPVVJGHOEIHTGACMBREDNJXIWNENDFYNOUQOAXTDAARWTCFTGMLBYWMLSTYVWJCQPBNHPYNCMQLZBFBHBJUTBHEFVZSNRLOKUCHWIHUCSWSHEQVSWWJAIDRDKZSDORYXPKPXYSKHAESKZOVKBSNBTXYQIAUGLFFAUWREUQQMVCJRZZZIMQMTFSYNZDKDFIUT");
    msg.rssi = 0.383880617677;
    msg.integrity = 58543U;

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
    msg.setTimeStamp(0.717349196137);
    msg.setSource(11293U);
    msg.setSourceEntity(33U);
    msg.setDestination(15698U);
    msg.setDestinationEntity(61U);
    msg.peer.assign("XEBILVWEMRFHCBJFMFTXCQWMREFWWLCLSRVFJKDRDBTJNPRSIIIAFWQJCBSPSOGPADZPTVAGLIYFHAZTYQEOXNYXZAYQFZDSOLXHAUHGHZMIUUMFEOAXPZRUOJDBQVGQNVNJYGNSGHODAVYXYDTEZVMXUVEDXGDWPJAGJMCPMIULPMPYVHUZWRQRWKJGOBUOYCMZPQILVSICTATHLSUTWEWQBK");
    msg.rssi = 0.189520618969;
    msg.integrity = 57375U;

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
    msg.setTimeStamp(0.353472640369);
    msg.setSource(11262U);
    msg.setSourceEntity(6U);
    msg.setDestination(17468U);
    msg.setDestinationEntity(88U);
    msg.peer.assign("QHPTXDOCQSEBGHYCTYQRIUCGJBZPBEFKVEWKTEIPAPOLLRKDINSYBEPDITRNOVUNOAIVVYXPDJMTCWNJUXFLHCXKEWXFUVKYLTSERDPTLMRZJSJCIDMBEPNYAQAQRTPGMZUDONYFNOZZTUMVGAAHTMUBIZWHHRWVXOPLXGHGKLVLRFLBKMOKJCFMXSGRVVCFJAG");
    msg.rssi = 0.25157211549;
    msg.integrity = 60406U;

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
    msg.setTimeStamp(0.491806708226);
    msg.setSource(140U);
    msg.setSourceEntity(79U);
    msg.setDestination(43467U);
    msg.setDestinationEntity(48U);
    msg.value = -436;

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
    msg.setTimeStamp(0.384647037781);
    msg.setSource(13565U);
    msg.setSourceEntity(219U);
    msg.setDestination(36898U);
    msg.setDestinationEntity(35U);
    msg.value = -5427;

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
    msg.setTimeStamp(0.58958783589);
    msg.setSource(34588U);
    msg.setSourceEntity(112U);
    msg.setDestination(22177U);
    msg.setDestinationEntity(74U);
    msg.value = -18858;

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
    msg.setTimeStamp(0.442338605624);
    msg.setSource(42764U);
    msg.setSourceEntity(27U);
    msg.setDestination(14840U);
    msg.setDestinationEntity(82U);
    msg.value = 0.241172137712;

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
    msg.setTimeStamp(0.565382610042);
    msg.setSource(24934U);
    msg.setSourceEntity(230U);
    msg.setDestination(52101U);
    msg.setDestinationEntity(29U);
    msg.value = 0.59872254717;

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
    msg.setTimeStamp(0.480228202936);
    msg.setSource(65437U);
    msg.setSourceEntity(11U);
    msg.setDestination(6163U);
    msg.setDestinationEntity(54U);
    msg.value = 0.0933260917598;

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
    msg.setTimeStamp(0.118223172813);
    msg.setSource(15569U);
    msg.setSourceEntity(39U);
    msg.setDestination(25446U);
    msg.setDestinationEntity(41U);
    msg.value = 0.660432594062;

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
    msg.setTimeStamp(0.818368864363);
    msg.setSource(34733U);
    msg.setSourceEntity(153U);
    msg.setDestination(7572U);
    msg.setDestinationEntity(169U);
    msg.value = 0.911671968635;

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
    msg.setTimeStamp(0.968685750706);
    msg.setSource(60404U);
    msg.setSourceEntity(10U);
    msg.setDestination(59005U);
    msg.setDestinationEntity(90U);
    msg.value = 0.418662472579;

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
    msg.setTimeStamp(0.387729228654);
    msg.setSource(27669U);
    msg.setSourceEntity(223U);
    msg.setDestination(17812U);
    msg.setDestinationEntity(233U);
    msg.validity = 63698U;
    msg.type = 2U;
    msg.utc_year = 39672U;
    msg.utc_month = 186U;
    msg.utc_day = 60U;
    msg.utc_time = 0.972770569392;
    msg.lat = 0.618549676769;
    msg.lon = 0.346716805067;
    msg.height = 0.271489213262;
    msg.satellites = 75U;
    msg.cog = 0.516826947091;
    msg.sog = 0.62392478027;
    msg.hdop = 0.724702115202;
    msg.vdop = 0.19908709384;
    msg.hacc = 0.261295528472;
    msg.vacc = 0.965031244916;

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
    msg.setTimeStamp(0.118940430424);
    msg.setSource(30830U);
    msg.setSourceEntity(16U);
    msg.setDestination(46740U);
    msg.setDestinationEntity(7U);
    msg.validity = 60597U;
    msg.type = 95U;
    msg.utc_year = 45941U;
    msg.utc_month = 88U;
    msg.utc_day = 41U;
    msg.utc_time = 0.638741361198;
    msg.lat = 0.564848920726;
    msg.lon = 0.725486598158;
    msg.height = 0.372577034264;
    msg.satellites = 27U;
    msg.cog = 0.962871653818;
    msg.sog = 0.980821021548;
    msg.hdop = 0.0537476668588;
    msg.vdop = 0.668673379236;
    msg.hacc = 0.615416674553;
    msg.vacc = 0.491063340912;

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
    msg.setTimeStamp(0.00390649115754);
    msg.setSource(61135U);
    msg.setSourceEntity(19U);
    msg.setDestination(45471U);
    msg.setDestinationEntity(208U);
    msg.validity = 2113U;
    msg.type = 149U;
    msg.utc_year = 60552U;
    msg.utc_month = 61U;
    msg.utc_day = 76U;
    msg.utc_time = 0.0106525730205;
    msg.lat = 0.282417550501;
    msg.lon = 0.135237652179;
    msg.height = 0.191492184478;
    msg.satellites = 85U;
    msg.cog = 0.493450059305;
    msg.sog = 0.151213862571;
    msg.hdop = 0.974887660685;
    msg.vdop = 0.296333012286;
    msg.hacc = 0.0327846730566;
    msg.vacc = 0.39289217483;

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
    msg.setTimeStamp(0.714597756632);
    msg.setSource(14718U);
    msg.setSourceEntity(38U);
    msg.setDestination(52037U);
    msg.setDestinationEntity(184U);
    msg.time = 0.892703678858;
    msg.phi = 0.435940366407;
    msg.theta = 0.301489398085;
    msg.psi = 0.562403708764;
    msg.psi_magnetic = 0.491197533947;

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
    msg.setTimeStamp(0.292121421755);
    msg.setSource(34803U);
    msg.setSourceEntity(165U);
    msg.setDestination(53979U);
    msg.setDestinationEntity(115U);
    msg.time = 0.63610277415;
    msg.phi = 0.925290386006;
    msg.theta = 0.945824784889;
    msg.psi = 0.628807756654;
    msg.psi_magnetic = 0.201694433807;

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
    msg.setTimeStamp(0.0449835731865);
    msg.setSource(51327U);
    msg.setSourceEntity(175U);
    msg.setDestination(32584U);
    msg.setDestinationEntity(145U);
    msg.time = 0.358660794544;
    msg.phi = 0.168977822916;
    msg.theta = 0.552439664202;
    msg.psi = 0.750884587328;
    msg.psi_magnetic = 0.345382392759;

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
    msg.setTimeStamp(0.105297986047);
    msg.setSource(5318U);
    msg.setSourceEntity(6U);
    msg.setDestination(52276U);
    msg.setDestinationEntity(130U);
    msg.time = 0.471193473802;
    msg.x = 0.101020042224;
    msg.y = 0.727688621236;
    msg.z = 0.915453843671;
    msg.timestep = 0.195871548884;

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
    msg.setTimeStamp(0.364612519864);
    msg.setSource(10484U);
    msg.setSourceEntity(212U);
    msg.setDestination(55881U);
    msg.setDestinationEntity(168U);
    msg.time = 0.511156801206;
    msg.x = 0.890179547229;
    msg.y = 0.263855388383;
    msg.z = 0.715452801068;
    msg.timestep = 0.101815676678;

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
    msg.setTimeStamp(0.3420886823);
    msg.setSource(8033U);
    msg.setSourceEntity(27U);
    msg.setDestination(30606U);
    msg.setDestinationEntity(244U);
    msg.time = 0.241467897601;
    msg.x = 0.825227265228;
    msg.y = 0.353098875943;
    msg.z = 0.00541541235957;
    msg.timestep = 0.860121997645;

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
    msg.setTimeStamp(0.324857508713);
    msg.setSource(21904U);
    msg.setSourceEntity(181U);
    msg.setDestination(62397U);
    msg.setDestinationEntity(225U);
    msg.time = 0.970192176617;
    msg.x = 0.53149783206;
    msg.y = 0.481097511107;
    msg.z = 0.951681458881;

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
    msg.setTimeStamp(0.963207916665);
    msg.setSource(58304U);
    msg.setSourceEntity(222U);
    msg.setDestination(35426U);
    msg.setDestinationEntity(250U);
    msg.time = 0.848819055943;
    msg.x = 0.0802208028217;
    msg.y = 0.821157199137;
    msg.z = 0.979599469898;

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
    msg.setTimeStamp(0.836517210998);
    msg.setSource(44894U);
    msg.setSourceEntity(26U);
    msg.setDestination(32531U);
    msg.setDestinationEntity(217U);
    msg.time = 0.980219725706;
    msg.x = 0.227702324658;
    msg.y = 0.543052637215;
    msg.z = 0.0956542255808;

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
    msg.setTimeStamp(0.0614855062082);
    msg.setSource(15335U);
    msg.setSourceEntity(241U);
    msg.setDestination(37807U);
    msg.setDestinationEntity(173U);
    msg.time = 0.416118440825;
    msg.x = 0.185575110765;
    msg.y = 0.630264237467;
    msg.z = 0.848249812541;

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
    msg.setTimeStamp(0.416269558952);
    msg.setSource(56422U);
    msg.setSourceEntity(176U);
    msg.setDestination(45409U);
    msg.setDestinationEntity(24U);
    msg.time = 0.429035138256;
    msg.x = 0.069507457077;
    msg.y = 0.103061691184;
    msg.z = 0.269157399643;

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
    msg.setTimeStamp(0.504276284725);
    msg.setSource(24066U);
    msg.setSourceEntity(14U);
    msg.setDestination(14552U);
    msg.setDestinationEntity(37U);
    msg.time = 0.240890850821;
    msg.x = 0.63083717727;
    msg.y = 0.511986467015;
    msg.z = 0.382143849307;

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
    msg.setTimeStamp(0.164015687438);
    msg.setSource(53667U);
    msg.setSourceEntity(195U);
    msg.setDestination(2879U);
    msg.setDestinationEntity(10U);
    msg.time = 0.347939018456;
    msg.x = 0.436020315086;
    msg.y = 0.631873127992;
    msg.z = 0.0121155083013;

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
    msg.setTimeStamp(0.464219682808);
    msg.setSource(57424U);
    msg.setSourceEntity(117U);
    msg.setDestination(56838U);
    msg.setDestinationEntity(14U);
    msg.time = 0.50399126421;
    msg.x = 0.119720732439;
    msg.y = 0.0773610999375;
    msg.z = 0.150095297849;

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
    msg.setTimeStamp(0.6979258657);
    msg.setSource(28233U);
    msg.setSourceEntity(191U);
    msg.setDestination(27642U);
    msg.setDestinationEntity(137U);
    msg.time = 0.459538934511;
    msg.x = 0.930866372127;
    msg.y = 0.549735992811;
    msg.z = 0.248507472827;

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
    msg.setTimeStamp(0.646796131296);
    msg.setSource(45604U);
    msg.setSourceEntity(103U);
    msg.setDestination(57651U);
    msg.setDestinationEntity(225U);
    msg.validity = 234U;
    msg.x = 0.0470397773659;
    msg.y = 0.445358262923;
    msg.z = 0.368576549502;

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
    msg.setTimeStamp(0.114186826978);
    msg.setSource(40673U);
    msg.setSourceEntity(182U);
    msg.setDestination(64447U);
    msg.setDestinationEntity(187U);
    msg.validity = 183U;
    msg.x = 0.07797766596;
    msg.y = 0.657924145836;
    msg.z = 0.405863844009;

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
    msg.setTimeStamp(0.866446389515);
    msg.setSource(43735U);
    msg.setSourceEntity(1U);
    msg.setDestination(33992U);
    msg.setDestinationEntity(137U);
    msg.validity = 249U;
    msg.x = 0.395455172681;
    msg.y = 0.976249183206;
    msg.z = 0.531625730414;

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
    msg.setTimeStamp(0.283525948595);
    msg.setSource(38582U);
    msg.setSourceEntity(143U);
    msg.setDestination(50226U);
    msg.setDestinationEntity(218U);
    msg.validity = 89U;
    msg.x = 0.286067529856;
    msg.y = 0.558273003918;
    msg.z = 0.347219666245;

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
    msg.setTimeStamp(0.33952899293);
    msg.setSource(15260U);
    msg.setSourceEntity(237U);
    msg.setDestination(64727U);
    msg.setDestinationEntity(186U);
    msg.validity = 62U;
    msg.x = 0.215301283998;
    msg.y = 0.951440441044;
    msg.z = 0.290699857989;

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
    msg.setTimeStamp(0.272073031175);
    msg.setSource(50250U);
    msg.setSourceEntity(165U);
    msg.setDestination(33721U);
    msg.setDestinationEntity(28U);
    msg.validity = 77U;
    msg.x = 0.454513100233;
    msg.y = 0.0282829489756;
    msg.z = 0.636218042578;

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
    msg.setTimeStamp(0.838040390237);
    msg.setSource(62633U);
    msg.setSourceEntity(77U);
    msg.setDestination(50916U);
    msg.setDestinationEntity(185U);
    msg.time = 0.461140068341;
    msg.x = 0.27929651951;
    msg.y = 0.642621488674;
    msg.z = 0.372292664153;

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
    msg.setTimeStamp(0.875230529626);
    msg.setSource(22999U);
    msg.setSourceEntity(45U);
    msg.setDestination(39701U);
    msg.setDestinationEntity(205U);
    msg.time = 0.647515440529;
    msg.x = 0.364358429031;
    msg.y = 0.579915044804;
    msg.z = 0.187119977918;

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
    msg.setTimeStamp(0.137940928557);
    msg.setSource(56845U);
    msg.setSourceEntity(163U);
    msg.setDestination(44034U);
    msg.setDestinationEntity(221U);
    msg.time = 0.910499104463;
    msg.x = 0.840744484947;
    msg.y = 0.913632565232;
    msg.z = 0.750976267713;

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
    msg.setTimeStamp(0.549302579163);
    msg.setSource(58656U);
    msg.setSourceEntity(215U);
    msg.setDestination(62717U);
    msg.setDestinationEntity(81U);
    msg.validity = 160U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.606498787009;
    tmp_msg_0.y = 0.677657630889;
    tmp_msg_0.z = 0.629332956571;
    tmp_msg_0.phi = 0.474525764767;
    tmp_msg_0.theta = 0.121953039287;
    tmp_msg_0.psi = 0.470430999045;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.523830903262;

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
    msg.setTimeStamp(0.692056130939);
    msg.setSource(10432U);
    msg.setSourceEntity(225U);
    msg.setDestination(13736U);
    msg.setDestinationEntity(131U);
    msg.validity = 202U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.514367387797;
    tmp_msg_0.beam_height = 0.461022379063;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.710014830794;

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
    msg.setTimeStamp(0.922359448271);
    msg.setSource(55419U);
    msg.setSourceEntity(22U);
    msg.setDestination(40502U);
    msg.setDestinationEntity(216U);
    msg.validity = 135U;
    msg.value = 0.835764877561;

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
    msg.setTimeStamp(0.132755306994);
    msg.setSource(1928U);
    msg.setSourceEntity(104U);
    msg.setDestination(18871U);
    msg.setDestinationEntity(81U);
    msg.value = 0.509742379102;

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
    msg.setTimeStamp(0.54921901915);
    msg.setSource(60653U);
    msg.setSourceEntity(88U);
    msg.setDestination(28776U);
    msg.setDestinationEntity(254U);
    msg.value = 0.647095843877;

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
    msg.setTimeStamp(0.523465354672);
    msg.setSource(72U);
    msg.setSourceEntity(80U);
    msg.setDestination(55863U);
    msg.setDestinationEntity(40U);
    msg.value = 0.163178792703;

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
    msg.setTimeStamp(0.472363294695);
    msg.setSource(47438U);
    msg.setSourceEntity(71U);
    msg.setDestination(3684U);
    msg.setDestinationEntity(27U);
    msg.value = 0.755337819115;

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
    msg.setTimeStamp(0.0242983696096);
    msg.setSource(4499U);
    msg.setSourceEntity(127U);
    msg.setDestination(9638U);
    msg.setDestinationEntity(153U);
    msg.value = 0.19781724024;

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
    msg.setTimeStamp(0.233946724455);
    msg.setSource(46657U);
    msg.setSourceEntity(34U);
    msg.setDestination(30673U);
    msg.setDestinationEntity(122U);
    msg.value = 0.690898540476;

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
    msg.setTimeStamp(0.643176621764);
    msg.setSource(27205U);
    msg.setSourceEntity(118U);
    msg.setDestination(7510U);
    msg.setDestinationEntity(238U);
    msg.value = 0.930968534452;

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
    msg.setTimeStamp(0.868152330936);
    msg.setSource(59841U);
    msg.setSourceEntity(144U);
    msg.setDestination(15119U);
    msg.setDestinationEntity(56U);
    msg.value = 0.434472777358;

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
    msg.setTimeStamp(0.241576986845);
    msg.setSource(6300U);
    msg.setSourceEntity(176U);
    msg.setDestination(44219U);
    msg.setDestinationEntity(174U);
    msg.value = 0.563540171776;

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
    msg.setTimeStamp(0.97722060861);
    msg.setSource(61245U);
    msg.setSourceEntity(190U);
    msg.setDestination(21425U);
    msg.setDestinationEntity(60U);
    msg.value = 0.380510292406;

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
    msg.setTimeStamp(0.603108043416);
    msg.setSource(30813U);
    msg.setSourceEntity(212U);
    msg.setDestination(25763U);
    msg.setDestinationEntity(68U);
    msg.value = 0.894807959136;

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
    msg.setTimeStamp(0.0207239430375);
    msg.setSource(41839U);
    msg.setSourceEntity(245U);
    msg.setDestination(42660U);
    msg.setDestinationEntity(57U);
    msg.value = 0.40040831596;

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
    msg.setTimeStamp(0.958820714175);
    msg.setSource(57236U);
    msg.setSourceEntity(140U);
    msg.setDestination(7861U);
    msg.setDestinationEntity(97U);
    msg.value = 0.503620849917;

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
    msg.setTimeStamp(0.294318926466);
    msg.setSource(46241U);
    msg.setSourceEntity(99U);
    msg.setDestination(8054U);
    msg.setDestinationEntity(238U);
    msg.value = 0.114761921943;

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
    msg.setTimeStamp(0.102640483244);
    msg.setSource(2070U);
    msg.setSourceEntity(229U);
    msg.setDestination(3266U);
    msg.setDestinationEntity(66U);
    msg.value = 0.100552813317;

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
    msg.setTimeStamp(0.0145783711994);
    msg.setSource(30703U);
    msg.setSourceEntity(170U);
    msg.setDestination(38955U);
    msg.setDestinationEntity(5U);
    msg.value = 0.554923905217;

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
    msg.setTimeStamp(0.475410952282);
    msg.setSource(37869U);
    msg.setSourceEntity(212U);
    msg.setDestination(57165U);
    msg.setDestinationEntity(120U);
    msg.value = 0.227507852542;

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
    msg.setTimeStamp(0.515363705776);
    msg.setSource(4702U);
    msg.setSourceEntity(185U);
    msg.setDestination(42536U);
    msg.setDestinationEntity(194U);
    msg.value = 0.26811219969;

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
    msg.setTimeStamp(0.0325628627686);
    msg.setSource(10904U);
    msg.setSourceEntity(37U);
    msg.setDestination(7312U);
    msg.setDestinationEntity(21U);
    msg.value = 0.670914683965;

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
    msg.setTimeStamp(0.444665111226);
    msg.setSource(12604U);
    msg.setSourceEntity(211U);
    msg.setDestination(50916U);
    msg.setDestinationEntity(104U);
    msg.value = 0.447197927144;

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
    msg.setTimeStamp(0.580908349157);
    msg.setSource(19828U);
    msg.setSourceEntity(220U);
    msg.setDestination(9268U);
    msg.setDestinationEntity(171U);
    msg.value = 0.129114932788;

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
    msg.setTimeStamp(0.621187546089);
    msg.setSource(54882U);
    msg.setSourceEntity(207U);
    msg.setDestination(25694U);
    msg.setDestinationEntity(6U);
    msg.value = 0.179001307245;

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
    msg.setTimeStamp(0.602012055562);
    msg.setSource(9553U);
    msg.setSourceEntity(70U);
    msg.setDestination(47976U);
    msg.setDestinationEntity(23U);
    msg.value = 0.348259863424;

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
    msg.setTimeStamp(0.0820683264529);
    msg.setSource(5547U);
    msg.setSourceEntity(181U);
    msg.setDestination(57109U);
    msg.setDestinationEntity(170U);
    msg.value = 0.427903863688;

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
    msg.setTimeStamp(0.778373617545);
    msg.setSource(38224U);
    msg.setSourceEntity(193U);
    msg.setDestination(42276U);
    msg.setDestinationEntity(120U);
    msg.direction = 0.872003927926;
    msg.speed = 0.619473898685;
    msg.turbulence = 0.505216387217;

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
    msg.setTimeStamp(0.965368774556);
    msg.setSource(27937U);
    msg.setSourceEntity(61U);
    msg.setDestination(38980U);
    msg.setDestinationEntity(62U);
    msg.direction = 0.976106457461;
    msg.speed = 0.993138507167;
    msg.turbulence = 0.390566690283;

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
    msg.setTimeStamp(0.82819098145);
    msg.setSource(49351U);
    msg.setSourceEntity(250U);
    msg.setDestination(28299U);
    msg.setDestinationEntity(140U);
    msg.direction = 0.531035261551;
    msg.speed = 0.67686882297;
    msg.turbulence = 0.0691109088075;

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
    msg.setTimeStamp(0.0557783437354);
    msg.setSource(55168U);
    msg.setSourceEntity(44U);
    msg.setDestination(5074U);
    msg.setDestinationEntity(181U);
    msg.value = 0.632622577299;

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
    msg.setTimeStamp(0.567020868365);
    msg.setSource(36088U);
    msg.setSourceEntity(163U);
    msg.setDestination(21355U);
    msg.setDestinationEntity(71U);
    msg.value = 0.661661593882;

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
    msg.setTimeStamp(0.66188350943);
    msg.setSource(26178U);
    msg.setSourceEntity(62U);
    msg.setDestination(37149U);
    msg.setDestinationEntity(200U);
    msg.value = 0.479842473667;

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
    msg.setTimeStamp(0.169444153506);
    msg.setSource(15919U);
    msg.setSourceEntity(166U);
    msg.setDestination(48065U);
    msg.setDestinationEntity(225U);
    msg.value.assign("ARIBVGRQOAUYCNSIJDKMPJQCJRFLIXJKEAZLPVHEKKITMJXOQUHFRFPDALHPWQKEWKAUIXBKFGPMAXHVGTFMKWQOTDABQGAZOWYOLMSJHNQNHCMWSPSNEWUSMDVYCCNBPJJCNFOLOUXFZFYDOQNCQMMEWZUYGZYRRCNUTTBIIKOEUAYYHSBF");

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
    msg.setTimeStamp(0.843551485932);
    msg.setSource(30032U);
    msg.setSourceEntity(133U);
    msg.setDestination(14702U);
    msg.setDestinationEntity(111U);
    msg.value.assign("NGOAGFOGMQMSIRTAHBWNJSBTFXYQUHJBMHBKVUXRFKSRNHKRBEVKNYBZMHXQWDBKCGSVNJRSZVHFPYWLPFATOEWIFDJJMFVWYIVJRAIQZAYXEPQPOKIKZUZGPTVXNHKOHBQVVFJAKMPWHLUGBYSUZFLGHLXIIOAISESNLSWNLUDRLYTCQOUWPJQFETEMCTOTIQJOAMXNZYZCDAPGEZCEDXECBDCSCLDGOZMWTLURMUREDAWTKUXPIRJCP");

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
    msg.setTimeStamp(0.136634536862);
    msg.setSource(47626U);
    msg.setSourceEntity(231U);
    msg.setDestination(44352U);
    msg.setDestinationEntity(251U);
    msg.value.assign("SRNMWFKMGTWCXHCOWZGRRUVRVRLNAFPHSTYUEHYKEBBCDQD");

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
    msg.setTimeStamp(0.169846190002);
    msg.setSource(32174U);
    msg.setSourceEntity(82U);
    msg.setDestination(54121U);
    msg.setDestinationEntity(131U);
    const char tmp_msg_0[] = {71, -19, -81, 93, 70, 92, -2, 54, -77, -81, -81, 95, -118, -56, -107, -121, 53, 76, -105, -17, -15, -42, -39, 41, 35, 17, -68, 9, 77, -17, -127, -74, -3, 62, -10, 78, -44, 71, -108, 55, 95, 101, -119, -117, -74, 85, -81, 19, 34, 48, 94, -88, -53, -103, -103, 14, -56, 52, 69, -34, -27, -76, -111, -36, 125, -57, 13, -50, 17, -68, -62, 26, 50, 13, -59, -123, 32, 52, 13, 67, 34, -29, -51, -33, 87, -80, -75, -26, -4, -24, -124, 106, -111, 80, 51, -85, 2, -10, -1, 27, -21, -94, -35, -126, -55, -75, -60, 13, -85, 125, -29, -78, 105, 36, -43, 28, -49, -65, -24, -43, 54, -25, 59, -18, 74, 24, -27, -100, 70, -9, -95, 19, 70, -9, -35, 118, -63, 43, 29, -78, -29, -39, -101, -70, -112, 65, 67, -120, -122, -103, -26, 108, 85, -98, 97, -120, 10, -77, -4, 71, 13, 52, -38, -7, -50, -95, -31, 108, -20, -79, -98, 119, -118, -36, -125, -11, -69, 5, -41, 120, -43, -25, 43, 93, -64, -77, 84, -30, -38, -29, 75, -114, 69, 61, -122, 12, 6, 120, 94, 83, -69, -12, 61, 97, 89, -88, -32, -93};
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
    msg.setTimeStamp(0.282073872562);
    msg.setSource(36885U);
    msg.setSourceEntity(107U);
    msg.setDestination(2603U);
    msg.setDestinationEntity(225U);
    const char tmp_msg_0[] = {66, 116, 46, -77, 126, -3, 19, -66, -104, -64, 14, -101, 54, -27, 102, -114, -71, 109, -102, -34, -45, 16, -4, 80, -59, 98, -92, -117, -115, -89, -95, 40, 76, 116, 43, -72, -28, 19, -106, -19, -91, 91, 38, -53, 51, -47, -24, -1, -77, -114, 9, -75, -4, -93, -26, 0, 93, -45, -106, -62, -7, -96, 54, 103, 2, -69, -122, 66, 118, 113, 105, 41, 1, -91, -102, -112, 110, -49, -75, 22, 90, 114, 33, 11, -53, -23, 105, 1, 54, -30, -81, 68, 55, -117, 70, -6, -128, -118, 45, -79, -45, 4, 87, -37, 70, -58, 52, 26, -115, 57, -91, -29, 68, -84, 120, 38, -58, 96, -13, 102, 117, -76, 57, -1, 125, 72, 108, -80, -119, -81, -15, 95, -106, -18, 19, 111, -15, -46, -20, 84, 4, 26, -95, -117, 37, -21, 28, -111, -19, 109, 35, 45, 2, 58, -57, 23, -125, -7, -76, -128, -24, 105, -9, -30, 99, -7, -67, 67, 45, 115, 61, -26, 79, 98, 101, -88, -61, -104, -74, -109, -111, -46, -101, -112, 117, 62, -17, -28, -7, 100, -117, 76, -69, -71, -76, -53, 103, -14, 114, -77, -84, -115, -53};
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
    msg.setTimeStamp(0.418484993552);
    msg.setSource(46403U);
    msg.setSourceEntity(195U);
    msg.setDestination(21351U);
    msg.setDestinationEntity(88U);
    const char tmp_msg_0[] = {106, -72, 74, 5, 74, 114, -68, -107, -117, 96, -107, 18, 121, 65, 101, -63, 13, -128, 46, 105, 56, 60, 63, 88, 24, 22, -93, -75, 108, -105, 4, -23, 106, -119, -85, -66, 43, -48, -72, -108, 54, -126, -43, 80, 63, 41, 23, -98, 66, 112, 102, 83, 25, 76, -95, -32, 30, 98, -84, -38, 73, 94, 31, 121, -101, -87, -118, -60, 47, 6, -62, 40, 84, -28};
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
    msg.setTimeStamp(0.455914266107);
    msg.setSource(48365U);
    msg.setSourceEntity(220U);
    msg.setDestination(1827U);
    msg.setDestinationEntity(51U);
    msg.type = 121U;
    msg.frequency = 1198742478U;
    msg.min_range = 21965U;
    msg.max_range = 30667U;
    msg.bits_per_point = 89U;
    msg.scale_factor = 0.134757166378;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.47503449556;
    tmp_msg_0.beam_height = 0.462918309745;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {97, -39, -9, -50, 102, 16, -72, 53, -112, 40, 30, 123, -98, 56, -39, -13, -116, 30, -107, 51, 100, 60, -81, -24, -54, 89, 41, 87, -71, 101, 49, 25, -46, 12, -26, 35, -7, -78, 4, 54, -89, 5, 23, -62, 38, -5, -55, -6, 89, 88, 96, -118, -44, 21, -66, 104, -7, -7, -57, 19, -125, 34, -43, -2, 71, -90, 31, 126};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.328591473953);
    msg.setSource(5015U);
    msg.setSourceEntity(243U);
    msg.setDestination(15987U);
    msg.setDestinationEntity(141U);
    msg.type = 32U;
    msg.frequency = 1352039891U;
    msg.min_range = 62779U;
    msg.max_range = 36956U;
    msg.bits_per_point = 79U;
    msg.scale_factor = 0.598512775328;
    const char tmp_msg_0[] = {-97, 77, -87, 40, 107, 102, -40, 64, 55, -107, 9, -1, -60, -45, -120, 75, 6, 105, -53, -72, 73, -70, 82, 103, 69, 54, 56, -63, -52, -96, 61, 82, 78, 75, 116, 101, -65, -84, -17, 46, 19, 113, 57, 110, 69, 86, -50, -3, -49, -41, 86, 80, 62, -95, 99, 110, -119, 100, -68, -16, -116, -72, 34, 71, -50, -103, -125, -5, -125, -36, -71, 18, 15, 105, 95, -127, -105, -110, 115, 38, 20, 116, 116, 66, 18, 28, -19, -106, -67, -123, -113, -83, 54, 124, 41, -31, -126, -126, 71, 81, -115, -18, 84, -119, 74, -126, 70, -96, -47, 88, -93, -47, -77, 28, -71, -31, -49, 42, 101, 31, -58, 27, 86, -53, -63, 50, -42, 97, -111, -120, -82, -68, 68, 56, 20, -49, -14, 17, -92, -98, 20, -71, 94, -113, 111, 120, 7, -117, -94, -123, 126, 22, 8, -29, 111, 86, -16, -103, 99, -74, -106, -85, -6, 106, -45, 85, -66, -33, -88, -39, 100, 88, 47, 97, 104, -7, -9, 83, 26, 99, 30, 54, -106, 12, 27, 110, 125, 101, 125, 42, 82, -107, 89, 110, 31, -79, 122, 71, -61, 27, 69, -82, 34, 111, 69, 119, -12, -11, 110, -21, 108, 57, -54, 30, 49, -5, 82, -94, 38, -74, -69, -5, -45, -69, 33, 124, -76, 123, 11, 64, 86, -119, -90, 59, 65, -13, -83, 7, -75, 22, 66, -60, -27};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.863074507055);
    msg.setSource(25715U);
    msg.setSourceEntity(227U);
    msg.setDestination(37059U);
    msg.setDestinationEntity(87U);
    msg.type = 145U;
    msg.frequency = 2283434672U;
    msg.min_range = 26190U;
    msg.max_range = 3909U;
    msg.bits_per_point = 194U;
    msg.scale_factor = 0.323570329333;
    const char tmp_msg_0[] = {11, 88, -28, -27, 33, -38, -53, 58, -47, -66, 121, 119, 58, 2, 3, 71, 58, 26, 59, -89, -77, 54, 114, -93, 7, -5, -8, 51, 114, 55, 93, -86, -65, -70, 22, 73, -51, 20, 123, -45, 95, -54, -110, -93, -34, 36, 17, -65, 92, 108, -63, 17, 124, -96, -88, -73, 2, -93, -40, 100, 20, 84, 63, -98, 46, 80, -69, 9, -15, 11, -106, 29, 17, -119, -37, 126, -128, 26, 8, -46, 51, 81, 118, -68, -115, 91, 88, 109, 47, 77, 111, 122, -74, 105, -55, 11, 121, -40, 8, 11, -74, -84, 22, -95, -4, 52, 117, 52, 32, 87, 81, -77, 117, -15, 121, -52, -128, 125, -101, -58, -74, 9, 37, 69, 54, -50, -98, -20, -70, 116, -20, -114, -64, 31, -41, -111, -64, -119, -45, 89, -52, 57, -108, 78, 5, -72, -47, -87, -71, -53, 105, 117, 113, 71, 112, 20, 33, -113, -105, 0, -103, -74, 56, 121, -71, 86, 82, -121, -110, -29, 20, 30, -95, -87, 59, 39, 96, -72, 80, -33, -98, 36, -126, -71, 36, 116, 18, 116, -118, 81, -127, 21, -64, -26, -103, 61, 16, 89, 58, -90, 104, 124, -28, 80, -22, -62, 101, -124, -123, 107, -51, -83, -34, 98, 91, -109, 87, 32};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.876971609786);
    msg.setSource(37212U);
    msg.setSourceEntity(213U);
    msg.setDestination(21060U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.475152668587);
    msg.setSource(28735U);
    msg.setSourceEntity(120U);
    msg.setDestination(25007U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.977372438482);
    msg.setSource(21183U);
    msg.setSourceEntity(250U);
    msg.setDestination(6952U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.436368484583);
    msg.setSource(42331U);
    msg.setSourceEntity(65U);
    msg.setDestination(60966U);
    msg.setDestinationEntity(243U);
    msg.op = 198U;

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
    msg.setTimeStamp(0.856679029629);
    msg.setSource(21894U);
    msg.setSourceEntity(215U);
    msg.setDestination(53885U);
    msg.setDestinationEntity(161U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.303446755565);
    msg.setSource(30194U);
    msg.setSourceEntity(233U);
    msg.setDestination(18991U);
    msg.setDestinationEntity(18U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.223487859039);
    msg.setSource(42425U);
    msg.setSourceEntity(38U);
    msg.setDestination(1756U);
    msg.setDestinationEntity(184U);
    msg.value = 0.401952991683;
    msg.confidence = 0.675427745265;
    msg.opmodes.assign("TTAEMNICKZOTKQBMNIDMXPIYDGKPZRRACWFDJNGLTTWFADDEZLCSOWBTSLQGQKEJTFHBMPWZJIFRVEIXZBYXTLHRYXSLGCGSQWUBMVJTJS");

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
    msg.setTimeStamp(0.18850048057);
    msg.setSource(24560U);
    msg.setSourceEntity(82U);
    msg.setDestination(50982U);
    msg.setDestinationEntity(51U);
    msg.value = 0.645023211676;
    msg.confidence = 0.719345283061;
    msg.opmodes.assign("ARFNDFKOKFVJBCBTVFNICITYKXZEANPBZCOZPINMIGUWUWOBETSQRJLKHXFSUSZZWGNIKQKHLZDMSBSJANKCIBXDLCEDXPGYAVUOARNOPWYGBBHMPUPHFRZGYVFUM");

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
    msg.setTimeStamp(0.294276845369);
    msg.setSource(35746U);
    msg.setSourceEntity(230U);
    msg.setDestination(57656U);
    msg.setDestinationEntity(191U);
    msg.value = 0.45745353584;
    msg.confidence = 0.967996925475;
    msg.opmodes.assign("XWXNJIHXSRIFNTBLQASRNOKBXXEMPMCHGFULFQBMSFUXCOAIYUNMORRGTDYRCKLCNZNKXVMEKZJKPLODJKIVSKMUKVGFGOYPUGRLCGQKCWAFTLFIWHNAIQPRJORLJBDYHPUWFBAJMLTDHZZFUDJUNTHYHCECABPVZYLABZCDTEQJEIUVOZHVTWQXSNEBFHQLDYQEWRIPJVDXBVYSZQAMBAGZDHWGIPMETQSIROOJVOYAXGSVGWCTE");

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
    msg.setTimeStamp(0.381217643036);
    msg.setSource(1448U);
    msg.setSourceEntity(140U);
    msg.setDestination(49405U);
    msg.setDestinationEntity(13U);
    msg.itow = 2938322754U;
    msg.lat = 0.822432557699;
    msg.lon = 0.728676777788;
    msg.height_ell = 0.630145545677;
    msg.height_sea = 0.468821685611;
    msg.hacc = 0.126901662859;
    msg.vacc = 0.0649945855153;
    msg.vel_n = 0.517000818237;
    msg.vel_e = 0.212548277151;
    msg.vel_d = 0.188410980585;
    msg.speed = 0.472975398025;
    msg.gspeed = 0.23455692131;
    msg.heading = 0.814108529484;
    msg.sacc = 0.844979147741;
    msg.cacc = 0.904954281286;

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
    msg.setTimeStamp(0.668934769554);
    msg.setSource(9584U);
    msg.setSourceEntity(233U);
    msg.setDestination(27000U);
    msg.setDestinationEntity(202U);
    msg.itow = 2591082577U;
    msg.lat = 0.361387036289;
    msg.lon = 0.316496464659;
    msg.height_ell = 0.896857411431;
    msg.height_sea = 0.496840711666;
    msg.hacc = 0.53761739566;
    msg.vacc = 0.857824525222;
    msg.vel_n = 0.766001572767;
    msg.vel_e = 0.60411736634;
    msg.vel_d = 0.867291545867;
    msg.speed = 0.482970935033;
    msg.gspeed = 0.687815064252;
    msg.heading = 0.557823022881;
    msg.sacc = 0.0621237451263;
    msg.cacc = 0.702342440811;

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
    msg.setTimeStamp(0.935349340985);
    msg.setSource(8053U);
    msg.setSourceEntity(145U);
    msg.setDestination(6733U);
    msg.setDestinationEntity(217U);
    msg.itow = 3920162975U;
    msg.lat = 0.681600179364;
    msg.lon = 0.498427975025;
    msg.height_ell = 0.0729210444836;
    msg.height_sea = 0.00553194056206;
    msg.hacc = 0.0493396498948;
    msg.vacc = 0.467361771939;
    msg.vel_n = 0.32658143168;
    msg.vel_e = 0.216025861741;
    msg.vel_d = 0.312811972498;
    msg.speed = 0.166011857651;
    msg.gspeed = 0.653304456549;
    msg.heading = 0.487978465622;
    msg.sacc = 0.479001866765;
    msg.cacc = 0.639750123244;

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
    msg.setTimeStamp(0.0434216154449);
    msg.setSource(41474U);
    msg.setSourceEntity(167U);
    msg.setDestination(29083U);
    msg.setDestinationEntity(185U);
    msg.id = 9U;
    msg.value = 0.0048494433394;

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
    msg.setTimeStamp(0.416545283048);
    msg.setSource(5756U);
    msg.setSourceEntity(49U);
    msg.setDestination(31250U);
    msg.setDestinationEntity(159U);
    msg.id = 8U;
    msg.value = 0.971295730549;

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
    msg.setTimeStamp(0.914927084559);
    msg.setSource(14896U);
    msg.setSourceEntity(45U);
    msg.setDestination(52904U);
    msg.setDestinationEntity(168U);
    msg.id = 233U;
    msg.value = 0.834966121426;

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
    msg.setTimeStamp(0.50093859159);
    msg.setSource(58307U);
    msg.setSourceEntity(183U);
    msg.setDestination(58901U);
    msg.setDestinationEntity(92U);
    msg.x = 0.219766545518;
    msg.y = 0.688283746036;
    msg.z = 0.401424576897;
    msg.phi = 0.164744911506;
    msg.theta = 0.497947612663;
    msg.psi = 0.713810842034;

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
    msg.setTimeStamp(0.964808052681);
    msg.setSource(63299U);
    msg.setSourceEntity(70U);
    msg.setDestination(20174U);
    msg.setDestinationEntity(248U);
    msg.x = 0.563369702182;
    msg.y = 0.448693056357;
    msg.z = 0.158934494511;
    msg.phi = 0.910265085894;
    msg.theta = 0.153993143975;
    msg.psi = 0.844524909765;

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
    msg.setTimeStamp(0.438857078938);
    msg.setSource(31074U);
    msg.setSourceEntity(68U);
    msg.setDestination(31736U);
    msg.setDestinationEntity(217U);
    msg.x = 0.124596972794;
    msg.y = 0.306989290331;
    msg.z = 0.872259580196;
    msg.phi = 0.635576059102;
    msg.theta = 0.598111476572;
    msg.psi = 0.591433990705;

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
    msg.setTimeStamp(0.224911133172);
    msg.setSource(47719U);
    msg.setSourceEntity(136U);
    msg.setDestination(9133U);
    msg.setDestinationEntity(172U);
    msg.beam_width = 0.0951194540664;
    msg.beam_height = 0.514229017739;

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
    msg.setTimeStamp(0.0637870187949);
    msg.setSource(15933U);
    msg.setSourceEntity(153U);
    msg.setDestination(10635U);
    msg.setDestinationEntity(224U);
    msg.beam_width = 0.288904249293;
    msg.beam_height = 0.56129697615;

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
    msg.setTimeStamp(0.95204678904);
    msg.setSource(16038U);
    msg.setSourceEntity(61U);
    msg.setDestination(23227U);
    msg.setDestinationEntity(178U);
    msg.beam_width = 0.109326939431;
    msg.beam_height = 0.31655450645;

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
    msg.setTimeStamp(0.975400274448);
    msg.setSource(43352U);
    msg.setSourceEntity(68U);
    msg.setDestination(51813U);
    msg.setDestinationEntity(47U);
    msg.sane = 70U;

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
    msg.setTimeStamp(0.453074094371);
    msg.setSource(65024U);
    msg.setSourceEntity(174U);
    msg.setDestination(10411U);
    msg.setDestinationEntity(217U);
    msg.sane = 189U;

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
    msg.setTimeStamp(0.500014096083);
    msg.setSource(6535U);
    msg.setSourceEntity(45U);
    msg.setDestination(45147U);
    msg.setDestinationEntity(198U);
    msg.sane = 160U;

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
    msg.setTimeStamp(0.658317474454);
    msg.setSource(65059U);
    msg.setSourceEntity(121U);
    msg.setDestination(63009U);
    msg.setDestinationEntity(115U);
    msg.value = 0.274816356875;

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
    msg.setTimeStamp(0.0867201255483);
    msg.setSource(42681U);
    msg.setSourceEntity(149U);
    msg.setDestination(33328U);
    msg.setDestinationEntity(79U);
    msg.value = 0.260803142367;

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
    msg.setTimeStamp(0.668632944213);
    msg.setSource(9423U);
    msg.setSourceEntity(8U);
    msg.setDestination(31134U);
    msg.setDestinationEntity(47U);
    msg.value = 0.0340808029703;

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
    msg.setTimeStamp(0.00483797949916);
    msg.setSource(50955U);
    msg.setSourceEntity(144U);
    msg.setDestination(6073U);
    msg.setDestinationEntity(155U);
    msg.value = 0.782346604898;

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
    msg.setTimeStamp(0.586141085325);
    msg.setSource(39455U);
    msg.setSourceEntity(181U);
    msg.setDestination(56930U);
    msg.setDestinationEntity(44U);
    msg.value = 0.173244404196;

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
    msg.setTimeStamp(0.82355981495);
    msg.setSource(10429U);
    msg.setSourceEntity(47U);
    msg.setDestination(28116U);
    msg.setDestinationEntity(237U);
    msg.value = 0.136875035648;

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
    msg.setTimeStamp(0.102423636761);
    msg.setSource(7764U);
    msg.setSourceEntity(39U);
    msg.setDestination(4572U);
    msg.setDestinationEntity(156U);
    msg.value = 0.176825175915;

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
    msg.setTimeStamp(0.821026595252);
    msg.setSource(52982U);
    msg.setSourceEntity(83U);
    msg.setDestination(12444U);
    msg.setDestinationEntity(194U);
    msg.value = 0.49770301782;

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
    msg.setTimeStamp(0.818103047291);
    msg.setSource(5157U);
    msg.setSourceEntity(16U);
    msg.setDestination(42752U);
    msg.setDestinationEntity(139U);
    msg.value = 0.617601946689;

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
    msg.setTimeStamp(0.0943342970241);
    msg.setSource(9801U);
    msg.setSourceEntity(5U);
    msg.setDestination(41599U);
    msg.setDestinationEntity(222U);
    msg.value = 0.40928179337;

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
    msg.setTimeStamp(0.0786223833115);
    msg.setSource(12151U);
    msg.setSourceEntity(237U);
    msg.setDestination(16407U);
    msg.setDestinationEntity(2U);
    msg.value = 0.843109156677;

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
    msg.setTimeStamp(0.698208771304);
    msg.setSource(6691U);
    msg.setSourceEntity(222U);
    msg.setDestination(19806U);
    msg.setDestinationEntity(67U);
    msg.value = 0.314696027832;

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
    msg.setTimeStamp(0.828082837008);
    msg.setSource(21440U);
    msg.setSourceEntity(126U);
    msg.setDestination(48158U);
    msg.setDestinationEntity(127U);
    msg.value = 0.732951140562;

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
    msg.setTimeStamp(0.671057937857);
    msg.setSource(9034U);
    msg.setSourceEntity(241U);
    msg.setDestination(11391U);
    msg.setDestinationEntity(138U);
    msg.value = 0.470495459642;

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
    msg.setTimeStamp(0.130925977774);
    msg.setSource(63802U);
    msg.setSourceEntity(236U);
    msg.setDestination(64371U);
    msg.setDestinationEntity(101U);
    msg.value = 0.264972122774;

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
    msg.setTimeStamp(0.382964182218);
    msg.setSource(28785U);
    msg.setSourceEntity(88U);
    msg.setDestination(64422U);
    msg.setDestinationEntity(181U);
    msg.value = 0.239802860781;

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
    msg.setTimeStamp(0.216893675403);
    msg.setSource(53972U);
    msg.setSourceEntity(188U);
    msg.setDestination(15018U);
    msg.setDestinationEntity(127U);
    msg.value = 0.112345722244;

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
    msg.setTimeStamp(0.750506598851);
    msg.setSource(49482U);
    msg.setSourceEntity(202U);
    msg.setDestination(15722U);
    msg.setDestinationEntity(3U);
    msg.value = 0.378422561814;

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
    msg.setTimeStamp(0.529181510008);
    msg.setSource(13659U);
    msg.setSourceEntity(170U);
    msg.setDestination(49752U);
    msg.setDestinationEntity(132U);
    msg.value = 0.914534728368;

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
    msg.setTimeStamp(0.280239105045);
    msg.setSource(59992U);
    msg.setSourceEntity(116U);
    msg.setDestination(65305U);
    msg.setDestinationEntity(251U);
    msg.value = 0.0849380861795;

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
    msg.setTimeStamp(0.912637041826);
    msg.setSource(2900U);
    msg.setSourceEntity(75U);
    msg.setDestination(2527U);
    msg.setDestinationEntity(57U);
    msg.value = 0.361477198479;

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
    msg.setTimeStamp(0.375546141159);
    msg.setSource(48882U);
    msg.setSourceEntity(34U);
    msg.setDestination(22362U);
    msg.setDestinationEntity(29U);
    msg.value = 0.0139210485198;

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
    msg.setTimeStamp(0.929312796439);
    msg.setSource(9117U);
    msg.setSourceEntity(217U);
    msg.setDestination(3450U);
    msg.setDestinationEntity(106U);
    msg.value = 0.915185858704;

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
    msg.setTimeStamp(0.268930716395);
    msg.setSource(64677U);
    msg.setSourceEntity(194U);
    msg.setDestination(28486U);
    msg.setDestinationEntity(148U);
    msg.value = 0.432800572483;

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
    msg.setTimeStamp(0.152502893885);
    msg.setSource(22730U);
    msg.setSourceEntity(135U);
    msg.setDestination(17100U);
    msg.setDestinationEntity(139U);
    msg.validity = 13564U;
    msg.type = 149U;
    msg.tow = 1856149007U;
    msg.base_lat = 0.812435549527;
    msg.base_lon = 0.542392596051;
    msg.base_height = 0.64420297692;
    msg.n = 0.934012000775;
    msg.e = 0.375138640597;
    msg.d = 0.0598449120364;
    msg.v_n = 0.632468873618;
    msg.v_e = 0.00383695323161;
    msg.v_d = 0.794227324661;
    msg.satellites = 96U;
    msg.iar_hyp = 59456U;
    msg.iar_ratio = 0.391038958451;

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
    msg.setTimeStamp(0.816029218178);
    msg.setSource(36120U);
    msg.setSourceEntity(114U);
    msg.setDestination(17032U);
    msg.setDestinationEntity(154U);
    msg.validity = 53010U;
    msg.type = 4U;
    msg.tow = 572421258U;
    msg.base_lat = 0.827409012506;
    msg.base_lon = 0.4686495827;
    msg.base_height = 0.819729047327;
    msg.n = 0.0965331488521;
    msg.e = 0.71332005586;
    msg.d = 0.869031806829;
    msg.v_n = 0.780392664325;
    msg.v_e = 0.0814060259694;
    msg.v_d = 0.169164578552;
    msg.satellites = 31U;
    msg.iar_hyp = 55154U;
    msg.iar_ratio = 0.447763400974;

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
    msg.setTimeStamp(0.547858418865);
    msg.setSource(5709U);
    msg.setSourceEntity(101U);
    msg.setDestination(30111U);
    msg.setDestinationEntity(148U);
    msg.validity = 36790U;
    msg.type = 170U;
    msg.tow = 3919557649U;
    msg.base_lat = 0.99888447047;
    msg.base_lon = 0.685040689776;
    msg.base_height = 0.390060387113;
    msg.n = 0.742708610949;
    msg.e = 0.392494964651;
    msg.d = 0.589375282341;
    msg.v_n = 0.109703469486;
    msg.v_e = 0.820125222219;
    msg.v_d = 0.234234223423;
    msg.satellites = 14U;
    msg.iar_hyp = 25354U;
    msg.iar_ratio = 0.987809077746;

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
    msg.setTimeStamp(0.140491279094);
    msg.setSource(40204U);
    msg.setSourceEntity(126U);
    msg.setDestination(18788U);
    msg.setDestinationEntity(55U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.113155023428;
    tmp_msg_0.lon = 0.615376630595;
    tmp_msg_0.height = 0.558949513615;
    tmp_msg_0.x = 0.322384256011;
    tmp_msg_0.y = 0.676715913271;
    tmp_msg_0.z = 0.465244291219;
    tmp_msg_0.phi = 0.141949871532;
    tmp_msg_0.theta = 0.181987658733;
    tmp_msg_0.psi = 0.144814818577;
    tmp_msg_0.u = 0.234228169135;
    tmp_msg_0.v = 0.403575168708;
    tmp_msg_0.w = 0.138277577625;
    tmp_msg_0.vx = 0.808098662392;
    tmp_msg_0.vy = 0.384088837616;
    tmp_msg_0.vz = 0.757975184155;
    tmp_msg_0.p = 0.892952307514;
    tmp_msg_0.q = 0.341301355021;
    tmp_msg_0.r = 0.862097949088;
    tmp_msg_0.depth = 0.49940684839;
    tmp_msg_0.alt = 0.79510273733;
    msg.state.set(tmp_msg_0);
    msg.type = 250U;

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
    msg.setTimeStamp(0.414219084485);
    msg.setSource(36867U);
    msg.setSourceEntity(253U);
    msg.setDestination(4283U);
    msg.setDestinationEntity(111U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.615939846461;
    tmp_msg_0.lon = 0.508676262807;
    tmp_msg_0.height = 0.581964422307;
    tmp_msg_0.x = 0.0470140166969;
    tmp_msg_0.y = 0.584824080876;
    tmp_msg_0.z = 0.870217589242;
    tmp_msg_0.phi = 0.375446511887;
    tmp_msg_0.theta = 0.765832324976;
    tmp_msg_0.psi = 0.728148737687;
    tmp_msg_0.u = 0.196338927426;
    tmp_msg_0.v = 0.0263879854412;
    tmp_msg_0.w = 0.265769133825;
    tmp_msg_0.vx = 0.467969419187;
    tmp_msg_0.vy = 0.0480457400093;
    tmp_msg_0.vz = 0.219522941515;
    tmp_msg_0.p = 0.259158009919;
    tmp_msg_0.q = 0.791160259827;
    tmp_msg_0.r = 0.453416327512;
    tmp_msg_0.depth = 0.253718568489;
    tmp_msg_0.alt = 0.739842480804;
    msg.state.set(tmp_msg_0);
    msg.type = 118U;

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
    msg.setTimeStamp(0.473632794716);
    msg.setSource(22924U);
    msg.setSourceEntity(78U);
    msg.setDestination(4382U);
    msg.setDestinationEntity(243U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.433165147887;
    tmp_msg_0.lon = 0.564381966649;
    tmp_msg_0.height = 0.90376660117;
    tmp_msg_0.x = 0.988022838341;
    tmp_msg_0.y = 0.278321054498;
    tmp_msg_0.z = 0.373814381371;
    tmp_msg_0.phi = 0.446429237845;
    tmp_msg_0.theta = 0.589226095108;
    tmp_msg_0.psi = 0.33416897933;
    tmp_msg_0.u = 0.151363319294;
    tmp_msg_0.v = 0.934986727444;
    tmp_msg_0.w = 0.743810106989;
    tmp_msg_0.vx = 0.249840731307;
    tmp_msg_0.vy = 0.0190560896665;
    tmp_msg_0.vz = 0.450377741582;
    tmp_msg_0.p = 0.239320283177;
    tmp_msg_0.q = 0.511442780682;
    tmp_msg_0.r = 0.250315334109;
    tmp_msg_0.depth = 0.860727176796;
    tmp_msg_0.alt = 0.400225696322;
    msg.state.set(tmp_msg_0);
    msg.type = 115U;

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
    msg.setTimeStamp(0.242519808848);
    msg.setSource(301U);
    msg.setSourceEntity(98U);
    msg.setDestination(56578U);
    msg.setDestinationEntity(232U);
    msg.value = 0.428618236917;

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
    msg.setTimeStamp(0.628882323516);
    msg.setSource(37749U);
    msg.setSourceEntity(164U);
    msg.setDestination(49284U);
    msg.setDestinationEntity(4U);
    msg.value = 0.994038945284;

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
    msg.setTimeStamp(0.104057437514);
    msg.setSource(34613U);
    msg.setSourceEntity(234U);
    msg.setDestination(53677U);
    msg.setDestinationEntity(188U);
    msg.value = 0.614862117867;

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
    msg.setTimeStamp(0.567315231228);
    msg.setSource(63023U);
    msg.setSourceEntity(242U);
    msg.setDestination(5211U);
    msg.setDestinationEntity(250U);
    msg.value = 0.503072628448;

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
    msg.setTimeStamp(0.98978692904);
    msg.setSource(11529U);
    msg.setSourceEntity(144U);
    msg.setDestination(29951U);
    msg.setDestinationEntity(176U);
    msg.value = 0.14422314453;

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
    msg.setTimeStamp(0.667384363723);
    msg.setSource(9461U);
    msg.setSourceEntity(49U);
    msg.setDestination(55133U);
    msg.setDestinationEntity(191U);
    msg.value = 0.117289962477;

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
    msg.setTimeStamp(0.786267054973);
    msg.setSource(570U);
    msg.setSourceEntity(72U);
    msg.setDestination(10803U);
    msg.setDestinationEntity(112U);
    msg.value = 0.414560882803;

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
    msg.setTimeStamp(0.172206082989);
    msg.setSource(63860U);
    msg.setSourceEntity(104U);
    msg.setDestination(4472U);
    msg.setDestinationEntity(122U);
    msg.value = 0.352884566094;

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
    msg.setTimeStamp(0.652241251984);
    msg.setSource(26806U);
    msg.setSourceEntity(222U);
    msg.setDestination(36723U);
    msg.setDestinationEntity(65U);
    msg.value = 0.20244515077;

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
    msg.setTimeStamp(0.0594951761609);
    msg.setSource(59910U);
    msg.setSourceEntity(34U);
    msg.setDestination(22623U);
    msg.setDestinationEntity(168U);
    msg.value = 0.731238168114;

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
    msg.setTimeStamp(0.769175928708);
    msg.setSource(38871U);
    msg.setSourceEntity(224U);
    msg.setDestination(27352U);
    msg.setDestinationEntity(138U);
    msg.value = 0.467144073954;

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
    msg.setTimeStamp(0.679773860652);
    msg.setSource(64041U);
    msg.setSourceEntity(11U);
    msg.setDestination(4639U);
    msg.setDestinationEntity(63U);
    msg.value = 0.441617057251;

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
    msg.setTimeStamp(0.971257423175);
    msg.setSource(13777U);
    msg.setSourceEntity(143U);
    msg.setDestination(42436U);
    msg.setDestinationEntity(3U);
    msg.value = 0.04661430496;

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
    msg.setTimeStamp(0.174089408528);
    msg.setSource(63410U);
    msg.setSourceEntity(9U);
    msg.setDestination(42770U);
    msg.setDestinationEntity(83U);
    msg.value = 0.0282950574201;

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
    msg.setTimeStamp(0.877268137673);
    msg.setSource(46593U);
    msg.setSourceEntity(113U);
    msg.setDestination(44258U);
    msg.setDestinationEntity(192U);
    msg.value = 0.330430000808;

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
    msg.setTimeStamp(0.585922226536);
    msg.setSource(20920U);
    msg.setSourceEntity(45U);
    msg.setDestination(4277U);
    msg.setDestinationEntity(115U);
    msg.id = 62U;
    msg.zoom = 162U;
    msg.action = 109U;

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
    msg.setTimeStamp(0.893212056012);
    msg.setSource(5238U);
    msg.setSourceEntity(196U);
    msg.setDestination(27896U);
    msg.setDestinationEntity(208U);
    msg.id = 208U;
    msg.zoom = 122U;
    msg.action = 215U;

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
    msg.setTimeStamp(0.521485435904);
    msg.setSource(54791U);
    msg.setSourceEntity(211U);
    msg.setDestination(43005U);
    msg.setDestinationEntity(52U);
    msg.id = 77U;
    msg.zoom = 242U;
    msg.action = 144U;

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
    msg.setTimeStamp(0.110953172442);
    msg.setSource(31563U);
    msg.setSourceEntity(253U);
    msg.setDestination(33066U);
    msg.setDestinationEntity(179U);
    msg.id = 12U;
    msg.value = 0.799174891472;

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
    msg.setTimeStamp(0.877856450221);
    msg.setSource(37414U);
    msg.setSourceEntity(65U);
    msg.setDestination(51472U);
    msg.setDestinationEntity(16U);
    msg.id = 188U;
    msg.value = 0.889281612375;

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
    msg.setTimeStamp(0.701644334053);
    msg.setSource(47792U);
    msg.setSourceEntity(167U);
    msg.setDestination(17721U);
    msg.setDestinationEntity(224U);
    msg.id = 6U;
    msg.value = 0.359948473961;

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
    msg.setTimeStamp(0.620912516189);
    msg.setSource(61383U);
    msg.setSourceEntity(190U);
    msg.setDestination(20728U);
    msg.setDestinationEntity(55U);
    msg.id = 33U;
    msg.value = 0.298876087198;

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
    msg.setTimeStamp(0.225114775823);
    msg.setSource(24453U);
    msg.setSourceEntity(123U);
    msg.setDestination(33889U);
    msg.setDestinationEntity(213U);
    msg.id = 135U;
    msg.value = 0.962298028204;

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
    msg.setTimeStamp(0.041205230121);
    msg.setSource(20724U);
    msg.setSourceEntity(71U);
    msg.setDestination(52304U);
    msg.setDestinationEntity(220U);
    msg.id = 49U;
    msg.value = 0.0403647723921;

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
    msg.setTimeStamp(0.460456979187);
    msg.setSource(15992U);
    msg.setSourceEntity(121U);
    msg.setDestination(19964U);
    msg.setDestinationEntity(66U);
    msg.id = 208U;
    msg.angle = 0.451366389825;

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
    msg.setTimeStamp(0.531420992859);
    msg.setSource(21518U);
    msg.setSourceEntity(233U);
    msg.setDestination(15481U);
    msg.setDestinationEntity(115U);
    msg.id = 44U;
    msg.angle = 0.852826722989;

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
    msg.setTimeStamp(0.645582066231);
    msg.setSource(6683U);
    msg.setSourceEntity(218U);
    msg.setDestination(13146U);
    msg.setDestinationEntity(138U);
    msg.id = 71U;
    msg.angle = 0.0232403344327;

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
    msg.setTimeStamp(0.813123658717);
    msg.setSource(5042U);
    msg.setSourceEntity(211U);
    msg.setDestination(33968U);
    msg.setDestinationEntity(179U);
    msg.op = 214U;
    msg.actions.assign("AKCCGJJTCGKFKZNNOOCOVEUWZDSERDZOIOFQHDUXPOELSHUJTNZHEQHHQLYKPEBXNDXDBSXCLKFGFSLWRUJWHUUFKDAWAJGCEXMAEDSIWMKIFCWDHVDBHZMU");

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
    msg.setTimeStamp(0.293091589476);
    msg.setSource(21574U);
    msg.setSourceEntity(234U);
    msg.setDestination(2438U);
    msg.setDestinationEntity(235U);
    msg.op = 142U;
    msg.actions.assign("EOLGNYPTPXJGFIJFVTUHEHHXUQPRUTM");

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
    msg.setTimeStamp(0.398507921079);
    msg.setSource(59429U);
    msg.setSourceEntity(221U);
    msg.setDestination(30242U);
    msg.setDestinationEntity(169U);
    msg.op = 87U;
    msg.actions.assign("IILLJIPBMRSIKTOAUCJKWBBUCSJLPTQEXUNEBNMBWXJECKMMOEBXPTKFZSURGOWLSNAEDNEHSMPDXVVZOKTLGHJWFQNHKYPEUCVCKPDDXRXHVSQFWZAZOFLGYQGIZNRJYQZMAAPKNMXTCLAIFMOGDFDUYOVRAELIXVDMBYOHQHOQUPQWEPKHGRW");

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
    msg.setTimeStamp(0.645383974255);
    msg.setSource(28750U);
    msg.setSourceEntity(137U);
    msg.setDestination(35139U);
    msg.setDestinationEntity(2U);
    msg.actions.assign("QXCNOULCLZAITVJVNIOMCHQQINYJJFRGSKPAJTPVWTLJSUGNAEDZGZFFHPDTNOUKHBSDIKDKJCCIBXGVCPYUJIPXRTWYFTNHGLUVMEMODPLHHIBBTWXEAOERKDMP");

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
    msg.setTimeStamp(0.59114109299);
    msg.setSource(28789U);
    msg.setSourceEntity(228U);
    msg.setDestination(15210U);
    msg.setDestinationEntity(190U);
    msg.actions.assign("TFGLIUYSFRRMHONMNOWUZNQJLPIGTGACWZIHVAOMSPKKEDRXQLCPHLTDJCDLKDRZHTZUIGPBM");

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
    msg.setTimeStamp(0.495515718708);
    msg.setSource(60218U);
    msg.setSourceEntity(66U);
    msg.setDestination(34456U);
    msg.setDestinationEntity(168U);
    msg.actions.assign("CHRQYYBJWSZPMHCDEWLSUPOGIRPGUHVDXPYKAMXQDBNUZATZTKLVQYAVELLQIECRWPSJNQRQBXDLUPMZAONQDJAIBNADQOUBSHKFLGLJKNZHIUMMVVWFHTKMTIIMCXPAACVBVIGOFRXOSWEGBWZNXICJZWOWTRHMLWLNFFFYGRZMBX");

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
    msg.setTimeStamp(0.632008705179);
    msg.setSource(43019U);
    msg.setSourceEntity(166U);
    msg.setDestination(19166U);
    msg.setDestinationEntity(177U);
    msg.button = 207U;
    msg.value = 190U;

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
    msg.setTimeStamp(0.713965551197);
    msg.setSource(64801U);
    msg.setSourceEntity(49U);
    msg.setDestination(35071U);
    msg.setDestinationEntity(42U);
    msg.button = 88U;
    msg.value = 20U;

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
    msg.setTimeStamp(0.993953081712);
    msg.setSource(18978U);
    msg.setSourceEntity(11U);
    msg.setDestination(10678U);
    msg.setDestinationEntity(147U);
    msg.button = 175U;
    msg.value = 156U;

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
    msg.setTimeStamp(0.612728888784);
    msg.setSource(59925U);
    msg.setSourceEntity(49U);
    msg.setDestination(62285U);
    msg.setDestinationEntity(180U);
    msg.op = 48U;
    msg.text.assign("OSGHXFVBXWJYEWIHPOILJFKJAWXTVOPYKSMDSPMJKSZVXNFUZHHFXWBQSJUSQTPKYVEVBFSWVGICCXLPVLR");

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
    msg.setTimeStamp(0.915280821268);
    msg.setSource(28535U);
    msg.setSourceEntity(121U);
    msg.setDestination(4985U);
    msg.setDestinationEntity(164U);
    msg.op = 202U;
    msg.text.assign("PVLNDDECRRXPACOYKIGPBKGLXCWPYQDZYTCVYSWOYKZJRZIBMQFATAEPYCLOGIZBNJSUVTEIMLZCJLBEAYNQGJSOFZSITAFKWNQMDGWHMIJKFTHOTTJRUOHSEZCDVNUOGEXSLPUUSNBHEVQQMHURXWSD");

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
    msg.setTimeStamp(0.579028253631);
    msg.setSource(26498U);
    msg.setSourceEntity(136U);
    msg.setDestination(63820U);
    msg.setDestinationEntity(45U);
    msg.op = 7U;
    msg.text.assign("LJLBWJZGRLDBINBRYTLTDHCGHDAOROSLPJKEMPLFUMGTNOESGFAEFFNVEMQXIFIREBKWAAHFSPMHVRFUWSETUYLIFCZHKPUMZNKBNDNVDUPVRWWJKQWUNDQXBCGHIMJBWKOEASGEBMCQAKRCYJURAONPMYE");

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
    msg.setTimeStamp(0.682657697876);
    msg.setSource(3418U);
    msg.setSourceEntity(108U);
    msg.setDestination(1040U);
    msg.setDestinationEntity(98U);
    msg.op = 82U;
    msg.time_remain = 0.184305923429;
    msg.sched_time = 0.632105426205;

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
    msg.setTimeStamp(0.955593614204);
    msg.setSource(41058U);
    msg.setSourceEntity(245U);
    msg.setDestination(64700U);
    msg.setDestinationEntity(244U);
    msg.op = 137U;
    msg.time_remain = 0.666433745892;
    msg.sched_time = 0.817989088676;

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
    msg.setTimeStamp(0.892648007512);
    msg.setSource(43670U);
    msg.setSourceEntity(143U);
    msg.setDestination(18421U);
    msg.setDestinationEntity(124U);
    msg.op = 2U;
    msg.time_remain = 0.714188642418;
    msg.sched_time = 0.508595993536;

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
    msg.setTimeStamp(0.162717355932);
    msg.setSource(24813U);
    msg.setSourceEntity(121U);
    msg.setDestination(22976U);
    msg.setDestinationEntity(249U);
    msg.name.assign("HAMMTOMUCPWKFUPGFGOTNRKJXLPXZCYHOZKQSEYPEJQYMSNVWLGLPWWINKAYGRDJERGTFTPUNQONHZZGSXUCESYJDDLXQQVYIRIRUNBYTBEMEZYEFKFNHIMBKXAFAXXJWQVFCVODDRQQTJNHVAWSRHBGJGWXBDJQCHXLVIIYZACBDQIBKUZOTSUGVAUBWWAESRGPPFDISLCMFOZAEKHRCROLDJSMDBVPOVMLOBELKFTPNTACHIIY");
    msg.op = 18U;
    msg.sched_time = 0.90967879173;

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
    msg.setTimeStamp(0.68797145505);
    msg.setSource(48218U);
    msg.setSourceEntity(196U);
    msg.setDestination(36603U);
    msg.setDestinationEntity(205U);
    msg.name.assign("KFOXLKVFFLUKBRIUJSLOENWE");
    msg.op = 82U;
    msg.sched_time = 0.598694071055;

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
    msg.setTimeStamp(0.106067756049);
    msg.setSource(40875U);
    msg.setSourceEntity(168U);
    msg.setDestination(54759U);
    msg.setDestinationEntity(191U);
    msg.name.assign("VQWRUIFMGRWYZTGOZHHTAFJKVTQTWKWFGVORPJYBBKHQAAIQNSFCLKOBMZEGJJDAKHNLQLLMMXOQBXKLSVNPSDBNSIXWUGGGZZV");
    msg.op = 10U;
    msg.sched_time = 0.496964850622;

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
    msg.setTimeStamp(0.157717349923);
    msg.setSource(29191U);
    msg.setSourceEntity(214U);
    msg.setDestination(30920U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.987282928119);
    msg.setSource(18733U);
    msg.setSourceEntity(209U);
    msg.setDestination(4707U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.0843956919864);
    msg.setSource(5369U);
    msg.setSourceEntity(205U);
    msg.setDestination(36348U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.518321092975);
    msg.setSource(33717U);
    msg.setSourceEntity(10U);
    msg.setDestination(37042U);
    msg.setDestinationEntity(3U);
    msg.name.assign("ETUFIYRSVSAVLUHKNWSEJION");
    msg.state = 196U;

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
    msg.setTimeStamp(0.771014963364);
    msg.setSource(18351U);
    msg.setSourceEntity(203U);
    msg.setDestination(48545U);
    msg.setDestinationEntity(139U);
    msg.name.assign("CNZLOJRWIHWRELPHPQCUSQQGXYZDYNRJWXNGSZPIAXVSLEHVDEUULGNLRAKINYPHDOXWNDZEUDRFSJMQPTVKTLMDFDGRTANUUGAMFXOMYGCYKVYZEHFAOUWPMKBVAIQCMRMTIBZSBTNMDBDNKEBJROSOCGFSWAXSQOPFLUIHOIJVIXHYRWYFEHPBXZBLROTVPAJEJYWMLEZIZWUJZBCQPFX");
    msg.state = 186U;

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
    msg.setTimeStamp(0.275879307915);
    msg.setSource(28133U);
    msg.setSourceEntity(215U);
    msg.setDestination(20558U);
    msg.setDestinationEntity(83U);
    msg.name.assign("QHZLVHGHMMPFEQCMJCPZRNJKHVFOEIYOFQWELWVURDWIDYTLULBCQYCHVZRASYSGOXUQBCUZJGHTADSCPURROHNNFSRSACISWCDDJXVPAWUDCKQMLYKRDJNXWYOIBLERHNPQMADBFXBMFDKGBYEOQJZNFQIOGZXTTVEKUELWSUXG");
    msg.state = 182U;

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
    msg.setTimeStamp(0.496307118693);
    msg.setSource(49645U);
    msg.setSourceEntity(161U);
    msg.setDestination(59954U);
    msg.setDestinationEntity(24U);
    msg.name.assign("PYCCYPQGLOXBFUBBRMPPIMIJSBPWQXDLBJGZNPIGDOSXXKHACUNFJDJCEVODRNOVFTAMLRFZDYQJQWLXCZUGUGTAGVAQHAQKFHVICMDSDEGZNXEZLVTTWIERLETNEZDXSJNSTIYLGRPTQWFUMXSYWRQVKRVLSSRIWNCTJUOMKNULHUHWUCZDKUZGYOOBSDWAKHIMCOVVOEAPMWTJKJPIHVQ");
    msg.value = 171U;

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
    msg.setTimeStamp(0.993359764221);
    msg.setSource(484U);
    msg.setSourceEntity(91U);
    msg.setDestination(28807U);
    msg.setDestinationEntity(98U);
    msg.name.assign("URINZQHXDQKMBUFLJVZVWPFTFTTBIKORIKNOAHXRZNRUWACVELYPBUDUYOGGBVJXATDTGKWSPXFNALGXYGEMRVJXDLOHNYIRFEQIPKSUPPMIWFZCCWEGNEOHNOJYQMGRIYOSCLEZWBAJJHUGDTWSKTWDPAHQCBYIVSETMFNYASEQHHUMMCQRARSUYKBFDXVOGXLDKZLSPOFGMHBVMTD");
    msg.value = 12U;

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
    msg.setTimeStamp(0.517177665426);
    msg.setSource(18226U);
    msg.setSourceEntity(12U);
    msg.setDestination(46440U);
    msg.setDestinationEntity(203U);
    msg.name.assign("HZVIVJADGQNQOOLPRAQXATCMDWSYSBPEMOPJAWXTFDSRBKAKGORODCCXPYKTCNKNCETZSFJVCKYACKTGPZEEMWEZUIBNEIPRNTOXRUIMNYYVMDZSVXSVHPJOHFYTQQDUKIWFGHWKBLMRVUXHRGGAIBBXVPIKECHZHQTJBUPCDWNDSXJZILPEKOTYVYFQHNFYSGBNLGWCAIDUFWZHAIMBAYLMLTRSUEXUJLWLLJJLHUJZQSFBGXOFFRWGVN");
    msg.value = 21U;

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
    msg.setTimeStamp(0.0883546783685);
    msg.setSource(1804U);
    msg.setSourceEntity(46U);
    msg.setDestination(1926U);
    msg.setDestinationEntity(34U);
    msg.name.assign("SVUYMHLVABXMRWYBEJDVIPTYAXUMNXQXZAHJJPKHAQHQDHXOGDCSEOZCJVRHUJI");

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
    msg.setTimeStamp(0.528667730203);
    msg.setSource(64110U);
    msg.setSourceEntity(70U);
    msg.setDestination(15225U);
    msg.setDestinationEntity(133U);
    msg.name.assign("GLDULDJBQKGGMUNBWXUWHNNZUJGOTCWZACBBVRIXMMTAYEFELYPFUVAHDCDTMZTDXASVKMOPXIQKNGCXPWHQVPOSHKZQKAOESYQDKZNZQARYOHSEMBGVQTWWXICESDHEFYRQMRZXLWFJCAUJJANTYVLSBSKRKSHJWCZWAMQPENP");

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
    msg.setTimeStamp(0.520407442411);
    msg.setSource(40465U);
    msg.setSourceEntity(47U);
    msg.setDestination(29913U);
    msg.setDestinationEntity(238U);
    msg.name.assign("BACCAGZXCXVIKIUZOFXPMQDNKCBOYFNHHOSZKDGMTXMZAPBTNHYSBKSFRRUPEYMEBAXFASEQACI");

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
    msg.setTimeStamp(0.684007926931);
    msg.setSource(39927U);
    msg.setSourceEntity(63U);
    msg.setDestination(52525U);
    msg.setDestinationEntity(136U);
    msg.name.assign("CWIDMBTDOJIKOUAOELHVECPGMQULEYZHRKHAAGVUJZWHDNSZASHWVEQCGWOYRFRKJJLKYXGXIFSPDQBMPMTQDFYTPDOEN");
    msg.value = 8U;

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
    msg.setTimeStamp(0.305424945953);
    msg.setSource(52039U);
    msg.setSourceEntity(141U);
    msg.setDestination(58791U);
    msg.setDestinationEntity(219U);
    msg.name.assign("UUZLTXZZFKVGGBPPBMWKJLVIVJHZBELVGCDVWBIHETHXOQQRLBPQTXFUTOFYIXBOUYSGDVHGGYDPGCFFRDJQUCTWIFRQIJXASONBCWHNSRNIOWTLKEEZXUYEWJYXXIMTPXBDBDSKCSZJHCNLKMQJUMPFOWVQAKFROEYSLNBRNISFPQPRKDRUCUVSMAFXOU");
    msg.value = 94U;

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
    msg.setTimeStamp(0.37509170231);
    msg.setSource(53439U);
    msg.setSourceEntity(33U);
    msg.setDestination(51282U);
    msg.setDestinationEntity(44U);
    msg.name.assign("KFCQTLRKSFUACQPPDMOGZLAQQQWAHBUIROMA");
    msg.value = 230U;

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
    msg.setTimeStamp(0.649570694798);
    msg.setSource(19924U);
    msg.setSourceEntity(246U);
    msg.setDestination(33475U);
    msg.setDestinationEntity(166U);
    msg.id = 136U;
    msg.period = 4086430216U;
    msg.duty_cycle = 1474047738U;

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
    msg.setTimeStamp(0.544727646124);
    msg.setSource(42514U);
    msg.setSourceEntity(150U);
    msg.setDestination(11296U);
    msg.setDestinationEntity(91U);
    msg.id = 169U;
    msg.period = 994495234U;
    msg.duty_cycle = 1900817623U;

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
    msg.setTimeStamp(0.179431121479);
    msg.setSource(63219U);
    msg.setSourceEntity(116U);
    msg.setDestination(48436U);
    msg.setDestinationEntity(12U);
    msg.id = 172U;
    msg.period = 3551515674U;
    msg.duty_cycle = 2253014831U;

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
    msg.setTimeStamp(0.0905874127971);
    msg.setSource(61415U);
    msg.setSourceEntity(139U);
    msg.setDestination(33896U);
    msg.setDestinationEntity(121U);
    msg.id = 104U;
    msg.period = 1451588323U;
    msg.duty_cycle = 2064736344U;

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
    msg.setTimeStamp(0.011915659317);
    msg.setSource(9866U);
    msg.setSourceEntity(132U);
    msg.setDestination(23061U);
    msg.setDestinationEntity(123U);
    msg.id = 19U;
    msg.period = 568342691U;
    msg.duty_cycle = 1195271247U;

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
    msg.setTimeStamp(0.784549688531);
    msg.setSource(28734U);
    msg.setSourceEntity(126U);
    msg.setDestination(17541U);
    msg.setDestinationEntity(57U);
    msg.id = 81U;
    msg.period = 853876437U;
    msg.duty_cycle = 3207537119U;

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
    msg.setTimeStamp(0.756365986944);
    msg.setSource(21926U);
    msg.setSourceEntity(169U);
    msg.setDestination(28305U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.296781243328;
    msg.lon = 0.488174261997;
    msg.height = 0.944481854614;
    msg.x = 0.55394744655;
    msg.y = 0.822563483831;
    msg.z = 0.501952723772;
    msg.phi = 0.561867568009;
    msg.theta = 0.830419269553;
    msg.psi = 0.803176674606;
    msg.u = 0.752526637285;
    msg.v = 0.973451338846;
    msg.w = 0.841966608431;
    msg.vx = 0.569325570873;
    msg.vy = 0.889086161129;
    msg.vz = 0.983530561979;
    msg.p = 0.935169154731;
    msg.q = 0.510955025904;
    msg.r = 0.812080735549;
    msg.depth = 0.0428799085028;
    msg.alt = 0.352046907846;

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
    msg.setTimeStamp(0.339720498081);
    msg.setSource(46642U);
    msg.setSourceEntity(81U);
    msg.setDestination(26035U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.338597950309;
    msg.lon = 0.532876028067;
    msg.height = 0.0596879165475;
    msg.x = 0.525660637474;
    msg.y = 0.3320039427;
    msg.z = 0.664444886748;
    msg.phi = 0.989142702004;
    msg.theta = 0.279815310428;
    msg.psi = 0.773290813073;
    msg.u = 0.0552195166345;
    msg.v = 0.763783666899;
    msg.w = 0.439727913961;
    msg.vx = 0.838937860642;
    msg.vy = 0.495892900645;
    msg.vz = 0.0899253875305;
    msg.p = 0.816252968606;
    msg.q = 0.415628304444;
    msg.r = 0.0967273903711;
    msg.depth = 0.294343862625;
    msg.alt = 0.952467221969;

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
    msg.setTimeStamp(0.605136658685);
    msg.setSource(1001U);
    msg.setSourceEntity(125U);
    msg.setDestination(42439U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.0552708717659;
    msg.lon = 0.00358585630854;
    msg.height = 0.643037022593;
    msg.x = 0.722961192991;
    msg.y = 0.431379842365;
    msg.z = 0.51015677359;
    msg.phi = 0.614106046674;
    msg.theta = 0.370644292712;
    msg.psi = 0.236972204222;
    msg.u = 0.423099014079;
    msg.v = 0.170363510126;
    msg.w = 0.0362132631457;
    msg.vx = 0.0296837763834;
    msg.vy = 0.0583250126063;
    msg.vz = 0.163048125085;
    msg.p = 0.712164030193;
    msg.q = 0.660201936251;
    msg.r = 0.955055902683;
    msg.depth = 0.362825078883;
    msg.alt = 0.620143908433;

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
    msg.setTimeStamp(0.877615573842);
    msg.setSource(47319U);
    msg.setSourceEntity(246U);
    msg.setDestination(42472U);
    msg.setDestinationEntity(88U);
    msg.x = 0.81570216591;
    msg.y = 0.969917866293;
    msg.z = 0.343135810742;

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
    msg.setTimeStamp(0.21986174577);
    msg.setSource(30109U);
    msg.setSourceEntity(198U);
    msg.setDestination(49164U);
    msg.setDestinationEntity(109U);
    msg.x = 0.225333908099;
    msg.y = 0.85072229515;
    msg.z = 0.000639967822247;

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
    msg.setTimeStamp(0.329750134725);
    msg.setSource(50081U);
    msg.setSourceEntity(132U);
    msg.setDestination(8083U);
    msg.setDestinationEntity(217U);
    msg.x = 0.913818730629;
    msg.y = 0.537599708519;
    msg.z = 0.739742491995;

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
    msg.setTimeStamp(0.238516613618);
    msg.setSource(57146U);
    msg.setSourceEntity(2U);
    msg.setDestination(41064U);
    msg.setDestinationEntity(135U);
    msg.value = 0.88413854421;

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
    msg.setTimeStamp(0.389477223661);
    msg.setSource(56121U);
    msg.setSourceEntity(185U);
    msg.setDestination(51906U);
    msg.setDestinationEntity(184U);
    msg.value = 0.186742808768;

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
    msg.setTimeStamp(0.783709340302);
    msg.setSource(56003U);
    msg.setSourceEntity(35U);
    msg.setDestination(53473U);
    msg.setDestinationEntity(92U);
    msg.value = 0.86142855784;

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
    msg.setTimeStamp(0.791810986746);
    msg.setSource(41398U);
    msg.setSourceEntity(33U);
    msg.setDestination(33184U);
    msg.setDestinationEntity(17U);
    msg.value = 0.194816141803;

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
    msg.setTimeStamp(0.638159530174);
    msg.setSource(19319U);
    msg.setSourceEntity(192U);
    msg.setDestination(15514U);
    msg.setDestinationEntity(224U);
    msg.value = 0.471533911148;

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
    msg.setTimeStamp(0.367899279365);
    msg.setSource(65107U);
    msg.setSourceEntity(211U);
    msg.setDestination(59052U);
    msg.setDestinationEntity(101U);
    msg.value = 0.345986566744;

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
    msg.setTimeStamp(0.0303039960357);
    msg.setSource(43290U);
    msg.setSourceEntity(73U);
    msg.setDestination(36073U);
    msg.setDestinationEntity(116U);
    msg.x = 0.859750030597;
    msg.y = 0.702835187805;
    msg.z = 0.974744785805;
    msg.phi = 0.461523456738;
    msg.theta = 0.609876935089;
    msg.psi = 0.82651698408;
    msg.p = 0.553047605308;
    msg.q = 0.409096164059;
    msg.r = 0.599415573421;
    msg.u = 0.980287565351;
    msg.v = 0.421480381805;
    msg.w = 0.315934454997;
    msg.bias_psi = 0.291942395419;
    msg.bias_r = 0.191558709508;

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
    msg.setTimeStamp(0.841476501263);
    msg.setSource(8315U);
    msg.setSourceEntity(174U);
    msg.setDestination(7919U);
    msg.setDestinationEntity(134U);
    msg.x = 0.290546554464;
    msg.y = 0.468882431512;
    msg.z = 0.565299288079;
    msg.phi = 0.480287805197;
    msg.theta = 0.554433054136;
    msg.psi = 0.124064724938;
    msg.p = 0.689087079824;
    msg.q = 0.286727068463;
    msg.r = 0.858726083221;
    msg.u = 0.78124561209;
    msg.v = 0.371245529022;
    msg.w = 0.322485993677;
    msg.bias_psi = 0.749795594102;
    msg.bias_r = 0.759500864581;

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
    msg.setTimeStamp(0.133380896877);
    msg.setSource(20175U);
    msg.setSourceEntity(80U);
    msg.setDestination(42356U);
    msg.setDestinationEntity(237U);
    msg.x = 0.678502022223;
    msg.y = 0.966220041085;
    msg.z = 0.073614176578;
    msg.phi = 0.354370795663;
    msg.theta = 0.596796912348;
    msg.psi = 0.409113295412;
    msg.p = 0.435176757549;
    msg.q = 0.549981042973;
    msg.r = 0.615323100537;
    msg.u = 0.47637822143;
    msg.v = 0.403434232419;
    msg.w = 0.979937387081;
    msg.bias_psi = 0.685414842244;
    msg.bias_r = 0.180034549506;

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
    msg.setTimeStamp(0.110123195732);
    msg.setSource(3359U);
    msg.setSourceEntity(28U);
    msg.setDestination(14736U);
    msg.setDestinationEntity(189U);
    msg.bias_psi = 0.821640831146;
    msg.bias_r = 0.176440814679;
    msg.cog = 0.434715424557;
    msg.cyaw = 0.0463138752933;
    msg.lbl_rej_level = 0.937328760346;
    msg.gps_rej_level = 0.47765837123;
    msg.custom_x = 0.970408068916;
    msg.custom_y = 0.653557888478;
    msg.custom_z = 0.22205775069;

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
    msg.setTimeStamp(0.245400306449);
    msg.setSource(6851U);
    msg.setSourceEntity(152U);
    msg.setDestination(64533U);
    msg.setDestinationEntity(188U);
    msg.bias_psi = 0.549080848614;
    msg.bias_r = 0.607995830665;
    msg.cog = 0.754930941882;
    msg.cyaw = 0.00568457146187;
    msg.lbl_rej_level = 0.823327567199;
    msg.gps_rej_level = 0.357904669236;
    msg.custom_x = 0.815235423546;
    msg.custom_y = 0.614116212498;
    msg.custom_z = 0.623686047896;

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
    msg.setTimeStamp(0.308318854172);
    msg.setSource(32695U);
    msg.setSourceEntity(56U);
    msg.setDestination(34551U);
    msg.setDestinationEntity(119U);
    msg.bias_psi = 0.34903570117;
    msg.bias_r = 0.502606721603;
    msg.cog = 0.234617010041;
    msg.cyaw = 0.431951907257;
    msg.lbl_rej_level = 0.989413937493;
    msg.gps_rej_level = 0.74537897498;
    msg.custom_x = 0.927660082923;
    msg.custom_y = 0.346288228456;
    msg.custom_z = 0.899046497622;

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
    msg.setTimeStamp(0.991440738173);
    msg.setSource(45509U);
    msg.setSourceEntity(200U);
    msg.setDestination(16831U);
    msg.setDestinationEntity(26U);
    msg.utc_time = 0.978724178683;
    msg.reason = 41U;

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
    msg.setTimeStamp(0.303263722991);
    msg.setSource(9503U);
    msg.setSourceEntity(24U);
    msg.setDestination(59596U);
    msg.setDestinationEntity(23U);
    msg.utc_time = 0.876346586006;
    msg.reason = 232U;

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
    msg.setTimeStamp(0.872688496455);
    msg.setSource(14989U);
    msg.setSourceEntity(50U);
    msg.setDestination(3693U);
    msg.setDestinationEntity(52U);
    msg.utc_time = 0.880352137692;
    msg.reason = 32U;

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
    msg.setTimeStamp(0.231438540384);
    msg.setSource(39344U);
    msg.setSourceEntity(227U);
    msg.setDestination(62773U);
    msg.setDestinationEntity(249U);
    msg.id = 204U;
    msg.range = 0.138907639424;
    msg.acceptance = 139U;

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
    msg.setTimeStamp(0.726575816132);
    msg.setSource(10510U);
    msg.setSourceEntity(103U);
    msg.setDestination(11914U);
    msg.setDestinationEntity(160U);
    msg.id = 112U;
    msg.range = 0.165949571027;
    msg.acceptance = 66U;

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
    msg.setTimeStamp(0.404204614394);
    msg.setSource(61035U);
    msg.setSourceEntity(181U);
    msg.setDestination(55974U);
    msg.setDestinationEntity(18U);
    msg.id = 130U;
    msg.range = 0.404156865542;
    msg.acceptance = 111U;

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
    msg.setTimeStamp(0.0688676575576);
    msg.setSource(27927U);
    msg.setSourceEntity(77U);
    msg.setDestination(49295U);
    msg.setDestinationEntity(238U);
    msg.type = 38U;
    msg.reason = 195U;
    msg.value = 0.8426511419;
    msg.timestep = 0.66865289473;

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
    msg.setTimeStamp(0.966393288013);
    msg.setSource(4346U);
    msg.setSourceEntity(154U);
    msg.setDestination(31570U);
    msg.setDestinationEntity(210U);
    msg.type = 222U;
    msg.reason = 61U;
    msg.value = 0.672281901111;
    msg.timestep = 0.634808885654;

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
    msg.setTimeStamp(0.383319168053);
    msg.setSource(3694U);
    msg.setSourceEntity(215U);
    msg.setDestination(3346U);
    msg.setDestinationEntity(63U);
    msg.type = 38U;
    msg.reason = 196U;
    msg.value = 0.173512532806;
    msg.timestep = 0.997169773009;

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
    msg.setTimeStamp(0.0193534603163);
    msg.setSource(36029U);
    msg.setSourceEntity(202U);
    msg.setDestination(37164U);
    msg.setDestinationEntity(23U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AOGBQFIKPBHXYAYORCBVZZZDPNEODJKTPKQGXLFMJVQUFQOZDCYEACAWISJFLTNDUGBRMOKBRRRVEFIYAGEOZIGQPQWSOPMSRJDWCULSXPUMFYIAPMRBIBIGVTLJESSXHYKNFLMKHEDKWVNQPVVNZXHZHVAEJDLNIWBSYMJTRTC");
    tmp_msg_0.lat = 0.397384033597;
    tmp_msg_0.lon = 0.843696408093;
    tmp_msg_0.depth = 0.476370741476;
    tmp_msg_0.query_channel = 48U;
    tmp_msg_0.reply_channel = 81U;
    tmp_msg_0.transponder_delay = 223U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.972346934317;
    msg.y = 0.657846490119;
    msg.var_x = 0.609141909021;
    msg.var_y = 0.205135806089;
    msg.distance = 0.377367154545;

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
    msg.setTimeStamp(0.309080928472);
    msg.setSource(55339U);
    msg.setSourceEntity(15U);
    msg.setDestination(42843U);
    msg.setDestinationEntity(72U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EVBYRWYJVWCP");
    tmp_msg_0.lat = 0.476597306923;
    tmp_msg_0.lon = 0.708651670967;
    tmp_msg_0.depth = 0.11611621474;
    tmp_msg_0.query_channel = 1U;
    tmp_msg_0.reply_channel = 100U;
    tmp_msg_0.transponder_delay = 19U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.913769088733;
    msg.y = 0.988953812183;
    msg.var_x = 0.783151499423;
    msg.var_y = 0.484712896288;
    msg.distance = 0.243772331852;

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
    msg.setTimeStamp(0.625861579663);
    msg.setSource(41014U);
    msg.setSourceEntity(5U);
    msg.setDestination(56579U);
    msg.setDestinationEntity(161U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AMWKUUTQAHCXNZLMOIBZFCLZMPOYIQXDJRLGPSFAZWOJRMEHQZBSCDKNCFDJVCHNEWZRVEIPOJVIASOEPKQBMLDUDSFFYGCVZPSGUN");
    tmp_msg_0.lat = 0.605382806162;
    tmp_msg_0.lon = 0.77138378107;
    tmp_msg_0.depth = 0.0530489144086;
    tmp_msg_0.query_channel = 251U;
    tmp_msg_0.reply_channel = 126U;
    tmp_msg_0.transponder_delay = 118U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0777132781346;
    msg.y = 0.347765087258;
    msg.var_x = 0.220885960419;
    msg.var_y = 0.0328291546089;
    msg.distance = 0.139457082105;

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
    msg.setTimeStamp(0.685063630323);
    msg.setSource(27199U);
    msg.setSourceEntity(229U);
    msg.setDestination(56883U);
    msg.setDestinationEntity(98U);
    msg.state = 76U;

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
    msg.setTimeStamp(0.251648388577);
    msg.setSource(61045U);
    msg.setSourceEntity(23U);
    msg.setDestination(39413U);
    msg.setDestinationEntity(150U);
    msg.state = 191U;

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
    msg.setTimeStamp(0.263072940362);
    msg.setSource(46869U);
    msg.setSourceEntity(149U);
    msg.setDestination(20694U);
    msg.setDestinationEntity(71U);
    msg.state = 190U;

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
    msg.setTimeStamp(0.480550785085);
    msg.setSource(9833U);
    msg.setSourceEntity(123U);
    msg.setDestination(1968U);
    msg.setDestinationEntity(248U);
    msg.x = 0.951738066007;
    msg.y = 0.91482006841;
    msg.z = 0.738260968145;

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
    msg.setTimeStamp(0.997857561751);
    msg.setSource(20464U);
    msg.setSourceEntity(162U);
    msg.setDestination(21552U);
    msg.setDestinationEntity(50U);
    msg.x = 0.722983280182;
    msg.y = 0.973557521968;
    msg.z = 0.471539363947;

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
    msg.setTimeStamp(0.548163894035);
    msg.setSource(26217U);
    msg.setSourceEntity(84U);
    msg.setDestination(64376U);
    msg.setDestinationEntity(160U);
    msg.x = 0.676660211785;
    msg.y = 0.103267693802;
    msg.z = 0.34431797678;

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
    msg.setTimeStamp(0.204781999495);
    msg.setSource(60630U);
    msg.setSourceEntity(176U);
    msg.setDestination(27058U);
    msg.setDestinationEntity(182U);
    msg.va = 0.873131544449;
    msg.aoa = 0.0654267510406;
    msg.ssa = 0.0962218924144;

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
    msg.setTimeStamp(0.759220975493);
    msg.setSource(22215U);
    msg.setSourceEntity(22U);
    msg.setDestination(16501U);
    msg.setDestinationEntity(32U);
    msg.va = 0.328616425898;
    msg.aoa = 0.749151601439;
    msg.ssa = 0.745457068847;

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
    msg.setTimeStamp(0.0345351066937);
    msg.setSource(15740U);
    msg.setSourceEntity(20U);
    msg.setDestination(49781U);
    msg.setDestinationEntity(189U);
    msg.va = 0.12342286572;
    msg.aoa = 0.991655038851;
    msg.ssa = 0.418013155504;

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
    msg.setTimeStamp(0.87093666668);
    msg.setSource(41885U);
    msg.setSourceEntity(202U);
    msg.setDestination(50364U);
    msg.setDestinationEntity(101U);
    msg.value = 0.982112251773;

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
    msg.setTimeStamp(0.976633846955);
    msg.setSource(42570U);
    msg.setSourceEntity(123U);
    msg.setDestination(6468U);
    msg.setDestinationEntity(122U);
    msg.value = 0.597445996126;

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
    msg.setTimeStamp(0.777395829382);
    msg.setSource(22037U);
    msg.setSourceEntity(34U);
    msg.setDestination(44048U);
    msg.setDestinationEntity(212U);
    msg.value = 0.584138883428;

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
    msg.setTimeStamp(0.215737362977);
    msg.setSource(26223U);
    msg.setSourceEntity(225U);
    msg.setDestination(21111U);
    msg.setDestinationEntity(47U);
    msg.value = 0.0980255116548;
    msg.z_units = 13U;

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
    msg.setTimeStamp(0.732157345814);
    msg.setSource(50364U);
    msg.setSourceEntity(55U);
    msg.setDestination(52131U);
    msg.setDestinationEntity(196U);
    msg.value = 0.326533247552;
    msg.z_units = 24U;

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
    msg.setTimeStamp(0.921461725197);
    msg.setSource(61442U);
    msg.setSourceEntity(139U);
    msg.setDestination(42856U);
    msg.setDestinationEntity(247U);
    msg.value = 0.0279084730308;
    msg.z_units = 58U;

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
    msg.setTimeStamp(0.376100074289);
    msg.setSource(8872U);
    msg.setSourceEntity(47U);
    msg.setDestination(62222U);
    msg.setDestinationEntity(231U);
    msg.value = 0.360966427198;
    msg.speed_units = 211U;

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
    msg.setTimeStamp(0.309137893659);
    msg.setSource(8606U);
    msg.setSourceEntity(194U);
    msg.setDestination(27886U);
    msg.setDestinationEntity(215U);
    msg.value = 0.000321083669862;
    msg.speed_units = 62U;

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
    msg.setTimeStamp(0.865811585998);
    msg.setSource(14726U);
    msg.setSourceEntity(196U);
    msg.setDestination(58553U);
    msg.setDestinationEntity(224U);
    msg.value = 0.926850111425;
    msg.speed_units = 74U;

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
    msg.setTimeStamp(0.898238551455);
    msg.setSource(39115U);
    msg.setSourceEntity(25U);
    msg.setDestination(29293U);
    msg.setDestinationEntity(81U);
    msg.value = 0.576126990951;

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
    msg.setTimeStamp(0.9300088889);
    msg.setSource(43048U);
    msg.setSourceEntity(72U);
    msg.setDestination(1097U);
    msg.setDestinationEntity(250U);
    msg.value = 0.0706240426943;

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
    msg.setTimeStamp(0.130447064305);
    msg.setSource(56369U);
    msg.setSourceEntity(111U);
    msg.setDestination(28955U);
    msg.setDestinationEntity(131U);
    msg.value = 0.484778369203;

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
    msg.setTimeStamp(0.00525788300187);
    msg.setSource(11504U);
    msg.setSourceEntity(61U);
    msg.setDestination(60696U);
    msg.setDestinationEntity(223U);
    msg.value = 0.281046916879;

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
    msg.setTimeStamp(0.774715648007);
    msg.setSource(28729U);
    msg.setSourceEntity(172U);
    msg.setDestination(50293U);
    msg.setDestinationEntity(130U);
    msg.value = 0.820984226617;

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
    msg.setTimeStamp(0.163218597021);
    msg.setSource(10866U);
    msg.setSourceEntity(10U);
    msg.setDestination(63226U);
    msg.setDestinationEntity(191U);
    msg.value = 0.93373165831;

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
    msg.setTimeStamp(0.941981911783);
    msg.setSource(4816U);
    msg.setSourceEntity(103U);
    msg.setDestination(57510U);
    msg.setDestinationEntity(76U);
    msg.value = 0.282893969033;

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
    msg.setTimeStamp(0.546012766457);
    msg.setSource(46278U);
    msg.setSourceEntity(189U);
    msg.setDestination(12247U);
    msg.setDestinationEntity(182U);
    msg.value = 0.88626804467;

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
    msg.setTimeStamp(0.600868256203);
    msg.setSource(16921U);
    msg.setSourceEntity(60U);
    msg.setDestination(28838U);
    msg.setDestinationEntity(135U);
    msg.value = 0.213825874885;

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
    msg.setTimeStamp(0.256681424684);
    msg.setSource(12311U);
    msg.setSourceEntity(25U);
    msg.setDestination(6121U);
    msg.setDestinationEntity(33U);
    msg.path_ref = 1484204479U;
    msg.start_lat = 0.689398242198;
    msg.start_lon = 0.300242679763;
    msg.start_z = 0.593477700727;
    msg.start_z_units = 153U;
    msg.end_lat = 0.248338002064;
    msg.end_lon = 0.0630280643305;
    msg.end_z = 0.0126563850377;
    msg.end_z_units = 63U;
    msg.speed = 0.289186409091;
    msg.speed_units = 22U;
    msg.lradius = 0.667827451269;
    msg.flags = 142U;

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
    msg.setTimeStamp(0.667079226855);
    msg.setSource(44279U);
    msg.setSourceEntity(145U);
    msg.setDestination(4066U);
    msg.setDestinationEntity(202U);
    msg.path_ref = 2110031866U;
    msg.start_lat = 0.186050274127;
    msg.start_lon = 0.73631156279;
    msg.start_z = 0.952776366032;
    msg.start_z_units = 67U;
    msg.end_lat = 0.931897357072;
    msg.end_lon = 0.348966462855;
    msg.end_z = 0.373123197783;
    msg.end_z_units = 212U;
    msg.speed = 0.197926875476;
    msg.speed_units = 54U;
    msg.lradius = 0.234102822906;
    msg.flags = 24U;

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
    msg.setTimeStamp(0.0567367099114);
    msg.setSource(18981U);
    msg.setSourceEntity(16U);
    msg.setDestination(50400U);
    msg.setDestinationEntity(162U);
    msg.path_ref = 4230189150U;
    msg.start_lat = 0.221791106663;
    msg.start_lon = 0.506509007162;
    msg.start_z = 0.141382152965;
    msg.start_z_units = 79U;
    msg.end_lat = 0.796671836744;
    msg.end_lon = 0.236044137094;
    msg.end_z = 0.353088776806;
    msg.end_z_units = 198U;
    msg.speed = 0.839177997101;
    msg.speed_units = 137U;
    msg.lradius = 0.883905942417;
    msg.flags = 32U;

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
    msg.setTimeStamp(0.623775276627);
    msg.setSource(28215U);
    msg.setSourceEntity(253U);
    msg.setDestination(30244U);
    msg.setDestinationEntity(236U);
    msg.x = 0.0191431153455;
    msg.y = 0.346050749957;
    msg.z = 0.991622940976;
    msg.k = 0.386861358652;
    msg.m = 0.277394612004;
    msg.n = 0.290747522424;
    msg.flags = 224U;

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
    msg.setTimeStamp(0.307520184934);
    msg.setSource(16168U);
    msg.setSourceEntity(248U);
    msg.setDestination(3475U);
    msg.setDestinationEntity(155U);
    msg.x = 0.645561677137;
    msg.y = 0.973576490289;
    msg.z = 0.810594970416;
    msg.k = 0.503285076165;
    msg.m = 0.43980418622;
    msg.n = 0.518751749864;
    msg.flags = 242U;

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
    msg.setTimeStamp(0.616535707516);
    msg.setSource(57583U);
    msg.setSourceEntity(80U);
    msg.setDestination(47043U);
    msg.setDestinationEntity(232U);
    msg.x = 0.991539525052;
    msg.y = 0.79107936686;
    msg.z = 0.249663716088;
    msg.k = 0.0114661034991;
    msg.m = 0.340978416739;
    msg.n = 0.61245443955;
    msg.flags = 113U;

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
    msg.setTimeStamp(0.129331247952);
    msg.setSource(28523U);
    msg.setSourceEntity(20U);
    msg.setDestination(9970U);
    msg.setDestinationEntity(130U);
    msg.value = 0.195138314711;

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
    msg.setTimeStamp(0.122305193716);
    msg.setSource(31223U);
    msg.setSourceEntity(26U);
    msg.setDestination(34525U);
    msg.setDestinationEntity(151U);
    msg.value = 0.659659146939;

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
    msg.setTimeStamp(0.790841968597);
    msg.setSource(62653U);
    msg.setSourceEntity(35U);
    msg.setDestination(13217U);
    msg.setDestinationEntity(91U);
    msg.value = 0.424932017587;

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
    msg.setTimeStamp(0.386821977367);
    msg.setSource(24901U);
    msg.setSourceEntity(180U);
    msg.setDestination(37319U);
    msg.setDestinationEntity(52U);
    msg.u = 0.61948687911;
    msg.v = 0.977853104316;
    msg.w = 0.514638439898;
    msg.p = 0.423568032471;
    msg.q = 0.654846641039;
    msg.r = 0.72301396042;
    msg.flags = 187U;

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
    msg.setTimeStamp(0.372420464689);
    msg.setSource(38164U);
    msg.setSourceEntity(237U);
    msg.setDestination(61192U);
    msg.setDestinationEntity(15U);
    msg.u = 0.441320279889;
    msg.v = 0.236326812145;
    msg.w = 0.4422493715;
    msg.p = 0.715077038633;
    msg.q = 0.948289637352;
    msg.r = 0.411461836405;
    msg.flags = 144U;

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
    msg.setTimeStamp(0.408886430213);
    msg.setSource(64395U);
    msg.setSourceEntity(247U);
    msg.setDestination(18275U);
    msg.setDestinationEntity(216U);
    msg.u = 0.8057439946;
    msg.v = 0.778341777209;
    msg.w = 0.258461516147;
    msg.p = 0.553125750014;
    msg.q = 0.21050060079;
    msg.r = 0.0816747756789;
    msg.flags = 40U;

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
    msg.setTimeStamp(0.6443686583);
    msg.setSource(17695U);
    msg.setSourceEntity(72U);
    msg.setDestination(41330U);
    msg.setDestinationEntity(101U);
    msg.path_ref = 1770301278U;
    msg.start_lat = 0.101345110027;
    msg.start_lon = 0.790831717062;
    msg.start_z = 0.896738014558;
    msg.start_z_units = 40U;
    msg.end_lat = 0.329709960383;
    msg.end_lon = 0.526651550845;
    msg.end_z = 0.0738388774049;
    msg.end_z_units = 216U;
    msg.lradius = 0.436401192932;
    msg.flags = 141U;
    msg.x = 0.885257374164;
    msg.y = 0.505482435622;
    msg.z = 0.339851604153;
    msg.vx = 0.978377207727;
    msg.vy = 0.686891834139;
    msg.vz = 0.0477219913213;
    msg.course_error = 0.672397601708;
    msg.eta = 58725U;

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
    msg.setTimeStamp(0.875999985315);
    msg.setSource(3527U);
    msg.setSourceEntity(11U);
    msg.setDestination(58364U);
    msg.setDestinationEntity(200U);
    msg.path_ref = 3952627910U;
    msg.start_lat = 0.79348132773;
    msg.start_lon = 0.866474598994;
    msg.start_z = 0.597329298137;
    msg.start_z_units = 236U;
    msg.end_lat = 0.650667015947;
    msg.end_lon = 0.457719994924;
    msg.end_z = 0.764978842805;
    msg.end_z_units = 175U;
    msg.lradius = 0.679095641239;
    msg.flags = 112U;
    msg.x = 0.383449029154;
    msg.y = 0.272173408227;
    msg.z = 0.156245944452;
    msg.vx = 0.282643475694;
    msg.vy = 0.902363818867;
    msg.vz = 0.609290548494;
    msg.course_error = 0.287899503269;
    msg.eta = 49354U;

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
    msg.setTimeStamp(0.213676416007);
    msg.setSource(36664U);
    msg.setSourceEntity(30U);
    msg.setDestination(21622U);
    msg.setDestinationEntity(156U);
    msg.path_ref = 85207045U;
    msg.start_lat = 0.189749510168;
    msg.start_lon = 0.514856949563;
    msg.start_z = 0.66773904305;
    msg.start_z_units = 254U;
    msg.end_lat = 0.445358435371;
    msg.end_lon = 0.514994285334;
    msg.end_z = 0.612074584562;
    msg.end_z_units = 25U;
    msg.lradius = 0.485589174354;
    msg.flags = 132U;
    msg.x = 0.367816962197;
    msg.y = 0.408104085488;
    msg.z = 0.406920234743;
    msg.vx = 0.118168146661;
    msg.vy = 0.118837865824;
    msg.vz = 0.588122677506;
    msg.course_error = 0.501072421928;
    msg.eta = 53698U;

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
    msg.setTimeStamp(0.101252973672);
    msg.setSource(12820U);
    msg.setSourceEntity(144U);
    msg.setDestination(32438U);
    msg.setDestinationEntity(1U);
    msg.k = 0.184579901618;
    msg.m = 0.556283617124;
    msg.n = 0.00724811678784;

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
    msg.setTimeStamp(0.0824897251514);
    msg.setSource(28852U);
    msg.setSourceEntity(55U);
    msg.setDestination(12899U);
    msg.setDestinationEntity(74U);
    msg.k = 0.928800466997;
    msg.m = 0.642216687132;
    msg.n = 0.678031622463;

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
    msg.setTimeStamp(0.749437262376);
    msg.setSource(61016U);
    msg.setSourceEntity(2U);
    msg.setDestination(36852U);
    msg.setDestinationEntity(157U);
    msg.k = 0.927662329032;
    msg.m = 0.1887252458;
    msg.n = 0.507218586785;

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
    msg.setTimeStamp(0.976654455678);
    msg.setSource(32211U);
    msg.setSourceEntity(115U);
    msg.setDestination(16448U);
    msg.setDestinationEntity(216U);
    msg.p = 0.352691861893;
    msg.i = 0.617705853688;
    msg.d = 0.923340356546;
    msg.a = 0.575464320423;

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
    msg.setTimeStamp(0.965112978473);
    msg.setSource(29556U);
    msg.setSourceEntity(132U);
    msg.setDestination(36042U);
    msg.setDestinationEntity(151U);
    msg.p = 0.884426169291;
    msg.i = 0.530551387083;
    msg.d = 0.685526253016;
    msg.a = 0.210067404339;

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
    msg.setTimeStamp(0.669034807513);
    msg.setSource(23486U);
    msg.setSourceEntity(254U);
    msg.setDestination(51508U);
    msg.setDestinationEntity(134U);
    msg.p = 0.544347193754;
    msg.i = 0.659726015163;
    msg.d = 0.255246907833;
    msg.a = 0.487490637908;

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
    msg.setTimeStamp(0.637234008072);
    msg.setSource(62052U);
    msg.setSourceEntity(247U);
    msg.setDestination(55093U);
    msg.setDestinationEntity(80U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.84636939215);
    msg.setSource(56923U);
    msg.setSourceEntity(28U);
    msg.setDestination(1074U);
    msg.setDestinationEntity(133U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.061202891992);
    msg.setSource(29354U);
    msg.setSourceEntity(93U);
    msg.setDestination(48287U);
    msg.setDestinationEntity(158U);
    msg.op = 218U;

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
    msg.setTimeStamp(0.604743557893);
    msg.setSource(34107U);
    msg.setSourceEntity(71U);
    msg.setDestination(10580U);
    msg.setDestinationEntity(89U);
    msg.x = 0.217644415325;
    msg.y = 0.861341577318;
    msg.z = 0.5540432444;
    msg.vx = 0.785097875127;
    msg.vy = 0.835010543898;
    msg.vz = 0.508372981808;
    msg.ax = 0.261730281533;
    msg.ay = 0.161516204021;
    msg.az = 0.134019927259;
    msg.flags = 18845U;

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
    msg.setTimeStamp(0.917274736208);
    msg.setSource(64573U);
    msg.setSourceEntity(213U);
    msg.setDestination(18231U);
    msg.setDestinationEntity(65U);
    msg.x = 0.259672345492;
    msg.y = 0.0824828204897;
    msg.z = 0.881832190307;
    msg.vx = 0.284537885779;
    msg.vy = 0.502057554737;
    msg.vz = 0.691941271357;
    msg.ax = 0.423040922587;
    msg.ay = 0.0551258519251;
    msg.az = 0.661667878162;
    msg.flags = 20910U;

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
    msg.setTimeStamp(0.798519466025);
    msg.setSource(50038U);
    msg.setSourceEntity(183U);
    msg.setDestination(13000U);
    msg.setDestinationEntity(92U);
    msg.x = 0.575609906491;
    msg.y = 0.15254255052;
    msg.z = 0.790886297475;
    msg.vx = 0.723096521924;
    msg.vy = 0.0202782475846;
    msg.vz = 0.512058449632;
    msg.ax = 0.128233333138;
    msg.ay = 0.646806994297;
    msg.az = 0.7373431193;
    msg.flags = 29301U;

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
    msg.setTimeStamp(0.113245198738);
    msg.setSource(36150U);
    msg.setSourceEntity(25U);
    msg.setDestination(31588U);
    msg.setDestinationEntity(245U);
    msg.value = 0.91836559921;

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
    msg.setTimeStamp(0.655219240282);
    msg.setSource(54754U);
    msg.setSourceEntity(118U);
    msg.setDestination(12375U);
    msg.setDestinationEntity(138U);
    msg.value = 0.676686656935;

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
    msg.setTimeStamp(0.550854409622);
    msg.setSource(4571U);
    msg.setSourceEntity(221U);
    msg.setDestination(16289U);
    msg.setDestinationEntity(184U);
    msg.value = 0.44912859124;

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
    msg.setTimeStamp(0.580340398106);
    msg.setSource(57461U);
    msg.setSourceEntity(199U);
    msg.setDestination(59086U);
    msg.setDestinationEntity(50U);
    msg.timeout = 8571U;
    msg.lat = 0.132241417695;
    msg.lon = 0.14430599171;
    msg.z = 0.370407892359;
    msg.z_units = 240U;
    msg.speed = 0.895188595894;
    msg.speed_units = 77U;
    msg.roll = 0.504656594343;
    msg.pitch = 0.921711479683;
    msg.yaw = 0.960489867146;
    msg.custom.assign("UFRRMATARWSHUNWUPJLKZSXGSCGLTFMWOYDAAOCIZNEOHYSCDDJXNVCGLQSEZNSMZWDWYYUJORWNPTABBNZXVLBLCQLBSWMRJKNJIYXPQJBTTAMZZXTRFUXCMODHAYVSZFDQNOGJIBKUPRJTFBKXYBJAVBEQURPQHC");

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
    msg.setTimeStamp(0.571416882493);
    msg.setSource(2339U);
    msg.setSourceEntity(90U);
    msg.setDestination(30160U);
    msg.setDestinationEntity(83U);
    msg.timeout = 25361U;
    msg.lat = 0.657314332924;
    msg.lon = 0.345397690323;
    msg.z = 0.988272249831;
    msg.z_units = 250U;
    msg.speed = 0.463669683569;
    msg.speed_units = 128U;
    msg.roll = 0.316220382463;
    msg.pitch = 0.262833654084;
    msg.yaw = 0.596226114729;
    msg.custom.assign("HWIKPZGAVQPRDNKKLCHZDRTSYV");

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
    msg.setTimeStamp(0.147577763118);
    msg.setSource(43921U);
    msg.setSourceEntity(70U);
    msg.setDestination(51701U);
    msg.setDestinationEntity(114U);
    msg.timeout = 15245U;
    msg.lat = 0.349625835748;
    msg.lon = 0.310895522593;
    msg.z = 0.571333465002;
    msg.z_units = 13U;
    msg.speed = 0.809979941553;
    msg.speed_units = 128U;
    msg.roll = 0.489878285356;
    msg.pitch = 0.973035413695;
    msg.yaw = 0.191678241564;
    msg.custom.assign("ISCKWPREGFJUEHUNJGLODAZNNQBYJJAVMESAYIUTMRLDAGQKFKTWDFJYUAISLGFRNHQTVAQAPOVDGXSQRJCVLKJXGDFQEOKORFLF");

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
    msg.setTimeStamp(0.0973486002039);
    msg.setSource(46480U);
    msg.setSourceEntity(61U);
    msg.setDestination(48517U);
    msg.setDestinationEntity(222U);
    msg.timeout = 51525U;
    msg.lat = 0.565261375166;
    msg.lon = 0.379227672218;
    msg.z = 0.653825496918;
    msg.z_units = 230U;
    msg.speed = 0.228141406173;
    msg.speed_units = 188U;
    msg.duration = 58996U;
    msg.radius = 0.100027848393;
    msg.flags = 185U;
    msg.custom.assign("BYIBWITGGBUIFUZEPBTHHJAIPVORCRPUKIVDOSAEXKWSSARWGOBWFJODYNMQLVJQVSGRABJWCXBUJNRCZJJLHSVKMLAA");

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
    msg.setTimeStamp(0.0396351283111);
    msg.setSource(5730U);
    msg.setSourceEntity(137U);
    msg.setDestination(43378U);
    msg.setDestinationEntity(66U);
    msg.timeout = 12260U;
    msg.lat = 0.0344606768766;
    msg.lon = 0.944883103053;
    msg.z = 0.776086442732;
    msg.z_units = 147U;
    msg.speed = 0.450059579299;
    msg.speed_units = 201U;
    msg.duration = 6850U;
    msg.radius = 0.832783694107;
    msg.flags = 182U;
    msg.custom.assign("BSAGMEGCMXYBLNXVTOWELKLEZEGJHELIRPJWGFYKTKROLZABDTBQQOAQSBOFMHMCZWJXSAQRXABHIVUOCJTUOHDIZSYVSSCPIVMOYGETPLQQFIFPFYLUNVWIUBUKIMEVAZINMDCSRTGGSFTJLDVZHXRAOOUDCDALHNUCCJMZQMNGAUJEPEWHAPPKTNZVFRJYWDSPBHVYRQNEM");

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
    msg.setTimeStamp(0.274884612359);
    msg.setSource(26895U);
    msg.setSourceEntity(86U);
    msg.setDestination(65044U);
    msg.setDestinationEntity(237U);
    msg.timeout = 10287U;
    msg.lat = 0.0716845395124;
    msg.lon = 0.0937818742367;
    msg.z = 0.67530352992;
    msg.z_units = 215U;
    msg.speed = 0.65795827414;
    msg.speed_units = 240U;
    msg.duration = 44648U;
    msg.radius = 0.620532659255;
    msg.flags = 4U;
    msg.custom.assign("FZFESEMIYWKLRRQWGGITF");

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
    msg.setTimeStamp(0.188581207947);
    msg.setSource(26189U);
    msg.setSourceEntity(32U);
    msg.setDestination(14197U);
    msg.setDestinationEntity(15U);
    msg.custom.assign("LHHRVKPIQKFUIHNBQEOLMVXQYMZMXIWAHURJHYFDTWZUOCJTQHGMVOSKOBWGTEAETPYLEEAQNSYEBLLDCNFCRNDZLLFUMEXMXW");

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
    msg.setTimeStamp(0.85264015165);
    msg.setSource(16831U);
    msg.setSourceEntity(114U);
    msg.setDestination(3886U);
    msg.setDestinationEntity(140U);
    msg.custom.assign("MCEBBXLFZYAJYQBTPTVPCR");

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
    msg.setTimeStamp(0.88964304943);
    msg.setSource(55804U);
    msg.setSourceEntity(92U);
    msg.setDestination(21159U);
    msg.setDestinationEntity(80U);
    msg.custom.assign("ZUSJFPVPJECZTWOUQZYKRHOYAIAQARCBWBUEMYXQPLAPSDPXFRCFEKSAHLMGSJZYREMSSNOBTDXCYTUFPXLGIGJPBQKJKSWVJOMANIUNHRXCILTRGQXMOJGTYRRKHQECWSVHGUOPCEIAVNITGUHEDBHZDYKGNMHBIWWKXZTEDDLUJWMMIVVBDJFBTNQWLTOGSEUUIOXAZYEFQSJDKZYOPTLKAQFRNGDCZFLQVNHBBLVIMPRCLNVDHVWOZ");

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
    msg.setTimeStamp(0.496148998593);
    msg.setSource(54175U);
    msg.setSourceEntity(212U);
    msg.setDestination(10831U);
    msg.setDestinationEntity(253U);
    msg.timeout = 1952U;
    msg.lat = 0.376554458774;
    msg.lon = 0.107413131694;
    msg.z = 0.664803668211;
    msg.z_units = 81U;
    msg.duration = 3564U;
    msg.speed = 0.92050155458;
    msg.speed_units = 252U;
    msg.type = 24U;
    msg.radius = 0.530680823349;
    msg.length = 0.141636060885;
    msg.bearing = 0.0479329695736;
    msg.direction = 158U;
    msg.custom.assign("ETRIMBGFDNWCVKEWYKYHKZXLLWHVJYLUVARBNCRYHWAZNOSPWHXKGOQUJVBOQZATGHSKTUHFBTIEOGEYRMPNCTXLVSXIGAJXBSIOZAMKWDEYNPGSRRFDFGPIVAXHYCSPEPPKNRFBOUEQRXUNETTKCLNAORCRUJFSFOFAGLPGYFUZZWMQIMDTXVBDCTMDUMZTVQADSZCQCELBUHSIJMJBLQUCWIMXDQVIHZOWBKXJFLEAJKQHPJNGNMLDQO");

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
    msg.setTimeStamp(0.368192592282);
    msg.setSource(52070U);
    msg.setSourceEntity(198U);
    msg.setDestination(11258U);
    msg.setDestinationEntity(189U);
    msg.timeout = 10950U;
    msg.lat = 0.0621732234837;
    msg.lon = 0.324776846784;
    msg.z = 0.896699759162;
    msg.z_units = 237U;
    msg.duration = 56741U;
    msg.speed = 0.935813379037;
    msg.speed_units = 58U;
    msg.type = 48U;
    msg.radius = 0.505971885475;
    msg.length = 0.725903383127;
    msg.bearing = 0.604719268636;
    msg.direction = 92U;
    msg.custom.assign("IIWTWOAXZQCVWAXKXUWSXYDANXTPRYPAVJOSNUJZWOEGMHWCCLJPMVLLFROLVMDDKLDNZJ");

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
    msg.setTimeStamp(0.596379272747);
    msg.setSource(23908U);
    msg.setSourceEntity(118U);
    msg.setDestination(61560U);
    msg.setDestinationEntity(16U);
    msg.timeout = 8833U;
    msg.lat = 0.702423425445;
    msg.lon = 0.237131290403;
    msg.z = 0.213034791;
    msg.z_units = 165U;
    msg.duration = 24892U;
    msg.speed = 0.191389374291;
    msg.speed_units = 182U;
    msg.type = 173U;
    msg.radius = 0.211724347935;
    msg.length = 0.757682150302;
    msg.bearing = 0.260237410387;
    msg.direction = 124U;
    msg.custom.assign("VKWHDVBARDCISOAJNBUKIKFRUNBTVCQVMCXQWJAWELTJOLOBXYPOJTFHWWGONVWSDZKQNMYZOLZVFQPLLQGDEKQNQHBTSUMOVSRHFKJTRMESEMRNAGSRIYHDILBHFZXPYXKSIPEECBWILYAXSCNTMHPK");

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
    msg.setTimeStamp(0.313834559569);
    msg.setSource(18825U);
    msg.setSourceEntity(61U);
    msg.setDestination(7587U);
    msg.setDestinationEntity(55U);
    msg.duration = 11210U;
    msg.custom.assign("GQOHCYEVTGGSSEIURYUKRLDQVKNJSQJXZVBSJONLNSWMVORAWTAPKAQUCSAGTFCDTLSKXDDWMIKFPEBLYKPHBMBYIJFQDCIQEJCVVQUHAWMPXUWHXKXPFSLZTHXSOLGEYBZHIFPEUKIOBZQHPDFJUDWNLAWDMEPNMEVRCBYVVZGYQBOFUIINONMZRZXTXUFZGEIYGMBROLWRRXJCNCXLPLATRGFYQJCPBYKDFEMNTHOMUCZWDTJOG");

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
    msg.setTimeStamp(0.65148642143);
    msg.setSource(58617U);
    msg.setSourceEntity(70U);
    msg.setDestination(32913U);
    msg.setDestinationEntity(10U);
    msg.duration = 59037U;
    msg.custom.assign("IWKHOQXQUWBBKWWPTNMLXOZRMAAVDTPKDELDCCJXHVNREBJGMKEDUWVYBTDTQNSLLEEMYNAVYNHVCFPPENEZYXGMVCZBOMBAVGTCFXAIDIZDCFVFDWFPKIETBMK");

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
    msg.setTimeStamp(0.814189860285);
    msg.setSource(133U);
    msg.setSourceEntity(9U);
    msg.setDestination(44827U);
    msg.setDestinationEntity(11U);
    msg.duration = 13797U;
    msg.custom.assign("XACDLUKGOBYCPKFKXXSKZOEOJUFTYSBNEVZLTZDHNLDSN");

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
    msg.setTimeStamp(0.693002782732);
    msg.setSource(25735U);
    msg.setSourceEntity(198U);
    msg.setDestination(33091U);
    msg.setDestinationEntity(252U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.496870305159;
    msg.control.set(tmp_msg_0);
    msg.duration = 9602U;
    msg.custom.assign("LSGQEKIOHHMNMGDZNFAELWUYIUKWNXJHEDNHYVDBAOCXEGEUOWT");

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
    msg.setTimeStamp(0.829489262269);
    msg.setSource(35862U);
    msg.setSourceEntity(100U);
    msg.setDestination(16677U);
    msg.setDestinationEntity(100U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.793422292306;
    tmp_msg_0.z_units = 60U;
    msg.control.set(tmp_msg_0);
    msg.duration = 52029U;
    msg.custom.assign("ISIQFBUPUSMOXWEAJDV");

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
    msg.setTimeStamp(0.257902433727);
    msg.setSource(65124U);
    msg.setSourceEntity(14U);
    msg.setDestination(13659U);
    msg.setDestinationEntity(130U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.101180083025;
    tmp_msg_0.z_units = 214U;
    msg.control.set(tmp_msg_0);
    msg.duration = 44851U;
    msg.custom.assign("ZMZREXTOHCVZOFSPVYLNBKLJFGSIKEYPDLJIYORFJVYOVQVHRCKEUAMEBHTCGNUWMFTJQQWAXYXZBELUE");

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
    msg.setTimeStamp(0.328897000822);
    msg.setSource(5569U);
    msg.setSourceEntity(150U);
    msg.setDestination(55917U);
    msg.setDestinationEntity(15U);
    msg.timeout = 16118U;
    msg.lat = 0.00252291767075;
    msg.lon = 0.36188891757;
    msg.z = 0.835236830172;
    msg.z_units = 18U;
    msg.speed = 0.294074142014;
    msg.speed_units = 177U;
    msg.bearing = 0.150866011848;
    msg.cross_angle = 0.846990814559;
    msg.width = 0.593898757116;
    msg.length = 0.597805208352;
    msg.hstep = 0.553035766153;
    msg.coff = 77U;
    msg.alternation = 27U;
    msg.flags = 145U;
    msg.custom.assign("ZIZJOYUEZZBDYGKVHZTHVMQQCJKGHZZBVUFAACDIWATOOXMQFGEHMXNMQPEJEXJRMNYEEUJHXJCFSVZQPUOBPUEQWDCSXNSWBGBEIVYNYTIKPB");

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
    msg.setTimeStamp(0.272422101694);
    msg.setSource(23463U);
    msg.setSourceEntity(121U);
    msg.setDestination(57395U);
    msg.setDestinationEntity(19U);
    msg.timeout = 5139U;
    msg.lat = 0.590439697971;
    msg.lon = 0.628300963875;
    msg.z = 0.175345152507;
    msg.z_units = 33U;
    msg.speed = 0.130788448118;
    msg.speed_units = 254U;
    msg.bearing = 0.420154495425;
    msg.cross_angle = 0.886931973182;
    msg.width = 0.304710981047;
    msg.length = 0.0330406387728;
    msg.hstep = 0.00988080391103;
    msg.coff = 172U;
    msg.alternation = 72U;
    msg.flags = 103U;
    msg.custom.assign("GYYEVFHSLRKTNHABJNRKBIBJGYZANXIEXKZUJOKVCTNMPEIHUUSACRSTMBYTANGBKSVMYWJKPLWADCMTIJPPXWJWDAQFFPCNXRQJGMHBOPQLPCSHTVVFHMDELGKGHGJDWTDOOPQDWALQQOEOMXCXUNBFVCMUIDDMQZFFTCJYEKSENXWYTQAVUNCZROGRTEXPSLSVABERVZWRDZLSEURZK");

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
    msg.setTimeStamp(0.363934250898);
    msg.setSource(56915U);
    msg.setSourceEntity(104U);
    msg.setDestination(46485U);
    msg.setDestinationEntity(102U);
    msg.timeout = 52150U;
    msg.lat = 0.825672867105;
    msg.lon = 0.547061562637;
    msg.z = 0.407954214489;
    msg.z_units = 213U;
    msg.speed = 0.939181601518;
    msg.speed_units = 67U;
    msg.bearing = 0.799296626229;
    msg.cross_angle = 0.0887148252877;
    msg.width = 0.109445932333;
    msg.length = 0.731649478184;
    msg.hstep = 0.241960578614;
    msg.coff = 58U;
    msg.alternation = 39U;
    msg.flags = 245U;
    msg.custom.assign("RCAVBZTHJLZTHLBYUQQOYOLIRII");

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
    msg.setTimeStamp(0.232962543538);
    msg.setSource(22231U);
    msg.setSourceEntity(192U);
    msg.setDestination(44349U);
    msg.setDestinationEntity(17U);
    msg.timeout = 18495U;
    msg.lat = 0.530762881048;
    msg.lon = 0.627507875191;
    msg.z = 0.997361798271;
    msg.z_units = 22U;
    msg.speed = 0.577290267878;
    msg.speed_units = 156U;
    msg.custom.assign("DSUNGOIXDVDRGPPZEVQCFSKMOBVLIJQLVSDYAIKUKLOIJKZFFCFARSHTJUECGFXJBQQZOIA");

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
    msg.setTimeStamp(0.745944542288);
    msg.setSource(64042U);
    msg.setSourceEntity(149U);
    msg.setDestination(18447U);
    msg.setDestinationEntity(204U);
    msg.timeout = 12482U;
    msg.lat = 0.755986167168;
    msg.lon = 0.136728238857;
    msg.z = 0.767127839372;
    msg.z_units = 106U;
    msg.speed = 0.141455692847;
    msg.speed_units = 97U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0388896501751;
    tmp_msg_0.y = 0.93042191764;
    tmp_msg_0.z = 0.00441990750097;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XLDAQHLBVVEUOIWDFYTTAFZAXPDOGIEZJIOS");

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
    msg.setTimeStamp(0.487934840824);
    msg.setSource(2808U);
    msg.setSourceEntity(146U);
    msg.setDestination(24852U);
    msg.setDestinationEntity(242U);
    msg.timeout = 28373U;
    msg.lat = 0.899828924508;
    msg.lon = 0.670226979271;
    msg.z = 0.397927875546;
    msg.z_units = 15U;
    msg.speed = 0.570910951233;
    msg.speed_units = 135U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.380059595989;
    tmp_msg_0.y = 0.362503696791;
    tmp_msg_0.z = 0.800712664067;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WRULBQSMRADSACFFKKGQVOIZXZELEKFGWNJNXLJQQNTOUJHSQFCYTBKBBTENBHUHQZDPOLHPJYCKPWSIIXCBLGDLZWUZJPQNVNABMDMXKHJIOUUVPSWTLPBFTXGICZFYEZCHAIYFVAVOITLYTPVTYJONPPASRORXPUEUMWDSWAEDLDJYSVRMGMEHKUAM");

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
    msg.setTimeStamp(0.997835370979);
    msg.setSource(4784U);
    msg.setSourceEntity(108U);
    msg.setDestination(5578U);
    msg.setDestinationEntity(61U);
    msg.x = 0.971526843888;
    msg.y = 0.18553530102;
    msg.z = 0.238053689407;

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
    msg.setTimeStamp(0.191919257776);
    msg.setSource(30686U);
    msg.setSourceEntity(52U);
    msg.setDestination(46608U);
    msg.setDestinationEntity(57U);
    msg.x = 0.705859240303;
    msg.y = 0.231220945344;
    msg.z = 0.665311334607;

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
    msg.setTimeStamp(0.413910603707);
    msg.setSource(57537U);
    msg.setSourceEntity(205U);
    msg.setDestination(56580U);
    msg.setDestinationEntity(9U);
    msg.x = 0.348589355848;
    msg.y = 0.942749577806;
    msg.z = 0.0775372702491;

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
    msg.setTimeStamp(0.318966745704);
    msg.setSource(63737U);
    msg.setSourceEntity(186U);
    msg.setDestination(50683U);
    msg.setDestinationEntity(157U);
    msg.timeout = 56862U;
    msg.lat = 0.348336902027;
    msg.lon = 0.629010107182;
    msg.z = 0.693285521194;
    msg.z_units = 37U;
    msg.amplitude = 0.254024707476;
    msg.pitch = 0.994187158083;
    msg.speed = 0.0644106759066;
    msg.speed_units = 10U;
    msg.custom.assign("OHJGJULMVWHLOQNFXEHYBSKJSVWXLIMOJFFTIRRJBJYMPNMAKCEQPPMOWVFMCDXUHFNPLT");

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
    msg.setTimeStamp(0.895904045298);
    msg.setSource(60623U);
    msg.setSourceEntity(18U);
    msg.setDestination(46280U);
    msg.setDestinationEntity(184U);
    msg.timeout = 8114U;
    msg.lat = 0.677598886118;
    msg.lon = 0.742638493394;
    msg.z = 0.826577254962;
    msg.z_units = 217U;
    msg.amplitude = 0.869965862405;
    msg.pitch = 0.560212152143;
    msg.speed = 0.0490522852316;
    msg.speed_units = 185U;
    msg.custom.assign("CUZEEFSDWVHEFZIGTSUNPSPXDNQHIKMGRHZODQGLPJWDPWJHQLIHESAVLNUWQV");

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
    msg.setTimeStamp(0.0498330859863);
    msg.setSource(13472U);
    msg.setSourceEntity(193U);
    msg.setDestination(46718U);
    msg.setDestinationEntity(122U);
    msg.timeout = 31710U;
    msg.lat = 0.013815950034;
    msg.lon = 0.372857593604;
    msg.z = 0.171719254252;
    msg.z_units = 86U;
    msg.amplitude = 0.828427057856;
    msg.pitch = 0.100617211916;
    msg.speed = 0.0556836577175;
    msg.speed_units = 28U;
    msg.custom.assign("MOJKXRMPISFKRMQFTEXVGGXUBEBTMDXZ");

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
    msg.setTimeStamp(0.557820612557);
    msg.setSource(55403U);
    msg.setSourceEntity(149U);
    msg.setDestination(24452U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.338527885577);
    msg.setSource(31854U);
    msg.setSourceEntity(177U);
    msg.setDestination(48437U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.868608945508);
    msg.setSource(22871U);
    msg.setSourceEntity(116U);
    msg.setDestination(20770U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.813355942023);
    msg.setSource(27952U);
    msg.setSourceEntity(78U);
    msg.setDestination(6252U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.730269738324;
    msg.lon = 0.171305202667;
    msg.z = 0.923627602094;
    msg.z_units = 168U;
    msg.radius = 0.905162384151;
    msg.duration = 24513U;
    msg.speed = 0.377727667492;
    msg.speed_units = 171U;
    msg.custom.assign("TCLJARHDACADGVXZZNHXLRNJFTMBPQEPFZIBPEYACRUBFJMXBZFYFOQFSCIDZXDCKEERALWLUHMNTYINNGXDSCUSJQBHLTJQVUQOWBLCJQEKYTISJFODZOVTMRMGNDIRYOGBEPPOHJOHUW");

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
    msg.setTimeStamp(0.94937658416);
    msg.setSource(42821U);
    msg.setSourceEntity(112U);
    msg.setDestination(38058U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.0738714743679;
    msg.lon = 0.509162954075;
    msg.z = 0.225133548649;
    msg.z_units = 84U;
    msg.radius = 0.846385264251;
    msg.duration = 39802U;
    msg.speed = 0.164057114208;
    msg.speed_units = 166U;
    msg.custom.assign("FGQVBKWDYKFCVYCGINORUPWSXWMHPQJYBNZYWBHJDSYCQJFBVPLTQFLRLERGBKGNCCEDMRIUZMDVOYBWEEFCETJXKQHSXPXGTYZWISEVMVUXDOLUNYQXLPQRSJWQATUIOJKMMAGOLMPAQIYVOSPTEFPHPAUUBAKCCGBTHSBRVZXDSOK");

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
    msg.setTimeStamp(0.227433579788);
    msg.setSource(25198U);
    msg.setSourceEntity(11U);
    msg.setDestination(31260U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.600184430052;
    msg.lon = 0.554815959367;
    msg.z = 0.215918986973;
    msg.z_units = 205U;
    msg.radius = 0.384932639118;
    msg.duration = 44380U;
    msg.speed = 0.291538587306;
    msg.speed_units = 128U;
    msg.custom.assign("GECUVPUIPNYBLLQPGBINDMRLECIPYQOHZQQXCTTXBCQOSSJYHAZGWFQXTDZEMKOGKKHHVOWPVWGQUZTSUVAVDTSYLMDYEDIPHCSNFUGFAURPRJUGMAXZBTMFYKHBENNWGCKTYRLRBCAFIVRFZJNBNSGGKJUCKXMRZJNWEPJSLFHWYTTZPMXHODYHMAISCHBSFJXJCOLEODNN");

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
    msg.setTimeStamp(0.645363196935);
    msg.setSource(26591U);
    msg.setSourceEntity(183U);
    msg.setDestination(50765U);
    msg.setDestinationEntity(51U);
    msg.timeout = 15819U;
    msg.flags = 243U;
    msg.lat = 0.345925401754;
    msg.lon = 0.386748005388;
    msg.start_z = 0.924708944243;
    msg.start_z_units = 189U;
    msg.end_z = 0.248185519045;
    msg.end_z_units = 142U;
    msg.radius = 0.981507335068;
    msg.speed = 0.0450539956343;
    msg.speed_units = 239U;
    msg.custom.assign("ANZOIONOBAELZUYBTSVXXMHWARWEYTVJJDKKSI");

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
    msg.setTimeStamp(0.689914953334);
    msg.setSource(58214U);
    msg.setSourceEntity(109U);
    msg.setDestination(58115U);
    msg.setDestinationEntity(133U);
    msg.timeout = 34374U;
    msg.flags = 129U;
    msg.lat = 0.920669196417;
    msg.lon = 0.523750102155;
    msg.start_z = 0.860712733472;
    msg.start_z_units = 81U;
    msg.end_z = 0.862413493256;
    msg.end_z_units = 27U;
    msg.radius = 0.0915789911053;
    msg.speed = 0.0741567575814;
    msg.speed_units = 34U;
    msg.custom.assign("GWCHYGADQLFRDWJPITUUNHXBLTNXLROIOZSTBNDNRRVAKZCBMZHTOJDSEXOXL");

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
    msg.setTimeStamp(0.125043259599);
    msg.setSource(17026U);
    msg.setSourceEntity(54U);
    msg.setDestination(522U);
    msg.setDestinationEntity(6U);
    msg.timeout = 8288U;
    msg.flags = 175U;
    msg.lat = 0.676704955741;
    msg.lon = 0.331305459449;
    msg.start_z = 0.690380544273;
    msg.start_z_units = 196U;
    msg.end_z = 0.144530323251;
    msg.end_z_units = 39U;
    msg.radius = 0.167135268644;
    msg.speed = 0.0603611982014;
    msg.speed_units = 245U;
    msg.custom.assign("DTWRZODNZLNGINQOPWWUAAWDSOPIMEJXHUTYXWPREXPLHMPECERMFICKCIRGCTEGDROEPVGJQJQLEVYLITSFVJVHKZYYVLUHLKAJWXXSDCWREZHOVGNKYGRBBIQRSNGMUXMZUZAUAJTQJGEIANSPOUQUAPCFXBGZSDY");

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
    msg.setTimeStamp(0.587634659804);
    msg.setSource(1118U);
    msg.setSourceEntity(92U);
    msg.setDestination(44588U);
    msg.setDestinationEntity(239U);
    msg.timeout = 47339U;
    msg.lat = 0.745360940242;
    msg.lon = 0.64807948156;
    msg.z = 0.878049063043;
    msg.z_units = 42U;
    msg.speed = 0.224849264193;
    msg.speed_units = 178U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.868209794946;
    tmp_msg_0.y = 0.855738775856;
    tmp_msg_0.z = 0.64780364615;
    tmp_msg_0.t = 0.809423145306;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YWRITDIBWUJOUQFFZCISEJIXJWGBGMRKKBYMTVXCTLOYSVOCECXVMMKNTDPSAIOBNWOJRUQRSUNKBGQTRLQNPUESKEDOHNXYFEPPMASIGQNYSDBMTHORQJXAIKJCUFPPFVZGGCBVACTBGWJKTXHDPDNWZDAHQVYFYRVOJGMACDQZRNBPNHCAYCIHVUULEALTZTYKMEXJXPYLHWSOXGAMHFLRZVQDQWFRGLMSIWLKOFVHLNHEWUPE");

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
    msg.setTimeStamp(0.511701453196);
    msg.setSource(55894U);
    msg.setSourceEntity(204U);
    msg.setDestination(65141U);
    msg.setDestinationEntity(74U);
    msg.timeout = 19498U;
    msg.lat = 0.0260487820808;
    msg.lon = 0.225321538999;
    msg.z = 0.724779224293;
    msg.z_units = 248U;
    msg.speed = 0.227475734614;
    msg.speed_units = 90U;
    msg.custom.assign("BQKUFNZYGTUJGICLACCYCOHCUFRFPKIJZFJAWEGURPXPOEOLNHSWTGBBQLNFVVUVGQZSLXAYVNWAMLGCSJTLQZPHQOKGMIKKJBKZDWTXQARHHNXNSTEEDFUWYOYZEASSPZDVPFNXFUZZGWNNKQXBERHRMKSJDHMAVKVYSJDDCHCMOULJFBILTBSYRTBWEVXCVQLDMKPSYZTRQIEWBRDIDUHAORXYXJIIJFWGPLAGHAY");

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
    msg.setTimeStamp(0.258218317197);
    msg.setSource(51156U);
    msg.setSourceEntity(182U);
    msg.setDestination(21076U);
    msg.setDestinationEntity(141U);
    msg.timeout = 62773U;
    msg.lat = 0.62323473146;
    msg.lon = 0.783437000238;
    msg.z = 0.295035367371;
    msg.z_units = 243U;
    msg.speed = 0.942830484857;
    msg.speed_units = 62U;
    msg.custom.assign("KGOHPEZBOQULCGCWUZRPVQAUFSOIHNPNFVOVOZXWQRUTZEDAXYRQFIFNXDMGEYDIYLRJYOYIFZYJCNXVZMYFQHFWJGAKPJIKNDTTSEAKGJNLEBZAORMNXWSEWBHTJWLXBPAJMMIQTYQDLUKSKZXEUAVQTIDV");

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
    msg.setTimeStamp(0.932365850985);
    msg.setSource(20240U);
    msg.setSourceEntity(219U);
    msg.setDestination(39368U);
    msg.setDestinationEntity(252U);
    msg.x = 0.590832710948;
    msg.y = 0.720954885866;
    msg.z = 0.233407029366;
    msg.t = 0.234383785;

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
    msg.setTimeStamp(0.155048803073);
    msg.setSource(55635U);
    msg.setSourceEntity(146U);
    msg.setDestination(53264U);
    msg.setDestinationEntity(86U);
    msg.x = 0.354935122748;
    msg.y = 0.499638506206;
    msg.z = 0.714408682017;
    msg.t = 0.745227050394;

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
    msg.setTimeStamp(0.160648447349);
    msg.setSource(9118U);
    msg.setSourceEntity(147U);
    msg.setDestination(34992U);
    msg.setDestinationEntity(246U);
    msg.x = 0.545890031146;
    msg.y = 0.295920905398;
    msg.z = 0.715276398331;
    msg.t = 0.96768479398;

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
    msg.setTimeStamp(0.165617561284);
    msg.setSource(37742U);
    msg.setSourceEntity(82U);
    msg.setDestination(13698U);
    msg.setDestinationEntity(127U);
    msg.timeout = 31757U;
    msg.name.assign("TMSFYSJTDFDRLSTIGONNAEKRQMQNYGYPKXVLIOIKSTDWJLYESCCRSQBHTHHXDKMWMFOCTPXLDOGVSEDVURXJEVRUFVBYVOBTMKGQYMDFCAYEHUEBUWKMSRLWGLAXZNVCQATWZOZ");
    msg.custom.assign("POWTFIWHTFCKDZEIAYZZPXJUGMEWYKANXVUHAQXNDGGRDNZDOXPNDSRWBKREYIRJBFQYTUMAPBYGVSNNRJJVMBMOUSQMTZTONLGORKKYIUOLVVTJTXZCOSAWVZYCCJSEPPVXZLNMLSVKLUIZFYIPSBDMDKXQQAFHBGSJDUTVJEEXQOQKFYCHRAYQHIU");

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
    msg.setTimeStamp(0.013426867266);
    msg.setSource(61146U);
    msg.setSourceEntity(126U);
    msg.setDestination(38166U);
    msg.setDestinationEntity(186U);
    msg.timeout = 5299U;
    msg.name.assign("HTTOPKWPVSNUAIRBSDSIALZEVJXLHOJHYDJMOXDUKWDJIYUVRFDSPEWDBAJVFZIOHXXPNQAGNWNFHAQAXKGUTESSKNOSEIKSX");
    msg.custom.assign("NHGEYYVQDUGJPRLXDKKRZOFQWZYCXJQIINXSZIMJREGRFAFIPQZCYOKHZSVEWUVQBJWTKTIYHVAWCUFSWLXTTEJPHUAIMBQSFJKYBFBBGKGFRATMDEYHOXOUQGDTJKPFXBOQPZZDQWEEDNASSUILWAXILVYEUMCMTWOXREWBTFOZKOPGOJQMMHVHCNBXSLNURCDVWL");

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
    msg.setTimeStamp(0.386323698723);
    msg.setSource(49368U);
    msg.setSourceEntity(26U);
    msg.setDestination(37571U);
    msg.setDestinationEntity(112U);
    msg.timeout = 30431U;
    msg.name.assign("BVRZYSPEGBTQNHTFUJVXEELURLPEAWYBKJHWWHYVZRMIONQMFHDNZJAIKJOCSKGAMHZPXYAJTXCFROTQDNTVRQRXIYSFKUFUAMEINRBBOOMPQTOZDEIBLELENSIXGYKVEAGJQGWGPSRNSNHTMCFHVQXAVWCSFWJLVIFSJQISQXGWLVDYMTYXBOZBLKNPDFDLKANOWPUHUGZ");
    msg.custom.assign("EJWRNETYYRPGZBQUHFEVDYKHJRZLMLIXDIZNUOBSHRBBKJDTIGMHNAXUYZQOWEAFOMMXFAWLMPRLFUHNJSDJAIWCOFCWCSAJTRBYAUKSLWHYCEKGOXIMPGFIQXCQCNVZVWSMZZXFDTPNZFUFKDCVLOVZMXQPVBYKCWPYOILVRXUBIJPQRLHHKBELGSLWOEMAAUGTVSAZDIVGTAPNPKHMW");

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
    msg.setTimeStamp(0.200461713198);
    msg.setSource(9726U);
    msg.setSourceEntity(125U);
    msg.setDestination(60404U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.996760200528;
    msg.lon = 0.379989606407;
    msg.z = 0.214399099052;
    msg.z_units = 247U;
    msg.speed = 0.75168970103;
    msg.speed_units = 109U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0960446707351;
    tmp_msg_0.y = 0.0378084820183;
    tmp_msg_0.z = 0.498990392401;
    tmp_msg_0.t = 0.427298965026;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 56653U;
    tmp_msg_1.off_x = 0.386361791417;
    tmp_msg_1.off_y = 0.191756718276;
    tmp_msg_1.off_z = 0.103569810806;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.763034861966;
    msg.custom.assign("PNAYTVJKDXXGKBOOEZWRCVLMHGPLYDPXAODPLDAJIXNXEEZNOTFNVFHMREIGEGGCPMLKWAURKMXCVIJPB");

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
    msg.setTimeStamp(0.115356395536);
    msg.setSource(1152U);
    msg.setSourceEntity(254U);
    msg.setDestination(7284U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.382369724879;
    msg.lon = 0.962641785439;
    msg.z = 0.65701042492;
    msg.z_units = 172U;
    msg.speed = 0.789565387867;
    msg.speed_units = 33U;
    msg.start_time = 0.919452457639;
    msg.custom.assign("AEAYIJCMQAUCGNPIZGAJGXCQMFHLCGKLRIKYFZWDEUBGTCGQDIKMZLHYPDGLHOKKSZRSEWBUBPZETPTOICVVCYVNUBWPNTBWWAVMXRYHTNHDUVUKWPKTLRDTKM");

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
    msg.setTimeStamp(0.827537357704);
    msg.setSource(19003U);
    msg.setSourceEntity(220U);
    msg.setDestination(1417U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.330901427067;
    msg.lon = 0.786710916362;
    msg.z = 0.655625218897;
    msg.z_units = 157U;
    msg.speed = 0.197448544379;
    msg.speed_units = 187U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.728444314725;
    tmp_msg_0.y = 0.507598541535;
    tmp_msg_0.z = 0.233354847431;
    tmp_msg_0.t = 0.255251175852;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 37304U;
    tmp_msg_1.off_x = 0.924246178257;
    tmp_msg_1.off_y = 0.495453938762;
    tmp_msg_1.off_z = 0.0548932044394;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.156835059458;
    msg.custom.assign("OBXVTKFNLJBMKIRGSHWULSLOVCMUCRGVAPACYUFOBYIHWQVVXYPAWKHHDGIWPOZQFQZADJNYZMKBXXPOQINIWCIREFCTFTYMDYIMRWRVFQAJDDENWSGKKLKHJGMSBHGQYZFJMTVUIT");

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
    msg.setTimeStamp(0.300397966705);
    msg.setSource(11972U);
    msg.setSourceEntity(148U);
    msg.setDestination(46993U);
    msg.setDestinationEntity(253U);
    msg.vid = 20185U;
    msg.off_x = 0.0197494391404;
    msg.off_y = 0.0914910454782;
    msg.off_z = 0.315324259189;

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
    msg.setTimeStamp(0.0404758284239);
    msg.setSource(43519U);
    msg.setSourceEntity(134U);
    msg.setDestination(58658U);
    msg.setDestinationEntity(92U);
    msg.vid = 48345U;
    msg.off_x = 0.0437943088637;
    msg.off_y = 0.722904180995;
    msg.off_z = 0.737388009507;

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
    msg.setTimeStamp(0.059528928415);
    msg.setSource(64115U);
    msg.setSourceEntity(130U);
    msg.setDestination(15014U);
    msg.setDestinationEntity(44U);
    msg.vid = 43751U;
    msg.off_x = 0.280828119756;
    msg.off_y = 0.211875027706;
    msg.off_z = 0.274504092622;

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
    msg.setTimeStamp(0.398985036553);
    msg.setSource(24193U);
    msg.setSourceEntity(236U);
    msg.setDestination(65392U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.609542306168);
    msg.setSource(19825U);
    msg.setSourceEntity(56U);
    msg.setDestination(8460U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.504563798722);
    msg.setSource(30310U);
    msg.setSourceEntity(29U);
    msg.setDestination(59509U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.595768024931);
    msg.setSource(42790U);
    msg.setSourceEntity(104U);
    msg.setDestination(33074U);
    msg.setDestinationEntity(119U);
    msg.mid = 22133U;

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
    msg.setTimeStamp(0.279302360263);
    msg.setSource(20303U);
    msg.setSourceEntity(45U);
    msg.setDestination(30404U);
    msg.setDestinationEntity(231U);
    msg.mid = 7196U;

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
    msg.setTimeStamp(0.124181649256);
    msg.setSource(52166U);
    msg.setSourceEntity(166U);
    msg.setDestination(54995U);
    msg.setDestinationEntity(188U);
    msg.mid = 27344U;

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
    msg.setTimeStamp(0.126733719312);
    msg.setSource(42977U);
    msg.setSourceEntity(117U);
    msg.setDestination(51046U);
    msg.setDestinationEntity(49U);
    msg.state = 228U;
    msg.eta = 9753U;
    msg.info.assign("FPNNLKPGOMTRHGBTUMWZBCJGVBOXVTFOLUJLBSIOEDLWQFYGPGMUVTLNZKXQQGRHRRONPBAGXHXUHXIMZSNJMSHQRVCIUQIREKJMFBTKXKNYIDUHAHRZAQTCJQZKXCOPIDCGEDKICWAAZDJKWYWAVGYSDEMTVVYFVYUJLSXBKLEIYODTATBCFSRTMJJCMPYBQFUU");

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
    msg.setTimeStamp(0.214230440613);
    msg.setSource(27361U);
    msg.setSourceEntity(64U);
    msg.setDestination(7223U);
    msg.setDestinationEntity(187U);
    msg.state = 206U;
    msg.eta = 11679U;
    msg.info.assign("NJBJACRLEGTGJHSUJQCFMLXIOVGSXIMQQGEBIXDSHQBXARSGBKFLASKOAVXZHUKKOWOYPDTH");

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
    msg.setTimeStamp(0.244164570078);
    msg.setSource(39042U);
    msg.setSourceEntity(25U);
    msg.setDestination(1921U);
    msg.setDestinationEntity(213U);
    msg.state = 2U;
    msg.eta = 48439U;
    msg.info.assign("XHGECJTVRWADJZMVZXUWHOZ");

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
    msg.setTimeStamp(0.0594220531688);
    msg.setSource(61860U);
    msg.setSourceEntity(39U);
    msg.setDestination(7992U);
    msg.setDestinationEntity(191U);
    msg.system = 18467U;
    msg.duration = 18830U;
    msg.speed = 0.530966650142;
    msg.speed_units = 184U;
    msg.x = 0.831104092928;
    msg.y = 0.539415754191;
    msg.z = 0.763694503484;
    msg.z_units = 95U;

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
    msg.setTimeStamp(0.374595642832);
    msg.setSource(45037U);
    msg.setSourceEntity(241U);
    msg.setDestination(15838U);
    msg.setDestinationEntity(252U);
    msg.system = 22907U;
    msg.duration = 15252U;
    msg.speed = 0.201948503095;
    msg.speed_units = 125U;
    msg.x = 0.182835072007;
    msg.y = 0.696109931447;
    msg.z = 0.18779457838;
    msg.z_units = 233U;

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
    msg.setTimeStamp(0.11415276325);
    msg.setSource(37569U);
    msg.setSourceEntity(156U);
    msg.setDestination(15520U);
    msg.setDestinationEntity(75U);
    msg.system = 2634U;
    msg.duration = 1551U;
    msg.speed = 0.523883466194;
    msg.speed_units = 247U;
    msg.x = 0.640820891215;
    msg.y = 0.316544237872;
    msg.z = 0.58187583809;
    msg.z_units = 42U;

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
    msg.setTimeStamp(0.817550514903);
    msg.setSource(61583U);
    msg.setSourceEntity(50U);
    msg.setDestination(42024U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.0670036018624;
    msg.lon = 0.773274696665;
    msg.speed = 0.809781212875;
    msg.speed_units = 3U;
    msg.duration = 54641U;
    msg.sys_a = 4438U;
    msg.sys_b = 19272U;
    msg.move_threshold = 0.0931751763413;

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
    msg.setTimeStamp(0.113053358401);
    msg.setSource(22163U);
    msg.setSourceEntity(147U);
    msg.setDestination(45088U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.565423436031;
    msg.lon = 0.908260994621;
    msg.speed = 0.246602008081;
    msg.speed_units = 190U;
    msg.duration = 29084U;
    msg.sys_a = 51963U;
    msg.sys_b = 54736U;
    msg.move_threshold = 0.744629777205;

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
    msg.setTimeStamp(0.17060006377);
    msg.setSource(58358U);
    msg.setSourceEntity(240U);
    msg.setDestination(63910U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.754764543667;
    msg.lon = 0.444527323028;
    msg.speed = 0.854878479677;
    msg.speed_units = 104U;
    msg.duration = 28356U;
    msg.sys_a = 34118U;
    msg.sys_b = 57730U;
    msg.move_threshold = 0.676949816922;

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
    msg.setTimeStamp(0.156864611605);
    msg.setSource(24861U);
    msg.setSourceEntity(156U);
    msg.setDestination(53607U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.702003676829;
    msg.lon = 0.718832661966;
    msg.z = 0.972829834312;
    msg.z_units = 64U;
    msg.speed = 0.0623689183753;
    msg.speed_units = 78U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.403050419419;
    tmp_msg_0.lon = 0.296795765507;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("AEVIFIXRNWICRYSVUCPQVMNGGIXATYTEEEVMLEDGBLOVSZBFCDGJAISRQMGXVFFFEXSSTBKAQIBNJLASSYKDMCVMKYHMJF");

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
    msg.setTimeStamp(0.481108597513);
    msg.setSource(53693U);
    msg.setSourceEntity(38U);
    msg.setDestination(35709U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.71550968285;
    msg.lon = 0.578519345632;
    msg.z = 0.553998347527;
    msg.z_units = 155U;
    msg.speed = 0.761141841288;
    msg.speed_units = 96U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.179430245726;
    tmp_msg_0.lon = 0.335975584597;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IBWJDCQKGTVUCUEYRFIUKIISICTHSBXNDGUHDHALKYPQN");

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
    msg.setTimeStamp(0.173237904685);
    msg.setSource(63293U);
    msg.setSourceEntity(182U);
    msg.setDestination(28006U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.166352064376;
    msg.lon = 0.175358045283;
    msg.z = 0.290211099864;
    msg.z_units = 247U;
    msg.speed = 0.133914268721;
    msg.speed_units = 29U;
    msg.custom.assign("IQFGFOEXIBGXPEDHUOJPJMDVYKWAGIITASCFKJNXXPMBKOPLRRBJIELZAAOPWBWHDMGXWCSWQADROMXAMBTFOYHMHDZQWAOFMKXRQGYRMITKFNUEDQNOZSDCUCJHWWIJNNBQTGVJAJQZZPPVKXZDAPULCLFL");

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
    msg.setTimeStamp(0.0249334210219);
    msg.setSource(3194U);
    msg.setSourceEntity(87U);
    msg.setDestination(52501U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.0193832988598;
    msg.lon = 0.710664041419;

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
    msg.setTimeStamp(0.719594223336);
    msg.setSource(51864U);
    msg.setSourceEntity(216U);
    msg.setDestination(49968U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.145971487621;
    msg.lon = 0.849599848806;

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
    msg.setTimeStamp(0.20207175887);
    msg.setSource(22529U);
    msg.setSourceEntity(104U);
    msg.setDestination(42346U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.0658287939369;
    msg.lon = 0.532370753003;

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
    msg.setTimeStamp(0.161093374029);
    msg.setSource(56539U);
    msg.setSourceEntity(250U);
    msg.setDestination(50890U);
    msg.setDestinationEntity(204U);
    msg.timeout = 24844U;
    msg.lat = 0.726501344951;
    msg.lon = 0.0412438890208;
    msg.z = 0.711887318292;
    msg.z_units = 175U;
    msg.pitch = 0.735889960005;
    msg.amplitude = 0.376862239824;
    msg.duration = 26934U;
    msg.speed = 0.79703039475;
    msg.speed_units = 84U;
    msg.radius = 0.605705940678;
    msg.direction = 157U;
    msg.custom.assign("VPTSPAVXSKFLAXHCBKWTRNLXVEDCDNYUJRONUIURMRHPYSPHJFEBQRRRPATXDOILVMXFNTLOOOVZJHYGLWCYPRXBOUJQNMUZDXNDOXQPZEEQNGCYMFCAKJZNYOZBKMCZXYQJCEAOVDCTYMUEEGIWWZFJHKBEDDGNEBKJTLJIVMQHBBHVWISWRGFCSAUIYTFELWIVAFOSDTVXPKZTQBSCG");

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
    msg.setTimeStamp(0.649329993893);
    msg.setSource(25256U);
    msg.setSourceEntity(217U);
    msg.setDestination(48651U);
    msg.setDestinationEntity(73U);
    msg.timeout = 36636U;
    msg.lat = 0.00224449897605;
    msg.lon = 0.326561987594;
    msg.z = 0.379809642688;
    msg.z_units = 225U;
    msg.pitch = 0.361971670987;
    msg.amplitude = 0.92526874118;
    msg.duration = 39306U;
    msg.speed = 0.467720586247;
    msg.speed_units = 107U;
    msg.radius = 0.806755599468;
    msg.direction = 134U;
    msg.custom.assign("EERUSKQLHKYXMYBMVFJVCSXZPDQOCWJZQLJGGNNHZZNBSMWMKEQXWXBIMTZAXSBCBFTDJCTRJRXRILYHVXVKWVKGDLRAPGLGNOCVWCQAHXHEHSDWGDNMVLNORCAIFKLOYIYNJKUFESRUCEJIAOIHLZUASTMOVTFYFATVQGAUTSLBCYEXDQKRPQFHIVOPPZDBPIPIGJZDYNBBMFYWSISZHTBWPHDYOKXOLUKZPQW");

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
    msg.setTimeStamp(0.000954392164328);
    msg.setSource(34032U);
    msg.setSourceEntity(86U);
    msg.setDestination(62997U);
    msg.setDestinationEntity(226U);
    msg.timeout = 53026U;
    msg.lat = 0.729514339423;
    msg.lon = 0.0915399143976;
    msg.z = 0.721749456599;
    msg.z_units = 33U;
    msg.pitch = 0.0574358873139;
    msg.amplitude = 0.251201079059;
    msg.duration = 42652U;
    msg.speed = 0.491633960631;
    msg.speed_units = 231U;
    msg.radius = 0.896830760974;
    msg.direction = 231U;
    msg.custom.assign("XXWUAMZPTBOQQFQTZCFEBVHNASUWGZLHMTPYJJDUBLZTIBYDCXMDLWNKENPLIHP");

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
    msg.setTimeStamp(0.658461237307);
    msg.setSource(44473U);
    msg.setSourceEntity(239U);
    msg.setDestination(8680U);
    msg.setDestinationEntity(36U);
    msg.formation_name.assign("RHALLPDIYDQ");
    msg.reference_frame = 158U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 57798U;
    tmp_msg_0.off_x = 0.335477749507;
    tmp_msg_0.off_y = 0.391786212572;
    tmp_msg_0.off_z = 0.750405684317;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("LKZTGSZWTKDZZOUJFPVFPACYKRAXPOFBBULNMZBFXRKFODOJXEBXVIBWJHCGRABNFTAQVAELWYQPNHKEMRDINHMUWLXGMASVAWFEUNIQGCZRSQMRONYUDBHACIOWRLTJSXXJFDHNXPJLHHYBBKEZTWJUPYJGMITIIFCXGZNEEZQTNESHVKNDYHUKDRVMOV");

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
    msg.setTimeStamp(0.821133262643);
    msg.setSource(41574U);
    msg.setSourceEntity(247U);
    msg.setDestination(35312U);
    msg.setDestinationEntity(153U);
    msg.formation_name.assign("DATIUOQHKVTTCCCENZMBWBHFOOHLVKWGBXALKCBGLWWBOIPZNQBFASPJIONIHEJM");
    msg.reference_frame = 100U;
    msg.custom.assign("IXPKOHZVNMFEWYJMHYNETIRAWLMIZKPBPKQXOLELCTDNGFRIHTWKVZRJNCSIUEZAZWHEGASSIKYOJSYMJYDPQGRFNMHIULMAVRLYLXROUCFOXUCDPDZKFYUDL");

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
    msg.setTimeStamp(0.302318652574);
    msg.setSource(51602U);
    msg.setSourceEntity(42U);
    msg.setDestination(49795U);
    msg.setDestinationEntity(91U);
    msg.formation_name.assign("ELUDQQSKRUQYDHXVOZAVFKQFOAMOUUMKUDLYFLYPNIABPIYEWNWRDRSPBUIGRVMPFECRTVCHKGRPCFXAHLPCVGFIWSEVLKXEBKMXTSCSCCKGWAUJSHVHOIJEWYJOQATSUGNAHIBHX");
    msg.reference_frame = 6U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27564U;
    tmp_msg_0.off_x = 0.438308766091;
    tmp_msg_0.off_y = 0.151043615467;
    tmp_msg_0.off_z = 0.773335577285;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("TKVBFVKVUXUJYNZKMVUMTYISCWGRRROUZQOJWISHTBZDHSYVMHUFAHNYSPTYRSXVCCPBWJFBGGXSPNBQTHCMNL");

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
    msg.setTimeStamp(0.276028421457);
    msg.setSource(6933U);
    msg.setSourceEntity(14U);
    msg.setDestination(64200U);
    msg.setDestinationEntity(95U);
    msg.group_name.assign("PKVBQSITSWXEYBZQNNPEVTLARDFWIVMUWNUPJWTGLGMAUCUHKXVNNVVROBDO");
    msg.formation_name.assign("MAMPOJLNATTEGKVREHCIUZBXHIUEPFFVLYBEHOLLYDDNDQNBGZBFECORGOAXOKYDLPJATKMDWLCQXTIDSFLLYNKFBNFMKIIFRPJWSVEJPDCMQXCBEJLNJUMBSITZQTYOZCRCCROXAD");
    msg.plan_id.assign("NYNSZMKLFPRXTSVKOENHUTGULVCGZVYSGTXQPBTXRZWDLKNWBIBGJQESAPOILLCKUHDZFCAUATAZJDPQMNSQMJYAFISIQYOBFXFXHHDVDTEKAWMADRTJZJECVWSWPXYIKBWHHDCVRZSKBJWDIOLPUYOFYCWQJFJKNUHIMZFEFUQTEKLSJXFNXIMHMBPWIDGOWIZQGGNVGANURHUPXHGSBVJTEQATENMEBAPXVBEQ");
    msg.description.assign("EFGKJUSFCSZOOPZHDDEMBQJQZBRGBYLTCTZYAFAPHLLTUEPNVFWPIMSBALVRSVOMDYQSKWNEIAHEWWOQWYFQXFQDPKDYYISWTZXNKYOKDBTXRHZKGIWMCVJAWJGNJKZGCKQXHVPUFETHBUAJBUBRROMSTXIUMZDMATSSFIVUNCSENHGAHLFDLPXKGOROOOMIGGLRVTRVNJEINJNAMYPLRQDWIJCAGYL");
    msg.leader_speed = 0.869731413753;
    msg.leader_bank_lim = 0.263122161612;
    msg.pos_sim_err_lim = 0.17854366585;
    msg.pos_sim_err_wrn = 0.371541481347;
    msg.pos_sim_err_timeout = 33386U;
    msg.converg_max = 0.312923216029;
    msg.converg_timeout = 18528U;
    msg.comms_timeout = 14011U;
    msg.turb_lim = 0.837671622599;
    msg.custom.assign("EWTIUXFBJOTTGYJWUXUCSSIULHSUMODERVVIHHOMIYVPOBNCDCCZMNRCGRLYFVCBELLQYNTPMHQGZQHMMLXUNJGKQOGYIHBBAGAETTGHBROMSOSJCDPOYKAXWJVJFOTACTMDR");

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
    msg.setTimeStamp(0.0976646219822);
    msg.setSource(31558U);
    msg.setSourceEntity(36U);
    msg.setDestination(2509U);
    msg.setDestinationEntity(125U);
    msg.group_name.assign("KIQBBFIXBTWTDVLJYHFJPTPDKWJVSJNMPFALNCBDTOXZDYGDHQZKLRLM");
    msg.formation_name.assign("DXUWBNUMBGFPDCDLAJKGUTZBTEHTCRNKFIXPYZAKWHZSINKRSJFJGVWKUNPGTAHIBCZHWQLSXAOPJDYWLJOSAOXIXCLFTEORBMJVCEQRVAUYVIUCWRIMYSXXGNMARYQVAMIQYJMCVQYKLPUZY");
    msg.plan_id.assign("KUNQVBYJNEURZQBXWAAMIKQDWNNCNMRPFQXHE");
    msg.description.assign("ZEDOPSJRGVFUZSBAEPPMAQARYWGQWDK");
    msg.leader_speed = 0.588785380604;
    msg.leader_bank_lim = 0.571107570747;
    msg.pos_sim_err_lim = 0.0043241448092;
    msg.pos_sim_err_wrn = 0.253077280437;
    msg.pos_sim_err_timeout = 4101U;
    msg.converg_max = 0.491030578319;
    msg.converg_timeout = 50071U;
    msg.comms_timeout = 27103U;
    msg.turb_lim = 0.593308356768;
    msg.custom.assign("PTCAHSLTJFFFJHLWAYXAHARPOSQTUNZGBPNUEIKKMQSPCLMGDSCRLRWFXWCPTJYUWVKMHGVWQJLNSCOBVRXTIYVRHBLVJONSRXOEZUSIPBXNMIZJGOUKMZKXKLPAJSZQUIQUPTQSLNJXUMBPD");

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
    msg.setTimeStamp(0.837493638112);
    msg.setSource(431U);
    msg.setSourceEntity(209U);
    msg.setDestination(2680U);
    msg.setDestinationEntity(165U);
    msg.group_name.assign("UKPBFYQYIUWZKREMFKYARKBNVWCJHTSNXNOREQGGDGZZUPYFWGAGQEZEOHLGLBCYDKIARXMLVZMCNKPFNVIQFHVXCIXEHRLKVTQJDUPPWFVGUSDBIAHTOPABKVCEZIVZWHUUQJMNSAWMXOZMP");
    msg.formation_name.assign("GODSDJPEAEBNOBTHYOZGMYUYWDIUEXWASWRVMSARKRGQKYKFHKNYIISUUNBPJMAR");
    msg.plan_id.assign("QDHLHWAOXNYMIWPMUXBSBGITFOKUYNWLCMVOFFFTQFYULLWECLZSTKNORMNPSHVCJOHNTRZDGQAHSJXRFMLEQQAQJIBD");
    msg.description.assign("NPHDWALUSRKIIDSLZCQNBRPGJXMLSPBTKNCUHFGOZCAYORBVIAQPPTLLQMFVEFPMOYVQKZGTJFYHRACOSENRTQLSCJBHXUBDPYIWLJTOIEEIMLBHLEKVVTWKWHNUBGWYXSIXJZDVWTFCEQMZZQNIIPKGYUVJA");
    msg.leader_speed = 0.545044013661;
    msg.leader_bank_lim = 0.538842796673;
    msg.pos_sim_err_lim = 0.239158065363;
    msg.pos_sim_err_wrn = 0.112783615861;
    msg.pos_sim_err_timeout = 61316U;
    msg.converg_max = 0.159914148734;
    msg.converg_timeout = 11426U;
    msg.comms_timeout = 53413U;
    msg.turb_lim = 0.936051860719;
    msg.custom.assign("VBABXWTJCOKAUOMFDUHDKTPMPCGRFKWJHCLDGRAGCRLTSJTVEXBXLMKACLQHLZQKVJUZURKRYAYMROZCAOJJNOJGPVZAXUTVGQQEDKDSTEWFMGXEYNLCQNPBEQAFCNIQHSSZPDNWHPBWWUIIY");

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
    msg.setTimeStamp(0.0337682936195);
    msg.setSource(32624U);
    msg.setSourceEntity(75U);
    msg.setDestination(36573U);
    msg.setDestinationEntity(91U);
    msg.control_src = 25652U;
    msg.control_ent = 48U;
    msg.timeout = 0.755476751287;
    msg.loiter_radius = 0.628145292394;
    msg.altitude_interval = 0.837467655095;

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
    msg.setTimeStamp(0.0115104491088);
    msg.setSource(42298U);
    msg.setSourceEntity(80U);
    msg.setDestination(28644U);
    msg.setDestinationEntity(11U);
    msg.control_src = 32892U;
    msg.control_ent = 58U;
    msg.timeout = 0.962502894542;
    msg.loiter_radius = 0.995459201791;
    msg.altitude_interval = 0.0277686696456;

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
    msg.setTimeStamp(0.121082103767);
    msg.setSource(27885U);
    msg.setSourceEntity(245U);
    msg.setDestination(31495U);
    msg.setDestinationEntity(188U);
    msg.control_src = 64477U;
    msg.control_ent = 253U;
    msg.timeout = 0.182067186821;
    msg.loiter_radius = 0.57449014967;
    msg.altitude_interval = 0.936547127201;

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
    msg.setTimeStamp(0.189530081291);
    msg.setSource(51924U);
    msg.setSourceEntity(150U);
    msg.setDestination(13115U);
    msg.setDestinationEntity(72U);
    msg.flags = 218U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.86082796517;
    tmp_msg_0.speed_units = 173U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.192708002919;
    tmp_msg_1.z_units = 75U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.366146560833;
    msg.lon = 0.115622174441;
    msg.radius = 0.223723053567;

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
    msg.setTimeStamp(0.613626556453);
    msg.setSource(58294U);
    msg.setSourceEntity(170U);
    msg.setDestination(5708U);
    msg.setDestinationEntity(41U);
    msg.flags = 156U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.812981313644;
    tmp_msg_0.speed_units = 190U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.581929979514;
    tmp_msg_1.z_units = 243U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.571939188748;
    msg.lon = 0.413764707892;
    msg.radius = 0.130645022127;

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
    msg.setTimeStamp(0.314536130397);
    msg.setSource(29787U);
    msg.setSourceEntity(17U);
    msg.setDestination(34767U);
    msg.setDestinationEntity(135U);
    msg.flags = 201U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.52621269312;
    tmp_msg_0.speed_units = 37U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.511379149365;
    tmp_msg_1.z_units = 195U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.400923768747;
    msg.lon = 0.971044335741;
    msg.radius = 0.160841098278;

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
    msg.setTimeStamp(0.0563850140061);
    msg.setSource(7060U);
    msg.setSourceEntity(229U);
    msg.setDestination(35245U);
    msg.setDestinationEntity(219U);
    msg.control_src = 19378U;
    msg.control_ent = 210U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 15U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.455562063484;
    tmp_tmp_msg_0_0.speed_units = 188U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.244823553715;
    tmp_tmp_msg_0_1.z_units = 31U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.316372086879;
    tmp_msg_0.lon = 0.586355019484;
    tmp_msg_0.radius = 0.0871119474873;
    msg.reference.set(tmp_msg_0);
    msg.state = 24U;
    msg.proximity = 149U;

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
    msg.setTimeStamp(0.721435076255);
    msg.setSource(7761U);
    msg.setSourceEntity(48U);
    msg.setDestination(49942U);
    msg.setDestinationEntity(14U);
    msg.control_src = 36611U;
    msg.control_ent = 164U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 223U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.635927918607;
    tmp_tmp_msg_0_0.speed_units = 230U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.481560726072;
    tmp_tmp_msg_0_1.z_units = 171U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.958383657667;
    tmp_msg_0.lon = 0.879161409312;
    tmp_msg_0.radius = 0.51781031393;
    msg.reference.set(tmp_msg_0);
    msg.state = 136U;
    msg.proximity = 159U;

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
    msg.setTimeStamp(0.413984522429);
    msg.setSource(6915U);
    msg.setSourceEntity(91U);
    msg.setDestination(16073U);
    msg.setDestinationEntity(239U);
    msg.control_src = 35798U;
    msg.control_ent = 182U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 74U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.435765821594;
    tmp_tmp_msg_0_0.speed_units = 74U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.256436598433;
    tmp_tmp_msg_0_1.z_units = 141U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.217450965803;
    tmp_msg_0.lon = 0.0141343467855;
    tmp_msg_0.radius = 0.193314003357;
    msg.reference.set(tmp_msg_0);
    msg.state = 44U;
    msg.proximity = 215U;

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
    msg.setTimeStamp(0.344884475163);
    msg.setSource(13350U);
    msg.setSourceEntity(22U);
    msg.setDestination(17914U);
    msg.setDestinationEntity(9U);
    msg.ax_cmd = 0.643453205334;
    msg.ay_cmd = 0.613287866724;
    msg.az_cmd = 0.650139197031;
    msg.ax_des = 0.967511377446;
    msg.ay_des = 0.352083702848;
    msg.az_des = 0.334053133234;
    msg.virt_err_x = 0.435126236713;
    msg.virt_err_y = 0.532696017055;
    msg.virt_err_z = 0.461638863131;
    msg.surf_fdbk_x = 0.842936785825;
    msg.surf_fdbk_y = 0.0915803368114;
    msg.surf_fdbk_z = 0.177158113271;
    msg.surf_unkn_x = 0.418346171478;
    msg.surf_unkn_y = 0.14893525521;
    msg.surf_unkn_z = 0.31145680638;
    msg.ss_x = 0.955209671379;
    msg.ss_y = 0.538008714648;
    msg.ss_z = 0.0833798362139;

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
    msg.setTimeStamp(0.787897034392);
    msg.setSource(43690U);
    msg.setSourceEntity(243U);
    msg.setDestination(7755U);
    msg.setDestinationEntity(48U);
    msg.ax_cmd = 0.188914820344;
    msg.ay_cmd = 0.851102901996;
    msg.az_cmd = 0.931723856557;
    msg.ax_des = 0.0713526202196;
    msg.ay_des = 0.709758012846;
    msg.az_des = 0.985372071976;
    msg.virt_err_x = 0.873837364421;
    msg.virt_err_y = 0.065634729806;
    msg.virt_err_z = 0.10880751156;
    msg.surf_fdbk_x = 0.674975245134;
    msg.surf_fdbk_y = 0.373740140818;
    msg.surf_fdbk_z = 0.206185752238;
    msg.surf_unkn_x = 0.957454497031;
    msg.surf_unkn_y = 0.199802110655;
    msg.surf_unkn_z = 0.756748015923;
    msg.ss_x = 0.130020679977;
    msg.ss_y = 0.0981747305567;
    msg.ss_z = 0.777325363847;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("PNVVXGHYVZHMWJENJQKXYXKRAOQGLUWASDDQWUMXYQTUCEGLNHNAWXHVDKRUBLDIKRDLYEKFXDCAUZRJQZPNQBXWJGCSUNMBHKT");
    tmp_msg_0.dist = 0.608782302634;
    tmp_msg_0.err = 0.423683972484;
    tmp_msg_0.ctrl_imp = 0.54433626251;
    tmp_msg_0.rel_dir_x = 0.201646908216;
    tmp_msg_0.rel_dir_y = 0.509389036349;
    tmp_msg_0.rel_dir_z = 0.50708799008;
    tmp_msg_0.err_x = 0.995443141047;
    tmp_msg_0.err_y = 0.743407814453;
    tmp_msg_0.err_z = 0.228105536883;
    tmp_msg_0.rf_err_x = 0.840682324748;
    tmp_msg_0.rf_err_y = 0.0617921441055;
    tmp_msg_0.rf_err_z = 0.0525538638548;
    tmp_msg_0.rf_err_vx = 0.17686989258;
    tmp_msg_0.rf_err_vy = 0.478495066433;
    tmp_msg_0.rf_err_vz = 0.882771888578;
    tmp_msg_0.ss_x = 0.919121850088;
    tmp_msg_0.ss_y = 0.637695854875;
    tmp_msg_0.ss_z = 0.793424746612;
    tmp_msg_0.virt_err_x = 0.592475219339;
    tmp_msg_0.virt_err_y = 0.0905026552201;
    tmp_msg_0.virt_err_z = 0.130267150438;
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
    msg.setTimeStamp(0.696619503851);
    msg.setSource(6565U);
    msg.setSourceEntity(86U);
    msg.setDestination(25796U);
    msg.setDestinationEntity(209U);
    msg.ax_cmd = 0.14033988553;
    msg.ay_cmd = 0.785419587984;
    msg.az_cmd = 0.354491868872;
    msg.ax_des = 0.000394820443067;
    msg.ay_des = 0.28263560091;
    msg.az_des = 0.684411955751;
    msg.virt_err_x = 0.195413921686;
    msg.virt_err_y = 0.467407560702;
    msg.virt_err_z = 0.729395920004;
    msg.surf_fdbk_x = 0.773999003202;
    msg.surf_fdbk_y = 0.31219015598;
    msg.surf_fdbk_z = 0.531382526506;
    msg.surf_unkn_x = 0.195392107595;
    msg.surf_unkn_y = 0.238389547109;
    msg.surf_unkn_z = 0.66441219833;
    msg.ss_x = 0.254132425961;
    msg.ss_y = 0.149435437835;
    msg.ss_z = 0.817908047559;

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
    msg.setTimeStamp(0.375356052353);
    msg.setSource(59126U);
    msg.setSourceEntity(103U);
    msg.setDestination(13700U);
    msg.setDestinationEntity(145U);
    msg.s_id.assign("XNDATMIBHPRDWVJFO");
    msg.dist = 0.305334252827;
    msg.err = 0.247227066252;
    msg.ctrl_imp = 0.166530447633;
    msg.rel_dir_x = 0.502165010193;
    msg.rel_dir_y = 0.876360164489;
    msg.rel_dir_z = 0.809586176561;
    msg.err_x = 0.149173791989;
    msg.err_y = 0.246663257968;
    msg.err_z = 0.802074617958;
    msg.rf_err_x = 0.475320402109;
    msg.rf_err_y = 0.977818403844;
    msg.rf_err_z = 0.120411425607;
    msg.rf_err_vx = 0.147801352107;
    msg.rf_err_vy = 0.785814142235;
    msg.rf_err_vz = 0.774873947703;
    msg.ss_x = 0.591603744169;
    msg.ss_y = 0.0570623045302;
    msg.ss_z = 0.13527681159;
    msg.virt_err_x = 0.889434753713;
    msg.virt_err_y = 0.949733419602;
    msg.virt_err_z = 0.625726423805;

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
    msg.setTimeStamp(0.550645514838);
    msg.setSource(53857U);
    msg.setSourceEntity(146U);
    msg.setDestination(3477U);
    msg.setDestinationEntity(163U);
    msg.s_id.assign("XGTADFNOTLBOSWHCFHIVJVLDCIFZHKGDZAFSLAKYLCYCOVHKQGUBPEUVUJXSQBOXLZGWKAOSYSPQZYPOFUEHYQREOUJKYELHADKMAIXXBIFJRBVYXBQTRLWIHTZNQFUQIJPWNODZRECZCZAGVMNPPPWXKJOTPIWQIESXVNRJWTNCGPDLCHDTRHRSRLWKKZFYDNQXUMUMTVBSPYRHASSFKLIBQJWUVT");
    msg.dist = 0.768372017041;
    msg.err = 0.40217823265;
    msg.ctrl_imp = 0.649580900429;
    msg.rel_dir_x = 0.250010719663;
    msg.rel_dir_y = 0.691266910664;
    msg.rel_dir_z = 0.309379035123;
    msg.err_x = 0.138589971727;
    msg.err_y = 0.022449543374;
    msg.err_z = 0.518668228116;
    msg.rf_err_x = 0.141731783333;
    msg.rf_err_y = 0.523162645988;
    msg.rf_err_z = 0.632691275248;
    msg.rf_err_vx = 0.742787524765;
    msg.rf_err_vy = 0.296250755212;
    msg.rf_err_vz = 0.0560978464152;
    msg.ss_x = 0.0276897982725;
    msg.ss_y = 0.500044257086;
    msg.ss_z = 0.655348945586;
    msg.virt_err_x = 0.677488361453;
    msg.virt_err_y = 0.524091238496;
    msg.virt_err_z = 0.259865020518;

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
    msg.setTimeStamp(0.0493890848532);
    msg.setSource(63539U);
    msg.setSourceEntity(183U);
    msg.setDestination(64446U);
    msg.setDestinationEntity(225U);
    msg.s_id.assign("WMRIAVIXGUCHKUCRKUVMVCZVXNFMTYWDPOIFQQDOMCOGTWGCLFEZXNEXOGBAEPNUDKRLYPQVGCYUYMOTJYESKPGRAIZIBRPMOXVKBJWVTPGDDFGJLVTHJTUZTZIJADOWAVZJEUBJXCYFCBCLQFPLXBMZIYELPDTZSRRAACWJHRSBZPNERQWBXDUNAFOHILUJPFJYWLTKGQHBSZ");
    msg.dist = 0.592458442399;
    msg.err = 0.711654229044;
    msg.ctrl_imp = 0.993585252142;
    msg.rel_dir_x = 0.202711311058;
    msg.rel_dir_y = 0.998328407185;
    msg.rel_dir_z = 0.00783315513651;
    msg.err_x = 0.371902535101;
    msg.err_y = 0.682350213267;
    msg.err_z = 0.813879888607;
    msg.rf_err_x = 0.289351312422;
    msg.rf_err_y = 0.558870878277;
    msg.rf_err_z = 0.685875556511;
    msg.rf_err_vx = 0.747982254061;
    msg.rf_err_vy = 0.0795339950339;
    msg.rf_err_vz = 0.67330923818;
    msg.ss_x = 0.938929346746;
    msg.ss_y = 0.35061499665;
    msg.ss_z = 0.844495046805;
    msg.virt_err_x = 0.331027726309;
    msg.virt_err_y = 0.751651676122;
    msg.virt_err_z = 0.12437350203;

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
    msg.setTimeStamp(0.903910913016);
    msg.setSource(22565U);
    msg.setSourceEntity(83U);
    msg.setDestination(53538U);
    msg.setDestinationEntity(176U);
    msg.timeout = 29834U;
    msg.rpm = 0.508449265532;
    msg.direction = 138U;
    msg.custom.assign("CDEMZHEHIPQBEPSSKXKHPHJXSWKFLLSVSUBPGDEZUOMNOZLQIBNDGCRRUBLOTGZZOISTSXMNZOFFRVZLGYQINCRQHESSNWJTCJAYYTVOMXYFZPJWADFDVIDXLXYKHEAMLCQMNYEKLJXRVWWBPVYEWWEQCIKBBVJTTOGJTRTEVWNUDF");

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
    msg.setTimeStamp(0.881286029143);
    msg.setSource(20824U);
    msg.setSourceEntity(114U);
    msg.setDestination(51593U);
    msg.setDestinationEntity(95U);
    msg.timeout = 16560U;
    msg.rpm = 0.266658385984;
    msg.direction = 13U;
    msg.custom.assign("HUMRGVGUZUTMDKEKPJCWEMECDTLLRWOKPTFIEKXWYYKHMXZVBHNQDIBZSHXNABQAVIUHGVGMUOLRRSESYZFSWPYBEYFDYONRSUQNR");

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
    msg.setTimeStamp(0.953161805299);
    msg.setSource(13950U);
    msg.setSourceEntity(9U);
    msg.setDestination(15960U);
    msg.setDestinationEntity(226U);
    msg.timeout = 44437U;
    msg.rpm = 0.864899709429;
    msg.direction = 200U;
    msg.custom.assign("NIQUNUOVRPDYRRBLAIYWNOITOBKCPMEXISBHZZMUDGSNMQCSXELZZQLQAJHPJXXQTWCROIVBTCEVFTMDADDWAWHJOVAJTAQISCMCKVGFSQGRJCNTKWPYXUQARESAGSDRXIBNNBEKOYZPJBLFLLUZQPYVJHHAVCZAD");

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
    msg.setTimeStamp(0.816885315704);
    msg.setSource(23474U);
    msg.setSourceEntity(51U);
    msg.setDestination(40896U);
    msg.setDestinationEntity(1U);
    msg.formation_name.assign("JECNUEZLEOLMLHFL");
    msg.type = 75U;
    msg.op = 199U;
    msg.group_name.assign("MJSHOZPCOWVCFYJRZUTMCZPUASCJNBQYYEROWVLHOFK");
    msg.plan_id.assign("EAUGEAFHORPPEASHFXWK");
    msg.description.assign("LCMIELZUNDEOSJJMVSAEDWFOQD");
    msg.reference_frame = 107U;
    msg.leader_bank_lim = 0.725898639427;
    msg.leader_speed_min = 0.33342389437;
    msg.leader_speed_max = 0.0900545310671;
    msg.leader_alt_min = 0.475468088898;
    msg.leader_alt_max = 0.797771890127;
    msg.pos_sim_err_lim = 0.391138878931;
    msg.pos_sim_err_wrn = 0.152504068883;
    msg.pos_sim_err_timeout = 26452U;
    msg.converg_max = 0.442320394868;
    msg.converg_timeout = 26045U;
    msg.comms_timeout = 39635U;
    msg.turb_lim = 0.548776106421;
    msg.custom.assign("NRKLORMDCGCSURYQUNWAUNAFVVIYVPITZHOLELBWUMYTTAWYWWSWFCCOFAAMVQZKWZRIGWMNEJTBHIXOTSGKMJUGQRAIJIAPATDVCDOOFXVYDHNF");

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
    msg.setTimeStamp(0.95071175401);
    msg.setSource(21213U);
    msg.setSourceEntity(184U);
    msg.setDestination(47432U);
    msg.setDestinationEntity(0U);
    msg.formation_name.assign("DOKOZQVJRYWVZBDGWMXQRDHEFFRPYMTEVNSCABDODCMPHYQSMTUYMIVITJXSFSHQUICNGOLXKIBYOCEUVOIWETQBDSATWMGOJWUJUZHSEXUNBUZRQNFNVFCILYTYSUOBKDWHTFIXCFBILECZFTKAWQNFADPQCRVHONMEBXGPHTAOQSMXGCYXJRSJWMPMRGZ");
    msg.type = 73U;
    msg.op = 119U;
    msg.group_name.assign("WVALVAZHOBRKEHXBDWRNXAYDXWHXNDFJPQJOTCEUQTVXTCHRGOLTWCWAMHLZEDZBSCBMEVZDOFLLVGMPHCTMWSBPBGTDOJNRYYDDSQKKPBRCIZQLQSOAJDONBXYDYMRYKTJEQZLWSZTGEMCHXABRVQAIEZFZATYUUSIIICEYNAHFWSBUUAOYSJXPGNJGRLKUUWQCSLFZMIMNUE");
    msg.plan_id.assign("MEFMGVUQTLRTNXJQVENDPIQWDOUGLAWOTERHBJPTYUPZMYVDCZWZ");
    msg.description.assign("WOLEQJYMZCPLGELBUITNFEHDOYIHCMOKURASJEWRXMUVXKXWUZEEKTXLHPAGCYZDMQWDEBSGTPQLMXELJVTXVTDBXRSHKZFKOVPCSCSLJQVACYNEAPNNAOWPSKSIBGRBNKSITAPOEZMYPGIHYARYFZXLNYHUFOQIQCUVODDBUVWUKDJVMIBWTKVWGIBPFTFGRCYLRMTAQFWFRFOGJYAJQJRQGZIJZJIUMCQNPSORUHZDLXDFHGVDNB");
    msg.reference_frame = 92U;
    msg.leader_bank_lim = 0.992873318878;
    msg.leader_speed_min = 0.656775666577;
    msg.leader_speed_max = 0.500065770145;
    msg.leader_alt_min = 0.314730197822;
    msg.leader_alt_max = 0.27284666526;
    msg.pos_sim_err_lim = 0.430629911907;
    msg.pos_sim_err_wrn = 0.189886669667;
    msg.pos_sim_err_timeout = 50076U;
    msg.converg_max = 0.654896898356;
    msg.converg_timeout = 14767U;
    msg.comms_timeout = 313U;
    msg.turb_lim = 0.650637453829;
    msg.custom.assign("RZGNTZFNIODIXAUUCBYDSPYHYJOTSXFIMPGKBLHOTKIYHSIAVROJVQTWAJKJWHZEIMQMYBRNYZAHYDEZJCPXUEZGRPWHNVOJSJXKKWNCVMMMALLTUGFDOVCTQKXDJXQQDL");

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
    msg.setTimeStamp(0.549991778139);
    msg.setSource(40763U);
    msg.setSourceEntity(48U);
    msg.setDestination(41487U);
    msg.setDestinationEntity(174U);
    msg.formation_name.assign("WFCQNKYVPPZYLPCYOYQMSRUDNEKGJIYBSUI");
    msg.type = 41U;
    msg.op = 30U;
    msg.group_name.assign("VGBEGEXHWAPCIMNQJZTRKSHTSMDCOHWSAVYLDMMEOSWKRBJYNSPWDJTCRQCTDKEWBDXNKNRLNZMWBFUOVQLHRJILCGINVFTOFJXULRHEWPBJIXXBOAEAGOPOMPUKUGXHJUZZYVSFTEG");
    msg.plan_id.assign("GXDRLLLWUHQGORIJAMHXYRIKJSCPVMGDQCTSTUTEVZVBDTOODMWCTNXIPXASMSZNBBYDBQKGIQYAHEXJVVRLNZUOPNDFJPUZSZZJOLLGYAYKSEMBCBRTBYZQNZCOKFKW");
    msg.description.assign("WQBWRRCPXHVTVHDIJZJZMMSBQXYYWBQSUHQVOKGUODJYGSEEQSXZJWIGHPVVKFQUCFFBFHLKNECHDKYLKQOPAYTXJINRGIVMNYTLALAKRNJKDDPPPWNYLQHUMTMACEOBNBURRNZGSZTDPCEAHSIZWSMVNAFEBGSGGSZCWMADSNYYEOROGARIWBVCYXLAE");
    msg.reference_frame = 30U;
    msg.leader_bank_lim = 0.861487876121;
    msg.leader_speed_min = 0.60574834119;
    msg.leader_speed_max = 0.755779224428;
    msg.leader_alt_min = 0.203156990983;
    msg.leader_alt_max = 0.43906299594;
    msg.pos_sim_err_lim = 0.359093495944;
    msg.pos_sim_err_wrn = 0.421050910019;
    msg.pos_sim_err_timeout = 54372U;
    msg.converg_max = 0.428061711354;
    msg.converg_timeout = 24938U;
    msg.comms_timeout = 50732U;
    msg.turb_lim = 0.829733238534;
    msg.custom.assign("CTANXCXEUMBRECCZGTDHDBTXZYNRBAKPULDEFQZDAFIWOYKONIOOEIPJVURJYTWPMYCTLWILDPCOWZYJXWSUCKFWYEZNQGJVRQOZZUIHFUSXEUGBLPMPBRNOHMQMBVCABKUHJYVQDZASEDQKO");

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
    msg.setTimeStamp(0.494836352916);
    msg.setSource(289U);
    msg.setSourceEntity(85U);
    msg.setDestination(9497U);
    msg.setDestinationEntity(159U);
    msg.timeout = 16480U;
    msg.lat = 0.00153182554064;
    msg.lon = 0.365069345299;
    msg.z = 0.80112115253;
    msg.z_units = 89U;
    msg.speed = 0.584185836872;
    msg.speed_units = 120U;
    msg.custom.assign("JVPXXMHQQZLOGUXQYMESBTHAEDWFUTNYTJTLUNPGWERMWULVQKNOYCRJYABTZJZCFVETWIMRGGLKDQHCNLRUITPUKDVFWSBJIYXCYAHMNQWYGPHMQDISHUXENNODOVBDLQXPKGHKGHEIIXGWC");

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
    msg.setTimeStamp(0.716349277282);
    msg.setSource(31579U);
    msg.setSourceEntity(196U);
    msg.setDestination(60552U);
    msg.setDestinationEntity(79U);
    msg.timeout = 34407U;
    msg.lat = 0.808928012683;
    msg.lon = 0.826767079987;
    msg.z = 0.571480449549;
    msg.z_units = 176U;
    msg.speed = 0.624465703313;
    msg.speed_units = 112U;
    msg.custom.assign("CCVFYAPGBPPVRLZDUIHAVYSIBSTMWVXTYQITXHMUOWZTPQUQLQOCZEPJZMORLCVDHXFPKRCFMNSUJHRTKXNBINGJZRHWMPGVKQJYEADGHXEFVKPRYOKFNGFYZWGSHNGUWPBCOIFEXSWGAQAMTWEQRDMXKROJBLFWLRZKGVUZBINNDLKJSWJCDTDD");

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
    msg.setTimeStamp(0.423516030938);
    msg.setSource(20120U);
    msg.setSourceEntity(127U);
    msg.setDestination(10443U);
    msg.setDestinationEntity(221U);
    msg.timeout = 11345U;
    msg.lat = 0.137992399879;
    msg.lon = 0.772737286515;
    msg.z = 0.887674268883;
    msg.z_units = 203U;
    msg.speed = 0.848717302419;
    msg.speed_units = 126U;
    msg.custom.assign("ZTYGUMBAOHUSOEZUSRPTQWZZBJAABCLUYAOLRRACWSJBKUXONVWIRUVTKLWEQHRICWJQMCOMJUDGVNNFBCCELWOLIRPF");

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
    msg.setTimeStamp(0.974052073755);
    msg.setSource(58604U);
    msg.setSourceEntity(114U);
    msg.setDestination(44428U);
    msg.setDestinationEntity(32U);
    msg.timeout = 2876U;
    msg.lat = 0.556174389471;
    msg.lon = 0.841744935751;
    msg.z = 0.00366935852309;
    msg.z_units = 203U;
    msg.speed = 0.368611012154;
    msg.speed_units = 20U;
    msg.custom.assign("IPCCPDUDUMXIOYMREXFKWZZIKQHYWCJTVZFTJBCXGPBWUYJDNGDQPWELQZYUCPCAUSAFDOLUXMTYDGRSFGRGOSVGMSHDWTTRXSRAERBKNZZDJBERVFHPWSLHXHZBPPMIIVANQNLLVIVOAEKFG");

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
    msg.setTimeStamp(0.886841663515);
    msg.setSource(60740U);
    msg.setSourceEntity(6U);
    msg.setDestination(36377U);
    msg.setDestinationEntity(222U);
    msg.timeout = 60880U;
    msg.lat = 0.472703636927;
    msg.lon = 0.191219830689;
    msg.z = 0.906096468772;
    msg.z_units = 3U;
    msg.speed = 0.195350394056;
    msg.speed_units = 47U;
    msg.custom.assign("NBLRWEISNUJFCBLMEXLTCKJLVAMBDUXHQQXYFGAKKRSNQGDWCGSOYDRANXGMNVONZHKHOPFSYYUUXTMFRPVMPKIGRILUEIZTVOKCMKAEFZVUXRDIPBQCDTRGPQSYONCFJDOIAUPDGEUJSBEEVBMWIYPRTFUNTWJBOHZQWLV");

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
    msg.setTimeStamp(0.928060351369);
    msg.setSource(18933U);
    msg.setSourceEntity(30U);
    msg.setDestination(53317U);
    msg.setDestinationEntity(228U);
    msg.timeout = 16337U;
    msg.lat = 0.345495287846;
    msg.lon = 0.906361300736;
    msg.z = 0.119236213631;
    msg.z_units = 78U;
    msg.speed = 0.32058178709;
    msg.speed_units = 232U;
    msg.custom.assign("MWKNIKRPEFXGXTTLKW");

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
    msg.setTimeStamp(0.425576337502);
    msg.setSource(1999U);
    msg.setSourceEntity(84U);
    msg.setDestination(59538U);
    msg.setDestinationEntity(148U);
    msg.arrival_time = 0.590325653963;
    msg.lat = 0.13229207718;
    msg.lon = 0.0896610440643;
    msg.z = 0.278441211161;
    msg.z_units = 37U;
    msg.travel_z = 0.193638838944;
    msg.travel_z_units = 8U;
    msg.delayed = 121U;

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
    msg.setTimeStamp(0.816568021291);
    msg.setSource(42242U);
    msg.setSourceEntity(111U);
    msg.setDestination(49057U);
    msg.setDestinationEntity(97U);
    msg.arrival_time = 0.0801082491235;
    msg.lat = 0.474548440242;
    msg.lon = 0.130214386377;
    msg.z = 0.416870255158;
    msg.z_units = 111U;
    msg.travel_z = 0.819742248152;
    msg.travel_z_units = 245U;
    msg.delayed = 75U;

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
    msg.setTimeStamp(0.906060927354);
    msg.setSource(35357U);
    msg.setSourceEntity(172U);
    msg.setDestination(6742U);
    msg.setDestinationEntity(143U);
    msg.arrival_time = 0.418002278787;
    msg.lat = 0.575216359078;
    msg.lon = 0.937302527038;
    msg.z = 0.815105635783;
    msg.z_units = 105U;
    msg.travel_z = 0.987013381804;
    msg.travel_z_units = 131U;
    msg.delayed = 143U;

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
    msg.setTimeStamp(0.0482976384015);
    msg.setSource(41109U);
    msg.setSourceEntity(12U);
    msg.setDestination(41634U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.919427650366;
    msg.lon = 0.441881107148;
    msg.z = 0.666619720044;
    msg.z_units = 136U;
    msg.speed = 0.0626950898131;
    msg.speed_units = 148U;
    msg.bearing = 0.830063066466;
    msg.cross_angle = 0.353836618126;
    msg.width = 0.507730505821;
    msg.length = 0.0445234905181;
    msg.coff = 28U;
    msg.angaperture = 0.240506021372;
    msg.range = 59998U;
    msg.overlap = 191U;
    msg.flags = 137U;
    msg.custom.assign("UWVLRALQYCEQAXQIUVDAKVUDT");

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
    msg.setTimeStamp(0.600418451903);
    msg.setSource(26528U);
    msg.setSourceEntity(244U);
    msg.setDestination(9078U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.851811045306;
    msg.lon = 0.0647607955566;
    msg.z = 0.790891197882;
    msg.z_units = 113U;
    msg.speed = 0.701636688714;
    msg.speed_units = 151U;
    msg.bearing = 0.0130296117977;
    msg.cross_angle = 0.653906267268;
    msg.width = 0.757329766461;
    msg.length = 0.257541296203;
    msg.coff = 195U;
    msg.angaperture = 0.199387937831;
    msg.range = 43612U;
    msg.overlap = 210U;
    msg.flags = 247U;
    msg.custom.assign("HSWWAMGNTKVUDFAODGOGIILKCVVJYVEREGJCLNBUFVWQMDCWTRRDKEVDTJITYQNGKUMPBOHOTMLYLRVFEAUYXJGKQESQWFFKWYHJNMDPIQRSOUTHTJDPTBSZYIENSQNWRZTMHBQLKMUYFLPDWUZLBZXGCDGRXPCNVOFARZZRZRWBTAPJQHXPQHOJOZHABPHJMCFNISISOEXXEKLC");

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
    msg.setTimeStamp(0.870766976817);
    msg.setSource(35320U);
    msg.setSourceEntity(29U);
    msg.setDestination(23779U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.809719165385;
    msg.lon = 0.270171740614;
    msg.z = 0.519067991739;
    msg.z_units = 127U;
    msg.speed = 0.150277886565;
    msg.speed_units = 2U;
    msg.bearing = 0.0451758547533;
    msg.cross_angle = 0.369328733308;
    msg.width = 0.853061014432;
    msg.length = 0.580904170694;
    msg.coff = 154U;
    msg.angaperture = 0.710304196538;
    msg.range = 57140U;
    msg.overlap = 18U;
    msg.flags = 189U;
    msg.custom.assign("ZGMIYOUKBMTREQEWEYXKFZMGHXSYSNIDULOJDBYOAPPUNBDUXRXJRAFATNRVAIXVCKKNNGBSFEARROACWVIODZSHAIOZAAC");

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
    msg.setTimeStamp(0.0355664010466);
    msg.setSource(57435U);
    msg.setSourceEntity(153U);
    msg.setDestination(51442U);
    msg.setDestinationEntity(55U);
    msg.timeout = 64839U;
    msg.lat = 0.516002798955;
    msg.lon = 0.196145208934;
    msg.z = 0.10880083612;
    msg.z_units = 95U;
    msg.speed = 0.765390191841;
    msg.speed_units = 15U;
    msg.syringe0 = 179U;
    msg.syringe1 = 110U;
    msg.syringe2 = 66U;
    msg.custom.assign("ZJHSLJXAVUDJOWOXIRLYYHKDUJEVSQSPRDBQYMOQHYHGINKXCQVVIFYHMRIKGFVNWZCGDYZUEEPWAUCZMBUAPRCBSRFMIVJPDUGOEZGTWQPFAIMNTXHWDTRJAPIOHOKAUXNOCLLQMZJFDNOSFCZNYCMTRIOGQTNRMWZUECLFHEBUGKQAHDKWAFPCAXVWIFFNYLGIDPLTPJVHWUVGAJBTKZWYJOGEKSBXMVB");

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
    msg.setTimeStamp(0.175553912973);
    msg.setSource(32874U);
    msg.setSourceEntity(5U);
    msg.setDestination(65468U);
    msg.setDestinationEntity(196U);
    msg.timeout = 14944U;
    msg.lat = 0.982089196213;
    msg.lon = 0.578433848652;
    msg.z = 0.444417733132;
    msg.z_units = 170U;
    msg.speed = 0.222954034258;
    msg.speed_units = 219U;
    msg.syringe0 = 89U;
    msg.syringe1 = 24U;
    msg.syringe2 = 226U;
    msg.custom.assign("UNJZCYLKLAHPWYFBZDMIBDIPPSIUULCRFHMNSNRXKVVDAVQWOTEAJQMRIMSKAXZPFJBGN");

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
    msg.setTimeStamp(0.573037236614);
    msg.setSource(50226U);
    msg.setSourceEntity(240U);
    msg.setDestination(19297U);
    msg.setDestinationEntity(32U);
    msg.timeout = 5951U;
    msg.lat = 0.777864046098;
    msg.lon = 0.60790402032;
    msg.z = 0.358970086481;
    msg.z_units = 177U;
    msg.speed = 0.399601204327;
    msg.speed_units = 244U;
    msg.syringe0 = 172U;
    msg.syringe1 = 244U;
    msg.syringe2 = 33U;
    msg.custom.assign("DFTXZARMDEGXRLMIPEVOPNOOLAORVJZTCSKANEHXERSVCBUEBWHGGYZ");

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
    msg.setTimeStamp(0.310521743226);
    msg.setSource(53722U);
    msg.setSourceEntity(123U);
    msg.setDestination(58752U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.857773336603);
    msg.setSource(46593U);
    msg.setSourceEntity(214U);
    msg.setDestination(2345U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.479972597079);
    msg.setSource(28449U);
    msg.setSourceEntity(122U);
    msg.setDestination(10021U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.152714990631);
    msg.setSource(43649U);
    msg.setSourceEntity(125U);
    msg.setDestination(56724U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.914002838396;
    msg.lon = 0.373051305141;
    msg.z = 0.0123555624827;
    msg.z_units = 209U;
    msg.speed = 0.0149325885704;
    msg.speed_units = 101U;
    msg.takeoff_pitch = 0.355494616196;
    msg.custom.assign("EOTELTZRMOUYBRAJBUP");

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
    msg.setTimeStamp(0.37174585052);
    msg.setSource(48162U);
    msg.setSourceEntity(94U);
    msg.setDestination(46668U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.747395894331;
    msg.lon = 0.75809696417;
    msg.z = 0.766687760352;
    msg.z_units = 210U;
    msg.speed = 0.423535793071;
    msg.speed_units = 51U;
    msg.takeoff_pitch = 0.207336322001;
    msg.custom.assign("IOPXEQVOKUPFHMHLJZSXQFDCQCYSZTBJWZMEVVRISZNUNXTDMSQSGASSFDYPWWCHMWIDGHJKJOFLGPDCUBCRTXPAWAYETGWEAXSEVMZOBUYAUNQHHGKEYJNVBFUPADNNRNMMEPYRBOWFDKIMQHHGPBBSPCFFIXJQOINZWOJR");

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
    msg.setTimeStamp(0.711878119213);
    msg.setSource(15793U);
    msg.setSourceEntity(20U);
    msg.setDestination(47965U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.327497903081;
    msg.lon = 0.192856960765;
    msg.z = 0.256679993994;
    msg.z_units = 213U;
    msg.speed = 0.989897857938;
    msg.speed_units = 73U;
    msg.takeoff_pitch = 0.895374210972;
    msg.custom.assign("ACDFMKZGKCVZRFCUIWRWHALOXIYKHUTXERKEYUURQDEBPXZFFMZOPYOKPGHUVWNCBMXQQSZVUEVXPMRKNADETBLBRUMUQAWIAPRGBIYOFVZTA");

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
    msg.setTimeStamp(0.589251384652);
    msg.setSource(57853U);
    msg.setSourceEntity(34U);
    msg.setDestination(43332U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.918335852537;
    msg.lon = 0.472853537522;
    msg.z = 0.951609820694;
    msg.z_units = 78U;
    msg.speed = 0.582852935523;
    msg.speed_units = 55U;
    msg.abort_z = 0.0284815149126;
    msg.bearing = 0.549398444887;
    msg.glide_slope = 252U;
    msg.glide_slope_alt = 0.435674680361;
    msg.custom.assign("RYCVWBCOHMXXJEVTRVATDQLYIESHQSFWBGGXAIJRZYPHDEAOJKNOHEJMVGUAKRZZECIRHHGUPNTZNCMXQJDLGTVKZDJFTQFZLEKPWHHMBCKWGOWIXTJPOOKUNXFDWUQGQVSBMVQCFUDZXMYQZTEYDBPBULVUTWGGAPRCMIVDEPAPRCREYSADKTG");

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
    msg.setTimeStamp(0.793833883892);
    msg.setSource(14026U);
    msg.setSourceEntity(178U);
    msg.setDestination(51958U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.169883918541;
    msg.lon = 0.894246872158;
    msg.z = 0.244817600922;
    msg.z_units = 120U;
    msg.speed = 0.926560221994;
    msg.speed_units = 22U;
    msg.abort_z = 0.0957436138733;
    msg.bearing = 0.814393448622;
    msg.glide_slope = 188U;
    msg.glide_slope_alt = 0.29807795568;
    msg.custom.assign("OZKQQTFRAAGJDWFMEACMUIXWHONEEGIDCNYSSDEYRXWPKFTXWXIELDMQRHUBSUDMHAVNQOJVYWNGAEJIMEPX");

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
    msg.setTimeStamp(0.142597063813);
    msg.setSource(34198U);
    msg.setSourceEntity(137U);
    msg.setDestination(17801U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.5051609244;
    msg.lon = 0.453921616698;
    msg.z = 0.0664565608137;
    msg.z_units = 0U;
    msg.speed = 0.61861824517;
    msg.speed_units = 222U;
    msg.abort_z = 0.755690736862;
    msg.bearing = 0.926476292146;
    msg.glide_slope = 214U;
    msg.glide_slope_alt = 0.0855936693868;
    msg.custom.assign("SISQTPQOCRJRLCXYUQPIXFRNERZLEIFMWIMMWELKMKWNWNIGBKYKUZVAOFYOAHUOKPPYJWWXTSUXVUDNDDTAUIHFORADNXGMYFCPJHXBXDEEQBRNJJAUMVVLWSDWGZDNJTUJQXHSZDYIBKGPUJASQYOCECGPBMPLTIEZTDMRQKPABNVYTEQOZBAFHFGRVSWYUJTAYBVTLZOKSQSBDJIWCIXKVGGNQRFETAMVMGLBHCHXFLZZSHGRCCH");

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
    msg.setTimeStamp(0.868418850706);
    msg.setSource(41450U);
    msg.setSourceEntity(205U);
    msg.setDestination(56964U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.0296758517404;
    msg.lon = 0.818640592963;
    msg.speed = 0.976919880839;
    msg.speed_units = 251U;
    msg.limits = 224U;
    msg.max_depth = 0.680425730281;
    msg.min_alt = 0.920611585824;
    msg.time_limit = 0.487460327944;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.784830782039;
    tmp_msg_0.lon = 0.0772050455953;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("HZEHWBPEQUXBRVNJHNXKXUHIX");
    msg.custom.assign("XEBZUCPTRFNTDZEORMKGCYHOOHUJTMZGOXZQWXBBLNIDNTGYPJSTKGXQZLRCMYTAFGRXFUJOALHJFVFQDULQVPIHKCEAUWYYRRZVECKMASCNDWLSJKZYBRDUVPZIVMRTPYKQOGEQLBWFBQOIXLNMZWRLDYANHNUOQSKGPBKAEYFAHJINHAJFTJPKGFHEVCAEMSXLKINFBZJXAOUEPSLQGWTCMWIDBRDNOGXBSVVVYIUWWPM");

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
    msg.setTimeStamp(0.047524721626);
    msg.setSource(60945U);
    msg.setSourceEntity(233U);
    msg.setDestination(56643U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.552860434475;
    msg.lon = 0.451753058419;
    msg.speed = 0.788149735865;
    msg.speed_units = 6U;
    msg.limits = 66U;
    msg.max_depth = 0.204886602364;
    msg.min_alt = 0.765548838448;
    msg.time_limit = 0.777459917925;
    msg.controller.assign("YWMIGKJTTRACVFVJUDCNXKYZLTLAAJEHHCZQVUCHHXFTRJZXKO");
    msg.custom.assign("ALBLQSZRIYTTPO");

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
    msg.setTimeStamp(0.880360996649);
    msg.setSource(30811U);
    msg.setSourceEntity(33U);
    msg.setDestination(35581U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.379877173462;
    msg.lon = 0.437833246496;
    msg.speed = 0.241955789206;
    msg.speed_units = 71U;
    msg.limits = 154U;
    msg.max_depth = 0.952089627874;
    msg.min_alt = 0.134557379681;
    msg.time_limit = 0.809858502049;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.83881027339;
    tmp_msg_0.lon = 0.724330962908;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("QDZQWNRDHMHVLWTRXOTVRHDEGTUBSYUCXEJBCJEPLRCNIIKBMNUWYKXQEZTUEEGOZBBRGUJMXLAEVQJPLFNZOTGYVZWWLNSCCJRYIKAXQCMNBYGKZADNBOPNJCKJFMOSHHWSBWOUDF");
    msg.custom.assign("QGIYPXSBLXNNAJMDIEDXPTKXURRXHV");

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
    msg.setTimeStamp(0.809423883608);
    msg.setSource(22251U);
    msg.setSourceEntity(37U);
    msg.setDestination(43271U);
    msg.setDestinationEntity(144U);
    msg.target.assign("FRCDGSDXVZAIACSBFNQHMRPRTPWEFTOIONJGPHRXBZEVFDEIJEQVBTQKAWCFLWAXELHZJTODJTGKMRUZMBOKVNHKHFBTQJIAGDWOBYIBLMKAYAWVMRZXNOWNWTGAUQPTKPCXQDSEHBKVQDYLMIUMIUFRGJYXWKZSAOFUQOYHDBMOQPPGXWVHRIWDCNNUJZGLLQYNZCHSU");
    msg.max_speed = 0.904817883444;
    msg.speed_units = 233U;
    msg.lat = 0.0882580152934;
    msg.lon = 0.381742726837;
    msg.z = 0.47093584876;
    msg.z_units = 76U;
    msg.custom.assign("OEWHVYNPMWKVWOCTDAFMENUUBQVEFABZXSILILJCCYQWMPARUABDWWMEOBLVLGODRLQJZKYHKINQRJMFBXJBKTNGFUWXNGQGCWQTFDIJLRJCPXXZKLYBVINPXUCUMPSQZQPCDSZKEDEICJSAIRROLEAQHZKURGIBYHZIUZPSCSLNG");

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
    msg.setTimeStamp(0.497247197417);
    msg.setSource(42395U);
    msg.setSourceEntity(46U);
    msg.setDestination(1681U);
    msg.setDestinationEntity(2U);
    msg.target.assign("FXOLFWJXXEZFFHLALEWUHEUTJTYVMTLZQVNDDJCXCGGPIHCWZQJSMEINAEBMONDQTZVYIVQWKUJDMSPGHKORKUVMYABYYYNCLFSAIZWZOUGGLSNOOWUXAUZAXNDVTCSFRWBHHRKVNPPDQLIUAGFABEQJISYQYTHQPKLGOTMJXKRELPNTZDYKKQCGOVLZFSMNIDCBZURARJKRIHCPSBBSPIRNHCMHGOEYFTBXKAUR");
    msg.max_speed = 0.643508681036;
    msg.speed_units = 6U;
    msg.lat = 0.614890331178;
    msg.lon = 0.215741403824;
    msg.z = 0.411891206686;
    msg.z_units = 18U;
    msg.custom.assign("GJNUGHMKBSCVNLWDLEKZIAPKVNIOIXCEPKYRDRMPGGGLCOECVZFNPPYSNCVBQIOMNARIFAUUMTQDZQQEHHSETXZYGJHLLFEQKPUJCVUWJUVTSQLXBBTWYFQCJMQXDYAGHABONLOVJKBNTFIKRERNYBYCDRYUTYUTXFBXOASJQCTHKHSDL");

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
    msg.setTimeStamp(0.232280965989);
    msg.setSource(12072U);
    msg.setSourceEntity(217U);
    msg.setDestination(13649U);
    msg.setDestinationEntity(147U);
    msg.target.assign("WQFJDLPUEIJEWAOAPWBLWREROTLGHSJBVWEAMHDIFKGRGFZPUZSZQHVCSJXYHXKUIVIUQDJFMNNPLBFZY");
    msg.max_speed = 0.00328826737798;
    msg.speed_units = 170U;
    msg.lat = 0.603312913248;
    msg.lon = 0.482815701102;
    msg.z = 0.845333843364;
    msg.z_units = 148U;
    msg.custom.assign("FNJGADOFZLDYWRAKGHCRMEOFLUVNPDIABZEBZHTFRPUEBAAEXRROSOOVFQJCJWLKSBRTWCWSNZBSMIRSARHHPLLBRUXEELMBIAOOICNQYOWVKHOWZCGHXNPWSQLQYVHTSSDMCURKJVTHWGQIVFXZ");

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
    msg.setTimeStamp(0.910415798874);
    msg.setSource(11339U);
    msg.setSourceEntity(21U);
    msg.setDestination(55876U);
    msg.setDestinationEntity(35U);
    msg.op_mode = 196U;
    msg.error_count = 132U;
    msg.error_ents.assign("IWTMQPGODWDQRWBMUPOHZUCUIZQVEAXICCEGJWSABPIBDNNRJIKDUZNQZHOLAXWFBU");
    msg.maneuver_type = 58088U;
    msg.maneuver_stime = 0.987133927336;
    msg.maneuver_eta = 45884U;
    msg.control_loops = 1461687147U;
    msg.flags = 8U;
    msg.last_error.assign("LZXQNTGKDZEJYLTQRURKFMXBBEJGHKXCDHBPQGQYWDTIPVEOCNOMJPSUNBVTRXIQJJFSXATFFBEEUSGTIYONCWUXHFYSMZARUNEHJUUVKPIRKWLHAMPMZNHRDPJCMLMQRWOFNVNTSLAUORHVAIVEOAVGCQALPKWCIIDZMLTSFLZCIEJYEXSBXZYSGCVADBTBEIFH");
    msg.last_error_time = 0.0915808983028;

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
    msg.setTimeStamp(0.239761097662);
    msg.setSource(15209U);
    msg.setSourceEntity(94U);
    msg.setDestination(28923U);
    msg.setDestinationEntity(103U);
    msg.op_mode = 165U;
    msg.error_count = 97U;
    msg.error_ents.assign("MHICWDVNSSYYPEGKTNDRISTLSHMXGJCHAQOTSLKUEJSIHJTSOKOCERARULVSVEUNCWIPFDZUIOIBLFBUBPHGTCUOPYXXALTWRLNKYYZXFJKWSOVJVKBQOECQKFTLXWBXUIBEHMAGCSAZNLDNKNFVEMOMHARCRWWZXJT");
    msg.maneuver_type = 51979U;
    msg.maneuver_stime = 0.634830228284;
    msg.maneuver_eta = 46524U;
    msg.control_loops = 4205297866U;
    msg.flags = 94U;
    msg.last_error.assign("JZEGDLTJWOCFWQGKNOHAQWVECKFZIZCHLGOKCMNVNEHTDAUKLUYXGWGURQPRYFBUZYPKETMYRFADDZQTLBZNRJPWDMPPGDZNEHSJBHQROROXIFSTCYULWVIBBELELNFUHIOFRBCMOMVPBLIEKRVIQBAQGNDXLYSUUHIPWTMAMSBDPWSWJTVOIYFMRUGJCSJGPENYFQNASUTGJZV");
    msg.last_error_time = 0.201057419391;

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
    msg.setTimeStamp(0.40955285186);
    msg.setSource(30781U);
    msg.setSourceEntity(205U);
    msg.setDestination(32765U);
    msg.setDestinationEntity(155U);
    msg.op_mode = 155U;
    msg.error_count = 141U;
    msg.error_ents.assign("PGDIHYTZVVLMGHEPTAQOFZAIPMVMAUBJRHTQHIMQFCGVTGNXWLPQZGHWEXOVIMYGLVHDRYULKBOZSMNBMLTSNQVCEYLUZFDJTOWPFQOOHXKCUJTJUCLKCWMUPKRABZLNFPKCOCAKUWFFAEOXGUUBQRZTNWEZWRQMVZISIH");
    msg.maneuver_type = 25862U;
    msg.maneuver_stime = 0.111323469116;
    msg.maneuver_eta = 64323U;
    msg.control_loops = 1800548741U;
    msg.flags = 132U;
    msg.last_error.assign("BXIHRYIBIPMUIHQMCAVEVOGMZIKUTUKSJETXNWNZFSGGMUEFBQUAJWAJDVJGGRCVLSYFSOXFCWLOFLHEBPKKDQZZKCISITOPQKKBQYPAGHBXJBWBYC");
    msg.last_error_time = 0.701639677297;

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
    msg.setTimeStamp(0.22068557076);
    msg.setSource(10855U);
    msg.setSourceEntity(205U);
    msg.setDestination(64256U);
    msg.setDestinationEntity(174U);
    msg.type = 243U;
    msg.request_id = 47939U;
    msg.command = 34U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 35693U;
    tmp_msg_0.lat = 0.489561546556;
    tmp_msg_0.lon = 0.678311676138;
    tmp_msg_0.z = 0.440571485421;
    tmp_msg_0.z_units = 37U;
    tmp_msg_0.speed = 0.401342995364;
    tmp_msg_0.speed_units = 119U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.401513621288;
    tmp_tmp_msg_0_0.y = 0.447009041397;
    tmp_tmp_msg_0_0.z = 0.600176302545;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("SWLJNMCVRSXWHCNKDLYWWGMYBCRSJGQGBTZWXHZRADJOQISJYAOEQMNYEEPLTHKSOGUJWAFIGBWVPKAHGUBXGFQBOYWNPJDM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56688U;
    msg.info.assign("BWIIFEGHEEDBXDAUQMSMGFWGHFPCJMWZREFHJZIBYOHVNRYMNULONOLBQOFESKNZOKDNVXUNFUXRVYITKXCZJJYLXGZUR");

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
    msg.setTimeStamp(0.846250300652);
    msg.setSource(38367U);
    msg.setSourceEntity(146U);
    msg.setDestination(38382U);
    msg.setDestinationEntity(59U);
    msg.type = 99U;
    msg.request_id = 23617U;
    msg.command = 58U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 41803U;
    tmp_msg_0.lat = 0.530072038056;
    tmp_msg_0.lon = 0.915130849222;
    tmp_msg_0.z = 0.247597789243;
    tmp_msg_0.z_units = 240U;
    tmp_msg_0.speed = 0.00740531859882;
    tmp_msg_0.speed_units = 222U;
    tmp_msg_0.duration = 45865U;
    tmp_msg_0.radius = 0.0983758504756;
    tmp_msg_0.flags = 29U;
    tmp_msg_0.custom.assign("LPJYPOMEMVTONWMVLXRDBHWZQGEOYSJAUAXXPRWNTPAJAKAUBXEJCVMHOOWQQGLMFELMJFXHCQFINMKKAJZNNTFFKQYHRZJGWISQSEJIAVVUIFDZSWITRGPTAOGVGPSSKUDQUIUHGTLTDXBBEVYYYEZTEZCXDKOGPYFDYBCUFETIGUORQFVWNICNHDYHVGRQXQLLREORMMJPTHXWNDUURZKJACZFABWZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 13770U;
    msg.info.assign("WQQDABUSOGRRMITOGIMGKSHSVWQUICUMLVXBYEREJDVZZWSCMXNFIELPYYUGNIVPFSHRKVBBWWUHAWTYQTUDLINRWRGDR");

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
    msg.setTimeStamp(0.790588999222);
    msg.setSource(22778U);
    msg.setSourceEntity(174U);
    msg.setDestination(57260U);
    msg.setDestinationEntity(107U);
    msg.type = 198U;
    msg.request_id = 35343U;
    msg.command = 196U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.931173287072;
    tmp_msg_0.lon = 0.510559836052;
    tmp_msg_0.z = 0.819507141189;
    tmp_msg_0.z_units = 169U;
    tmp_msg_0.speed = 0.591732720862;
    tmp_msg_0.speed_units = 133U;
    tmp_msg_0.abort_z = 0.4251044476;
    tmp_msg_0.bearing = 0.688835675664;
    tmp_msg_0.glide_slope = 26U;
    tmp_msg_0.glide_slope_alt = 0.742343690766;
    tmp_msg_0.custom.assign("IUUJQYCLXAKVUUVCHFSVSQOMAWNJPPKYTBHVWPFISVUMCLBCYKBPOJQWQBQXFOJRKOQEKVDMMJPTGTHEEHDTWRGNXDJXYNSPIJAQNOMRHDHUIFMKLGGTGCRRLSAZMYWEQBLNNLVXLUNDBWCEJZIXRSZZFCZRYYBWNLERKMBOOTXIRWWABKLBAAFDUAAZJZPYCCGLVQOEJIDTHTSNSGOEKHUDXPFGFIHTAVZFSEIXRUOVMZWDMEDQIHGGFT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 35324U;
    msg.info.assign("GCTFJKEJQJZEJZJIHUIHJNRYNASVZJIRZLVSFRNOSMV");

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
    msg.setTimeStamp(0.59007046299);
    msg.setSource(27901U);
    msg.setSourceEntity(166U);
    msg.setDestination(51571U);
    msg.setDestinationEntity(246U);
    msg.command = 45U;
    msg.entities.assign("SDDEUGSTPCOCMOKAOFNLXPHGGNSTYIUXOQNZARAMCWBZPAVMJHNBOVKFJQFNFEDXRAWDVGMROQQVTLLKCEJGIVMZUQUCIUBXPWCRJLHVSJYRMWZDDSHINSCHEZBSJXSFKFXVHXPLYXHYQEAIBUTGHWIEYMGTIGMAZLRUHOLQPZNLUSKWNPYYCBEEWSYPBTLJBQZZDXKFOBK");

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
    msg.setTimeStamp(0.573244205386);
    msg.setSource(30649U);
    msg.setSourceEntity(70U);
    msg.setDestination(43861U);
    msg.setDestinationEntity(174U);
    msg.command = 124U;
    msg.entities.assign("YBJOKKBJKUFAFVPGVYZZMQMECCONWFZHVUTSARGOSVJLKZPHXIBGUDUJETOHMSUFWRXKZZIVJDQHTZTEYRHYZRLWXQNTYJLNWPQIQTEAAVQADPVBNFUMFGXHCUNZHSBCLXFRVCFGWPOJLYWTYPUEELESBDKWAAPFEQCRTQDDD");

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
    msg.setTimeStamp(0.613175305871);
    msg.setSource(48984U);
    msg.setSourceEntity(128U);
    msg.setDestination(45482U);
    msg.setDestinationEntity(214U);
    msg.command = 64U;
    msg.entities.assign("SWIBVXYLPXZBJYQNXFCWMZOIOFQIOCMZCITDTBWHLDBZFYJOUXMWKWLLCDSPNCGDVBXNKTDREIKUPHJUXNVAOCXJQEOLQGNVCMNWFJWHACBBJZOSENAMXERDXRGIACFHSDHFOQYYKGWBOHLGDQALSVTMEYKISGUJFRMVEGMNBSMCXENJHEYTROTSKQJPGLGIUKTHFRIRHAQZTYVKURUTHZPNWFPZJYTZSFIAAARUWVML");

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
    msg.setTimeStamp(0.686659535161);
    msg.setSource(24845U);
    msg.setSourceEntity(244U);
    msg.setDestination(27359U);
    msg.setDestinationEntity(250U);
    msg.mcount = 21U;
    msg.mnames.assign("DBMTWABAHCLXPYXZKWOJXPZDTMUAVUYMQYROHGRWSBYXCCVWNUTELBFHKXOLS");
    msg.ecount = 65U;
    msg.enames.assign("DJEIZHZAEWDMCKKWMYBVVMSVPFEYCJHCCMSINCUPNX");
    msg.ccount = 122U;
    msg.cnames.assign("FNHIZXTDQDADWNRVIZFMIHQLYJCCPWWWLJNQRVFDMGLXLEZWOTZIOCFRAQPUWWXFBCHLJYYGBZEAXMWXDVPZPYESPKIDKURXYRKVPVHVMJOISBNATIXGODFGPKTNBKNUQKFMHLSZZHMCAJCQSDBFFBFGIUDNAKVIMPCEPOEKBEYBLVCAOHGWSUXLSSANRYOCPJEMMQRBZUTCLVWHSIUSJAAGQYOJTTTREJKYEONGTOMRURBGYJ");
    msg.last_error.assign("LDWEFZBBIUXRRWZVHSQQQBGJBMYXCDMPEJQZTGQFCMSCUJQFCSGLXUILVGPDHLZKKBHNWAEVWGXIWC");
    msg.last_error_time = 0.329056284645;

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
    msg.setTimeStamp(0.0385271552594);
    msg.setSource(60012U);
    msg.setSourceEntity(115U);
    msg.setDestination(47549U);
    msg.setDestinationEntity(194U);
    msg.mcount = 82U;
    msg.mnames.assign("KSLEBACEFLGTWCZIRRLLZTCFJMPPWLIDDAJGZIPZBTRJSEHELRPBVOUXKYYTUSYOQKCIGDZIKPOVAXMQWUIUYMMWACQVMEAGONTBLGCHANNZJMDTUDHUJQRPPWCIOHKTWNRHFKWNDGKYXPBXSRIOSJYEWHGFLXDLMPHCPAEVVYRQUGFXGTECEVZZDBQFNLJOYNQDJFMVNFJGINSCSTQEZOMBBUXUUQKBRAXOYWHXIFTMSOAJYVKWKR");
    msg.ecount = 189U;
    msg.enames.assign("UJBBAXHRAZIGVJPPUSROGFHEOSYGHHFXCPIQKWCRPBNLJWQUEBVNVYFLTSPXIWKXKWJYFZDDEMOSIWLYLYHRAWCUEKMXJMGHMOIICBTXOAOHFEWUWEITTRREMGKGDTUCPNJJFUJMGPLXIVAXWVVEKQBGTACUCQIASYRCYXHAQZCTKZGODNYROFQPFNZVDQXNKEVHLY");
    msg.ccount = 162U;
    msg.cnames.assign("BQIIWVXABMMDDEZEBULCVSGDUZGKKTCOHCSTZGNRTKUDKZEKDJBISUADLQFXOICWZCUHEQFLDVOCSTIUTYMZXFQEAJYPYFGIDGXHSOIXYVMHWFSHHHJGTTAJSNPPKPNZDWFLREDKRJLELHLROCMHMAZTKWOFWNARKYWASGEQQUVMFSAJPBB");
    msg.last_error.assign("ROCIIJEQBHTJRAZIHKCWNKOMGYIAWUZQJSTYKPVBCDUXEQARYPJMVJLTZUSREBDTISAZDSYCXFNH");
    msg.last_error_time = 0.149661899132;

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
    msg.setTimeStamp(0.548899498841);
    msg.setSource(605U);
    msg.setSourceEntity(37U);
    msg.setDestination(11502U);
    msg.setDestinationEntity(88U);
    msg.mcount = 60U;
    msg.mnames.assign("OKJRPXPNGWBVLMBVYKWQIEQAXTHRJPVPXQILPYQOIAZJRLDBOSNVDYGEKWNUEWFWBLSJHDGLZCQWQXDFFASIAEFOECRSPAMQFLRCCUGUNSRFMABMPSBBXMOGFEYIMZQNZ");
    msg.ecount = 221U;
    msg.enames.assign("IRZCNPMWEMOLXZAQCCUSADOESOSNFYMQKLNWVVX");
    msg.ccount = 253U;
    msg.cnames.assign("YPXLGFNLDUGOPTRPYQYCAPCZCUPDHGSEAAXBTKIHLYVZWNBTNFTVUDQBBPUDRWQHZCRFXUBOYXM");
    msg.last_error.assign("JPQPCTGLJLVQKNTCKGEJMVMLXAUMFHFYKMKIPVVSOPUGDQDTXVJOJSHMANGDLQCQEOATRZZNSFZPJRQQJQMXNUIEHFYKRURVEIOBACBYMWKZOHFDBAPWZRODTNDDPNNRFLVYXAEUOZLNJYOSIFWJJBEXAPACSKWEYMGGZQPBDIBGHWXEWTBAKOUESBFAIXYXCFMNSRMLZSHUYRKUCLVWPLBTTZXIUWSEGKVTNYZTQFHHHRCHIUDGVSICLGWCYB");
    msg.last_error_time = 0.925034671357;

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
    msg.setTimeStamp(0.31772756468);
    msg.setSource(57761U);
    msg.setSourceEntity(172U);
    msg.setDestination(62505U);
    msg.setDestinationEntity(17U);
    msg.mask = 35U;
    msg.max_depth = 0.402230718014;
    msg.min_altitude = 0.609017440018;
    msg.max_altitude = 0.488508885362;
    msg.min_speed = 0.244744188459;
    msg.max_speed = 0.457211993277;
    msg.max_vrate = 0.651923304122;
    msg.lat = 0.750781377751;
    msg.lon = 0.264395606698;
    msg.orientation = 0.293115960922;
    msg.width = 0.647537723653;
    msg.length = 0.401896521541;

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
    msg.setTimeStamp(0.685047457924);
    msg.setSource(52699U);
    msg.setSourceEntity(63U);
    msg.setDestination(11827U);
    msg.setDestinationEntity(35U);
    msg.mask = 52U;
    msg.max_depth = 0.515737095942;
    msg.min_altitude = 0.209450083599;
    msg.max_altitude = 0.728023753362;
    msg.min_speed = 0.493209173638;
    msg.max_speed = 0.552297881868;
    msg.max_vrate = 0.687878819831;
    msg.lat = 0.0429981306807;
    msg.lon = 0.729444046105;
    msg.orientation = 0.284931056225;
    msg.width = 0.258599733847;
    msg.length = 0.546104549206;

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
    msg.setTimeStamp(0.29402453602);
    msg.setSource(56892U);
    msg.setSourceEntity(175U);
    msg.setDestination(3932U);
    msg.setDestinationEntity(174U);
    msg.mask = 71U;
    msg.max_depth = 0.429453534309;
    msg.min_altitude = 0.489493909541;
    msg.max_altitude = 0.910027816074;
    msg.min_speed = 0.713570283803;
    msg.max_speed = 0.185984583127;
    msg.max_vrate = 0.563473087388;
    msg.lat = 0.45901050706;
    msg.lon = 0.0536260269838;
    msg.orientation = 0.856334223423;
    msg.width = 0.927443413393;
    msg.length = 0.17146268008;

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
    msg.setTimeStamp(0.254110742185);
    msg.setSource(46514U);
    msg.setSourceEntity(105U);
    msg.setDestination(49417U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.0797254260185);
    msg.setSource(18009U);
    msg.setSourceEntity(93U);
    msg.setDestination(47618U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.380503235936);
    msg.setSource(11990U);
    msg.setSourceEntity(41U);
    msg.setDestination(22805U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.747921048351);
    msg.setSource(25773U);
    msg.setSourceEntity(202U);
    msg.setDestination(8296U);
    msg.setDestinationEntity(111U);
    msg.duration = 25834U;

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
    msg.setTimeStamp(0.536775012196);
    msg.setSource(5330U);
    msg.setSourceEntity(246U);
    msg.setDestination(27044U);
    msg.setDestinationEntity(11U);
    msg.duration = 34049U;

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
    msg.setTimeStamp(0.715137663462);
    msg.setSource(64550U);
    msg.setSourceEntity(89U);
    msg.setDestination(22952U);
    msg.setDestinationEntity(200U);
    msg.duration = 20914U;

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
    msg.setTimeStamp(0.780433520045);
    msg.setSource(27014U);
    msg.setSourceEntity(239U);
    msg.setDestination(53158U);
    msg.setDestinationEntity(4U);
    msg.enable = 234U;
    msg.mask = 4163557779U;
    msg.scope_ref = 2714374224U;

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
    msg.setTimeStamp(0.606414238753);
    msg.setSource(23860U);
    msg.setSourceEntity(157U);
    msg.setDestination(63910U);
    msg.setDestinationEntity(30U);
    msg.enable = 34U;
    msg.mask = 3992582851U;
    msg.scope_ref = 1412361585U;

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
    msg.setTimeStamp(0.123175960567);
    msg.setSource(34023U);
    msg.setSourceEntity(138U);
    msg.setDestination(12233U);
    msg.setDestinationEntity(106U);
    msg.enable = 179U;
    msg.mask = 3072876195U;
    msg.scope_ref = 3988282079U;

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
    msg.setTimeStamp(0.834437447757);
    msg.setSource(4451U);
    msg.setSourceEntity(105U);
    msg.setDestination(48759U);
    msg.setDestinationEntity(224U);
    msg.medium = 78U;

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
    msg.setTimeStamp(0.628507308126);
    msg.setSource(50676U);
    msg.setSourceEntity(73U);
    msg.setDestination(61304U);
    msg.setDestinationEntity(116U);
    msg.medium = 33U;

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
    msg.setTimeStamp(0.381302311801);
    msg.setSource(10366U);
    msg.setSourceEntity(140U);
    msg.setDestination(58185U);
    msg.setDestinationEntity(218U);
    msg.medium = 254U;

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
    msg.setTimeStamp(0.108630710995);
    msg.setSource(61000U);
    msg.setSourceEntity(198U);
    msg.setDestination(65421U);
    msg.setDestinationEntity(20U);
    msg.value = 0.998292403303;
    msg.type = 135U;

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
    msg.setTimeStamp(0.372725128273);
    msg.setSource(44081U);
    msg.setSourceEntity(106U);
    msg.setDestination(46233U);
    msg.setDestinationEntity(129U);
    msg.value = 0.810138457101;
    msg.type = 147U;

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
    msg.setTimeStamp(0.625120213065);
    msg.setSource(49655U);
    msg.setSourceEntity(76U);
    msg.setDestination(33801U);
    msg.setDestinationEntity(185U);
    msg.value = 0.644886891562;
    msg.type = 81U;

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
    msg.setTimeStamp(0.594359395287);
    msg.setSource(10859U);
    msg.setSourceEntity(222U);
    msg.setDestination(63929U);
    msg.setDestinationEntity(53U);
    msg.possimerr = 0.806871292901;
    msg.converg = 0.731885319733;
    msg.turbulence = 0.40684424019;
    msg.possimmon = 28U;
    msg.commmon = 11U;
    msg.convergmon = 236U;

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
    msg.setTimeStamp(0.493877906656);
    msg.setSource(23443U);
    msg.setSourceEntity(94U);
    msg.setDestination(15960U);
    msg.setDestinationEntity(93U);
    msg.possimerr = 0.294818355179;
    msg.converg = 0.389153357189;
    msg.turbulence = 0.564453435043;
    msg.possimmon = 191U;
    msg.commmon = 232U;
    msg.convergmon = 42U;

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
    msg.setTimeStamp(0.0239700033245);
    msg.setSource(20186U);
    msg.setSourceEntity(14U);
    msg.setDestination(49476U);
    msg.setDestinationEntity(67U);
    msg.possimerr = 0.465946173921;
    msg.converg = 0.430028147606;
    msg.turbulence = 0.35126234232;
    msg.possimmon = 204U;
    msg.commmon = 29U;
    msg.convergmon = 50U;

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
    msg.setTimeStamp(0.283178527099);
    msg.setSource(33649U);
    msg.setSourceEntity(123U);
    msg.setDestination(13483U);
    msg.setDestinationEntity(40U);
    msg.autonomy = 173U;
    msg.mode.assign("YVJMGPHHMAZXUAJIUEIPXRHTGFBPRFDUDGLTMZWJSWAWMKOAJRSVVZROTBWMQXWJXQLWLEFBYOVFSTWQYKOZWLBPAKYRQ");

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
    msg.setTimeStamp(0.273348885072);
    msg.setSource(10335U);
    msg.setSourceEntity(60U);
    msg.setDestination(24511U);
    msg.setDestinationEntity(125U);
    msg.autonomy = 127U;
    msg.mode.assign("KYJGCSZSALSVASNQXFWIKTMRY");

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
    msg.setTimeStamp(0.67594072386);
    msg.setSource(50457U);
    msg.setSourceEntity(98U);
    msg.setDestination(38382U);
    msg.setDestinationEntity(219U);
    msg.autonomy = 18U;
    msg.mode.assign("NZDJVZSTRQYBOOQIRQDSQSHZQIGFJEBVPAOJSIN");

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
    msg.setTimeStamp(0.946976135456);
    msg.setSource(60938U);
    msg.setSourceEntity(25U);
    msg.setDestination(30769U);
    msg.setDestinationEntity(65U);
    msg.type = 130U;
    msg.op = 225U;
    msg.possimerr = 0.307694816664;
    msg.converg = 0.675965212774;
    msg.turbulence = 0.336285228523;
    msg.possimmon = 157U;
    msg.commmon = 4U;
    msg.convergmon = 158U;

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
    msg.setTimeStamp(0.518271749931);
    msg.setSource(24248U);
    msg.setSourceEntity(68U);
    msg.setDestination(37770U);
    msg.setDestinationEntity(55U);
    msg.type = 125U;
    msg.op = 210U;
    msg.possimerr = 0.792680036493;
    msg.converg = 0.602768289606;
    msg.turbulence = 0.395593564219;
    msg.possimmon = 130U;
    msg.commmon = 44U;
    msg.convergmon = 144U;

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
    msg.setTimeStamp(0.652073330602);
    msg.setSource(31414U);
    msg.setSourceEntity(147U);
    msg.setDestination(24988U);
    msg.setDestinationEntity(17U);
    msg.type = 191U;
    msg.op = 4U;
    msg.possimerr = 0.150290743719;
    msg.converg = 0.116236928697;
    msg.turbulence = 0.0281293233646;
    msg.possimmon = 77U;
    msg.commmon = 210U;
    msg.convergmon = 27U;

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
    msg.setTimeStamp(0.570036615195);
    msg.setSource(12909U);
    msg.setSourceEntity(192U);
    msg.setDestination(7305U);
    msg.setDestinationEntity(125U);
    msg.op = 37U;
    msg.comm_interface = 173U;
    msg.period = 51890U;
    msg.sys_dst.assign("JCFAHMNTVYQJYUNSEWQDYFWKRFLBQQUGPCKEEYQKRRTPOFZHEKXMSLIOKLDCORGKFTKBDQVGOAJAOBYTZDYUDYEDJJGIPSPMWDNELBLGKMTNQFHAUXSZHSVRTDQAGGTOVEMLBWUCYUWOIZECVHFJCNAYTWHZDJGSVPPRJRCNASADHGTZRPQUIKBASPHFBPNLMOMGCWZUXJTUSOKUWXX");

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
    msg.setTimeStamp(0.939652122593);
    msg.setSource(37032U);
    msg.setSourceEntity(129U);
    msg.setDestination(35106U);
    msg.setDestinationEntity(89U);
    msg.op = 165U;
    msg.comm_interface = 80U;
    msg.period = 31689U;
    msg.sys_dst.assign("RKGGBRXKOQLKELIKJMVQOEQGXIYMHEHQCDTZUZUXZVLPCIYEVOTCRYJTALWLVFYDPRBWJFIFAHMYOZMJLMPHUUTGMGWONSNACQXUHA");

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
    msg.setTimeStamp(0.114680047128);
    msg.setSource(28960U);
    msg.setSourceEntity(219U);
    msg.setDestination(36782U);
    msg.setDestinationEntity(57U);
    msg.op = 185U;
    msg.comm_interface = 108U;
    msg.period = 1898U;
    msg.sys_dst.assign("WMFFNZHMRUENFWYEJDIFLTGBBOJEVBTVQPDFGMAVLTNLZSYGVQWTASQBPCOEKDXOCCXEKHLUUNKBJNDKVWNRAGYMDXLQIDZPWCWKLWMTLRIAHSYNXIHSPFSRVZZLUGFYRXFMRCOJGXDBUQC");

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
    msg.setTimeStamp(0.721654937016);
    msg.setSource(55404U);
    msg.setSourceEntity(246U);
    msg.setDestination(15674U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.803899065247);
    msg.setSource(13548U);
    msg.setSourceEntity(96U);
    msg.setDestination(12176U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.902724023846);
    msg.setSource(11566U);
    msg.setSourceEntity(92U);
    msg.setDestination(61758U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.170664514535);
    msg.setSource(45621U);
    msg.setSourceEntity(197U);
    msg.setDestination(57747U);
    msg.setDestinationEntity(155U);
    msg.plan_id.assign("MLIERRHRCORJJROIMPQPKZ");
    msg.description.assign("WTCHCMQDKFDMFRXUGCCMKRPRLYQGHCIFZULBDFWYQIEHABAJTLWQONEJVOVWRWXDKWBEAOUFUXAEVVJYIPIIVYWGMVNMKLTBQTZFFPYZBHISYZUSTAOULGKCCRAPBVEXDKBYHPAHZFNGKLOGCSSBTOHVPEDYYNVXSEUSEXGSDLAOKXFFYCUJARSQWJ");
    msg.vnamespace.assign("FUSYCKBNLSZDAKHOFIQYJBDWBPOIMWNCDZQFCHTAGVKFKZJUEKJOIIYHGQVWJUJILATCCZZNLGREEEYHMAXTVRZPCRWVMNCSOZIIZLPJMBULTKGTWSQVPWGSURXSQHBAXFVSVWEPTEKQXSNLJR");
    msg.start_man_id.assign("HMZTGDQULNGAEHNUVISEMINSLAERDCXPADTGAXWKAGQUVFQBFAPRUHSUFSVQZNTTBJKSQFNYTM");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("KZNBBNIVAJICKFVPIEOMSKCTJSAWTAPTLHVUIJVDPBXQFNSNOOERUYLPBKTRBVNIHSXQAZNAQGWHASALJXQSSJWDZNCJSLFCHGNUPBZXKEYTRYFDCQZTRUZPUUCTYUZBGLUKGAEMNBMRQKMYKOEHPKMVJZCGWDHCGKOJPOXHVTDGYFXVJLDOISDZCIFREMFACTYRBLAHVWWWDUMFMRQLYHFIOXWXEQQEWMFHWE");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 14229U;
    tmp_tmp_msg_0_0.custom.assign("ZSHUAKVOQQJZINWUXUQMXGTNCFBAQTZYSSEHNVCNCLYKHREBVNZTIOZJYBTKBZYWSOWPUTOVNWDQPRHBPFJOJMWKAEPEFHRKUMHEFPUFCXBFDMQOWLMGZTUJISPJISTLCNPWRAUCDMXBJOZZQJPRYGPXLAMCFVXTV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DataSanity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.sane = 224U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("ZSZMSIIUXTCQNRBRIKAPBEAGDZNGJQPZJYCIMFMARLTTTORQOZWQCBUCIMJBIYZCCSNIUXREVXAPEKGJPNWHZPCVDNWLQMHKGMTEGWVZPDMRCJGDPIFCQTFDUOFLJYDFGQPJKEHPEDMZWWVNLXSTGBKRDIHHPOWNONXVBBHEMITFLQYXLROKJVAOUHSHTSQSNUEKXWXSELWVYLOALTUUJLNAKJAVOREVSSKHYCZGYQBVARBAFDFHFOM");
    tmp_msg_1.dest_man.assign("FSNYRGBZXTPULIKGRUWWZNIJVHMYOQOMNEBCRFPAQGEHPEIHIVBOVBNFMSEEPCLIBSRTVTBXOCXCMBARMXXSFBPAIABTCZDUQSLJSVWFUDZQXJRMGMYLHJEZFYWNWMJRYSUZYHOKXCSVLSHPZQXFALGDFKVLZTGAYRAYNOGDMNDQPDIOXAVPSWJAQKGMTUJKWFWZOJCKQY");
    tmp_msg_1.conditions.assign("RWWIBDBFOTPDSPAVNYXMDSUPUEZWKRRRCYFGTCIGYQDMDZFFYHNUZQJWFQDLSCQKOMTUGECVHIUQMTMKXDLHCOZLFMHNJYHLIZSKWIXVQKVBOGHHX");
    msg.transitions.push_back(tmp_msg_1);
    IMC::LeakSimulation tmp_msg_2;
    tmp_msg_2.op = 13U;
    tmp_msg_2.entities.assign("NKHJODUZZRNYEKSTXTQXSPTLGBSRPXIQDMXPCFQIITRHNRWSWBVKVGMBAMNCQKJ");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::WaterVelocity tmp_msg_3;
    tmp_msg_3.validity = 196U;
    tmp_msg_3.x = 0.536979211434;
    tmp_msg_3.y = 0.247877474566;
    tmp_msg_3.z = 0.85615940045;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.264204873751);
    msg.setSource(40644U);
    msg.setSourceEntity(76U);
    msg.setDestination(57978U);
    msg.setDestinationEntity(245U);
    msg.plan_id.assign("IOGSPTNOXTJFRJUPHTLSVDWWCYJXACUCCENGULQHHEMURYPUHLIESNHQLFBCJAZTAYJSVUGKALZBAKAKUQOEJUOWZFMKXISBQIATWIYTVLWBFBJXGXODNKLSDBPRSFBXZNSFZMUOEKREDDHAPJMDJFOVWLFCAPPYQGDBHZVIVSYBVEWPRIQYFFNCGTAVWEZXOITQM");
    msg.description.assign("IVFKBPLHMVGSXZMHFF");
    msg.vnamespace.assign("ELHRCUVLQGLCYAQOBIVMSQCMRZOXIRVCNULWIBSKYFODDHSZ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BXISAFSRDJETTPVNQPCZTXMDBRTHYHZSQHGVKKJHEVUCVGBFOIQLPKCMLCQXFLPTWCSAWXDYALVXOSPIUIGMJNJHFJCOZWICHOIZDZQSKFKXFXLSZOASOGMIESNTRLZWQ");
    tmp_msg_0.value.assign("NWBHTZFRQEFUGWHYXFUREQKZKJFHAKLNSBMTVIMVANRRFVOEEX");
    tmp_msg_0.type = 91U;
    tmp_msg_0.access = 11U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NEDKSIWWKZWLHXMJSDYRDIFRGCPPVEEKTUEUYEDNTDPPXJQXRRXUIXJCWRHKMRHZGBCYFIJZRFXEOQDPPFNDHPIWBSALVYTCUBKUZAFOVXBFOAMIHFCTIPFTNYOJVUJEBGSJKAKTTARUQSDXOGOCTYBBZLHCUSSKINJFNLLUJIMPHYGCSWMWHQADEQDLZGQWVONOAYLJM");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("WTSPEYSDGATOZXWGCJWWHMNPQBRESFZGAZYIBLRYPOWXKUOXHFKELVFJQPNOVBNHGVULCDFILGLGBSWJRKCDFFGRSFCARJJ");
    tmp_msg_1.dest_man.assign("IYMDSXSICTQNQVGDKWVMEWPDRVMGLWSSALRVBDFEYOIUGFVHQRNNUYZKPNNEWCQXXRDTFZXQOJMAOJNBZTPSOZOPRBEURHZLQQXGXLOMVSKMCGJLJLSLFPGBOJYQCTAPIUCAMUAYHITWMEEBHRFMKEUSALNZKINWCKYYZPTXWTBHPCIDBZOFXSZUKEGRTCEGUBJFLBJHDBATDHCX");
    tmp_msg_1.conditions.assign("ZENLTYGDECEACMRKKOVGMUSTOHOUBUIYGTISYOBXLRHLSGALBQWYJHSKRFPSJIZPCASHQQLCIQWACONFUVZQRPZ");
    IMC::Temperature tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.425103741607;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.127778757103);
    msg.setSource(50069U);
    msg.setSourceEntity(22U);
    msg.setDestination(18558U);
    msg.setDestinationEntity(244U);
    msg.plan_id.assign("JCNHZDWBZTMYIBBXKIAYHIHLOPAIUEVCUAXEPRBAULWUPSQSKZAAACERVKWDWVESESFI");
    msg.description.assign("CXANCGMDELNSKNVYQYCEJCOLBVJKQRIOAUJSGPBZPKWRHSIJRONYYHGYIVBOBOBWIPFWTHADXHSAVTKRGQAJJQOKGFOJETDMSWDWNIZZQBOYMJMIBZUUANEZPFMKRDRXTNQQKFW");
    msg.vnamespace.assign("AOQZEMPSUCLRLGKEYYDDEZZENARHDIFBJFXIWVPVAVGYQNWCZGTLWURAUCOJVUQDMEPXDKNBHRMNHFSMLBHQALUQTQWZOZZGKBNUTFBYIWHFJOOIKJSMJGVPCTDGN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("AHNIQQYEGLOVQVNFWQRHSVLOFFDDACOYPHBLIFAPWZMOGCZQLDPEJKFUWIABNVTTCVXHLLYPZZEWMFWTAXECYPHBQQUHBXPXIVGJTAROTORVFMJBIYRLELXQNSERVCFKMKZCYRNMKSRKWNJSMGJYINXKTSMOTF");
    tmp_msg_0.value.assign("DGMNDEJCQFYZIDRCOVUJXQASKCLVVVGPGXD");
    tmp_msg_0.type = 178U;
    tmp_msg_0.access = 136U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MLYTMDWEWKLFSBGHHBIOGVLGQSAQDEEBCVSYXRDQBLKCDHQKPHIORQNAXLWJEOPRRUATSKDKBAPMIXUHWTJMJZSSNNRJGHGYTQNLVGPLEOMPCHEQZCCG");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("OJQZEGNXIXRYCVUBSRNXQVDXXFSHTWIYZDIWXMYAWRPHPULEGARWWHHASEOTASHPEJQTCIBFUKRHSN");
    IMC::Goto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 6726U;
    tmp_tmp_msg_1_0.lat = 0.725639379215;
    tmp_tmp_msg_1_0.lon = 0.85118909728;
    tmp_tmp_msg_1_0.z = 0.534763219625;
    tmp_tmp_msg_1_0.z_units = 178U;
    tmp_tmp_msg_1_0.speed = 0.402652405198;
    tmp_tmp_msg_1_0.speed_units = 140U;
    tmp_tmp_msg_1_0.roll = 0.918380295029;
    tmp_tmp_msg_1_0.pitch = 0.37380489935;
    tmp_tmp_msg_1_0.yaw = 0.231218436517;
    tmp_tmp_msg_1_0.custom.assign("GZQTDQACALEZKTGWBWDZFYLIOD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::PlanDBInformation tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.plan_id.assign("JFQDRXKURBGMUCYEUUWQLKEHAUTGDRQXKVNYSSPPTNCQKZFWRIBZZNGQSIVASFVATTQEPWEMSQIGTYEXVBIMVLLKIODDPHYDADMQYEVZUSCBPFTCNLGKPWZJJIBWEUHXWYBOSWRRWSWXYDCUPYLTFEMKHXVYGVTBZFKMZIKHNHRLXDNNJZTNGMAXCO");
    tmp_tmp_msg_1_1.plan_size = 50482U;
    tmp_tmp_msg_1_1.change_time = 0.956506631082;
    tmp_tmp_msg_1_1.change_sid = 10307U;
    tmp_tmp_msg_1_1.change_sname.assign("QHUPFGXZKJUOLPYDMGPHSNIYTBCSBECMKXXUSJMAZJUTCOWJXOIFKNGTIWHAIKISG");
    const char tmp_tmp_tmp_msg_1_1_0[] = {112, 35, -54, 62, 102, -92, -65, -65, 119, -19, -12, 84, 8, 12, 56, 33, 8, -103, -119, 4, 26, -3, 71, 76, -104, 64, -87, 10, 33, -44, 117, 63, -17, 89, -20, -34, -85, -63, -52, 72, -126, 74, -128, -92, 92, -76, -118, -116, -109, 45, 27, 96, 109, -20, -6, 39, -70, 41, 93, -13, 32, 54, 98, 58, 35, 71, -35, -101, 71, 1, 74, -66, 61, 59, -61, 119, -9, 15, -81, -24, -29, -109, 40, -55, 58, -32, -76, -65, -42, 4, -18, 103, -110, 15, 61, -79, 27, 32, 60, 38, -26, -98, 101, -47, -29, 84, 112, 94, -27, -19, 66, 9, 123, -107, -66, -108, -27, 16, 114, -77, 36, -100, -63, -52, -63, 90, -38, -9, 29, -10, -19, -20, -14, 111, -102, 94, 83, 80, -79, 3, 47, -108, 67, -117, -75, -48, -77, -83, -17, -59, -91, 84, -111};
    tmp_tmp_msg_1_1.md5.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::DesiredPitch tmp_msg_2;
    tmp_msg_2.value = 0.820736599412;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.81813755278);
    msg.setSource(41381U);
    msg.setSourceEntity(225U);
    msg.setDestination(12586U);
    msg.setDestinationEntity(127U);
    msg.maneuver_id.assign("BGQUFSQWCEHOFRBXUFJBCRKLWQKDCAKMSOZVOJIZCUBTQMXVATCHXMATGEOGPUPKHTNBZMZEOFYEMYZSIVSEJSORTKJBKYIWOTJLSJPIFVYSVOTHZXCPXIHWNCPALCFP");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 22408U;
    tmp_msg_0.lat = 0.725432439773;
    tmp_msg_0.lon = 0.736856479153;
    tmp_msg_0.z = 0.906338649492;
    tmp_msg_0.z_units = 189U;
    tmp_msg_0.speed = 0.223478818304;
    tmp_msg_0.speed_units = 171U;
    tmp_msg_0.custom.assign("BIEMRPGOQKXCVCTYMEUKMXKPIALGYQCSZDPJZTGZEATXFKHYZUGKDSDOIJFZFWYDHBMRTCJKBGFPWRVFLHYJVVGUWHOZOXCMZPCOMQDUFVQCNIVSWWOSYAVTRULGYTRZNTNRWFPPASNRALNJXXECBSF");
    msg.data.set(tmp_msg_0);
    IMC::HistoricData tmp_msg_1;
    tmp_msg_1.base_lat = 0.491188135435;
    tmp_msg_1.base_lon = 0.43133267482;
    tmp_msg_1.base_time = 0.805202336922;
    IMC::HistoricSample tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.sys_id = 2042U;
    tmp_tmp_msg_1_0.priority = -88;
    tmp_tmp_msg_1_0.x = 879;
    tmp_tmp_msg_1_0.y = 28864;
    tmp_tmp_msg_1_0.z = -20167;
    tmp_tmp_msg_1_0.t = 13632;
    IMC::GroundVelocity tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.validity = 173U;
    tmp_tmp_tmp_msg_1_0_0.x = 0.312549352892;
    tmp_tmp_tmp_msg_1_0_0.y = 0.66363495212;
    tmp_tmp_tmp_msg_1_0_0.z = 0.494649898853;
    tmp_tmp_msg_1_0.sample.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.data.push_back(tmp_tmp_msg_1_0);
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.461035500737);
    msg.setSource(35509U);
    msg.setSourceEntity(105U);
    msg.setDestination(51083U);
    msg.setDestinationEntity(127U);
    msg.maneuver_id.assign("VHMXKMRTHWWLOHXUPETKHXCUFLXUTOJLVGWAQALYPWMVWADCSJGZTZJFFLVBIDDKLANBOMQIQYQCPWFZSINADXQIZVRZDGBKGIOZNIGPZHJEYBUXYSEOQWYPIEUESAXNXIQEJGAZGBRPDHBWCKJGULKOEYLECIHRTVSDPLZWM");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 63468U;
    tmp_msg_0.flags = 250U;
    tmp_msg_0.lat = 0.11375481608;
    tmp_msg_0.lon = 0.374852113534;
    tmp_msg_0.start_z = 0.816299597152;
    tmp_msg_0.start_z_units = 247U;
    tmp_msg_0.end_z = 0.45586030705;
    tmp_msg_0.end_z_units = 201U;
    tmp_msg_0.radius = 0.260207672654;
    tmp_msg_0.speed = 0.201388171803;
    tmp_msg_0.speed_units = 173U;
    tmp_msg_0.custom.assign("OBMOMUAUXGRVKUIMQHRAMXOYWODEJKQZDPUNRHQDAEVJNIPPXLAARVWYTCCMSMOGSYWUJMAJIMBGPIISSBUZZWHOLSRVQQXXIBFFDFTEYSQRDWHQUFELFZMPJLCKWSYBBCNGQPKPHTEGEJTXICJHTTAHVYOFOZJWVEDRNLWLRQLQMIEDUFJXYEXBTTVSGDHFNNLPTRDVZOENCKGUAYZHT");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.593245407163);
    msg.setSource(51504U);
    msg.setSourceEntity(49U);
    msg.setDestination(47410U);
    msg.setDestinationEntity(225U);
    msg.maneuver_id.assign("NOBZUHEOTNRXTYTNIEDTVAWFWFJXRSLJMPMCEIXVVIBEVYQHPKEIRSNSHFZZJMLBISMDOFCCXPKLZHXJRGYBMFBVZBXCDGSJYUTUEKMQDHYDOKXAPOFBDFSSPTMKEIRGKCWEIBQWOPPEPALTODNQ");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("JUXZDZUTRODERKSMAOHDSNNKTQUDSIAZYHGCSOKEPNNMJFCYSVOXUIHXAUABFIWYBHB");
    tmp_msg_0.max_speed = 0.364350259092;
    tmp_msg_0.speed_units = 148U;
    tmp_msg_0.lat = 0.259975568713;
    tmp_msg_0.lon = 0.809908967586;
    tmp_msg_0.z = 0.15009610211;
    tmp_msg_0.z_units = 246U;
    tmp_msg_0.custom.assign("KSNUSNOIZHAUCFVKSLAMLJQTDYVMHCIG");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.352610814157);
    msg.setSource(3346U);
    msg.setSourceEntity(236U);
    msg.setDestination(13034U);
    msg.setDestinationEntity(204U);
    msg.source_man.assign("DNYMFEZAQTCUQSEVQCWKVAFLDIXBBOGUQKLIGJEIMVRQIAAHFGARUBGHZOBYESWSVECCWFGQNXSPNHYSCRUVLRHKXWGULINJHUHZDKAVKFPGXSKRMBJETXIYSRBVLPBOEMBOJWAVLDMNBWXVTX");
    msg.dest_man.assign("LCHZHTHLBTUFAUEIZCUKXLCPXHYFEXJFBQUAAYNYMQRSWSRFLODEWMDGXOEGFWGDXCBFKALNJEVMGUMLPQUBGBDTNDGSJDHLDRPGJGSIFWPVJYZHVOQBKXXESHRENILVSQVRZIQQQONZJTICPE");
    msg.conditions.assign("DDMXQHZOMDBHIBQJZQDKJCMDKPTSKENCFBUINMPCTNUQSVKNIWEFFWASVEOGZIUYUYHYWNWYHQLKNABPIRMTQAIVXUWXRQOAKALQXERCLTCIMOVFFYFKQWGZBLZLMGPBOGOCSTXCBNZEUEK");

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
    msg.setTimeStamp(0.759324086411);
    msg.setSource(47514U);
    msg.setSourceEntity(100U);
    msg.setDestination(29475U);
    msg.setDestinationEntity(219U);
    msg.source_man.assign("IXJVEOAOHVQPSDCKWQXMZPLRWZRGWKJWRCSDZUSVLRTFQNZOFFUXHOYYUHCTVVWXHHHNKZLSGRMRUJSTMEQXXAYODGRVBALYMUHPCBVKIKNFDKPMVAAFDWZELUEPGGSCUTYXQDAYFWEP");
    msg.dest_man.assign("XUXWNVMKPECETEFDXPLUBXDBYBOUKZDNYNLWARRJRLWWFFBPGSRVNHLMASPBRWHQXTQMGHGZBUJGKQJATUSNEXOKCPJWQDVAVOZKIHKFMPQCCIGOHXOGIAMCRCIDLPKCVSSEGUEZODDQWSRYRCWVWTIVOYFBDMZGRGNLBEAMQK");
    msg.conditions.assign("ATJEPRQZHNYEJDYFNOPFZEBAJFBEZUIGRCSEIABYHPXYNUFHXRWLRDEMWICLKGMDTVLHGJBTAROMESGPQOAHJFMJVCUWLSSHTLMKNBUWWVMPDAIURQ");
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("RNCUNJQCKKHIFMILZETMSIRSELVOOXXJWS");
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
    msg.setTimeStamp(0.258893504693);
    msg.setSource(52766U);
    msg.setSourceEntity(153U);
    msg.setDestination(57443U);
    msg.setDestinationEntity(237U);
    msg.source_man.assign("SAITBXDXQAMINPGYBTZJLNBYPRIVLCZJSVBKAWVEPSHDTGDEOEVPRGMJMYUCBAWJGYQXPZASQYNHUFOOUKBQNKLGZVSFRRKVLWKAPDWUPTKKHWFKMZFMQATHOQZXIPXFEFADXPYGCDRYXNVGEBMVCWCCCTSENHOSNYYOGCXBPODIESZSUAIUEMIYLNZILRENUKW");
    msg.dest_man.assign("PGWEFGXVMAFSCESNGBYQPAVJUATMIDDPWCYEFQHZYVHYABQPNPNMXKBSFQVFZMUTFNYRZDLLQGBORKBAEIHCJGUMLWRFHVIXWIQNFVIOIVQMAVKUHWGMMXSTTZQLZCIULUWKSKTHODUXJBHBTONYBJ");
    msg.conditions.assign("ECJWXTIMQHYTNPXNURSUNNGCVLKXCNDFTFUMGYIKCNGJRKJIPJYPSXTJBHWGDAHPJXMWLKGUOPQCALCEGCAQKMIQVMHXZBGYLDJQZCMEYXMLUFVISIFZDLGBBYZEWZNQHFRSMPHPDBRWUTIYYFOCADEVSOJBOUBHZDHRSETQQLSWZTFITKGIAAJNXOWRKYUDNFAFPOSFUEPTVERAYOXKEZEIXBJVWNKVRKGZD");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.0771378888544;
    tmp_msg_0.lat = 0.63233805578;
    tmp_msg_0.lon = 0.153407942182;
    tmp_msg_0.z = 0.894062459132;
    tmp_msg_0.z_units = 107U;
    tmp_msg_0.travel_z = 0.683945323074;
    tmp_msg_0.travel_z_units = 51U;
    tmp_msg_0.delayed = 205U;
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.56763502613);
    msg.setSource(28962U);
    msg.setSourceEntity(84U);
    msg.setDestination(17761U);
    msg.setDestinationEntity(247U);
    msg.command = 189U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YGZTFOJTRYNPKQAEMQJSQXKONKTBQFLEKRSJCMNEQJHPUKQXTCSFIJBFADV");
    tmp_msg_0.description.assign("FALMASXGDVBNRIEKXBPEZVOYDNRYJPINEWHOGUYRDFLXMLWIIZIFSVRCNMLPWJSROHUKWVCTWHECLBXAZKCNPBGUBSJKXWUUJJQKEUTPCQABAJYHQRFIHESNAJOPHROLKBYMJOQNWVSTSATBMVIPIGAMQWLJUFFOSGJFYTOPAZQZOVKZFSWVGUDZVCGDYHXNMXXTQEBUDZAGVYSXFYKIMRTTTNGQ");
    tmp_msg_0.vnamespace.assign("RYFUQDVYRRXDJHGCECZNNXEUPTIJAQHKAEMHSFXCSTJBARTNVPSIMYJLQ");
    tmp_msg_0.start_man_id.assign("EWTMHETUSHOLJVMFNPLQONCPAYXPIPIWQZBMRSAUVSZLIXJYXVTJLKRZEXAIQYULFLPLOGYFTFMYYGQZIGIBDHFOWEHXQGMMDRTNJVWKZBFBLDYOMHGFAGRHUDQIWDIYCVRTKTCTAOCUQVZRSBSVUVOHADPXUNDHQDGIFQPNWDQHKCXLEMWNXAPVKZHBLKKNVKBUJSNSAWJGRWBCZPZBSGYETE");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("XWOVECYOWRHDWEMALEURNVUTXLNUXHZYEQCCUQFBLRRQQDBQSOFNJEKMJRAHRHUGCWPXTFVJIQVFWSDTCOVPBGBKRGAZSBNPJXIO");
    IMC::Takeoff tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.420403310506;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.241424671299;
    tmp_tmp_tmp_msg_0_0_0.z = 0.487097206112;
    tmp_tmp_tmp_msg_0_0_0.z_units = 90U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.783908820208;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 36U;
    tmp_tmp_tmp_msg_0_0_0.takeoff_pitch = 0.0500460623312;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("PHCFIWQWLSJBGXTOLRNRMXYBPXKPSULILZCXFGQJRQTZVWMJVLVVMDVGMBSBSTQFWAMEZPVULVHRXFNSXEBAKJKXNEMDZSPUNGPDKDCPWSDHEYIRAANOANXIHNIZFHZDJOQLKBZAYHSWCYMRAWWBEIMPIKOODBBKQQJYFWUCYJRJMKADCZRPAQCQCFTVZEHGIGGCTRIEFVSFOTU");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::TransportBindings tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.consumer.assign("KXSTBISXDQPZAEQGJDUKOBRGYEWGQCVKYXOZYAXRARKPVIYJKSPMHSNLDQTJRDIEZKRSGFVCEGCSUOUUWNUWLOJZWAHOAEBGLVSVLCHFRQYIFYKQXWEDRDHHLEUALDBTGXITEGWFNPYYPNVTNHNTLGUAPFMWWEON");
    tmp_tmp_msg_0_1.message_id = 12475U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.209423641433);
    msg.setSource(42984U);
    msg.setSourceEntity(155U);
    msg.setDestination(35213U);
    msg.setDestinationEntity(118U);
    msg.command = 27U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XBMEGBIKMHBYXGWAGAUONOUKMFQWXYBQIFDSKCAXPZFJBDHZKMYFZENYRLEDICTXGJSAVWIMTQNQJACUGYUFJKLQEMFFWCOSKGQGSWYBEVKIHQOPLTCFEZPHVDNATDJNTEPJDTBAZVRCHECJSZMUSHYXNHHZCBTRNIWBRSYFOPQPFKLOHUUVRGWUTJLUSXVOZBALWSDAAMYORKQPZYRLHRPNZXEWMTU");
    tmp_msg_0.description.assign("AJQHZECDFFMIGPXUBHOLNNKOGZPYDWYVYVXMUMCVWDJKBGNLNELSQAVBPVZUJBEMOGSNZXCCBDZHNTJKHAKLQETGSAIRXTKIUQBQBWFGTWWPBNYFZCURQXOMUCHPMMFHQBLERNTAWGJKUIONYGBXQVGFCVETSULWYDPPPTFRRDRCRSOHKQGJTXHNZLHSOZOELPRLOIYVEXVAMAZD");
    tmp_msg_0.vnamespace.assign("JKORWXBRAGESJEHELKCNK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LCRFQMFFCPCJQKONOBDDGBZTIMANIBPTSMLVW");
    tmp_tmp_msg_0_0.value.assign("DOXKFRFDPZAWUNLEFKXJQQKBIVLTALEDGEYNSYCTBEWPWLWSXZMFVPTGUIIXMEMOMDNHLJFWDWQHRRYBNWLQWTQIHCOPGDRPLXJXGJOFQRKVYXQPVOKNMQPFAKTHOHAANZLGIAYGTYMUQVBUTKUJQBEACRZEYBCWBEUCNCUAZISIFJTJIKSSAGMPBVYRXYOJIVLXMLRXCIFOHDHNVVPCPDGZHTZSORHUFUMGCBVDSCNSJRUEBKGKDAWJSSHT");
    tmp_tmp_msg_0_0.type = 30U;
    tmp_tmp_msg_0_0.access = 196U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CSEYYCWMWMEBGVUFRVPZABRNYFOAWBFWANOPJWIEPTPLKJAWNBLDAUFUHTCUUCHIDRPMTRRYKOLLLWVGMHDZKFURSLQVLPQIUDEAETSDVSXWDVJXTCXSGBLBZKQOOGKUZQKVXZOYN");
    IMC::StopManeuver tmp_tmp_msg_0_1;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::PowerChannelControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("XHRVCCVPZHNOPMZFUDCTYERLAIWFJOWGDOMFZQKJZMXCSNVFAWVNLBCERABOJUYSRGONVAKETLIGYIOIYLTZWXYNVPQENPLHFRSDVTAXVLXUMJUTDKNFCPFOKQJRYGGETLIPGBTBPXUDWQBZUMABKRNTJTPISJUXACWCKISYMGSGXKDQKOAJMQSYG");
    tmp_tmp_msg_0_2.op = 177U;
    tmp_tmp_msg_0_2.sched_time = 0.206913563144;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.256612525264);
    msg.setSource(52351U);
    msg.setSourceEntity(118U);
    msg.setDestination(12866U);
    msg.setDestinationEntity(57U);
    msg.command = 176U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZERMBVGYDMFMAINNWECJSRCZETISVAFLJGSHXPWUIVMIBTQRCYHARPACXPTSIWSOCEKNZMUJWYLHRZSYZRQJQOJNBD");
    tmp_msg_0.description.assign("YIABRPOYBOWFXUWAENZXUHXQMOTUGQXNKMRNHZTJTTOKXSFFAZMNBVNRKKLNRLHKEYIDIKDSUUDZEJEAGXJUFYDWGRRBUUIMQCGYPRMTJSQUFZQSVIZZLSCEDCWAERJHCPPGISIOZWOAUPNAJDCGPMKCNVOBQBTHPAJVJQOXMFVZWLDXQFHBFVEKSLPIYJIDDWBCHR");
    tmp_msg_0.vnamespace.assign("KPKCJSNCUYKEZEBPHLSGDSEZQYUIIKOUWNRHUNAFOTBBJHULDUGMBUYZVHYSLVFJFYOBBRRZODICZMWEXDAIBVMAPJRIHYYSNCWLGIUCYRNIGFXQXGOQLGTHEJFTENWMFUMDVCPPEGMBXRBTWCYAJVLHLCVAPIDTHXWIPNDYZKTCRFAJDPLHKTSXQTQSXWETQRTKGMVGQW");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NOFBLPECXVHZGRWFOLHUQAMCCLEZCKLUSUUBEMEANUBRWJAYINODKWBUJKJORZTHCLHNYWVGMTXIJQTZFQFIIGAVSUPGCEIGMUTKAVASXFGWNWPZNKQCBTCYAVGORJLPDWNINVFOFFIKEFRJVTIOMPJZUOSXWYGUAHHQIRSYLKCHBDAQZSXYECYQJZDZNMBXPYJFKSLMRDBTGRMWXTKMEEHRABSLTMQVJOQYDVDXITNXSPPQHPHLEVBDSWR");
    tmp_tmp_msg_0_0.value.assign("JEDWSXZUXBTPQLURSZSYHLBCSIUBPTKDOVYFUCUOZRYJWMLHTBNSXGQWVTAIDVQW");
    tmp_tmp_msg_0_0.type = 205U;
    tmp_tmp_msg_0_0.access = 63U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PNWUECMLKRWBDVSIXXFKTPZEIBGGMYBWGNCPEZCGNDSJQYXYZWIBLPBICEOJCVLKTRPNXOCMZKOVSRJIOUJXHHELOIKBZEWABHHFZIWPWXUQJQAVOCAZATRNSKYNNMFHDDDKSAFIULIDNHGTRWUMLAIQFJFSHVYCXFUKROSABZTCONVDGGYDSQVLUQLXPTJMQMDW");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("XWDNDHWYIUITBCABMKTDOXGRSPFQGHBPQPGTOANISRCQCMEZACGCHEZUHKJIGHKSJOICNDMLTREPQAURTYOQWZKWBXUKVJF");
    IMC::RowsCoverage tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.13857264133;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.509598117102;
    tmp_tmp_tmp_msg_0_1_0.z = 0.173794434166;
    tmp_tmp_tmp_msg_0_1_0.z_units = 127U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.410977817541;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 155U;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.0501308449388;
    tmp_tmp_tmp_msg_0_1_0.cross_angle = 0.081344098138;
    tmp_tmp_tmp_msg_0_1_0.width = 0.546805033244;
    tmp_tmp_tmp_msg_0_1_0.length = 0.457356401139;
    tmp_tmp_tmp_msg_0_1_0.coff = 254U;
    tmp_tmp_tmp_msg_0_1_0.angaperture = 0.281266358959;
    tmp_tmp_tmp_msg_0_1_0.range = 63236U;
    tmp_tmp_tmp_msg_0_1_0.overlap = 69U;
    tmp_tmp_tmp_msg_0_1_0.flags = 17U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("PSMUZMYQJCMTTVLYHOQZFIDQJCWEZEFIEINVKZEIXAJVZRSILANRLEWTLYKJXNFBOFNNXPXNNBYUSRGRKJLOVNVIACUICVWVTGGPFRRKBSWKSKYCXJKCJUTEBABWGNGDFLYWDPFQDBJRZXJQFBKYDUADYEKGJHHAUCPZDMD");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("PCIPXTEBATDWTXCALXWGQTAUEHUNRIRWNVYPXTGVPFGEMFGHCYSXRBASNJYJKAU");
    tmp_tmp_msg_0_2.dest_man.assign("VLWALVBPIYBJUCMWDWFILZJJGIEWDHCPUPXBGDNBJAELPLWXKCSCONAKZEKPROYWBHGXWTCZWSSHLKKEZBFQDAGNOFY");
    tmp_tmp_msg_0_2.conditions.assign("DPFQOWFVHAEVZUDLSFUKBPVAUUOGNGESJAQBGNLYHQEFXYVCIFRZMHBBCKCKKSPGESCTNYLGCVDGHTWVXJCXWZIRTEFJQHYIPBKCQIRDDGFLMWTOXAXSJQNFDAQMLKAOZSXCHNEANPVZOLFMMRAYRGTVDIUYRYBKKATNCAPGLTIZLLJJFBEJSLOBKJURBEE");
    IMC::EntityActivationState tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.state = 5U;
    tmp_tmp_tmp_msg_0_2_0.error.assign("HSWNGCJFBMFKKIBHCSVYYCXEHZAFRDA");
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::HistoricSample tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.sys_id = 34906U;
    tmp_tmp_msg_0_3.priority = -68;
    tmp_tmp_msg_0_3.x = -23273;
    tmp_tmp_msg_0_3.y = -24773;
    tmp_tmp_msg_0_3.z = 16830;
    tmp_tmp_msg_0_3.t = 649;
    IMC::PlanSpecification tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.plan_id.assign("AMLYFWSYAQVYHPMRFBOEJTYPQRWSGBINKZLUFAPSOEAPZRSUVUIWZZTIYTXGCPSQBSIZSGNUNMUIWWDDOMICCKDVTLGHDVAHHNXJHFBJCFFOVOOGANPT");
    tmp_tmp_tmp_msg_0_3_0.description.assign("WALIZXTMNOTHJRHWUTWXCROHLSIDUOASBPEUGVVOWFLZPJZRKSBSAEPGCNCZLIDFHNLBMLUKYTNPZRCGHIXTXJFFEFMMPPPNIVAAWFMKNFHNUBUDLJQBEBQMDXCDRYRDEVTJZSWGVJHTLWAUVOAEQWIAXJIABJCBDPEP");
    tmp_tmp_tmp_msg_0_3_0.vnamespace.assign("DWEMEHUZUDMIKZEXNXLGVXEFVBKMHAILTLDGOPQQUJTWEJONDPVCPDHWYMYDQIYUAMKOFZJEBLCBXNVCXOTWBPGZQNXJUNZXLWVSVFGLHWCQIWBUUTIKCYWOCJFQEFAGRPVKENWSKXRRYRBRZAS");
    tmp_tmp_tmp_msg_0_3_0.start_man_id.assign("ERJBKGXHRSOWGYBZRTTWKNLKBWUUNIDJVGWVOYUNQSYYLXXKFBFCSMULJEBZPTFMVKXYPRISSFGUCASVHPPMDTHOLCOIECENMDXZVVAREZNAPDNGIQVBLVGKPUTKDDSKCRLAZJIMAVYFMTSGTWJIH");
    IMC::PlanManeuver tmp_tmp_tmp_tmp_msg_0_3_0_0;
    tmp_tmp_tmp_tmp_msg_0_3_0_0.maneuver_id.assign("FVIDASRPXUVYKJLSEWNGNIWQENRDACAYGCCQHZHKUHJKTFTCJYWPWKSUOUHMFQHXAIQHIWMOOTJJLLENRDCKHVGYDOBSIIIZGTNFGBRRQNLLACDQTGLXERRJYEVTVUHZZHPXIOBXOKHJLMBBDTSMQFMWXMNYAMKMZSXPAOGFNGCIWDQLYVJBLCEYUWKUQE");
    IMC::AutonomousSection tmp_tmp_tmp_tmp_tmp_msg_0_3_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_3_0_0_0.lat = 0.468073978123;
    tmp_tmp_tmp_tmp_tmp_msg_0_3_0_0_0.lon = 0.338348407372;
    tmp_tmp_tmp_tmp_tmp_msg_0_3_0_0_0.speed = 0.940154152324;
    tmp_tmp_tmp_tmp_tmp_msg_0_3_0_0_0.speed_units = 26U;
    tmp_tmp_tmp_tmp_tmp_msg_0_3_0_0_0.limits = 138U;
    tmp_tmp_tmp_tmp_tmp_msg_0_3_0_0_0.max_depth = 0.958664694569;
    tmp_tmp_tmp_tmp_tmp_msg_0_3_0_0_0.min_alt = 0.21753616728;
    tmp_tmp_tmp_tmp_tmp_msg_0_3_0_0_0.time_limit = 0.138959711976;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_tmp_tmp_msg_0_3_0_0_0_0;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_3_0_0_0_0.lat = 0.62123061124;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_3_0_0_0_0.lon = 0.414138878624;
    tmp_tmp_tmp_tmp_tmp_msg_0_3_0_0_0.area_limits.push_back(tmp_tmp_tmp_tmp_tmp_tmp_msg_0_3_0_0_0_0);
    tmp_tmp_tmp_tmp_tmp_msg_0_3_0_0_0.controller.assign("QAKLWZKVXZICWYBEODVWOGEPFXRZVFPGJPVWNWAESFHAWCYBBOYMOCEAXHYQRIDSBMGOCSLZLUNTZJRKKTESZLBDKPGCQMBYONNIWRVYDKIJFHPGUENJHHFKCFAAVPZGDIFBEHCNBYVQNIUDBWTIETFUMDYRQUDIZPCENCXDYTLVZIKMJYMVUTJKBFMRRQWCPXUSAVSALPZLJN");
    tmp_tmp_tmp_tmp_tmp_msg_0_3_0_0_0.custom.assign("VPOVQSEXEKJKYRGUVXPASHXAZUBFTNCKYSBBWUHMGXJNUZMNQAEFPTQISHGHTYOUFETGJIWVDDGGMIRWOBMSMKADJJNWBLCCDWFVRFERTYEQUVLJ");
    tmp_tmp_tmp_tmp_msg_0_3_0_0.data.set(tmp_tmp_tmp_tmp_tmp_msg_0_3_0_0_0);
    tmp_tmp_tmp_msg_0_3_0.maneuvers.push_back(tmp_tmp_tmp_tmp_msg_0_3_0_0);
    IMC::Loiter tmp_tmp_tmp_tmp_msg_0_3_0_1;
    tmp_tmp_tmp_tmp_msg_0_3_0_1.timeout = 39980U;
    tmp_tmp_tmp_tmp_msg_0_3_0_1.lat = 0.755005299118;
    tmp_tmp_tmp_tmp_msg_0_3_0_1.lon = 0.643613765419;
    tmp_tmp_tmp_tmp_msg_0_3_0_1.z = 0.484574934507;
    tmp_tmp_tmp_tmp_msg_0_3_0_1.z_units = 9U;
    tmp_tmp_tmp_tmp_msg_0_3_0_1.duration = 12459U;
    tmp_tmp_tmp_tmp_msg_0_3_0_1.speed = 0.670181452402;
    tmp_tmp_tmp_tmp_msg_0_3_0_1.speed_units = 104U;
    tmp_tmp_tmp_tmp_msg_0_3_0_1.type = 16U;
    tmp_tmp_tmp_tmp_msg_0_3_0_1.radius = 0.0113899170405;
    tmp_tmp_tmp_tmp_msg_0_3_0_1.length = 0.992356721837;
    tmp_tmp_tmp_tmp_msg_0_3_0_1.bearing = 0.564196492471;
    tmp_tmp_tmp_tmp_msg_0_3_0_1.direction = 190U;
    tmp_tmp_tmp_tmp_msg_0_3_0_1.custom.assign("XAZYXELWCCEBTCRRWUJLHXVQQISYGDVGOKJLNXUKLZNGXBLBDAJCJAQQS");
    tmp_tmp_tmp_msg_0_3_0.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_3_0_1);
    tmp_tmp_msg_0_3.sample.set(tmp_tmp_tmp_msg_0_3_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.604612547764);
    msg.setSource(58119U);
    msg.setSourceEntity(91U);
    msg.setDestination(48456U);
    msg.setDestinationEntity(117U);
    msg.state = 240U;
    msg.plan_id.assign("DPXLKURQCVFEYFYUMPGIEWJZHLLDSZBKQVGNFHTVQOPHRGTKCUEIKTZPYSXJNVCBAOCPSRSMBATZTIDFPEPGMNKOWARBMJAIWTSHUCUQULRRWWLQNBXNHSWVDLZPXDIQFBKQSJYLWINKHHTAFNDHMXXKIDJKQCBIBSDEAXETGAONNJXYUUUTIXYOP");
    msg.comm_level = 13U;

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
    msg.setTimeStamp(0.0339274421098);
    msg.setSource(64442U);
    msg.setSourceEntity(240U);
    msg.setDestination(49553U);
    msg.setDestinationEntity(102U);
    msg.state = 82U;
    msg.plan_id.assign("KBHJZZDKLVAUKHBEKBEBXTJAIGRQGAHJAFAPPSYVBYMLAKUKFBTCHPMGQOWYREVJFCLEQSDIGTVDHTOLJPFQMECQHZIG");
    msg.comm_level = 6U;

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
    msg.setTimeStamp(0.37242444788);
    msg.setSource(10932U);
    msg.setSourceEntity(51U);
    msg.setDestination(1543U);
    msg.setDestinationEntity(152U);
    msg.state = 201U;
    msg.plan_id.assign("NPSWHFFSECLNPFELKWTEBCWLYYTYUFMWQEOJXHTTHKIKTANYFVAZUWCARXCAQZCIKZNLUHGSOVYZEOMFTGYJBBUORYACAWDXIWAUDOYMPVZMWLBUXBKGJGQLQSPYUSPVCREMXXDXQCBRJQBTIPJSFEGWGVSKENXOMZJDQWJRHJMERNFTHIUZTVODKXPYGDPQDMVXBFLIAMTVZQGUPQDIGROKJFO");
    msg.comm_level = 40U;

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
    msg.setTimeStamp(0.200739048158);
    msg.setSource(30332U);
    msg.setSourceEntity(164U);
    msg.setDestination(49519U);
    msg.setDestinationEntity(200U);
    msg.type = 48U;
    msg.op = 173U;
    msg.request_id = 64002U;
    msg.plan_id.assign("CGLTKHUAOEWMGXJDYROLRTNZEHSPWEBKSFZINQTRFMCPFVIBCBFYCADNXDATHMEWDVGNZVXYFWDNSNQEAHCQDXPJKOIEJZQYSLOCMXBNWJST");
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 156U;
    tmp_msg_0.frequency = 3789549763U;
    tmp_msg_0.min_range = 42823U;
    tmp_msg_0.max_range = 56418U;
    tmp_msg_0.bits_per_point = 89U;
    tmp_msg_0.scale_factor = 0.115834023586;
    const char tmp_tmp_msg_0_0[] = {47, 83, 47, -55, 121, 97, -7, -124, -38, 85, -102, 57, 59, 19, 98, 108, -76, 61, -81, 123, 94, -40, 32, -65, -83, -14, -62, -39, 73, 86, -49, -84, 109, -90, 30, -35, -65, -41, -23, 107, -66, 56, 22, 96, -106, 20, 97, 54, -70, 54, 82, 42, -120, 97, -70, 3, -80, -30, -74, -101, 102, 41, 85, 98, -119, 65, 126, 75, -42, 22, 19, 22, -109, 64, -78, 96, -75, 111, 43, -29, 111, 63, 99, 15, -13, -75, 96, -68, 14, 111, 120, 36, 34, -101, -81, -73, 68, 7, -53, -8, -31, 80, -25, -86, 51, -1, -27, 78, 114, -19, 22, -59, 42, 122, -7, 82, 18, 86, -5, -40, 110, -118, -94, -51, 66, 36, -103, 56, -124, -4, 70, -38, -41, -106, 68, -34, 75, -60, 114, 36, 8, -43, -103, -3, -50, -35, -19, 75, 70, 113, -44, -106, 73, 44, 69};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CTQYWJAIBCCZCTHWSRMOFGERTWU");

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
    msg.setTimeStamp(0.963421781081);
    msg.setSource(57097U);
    msg.setSourceEntity(81U);
    msg.setDestination(6904U);
    msg.setDestinationEntity(135U);
    msg.type = 166U;
    msg.op = 50U;
    msg.request_id = 10032U;
    msg.plan_id.assign("AXEXNBJTIMYSEGKHKDUNJVTLWVOTEQFLQQOYVJHNTQRTWWPWFNLCVMEYXVEUGQBDDCCOFSSUPIMFMGEHFLJTYMDYOASSDDJFIXKZMPHVFNLZABOFTHCEBBUDSWAIRONVCROGIZAUZWNMWJWOP");
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 65019U;
    tmp_msg_0.lat = 0.295237019799;
    tmp_msg_0.lon = 0.34443262025;
    tmp_msg_0.z_units = 208U;
    tmp_msg_0.z = 0.748073130775;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RSMDOSVHUQYIFCVAUWLOOZVICMIRCVEMJ");

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
    msg.setTimeStamp(0.50677856889);
    msg.setSource(40815U);
    msg.setSourceEntity(36U);
    msg.setDestination(65488U);
    msg.setDestinationEntity(125U);
    msg.type = 215U;
    msg.op = 252U;
    msg.request_id = 534U;
    msg.plan_id.assign("UKVTIEPIFWUZOYYCLILJJGKTGOMVWCIUJTOGHIEDVORDMSVINHXMLXJFKRUQRSTHLMRKKPNXJVYDBBOXMUXQCYHOWPVUQFMEUQNOWFNYMWKLFDEUFLGHJDOPFEQZEPPIFVXZWYYEBXDKLCPABJ");
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.554527381;
    tmp_msg_0.lon = 0.345766711854;
    tmp_msg_0.depth = 44U;
    tmp_msg_0.speed = 0.858222075763;
    tmp_msg_0.psi = 0.0527947132804;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KRXKLJFLXOLDDXGBYWQNRKZIKKBXOCRJYJPRZYASDUMVDHSUEXBQHHSJYLQTLHNKEPUQAJSFPWUMAZDWSSDWEXKBCFSLLTAQMGUGCJQSYBMFIPVDTVFALBMZVQQPEYRRCNGTQHVONWKOENMDIHZSJWANGFRNBMCTDJMWIXIGZCBMETYFRRYACWTZXGWOUEWHPCYHGOHBFPFZSORPTJVGDEZPPUIIAVTNOTOCIXVFIEKLUAVAHNLOQGNCZYB");

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
    msg.setTimeStamp(0.166794143386);
    msg.setSource(2812U);
    msg.setSourceEntity(59U);
    msg.setDestination(24621U);
    msg.setDestinationEntity(237U);
    msg.plan_count = 17003U;
    msg.plan_size = 555135561U;
    msg.change_time = 0.118877777683;
    msg.change_sid = 4297U;
    msg.change_sname.assign("ISTXRLDQWTWACWDFUKBPBUVBEVLXVFWSKTBKDMBLLSJXKFWZTQZCMQIUCUPJORRXOCYSLSWXJTMUHVDCTLAVMNJSNTEAUJOOYNMQVZVIGNECBUHKSOYGFPGQGDJHZUIBCABYPRRHDGLRNILOVXPVDZOVIDFERKHEAZQXKMGEPEZFKGWRTCIYNPYGIXGCZQQNNDFSLOOQJPFJMQYMYRNHEILHAEWJPKFNUFHA");
    const char tmp_msg_0[] = {-97, 60, 33, 67, -53, -113, -67, -33, -54, -38, 90, 85, -124, 36, -92, 14, -83, 16, -14, 50, 23, -76, 98, -118, -80, -2, 74, 62, -87, -119, -10, 86, -95, -108, 73, -123, -10, 109, 102, -116, 76, -77, 63, 121, 75, -21, 37, 86, 8, -94, 6, -123, 83, -3, 44, 67, 95, 115, -53, -59, 106, -100, 79, -25, 31, -6, -12, -5, -13, -72, 40, -66, -13, -111, 46, 29, 108, -21, 82, -5, -127, -67, 110, -122, 120, 115, 120, -75, -115, 94, 6, 73, -19};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.137940172181);
    msg.setSource(26558U);
    msg.setSourceEntity(178U);
    msg.setDestination(9501U);
    msg.setDestinationEntity(18U);
    msg.plan_count = 32272U;
    msg.plan_size = 3861680444U;
    msg.change_time = 0.613252743493;
    msg.change_sid = 19385U;
    msg.change_sname.assign("TNHECIUVKYMJXMOQFVOAZCLXVUSTPGTABYXLCIQJMDNJRSHIROUIYKEFWXROXAGLEHMMPUJJCQBEGCNDGTPVZDZKLBBZBRURWCUAQXSIVUEHNZRXZESLHNJJMPMGQIDLMNRLGUVYEHEXEGSTNGBAOCKQFEJPLQTIORZWAJQOZIXRWBIHTWDXNDWFWCBS");
    const char tmp_msg_0[] = {-108, -44, 106, -8, -127, 18, -74, 22, 123, 24, -39, -90, 116, -55, 82, -19, -88, 27, 88, 29, 29, -47, 59, -22, 4, 53, 47, -13, 35, 31, 77, 38, 68, -30, 118, 89, 50, -31, -111, -20, 75, -10, -84, -68, -80, 69, 17, 57, 28, -91, 26, 60, -6, 57, 103, -99, 61, 88, 117, -19, -7, -5, -17, -114, 67, -38, 88, -5, -60, -42, 35, -109, -46, -118, -24, 88, 77, -121, 12, 109, 101, -72, 102, -118, -16, 81, 30, 54, -3, -101, -65, 40, -9, -111, 87, 118, -1, 40, 30, 4, 125, 79, 48, 30, 52, 44, -69, -42, -126, -41, 88, -3, -27, -52, -111, -41, 112, -57, 25, -44, 32, 80, -95, 36, -99, 111, 26, -44, 36, 41, -72, 16, 9, -85, -77, -93, -81, -48, -9, 83, -36, -5, 6, 45, -94, 107, -13, 98, 60, 67, -7, 98, -48, 60, 66, -49, 14, 45, 119, -7, 102, -93, 89, 107, 43, -63, 51, 37, -108, 51, -14, 44, 107, 10, -51, -126, -9, 0, -39};
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
    msg.setTimeStamp(0.216806715222);
    msg.setSource(27548U);
    msg.setSourceEntity(8U);
    msg.setDestination(28515U);
    msg.setDestinationEntity(121U);
    msg.plan_count = 43871U;
    msg.plan_size = 2717464773U;
    msg.change_time = 0.391483404239;
    msg.change_sid = 7549U;
    msg.change_sname.assign("OUAUYWTNWDOMCAOKTEBAWTNWCDREVHGYPPHJJCKGFMHDYZCHPLVQQCZFPBNWOFFZWXSPBXIUMRNIGBHGRJXDIITDTZDDHSUAKMEGUBCPMCSFEVHULTYHEFYNIMZXVVYS");
    const char tmp_msg_0[] = {17, 0, -18, 49, -109, -35, -113, 84, -63, 113, -84, -99, -109, 67, 1, 14, -75, -21, -22, 7, 12, 88, 0, 92, 50, 79, -8, -18, -10, 50, -57, -25, 24, -86, -64, -119, -78, -70, -70, 21, 10, 39, 103, -39, 26, -66, -98, 116, -9, -32, -63, -34, 61, 39, -117, -112, 80, -2, 5, 0, -19, 2, 124, 43, -88, -122, -63, 20, 42, -6, 33, 92, -32, -73, 10, -16, -27, -120, 6, 41, -45, -77, 94, 37, 74, -81, -2, -5, -79, 73, -103, 91, 87, -35, -39, -19, 31, -35, 23, -123, 21, -124, -20, 21, -60, -110, 12, 78, -125, 46, 31, -113, -83, -123, -45, -121, 27, -119, -96, -88, 61, 56, -79, 67, 6, 48, -92, -127, -124, -16, 124, -86, 20, -85, -1, 40, 29, -21, -20, -33, -102, -121, -16, 50, -110, -34, -48, -17, 60};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.176784372302);
    msg.setSource(48901U);
    msg.setSourceEntity(216U);
    msg.setDestination(56440U);
    msg.setDestinationEntity(240U);
    msg.plan_id.assign("CXYOAOBYOUAIVDMNLCKANXITDIHZRZHXRNDLRMRSKQWUEWINDKPJIMJQDFAKQKFYRYKHDZPLOWTILUZWYBQFVUBRMVNESEQVEPHNODWYEPRKNEWR");
    msg.plan_size = 35246U;
    msg.change_time = 0.113045918938;
    msg.change_sid = 47080U;
    msg.change_sname.assign("KJCEBIIGBVUZAMSYZNZGWETNAGPPJYBKLMVHOBBKWZFKTGYSCLAPIMUYSIHOUZJYDTQZLXETWFNXMMUYJAPBDRAIRYTYKAGRDSGSPEXQUQCVFUDWFQGVSWPFEV");
    const char tmp_msg_0[] = {-93, 30, -65, -2, -87, -70, -101, -37, -21, -73, -79, -99, -26, 26, 60, 34, -73, 88, -40, -97, 30, 122, 57, 66, -128, 5, 82, -93, 22, -119, 118, 101, 83, 10, 54, -18, -112, -87, -52, 106, -3, 64, -111, 117, -36, 22, 38, -10, 45, -88, -112, -65, -102, 105, -26, 97, 44, -57, -5, 66, 20, -57, 18, 27, -119, 82, -101, 117, -45, -13, -45, -86, 45, -86, -103, -23, 19, -74, 17, -103, 0, -125, 104, 115, -51, -37, -52, 36, 42, -83, -99, 18, -35, -87, 20, -20, 97, -56, -91, 86, 114, 58, -12, -119, -62, 21, 13, -100, 53, -19, 8, -105, -121, 62, 23, -14, -117, 40, 68, 105, 125, -105, -45, 4, 51, -60, -43, 24, -43, -41, -31, -4, -95, 39, 25, -40, 83, 26, 46, 0, -84, 31, -87, 100, -36, -20, 8, -86, -45, 97, -121, -19};
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
    msg.setTimeStamp(0.23268265024);
    msg.setSource(64377U);
    msg.setSourceEntity(67U);
    msg.setDestination(31335U);
    msg.setDestinationEntity(127U);
    msg.plan_id.assign("GTUJMYBQALYFXXMJ");
    msg.plan_size = 3466U;
    msg.change_time = 0.581104375881;
    msg.change_sid = 10141U;
    msg.change_sname.assign("HKMVYKHQIDLRYMUNKEXKVTVMAPQROKCXWGGIYVRESHPOSOKSGBYJAPPZKNQEULQFSBNZVGNXOIYRTKXRFLLBHMZRSIJVDGLPBWOJOVWWMAWFDRJBSXPIJKTWSYFIXVEPUTDQZQYBALXVCQCIXHPZKTVXYFHBLGTFDLEAGEUCYW");
    const char tmp_msg_0[] = {-29, -53, 27, 63, -59, -83, -32, 88, -33, -93, 24, -88, -29, 126, -80, -20, 88, -11, 35, -59, 5, -104, 80, -76, -106, -64, 65, -4, -46, 116, 54, 26, -106, -11, -53, 16, -27, 12, -11, 81, -52, -2, -68, -89, -65, 107, 10, 94, -98, 41, 107, -111, 48, 42, -49, -71, 73, 76, -95, -92, -73, -19, -15, -75, -73, -55, 86, -23, -113, -19, 50, 39, -118, 3, -120, 83, 46, -58, -63, -41, -81, 30, 114, -69, -78, 100, -89, -34, -115, 99, -46, 84, 64, 58, -16, 38, 114, -99, 70, 124, -35, -84, 53, -36, 111, -38, -11, -53, -125, 9, -18, 74, -100, 98, -80, 74, 21, -86, 8, 4, 104, 120, -66, -77, 66, -97, -113, 94, -46, -54, -101, -17, 47, -59, 77, 13, -120, 66, -50, 88, 13, -58, 120, -48, -13, -43, -50, -3, -66, 116, 16, 0, -58, -102, 40, 8, 33, -127, -124, 3, 60, 23, -73, 14, 25, -12, -16, 106, 5, -30, -123, 78, 39, -65, -66, -66, -57, -124, 84, 32, 28, -20, -93, -50, -63, 12, 122, 88, -99, 119, 6, -106, 4, -117, 51, 27, 89, -75, -3, 90, -3, 91, 64, -19, -48, 125, -53, 102, -64, 116, 13, -100, 13, 4, -27, 65, -67, 106, -106, 101, 65, -117, -87, 69, 69, -41, -94, 33, 120, -62, -92, -95, 110, -80, -36, -43, -85, -67, -113, -60, -72, -80};
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
    msg.setTimeStamp(0.831601780263);
    msg.setSource(45105U);
    msg.setSourceEntity(14U);
    msg.setDestination(12350U);
    msg.setDestinationEntity(131U);
    msg.plan_id.assign("VBBGANUBFDHCGHEBYYVRVQNDRJOOVTTWCUYFZCIKJSLEXZDJSCGHSGRWJBBEIVONLVTPRSWIDUCPVPLYEOTFUAROXXOTGYQ");
    msg.plan_size = 8991U;
    msg.change_time = 0.300462523637;
    msg.change_sid = 23769U;
    msg.change_sname.assign("YESSLJHMSIATCWPAOXHXYQTDKIQCMLWBR");
    const char tmp_msg_0[] = {0, 57, -104, 80, 21, 102, 9, -22, 70, -122, 75, 123, 107, -87, -126, 18, 58, 63, 63, -23, 120, -100, 26, -21, 12, -73, -21, -22, -43, -115, -88, -104, -55, 18, 66, 80, -22, -72, 42, -11, -117, -121, -108, 115, -96, 34, 51, 124, -79, -107, -1, 44, -112, -87, 47, 96, 91, 38, 73, 13, -45, -127, 49, 35, -45, 81, -74, 15, 3, 66, 5, -83, 19, 79, 110, -10, 98, -23, 7, 74, 99, -46, -68, 78, 14, 80, 53, -28, 57, 18, -7, -113, 113, 76, -65, -100, -64, 89, 2, 125, 8, -61};
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
    msg.setTimeStamp(0.0206059513374);
    msg.setSource(58637U);
    msg.setSourceEntity(75U);
    msg.setDestination(35599U);
    msg.setDestinationEntity(248U);
    msg.type = 102U;
    msg.op = 104U;
    msg.request_id = 21195U;
    msg.plan_id.assign("IJSJCPUCHLWGQIQPJFXTQOAWCQONZHNQVGIGOCRLNLDSWZVMWMAZNVBUOOTCZVSYEDICJEZDWSTIDOPLUBDRZIYUKQJZUCFLPSHWLKQXVYMVEJXROXNEEUTUBMGLYKXHXLAPTRDTGZNHDOWFLVKNAXPKMNRVARJGNLVFRTEM");
    msg.flags = 6953U;
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 162U;
    tmp_msg_0.goal_id.assign("NQLYOLVBXDPLQQWHIJRONYUNBIMLVLVRWGEJCLBBUZBZPJGETOSGHGFQHHSKXVOPHQDYEPRZASQZMVOWPYCSCTWRLOIDWIV");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("GLDJUCLWXCTTZJISHDIDGWMNZFVSZZEUQHOYVLQAWWJZFHRBKKGEFCKIXMNCBWUSXHUBHPRLV");
    tmp_tmp_msg_0_0.predicate.assign("IAKUOWGDSPNJKTQXWNLUKCGCGYSHDJWKSVOMCFCWVQOVOXTHSZYAHBECOZVGXPQYRWEREPVUDUAEEIGKVBRWJQCJAASLBNHSJAKYZNVBIEXOMBRHWJOZMTVJFFZKXTAUPLTMIMINOLRDNFJM");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("HUMYSIMNJWFDQASKSYQWMVRUYCOUWIIQQJKOVUZNEQLPOMIDSRSUGWYYQXARNXYEHTILVXDWLSBVLBWOTOGMERGPDPNMZVZFTNFPADEKFAOBRWNKKGTCXCKXGIAIEXBMJKPHNHTLZQZZBZZXGGMTUVYYYUAOJWAFLHRFFSROGDPFVNEOJATIPTJLDGBBVPXFPCKRJJNMUQANZLLHZVHJTBEAJEMDWREBOBSKDUQCXCHHKCUXWSTY");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 182U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("NOOYOBOZYHQWJYJLSVUPBTQCBUKSDUZCEAJQUTDEPFQUFHNGPXINOGZVVUKFSQGPNIWPWGYMIBLLDCEROAXBCWFUDZRZWLISIMAWTSBBHJKQRKAFCVGRYRPDLWMLPZMXUTUYCVCJFHLFEJGKMSTXVXIUNMXYNYXPMRLIDAVIKVFZZFCNLREHDHO");
    tmp_tmp_tmp_msg_0_0_0.max.assign("TZYTXDWMCAIFWVOXJIKQNIGMZPUVRMFWMSBSLUPPDSFYOASMKZYHRXM");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZSBZCWLZSVKRKLDFNAEYKVVOUQORLXHMZQZBYJGPHVVBVJXYUSIFBZCDTIRSWAFPGMIHMGQHXTALQRJNDXBHPYPETGKUBWJTCIMCQRFPPHWISOEGMJADYWPZDXYNLMKUXSXHXGDFMTFARMSGTSNZJKJRJQPPUKTPESGKOLNKYZM");

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
    msg.setTimeStamp(0.167819783386);
    msg.setSource(37870U);
    msg.setSourceEntity(63U);
    msg.setDestination(3818U);
    msg.setDestinationEntity(84U);
    msg.type = 73U;
    msg.op = 25U;
    msg.request_id = 59514U;
    msg.plan_id.assign("FSJUEPTNUZYEXMWIWXIFUVBUTPYRDFPHBBYHZXMKDNSWWFFVCOFVUTLFDOEMXCROVBALABRGWO");
    msg.flags = 25749U;
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("KNWWAWXKDXCLFXATMQWXLDHRRNBAGRPBITHJAPIOUKZVBKYVRVBGNPFMXJGKLUEKKCSWBRCFGESDFFMGQKQAZVHUHLIOOYGTVUSDVGZWBSZM");
    tmp_msg_0.links = 1278424750U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IXNXFJHUDLZVQTJMXMWBIFJSEYDBOQQVREJFZKMAXWRZZTSEBYTVJUNZUCENUYUCGMWEEJQAUHWTOJBSCXPHDSFARDAMEGYBKMTLHHPZYLXSPMGNZIUHLR");

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
    msg.setTimeStamp(0.427408126118);
    msg.setSource(17302U);
    msg.setSourceEntity(183U);
    msg.setDestination(53470U);
    msg.setDestinationEntity(186U);
    msg.type = 23U;
    msg.op = 21U;
    msg.request_id = 4735U;
    msg.plan_id.assign("GXCMENNEIEFKZXASYTDETVTGIBCVAIKSXSRHMIRHCQPCVMRBXBLYOCYQWJYCNWZRAFWXANZQFLAXTHFJXAMEMJZQLLUHDUGSCRKJUIOJYOBKWBBGWSVSJJOSGFPODVKAGSBUZLWBGNFALYZHITZHLDJUFIYGFNUWEMGVPDMQHJBLREQKVMWXFCGAVSRIZDKTTOKECUAIEHPTRZMDXZUKPSPVDUNVLPPQRPROYBW");
    msg.flags = 36478U;
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.273829035879;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XEXGCPXXPXLSLDCSIEILHKSNZUBAJFVUOZNHZUTLJGEBVYDSKUNOPIJKJBFTYPRBMQNPHALPMWBNJIDVTZGKSINAGPDAYGTVTQHWOARGOEAWQSUNMOTZCXLOCBYWQUDHBJYWIJQYDOMUVWERLJXRVRMHJKKHFWRHUSPMIFZCEMWXCCTZQHCRXVNIBVPIBKEAEFKMHYQXYAQZZOYCRTSCF");

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
    msg.setTimeStamp(0.530272140569);
    msg.setSource(8919U);
    msg.setSourceEntity(40U);
    msg.setDestination(64275U);
    msg.setDestinationEntity(162U);
    msg.state = 142U;
    msg.plan_id.assign("XQYPPMRPRDZLLKGYKLNJGGGUNOYIHWWIDVXLPBWALQGRTNVLNNCWPTKOVJDMCRUYYUCQQKMXCFFGFYJOUYRYBTVQOOBHFEJFRDFMAVDISXMHFBTUBBUENIOCZJVRHSJKSEDICXYPENDJOLXJSVFHKFEGPOKFZX");
    msg.plan_eta = 479950269;
    msg.plan_progress = 0.277610615071;
    msg.man_id.assign("ZCHRSUFORGYZMFJVBGPQKHDNAVPTSDSOGVAWQABBLBEYMWZPGOEAPGXYUSAMOPKDDIWBCWHNKQTSFNSCHAJMHQH");
    msg.man_type = 37850U;
    msg.man_eta = 1479349419;
    msg.last_outcome = 81U;

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
    msg.setTimeStamp(0.0937928310446);
    msg.setSource(56255U);
    msg.setSourceEntity(69U);
    msg.setDestination(14286U);
    msg.setDestinationEntity(233U);
    msg.state = 12U;
    msg.plan_id.assign("CREBRMYROTGNGWSURBSFITGWAJKBXUAYDTTPAHYIHMIBAYNQLRPHUYEXSHWYOOVCFALCZXZOTDNLPDSMQLMCMCBXSUQVIGMMZTLOCOMEQDFAWPTAPIKPENXXNWBVVJZRFKNOIQVJJRVGAZCPHWCBLPKBVJEKHSOKIJHRBDSPFNGKUH");
    msg.plan_eta = -1425244998;
    msg.plan_progress = 0.262905099783;
    msg.man_id.assign("DZZDEDWUXEPKUWLOIWNRRCZWCASJAIUYFLZPTSIHJFQICOVEDBPMBRWYCHMLTBKZXTNFUQJZACCLTCGUM");
    msg.man_type = 24083U;
    msg.man_eta = -485644481;
    msg.last_outcome = 149U;

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
    msg.setTimeStamp(0.892259131489);
    msg.setSource(53769U);
    msg.setSourceEntity(60U);
    msg.setDestination(32097U);
    msg.setDestinationEntity(43U);
    msg.state = 71U;
    msg.plan_id.assign("JFQXGUOCKVWYILZFKVCHPVMKWNYEOQQJLLJSORFYJBGZFRBJJLQWFRPSPPKTHYHCLCXXDZTZNBVPCPAFNCEBDRDMGXRNQCUOHDOSSFOUWGAJZOYMPUOPUVIUNIPDA");
    msg.plan_eta = -1292749532;
    msg.plan_progress = 0.16642404567;
    msg.man_id.assign("FTXQUFUYOVFHTKRSVAWZZTNILUMCXYLJCLETSKIIGNUFYHYCDCRRACWDFWGJN");
    msg.man_type = 59617U;
    msg.man_eta = 2038908581;
    msg.last_outcome = 66U;

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
    msg.setTimeStamp(0.0726265540015);
    msg.setSource(64577U);
    msg.setSourceEntity(59U);
    msg.setDestination(53701U);
    msg.setDestinationEntity(245U);
    msg.name.assign("KJFSERCYTGRADZYZYHDQLSRJUWHNCNHAXCDBYUOKQIGFEVUNBMQLADKMEGVVBZHLLZIOPBTZTHQPOLJJSADPITMCYUPJKKJSAOLERUYTNDTSWFSZBGXWNHXPQDEKWQCAZBOELMHVIGWREPOUQFDOHNLNHVETZTUXGFRQFDNOCWCPKTFLIRSUROSUTEPMVAXGIVXPJBVYNURFKQKIBI");
    msg.value.assign("WLVVHJURGODOGROULYOVABFMAVCZQBMPLNSZEDGRBQDSSQZQWNGIEXIYOSOMKLLQLESLCFNKXMYDRLKDCDYHTXZBQPSENYJPCKWKUZHJXUIEQNEVPYNWPBXIGDBZWXZOUJXIASNMTGUCTEJKFCWSFYRMHESKIKOHXPINGVYGMWJFHLJTRAFOAIITYXATHNWAVXMGBHBFCWPZTRQRUFTFUBHVDUHSCGRJUMJTDCYZZK");
    msg.type = 126U;
    msg.access = 168U;

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
    msg.setTimeStamp(0.385715622683);
    msg.setSource(12212U);
    msg.setSourceEntity(39U);
    msg.setDestination(22002U);
    msg.setDestinationEntity(218U);
    msg.name.assign("MECCKRPXKGJCTJYSLSUPAHQBPAGPZNYYIEQJQLXRSMNJHCDXNAXUPMBOUYIQMQWKDWCUUEWVMNJOSWTHYDQIAQZGBNVEBDICYFGKXZVLWABPHHVXKLIOOABPXTIIDGMYEG");
    msg.value.assign("CXNSIYZTMJTEQNXJCWFZDQJYIIJMUEDVYACWATFBUGCHIESMVAVUERQZQRECFGBWYKWROLXBZMCAFWJETTLJSMBHBSBEIONCHOQGFDGARLEQGSGABZQVWINVYNKLRDMFBKLCKGPLWQRCVEHAQYDNPTUOAZQSXRJAHKJRJBLXFNIJPRKGOYMXOOUWDKPTIXLIHFIFHHDPFSDWPYAPTMGEMYUPNUZNXVTZUVHNYKSKLUPDUSOLTMWVXRHZ");
    msg.type = 153U;
    msg.access = 230U;

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
    msg.setTimeStamp(0.0862717875148);
    msg.setSource(35433U);
    msg.setSourceEntity(55U);
    msg.setDestination(5299U);
    msg.setDestinationEntity(237U);
    msg.name.assign("ZWSSYOHEKOECWGXBXCDQXYULAJIFVIVXEMRLMALHHUJMRPMXAATUDMOWLMSYZEAFOICVHBHJDSHSIMZKHMCWWQLYFJKZRNNSUVKCJBIPNZTKENEXUQDF");
    msg.value.assign("OTRUPPIXHZMXQVGNAYOQNIXFULGKBLKIXJUBFOTSEIBNJNHZVJEKOKKMZFEPHNTHELZVUMJDLUDATVJLFBJOXZQIUPCTYAZGTBHVKQFCOTHIJFZWAOSPMQNVKRDGZFFHEAAHSIQBRCGEXACVXFWSGMRSCMNUDYRSARLQHYPPMELDKVZYJYBBPMBWPDERUIGNYMCAULTQMNODHIDYWEZCWUXYDSJWDLWOBSTXRRQWVEVCALQWGPJCCF");
    msg.type = 232U;
    msg.access = 36U;

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
    msg.setTimeStamp(0.589592852323);
    msg.setSource(58696U);
    msg.setSourceEntity(76U);
    msg.setDestination(54019U);
    msg.setDestinationEntity(82U);
    msg.cmd = 235U;
    msg.op = 53U;
    msg.plan_id.assign("YBCLOWXRTPXDMLALJZYESFGZDBNWVOZPRNNEAHWVORUWRKSJMHMCQLFFYDSMZNTDBCDQIZHHXEMBZOXEYKPTEQJYFFZGXRVQOOPPGQBAUQPETFFGPNYLIAGIUBLTVVVWXYCOSCTSRSJGEIIZQBVFMOKKPZWKZGKKNAGILOGUMJSYUMRNYCBMUCPSAATIXQOQSXFNXATCCACDHHJITFJUWNGHKJEDWDMUWRWIBBHHVUDRUSRKTJLKLAVEHYPX");
    msg.params.assign("YNEXDLITOUMBOHVSJ");

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
    msg.setTimeStamp(0.831983103849);
    msg.setSource(4042U);
    msg.setSourceEntity(249U);
    msg.setDestination(17525U);
    msg.setDestinationEntity(72U);
    msg.cmd = 225U;
    msg.op = 177U;
    msg.plan_id.assign("JBHASLQZFSUFNYKNVUBRKKDSSXKCWOPOW");
    msg.params.assign("KVWNUHXOHVRNXOMJWURSQLWBICQRMVQCFGOQJWQWYAEGZCUYSNRKSZFONSXCPPAIZYBHJKAPRHXQYDGKGZOWFZRYTUBZFJRUBEPC");

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
    msg.setTimeStamp(0.254910984743);
    msg.setSource(42858U);
    msg.setSourceEntity(112U);
    msg.setDestination(59986U);
    msg.setDestinationEntity(107U);
    msg.cmd = 147U;
    msg.op = 52U;
    msg.plan_id.assign("CIWTNGRVEJJNVZZLPZFILXALOCIHMRSTBMPLHQLSHRZLHQUALFSRYULZYHANGNKKEYOACOKYQJIUWMRGXQFSTXYPPBZ");
    msg.params.assign("JUCAZHCPNSNTKPZRFMMDUMGGPCVJTTPLJTQYSQGWAJBRQRZSBWRJBOVYDBTWYYLEAYDLUHAXFZTIFPNMONKWLKQODNSVBRPYYUXOPLNOGKDQXXIWJFCSYILMEUEXMZHEVVTYGKCSKUWNZFBYVEDHIDDGV");

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
    msg.setTimeStamp(0.0729589082802);
    msg.setSource(2337U);
    msg.setSourceEntity(68U);
    msg.setDestination(62213U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("HNELLWREGZAWDJOHYQTVPTVURHOQNEGTDAAHYNELPPYNKZASZOIUHCNVYOYYOXSQCJMGZDSUMCQMEZDFOWPQSUBVUGRALRXFIILBAVSTSICXIFFXBFOBGHRKRCVTUGTBHZZZPDIMUVNPLDKNQHMBLMLNOCJKEKBGJJWXUJJQKSEYMAWTQKWRTWVNAPFRKXWTFEUQFPPDICLIPDFKKMDFMLJA");
    msg.op = 156U;
    msg.lat = 0.748581571416;
    msg.lon = 0.498577261664;
    msg.height = 0.315137657074;
    msg.x = 0.82369800435;
    msg.y = 0.129106324836;
    msg.z = 0.0141112034697;
    msg.phi = 0.560877821066;
    msg.theta = 0.195785658043;
    msg.psi = 0.195115729929;
    msg.vx = 0.545639408604;
    msg.vy = 0.905548389714;
    msg.vz = 0.486154477931;
    msg.p = 0.33994091922;
    msg.q = 0.259175754442;
    msg.r = 0.861911950604;
    msg.svx = 0.0458579696356;
    msg.svy = 0.759884812039;
    msg.svz = 0.129279381529;

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
    msg.setTimeStamp(0.417855604388);
    msg.setSource(44067U);
    msg.setSourceEntity(212U);
    msg.setDestination(30297U);
    msg.setDestinationEntity(249U);
    msg.group_name.assign("VTSVREMTYPSPQOUHKBUCJMQSWLHJHTDVDALZKC");
    msg.op = 223U;
    msg.lat = 0.295589172438;
    msg.lon = 0.381760871983;
    msg.height = 0.826585224853;
    msg.x = 0.838862341312;
    msg.y = 0.425642589515;
    msg.z = 0.429382514933;
    msg.phi = 0.129665988645;
    msg.theta = 0.994106423169;
    msg.psi = 0.492584934831;
    msg.vx = 0.488178780757;
    msg.vy = 0.354916071802;
    msg.vz = 0.621956500697;
    msg.p = 0.986302632272;
    msg.q = 0.099346129824;
    msg.r = 0.572359202938;
    msg.svx = 0.173611047845;
    msg.svy = 0.0131697939471;
    msg.svz = 0.760918196213;

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
    msg.setTimeStamp(0.038406848045);
    msg.setSource(19112U);
    msg.setSourceEntity(244U);
    msg.setDestination(12299U);
    msg.setDestinationEntity(118U);
    msg.group_name.assign("YOXUFWMCQUEKXMSPEZGZXJITEASNQOKAIZNSCUJGLSWVWFBJQLVDMBRBQDMLBAWLFEQRAKIRNKBYROCOYAFAHFLUSHDTKOVDLPBRXGIJHPDWOPUNYKXJWVLKNZHOIWTAET");
    msg.op = 88U;
    msg.lat = 0.529012927148;
    msg.lon = 0.847238082647;
    msg.height = 0.240752800074;
    msg.x = 0.906119375495;
    msg.y = 0.205956041632;
    msg.z = 0.510055336551;
    msg.phi = 0.89486003346;
    msg.theta = 0.0572149891599;
    msg.psi = 0.726933178824;
    msg.vx = 0.56268199431;
    msg.vy = 0.35156197174;
    msg.vz = 0.221542743966;
    msg.p = 0.680714195003;
    msg.q = 0.708211809366;
    msg.r = 0.183355565234;
    msg.svx = 0.46298812373;
    msg.svy = 0.411115799835;
    msg.svz = 0.551925369819;

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
    msg.setTimeStamp(0.99694900914);
    msg.setSource(4190U);
    msg.setSourceEntity(47U);
    msg.setDestination(2437U);
    msg.setDestinationEntity(88U);
    msg.plan_id.assign("EASLVZNFXXQPFQHIWTWHECDQGMVGIUKYPEJEIOPMWUHNKZGJTRJUFWVPSCZPRUVWYRSAHMABECADZSRTPDQROMASRLEFZUOTEIHNHBVSDAPFTLHNLNBWVMNEORMKXWTNJSOLKJYPMKGAJUEIJYWARWYQKNDEOXGHKBJYWBABYCDVB");
    msg.type = 41U;
    msg.properties = 116U;
    msg.durations.assign("NRADHFDFIDVOLNNLJFNUSBYGGVUSWNSTPXSARQLMNVIVFGVTMPGKKSIWFHROFIYMLAAQZCEIGWUMBUADHRPPXQTMQBRVWQSKOXIQCCDCKYKEXCCGPBVNHHTTCZREKJQUKZBEJJTMXFMUMRZYEQMGLIOTFWWESHBPRFLTEEXHDJGVYZAGSEPLOTOYIRHSQDHPUIYXPROABUJQDWNBWULBJFZCKDAZKPYGOXXAUNYOCOKEVWNVJXWDJALZ");
    msg.distances.assign("OFERSHHQXKGMUDPJDARFZMROUEPNWTKJLRYQZULMXOICPMLQHNCLZNXYFGZGKSARSERUKFGSBOHTNPTEUGTJIZWHAZS");
    msg.actions.assign("SDYVQVQVJSZBQDVMIRPWRLXZMXLOPUACSNYLCEAWCTLRMSBFCVIDKM");
    msg.fuel.assign("VDXZBFKYABLMLVKBYHPDNZSGUFNDKQLQZIFMKEARMHNGHYITDBCOXKIETQSURRCXZJXLDOUYUFSVAMFRGSOMDAZIINJULAHWJIKWUNZMWVCLDBJNFWEGTRHCQPAFRHGFUBSSBYEXGPGQPVPGONJZQLAOCCOQEPSWNOBXXCTIZPWA");

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
    msg.setTimeStamp(0.0209224775345);
    msg.setSource(29460U);
    msg.setSourceEntity(4U);
    msg.setDestination(32995U);
    msg.setDestinationEntity(5U);
    msg.plan_id.assign("RFCOMGWXUCXQUZAFZFQWDGSVJELFBISDLKYMMYIRRSYDNVCMGOSOFSTZGAPNPEKEMDNWFTKJYEWEAYZVKIKPHHZKWQGYLACIQOGPUOFAELDTTMVWHHOZYLRGIIGPVYBOXUNTVICDBWVYAUEQNNOGSQWCNXUBBEPJU");
    msg.type = 12U;
    msg.properties = 254U;
    msg.durations.assign("RTOUATDRHSNAIPHXUGMHFUNNOIUKJYXRDIVWQADPEIELFZGRKOVXVNSBNDRMCUBKCVBEPWGCKYCSUDBRNTOVCHIGHUEHYMQSCLYKWAPJDELIOHMENXPCRMJZHYPSI");
    msg.distances.assign("KBBKUFJBGDEQFQPNLTUROXRPPPPPBKGFAEJNOOVHWACJTAICYIUELWMSWZXGGIARGBFZZSCVMEJKJHCZHNTVTNRNWKUQGODXEOIDKKAYZPJVBQVPLLLTKJWPTYGFMUSSNYNZGDDUWJHRBRIMSLSTIFQWATDWTHVYTOLJEZHCMEBQDUEORGGMVLWXQHY");
    msg.actions.assign("MJFVXOFETIKVBCOOWKIGA");
    msg.fuel.assign("RCPXIAEDMTELURRTVTSKBAGQKZQEWFKIZEXXULWBFWVDHVO");

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
    msg.setTimeStamp(0.181331990697);
    msg.setSource(50876U);
    msg.setSourceEntity(200U);
    msg.setDestination(60068U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("EWVZLTEAXWYYNIBNPEXVJRYECIADQ");
    msg.type = 161U;
    msg.properties = 118U;
    msg.durations.assign("PSORVFRMMITGZERPKBYVYXWMHTLWGOLWQJNWDHNUABHQQHFAEOGCGMXHVGHANTYBLHTPZRUUTQSZEATLOUZTBPKFEJMJKRJDCWPIYGQDQZPQSCVYSGMLPDJCCGROSLNZRFJDGWDVAIBPWIIXJJYDFRBWXQMNCALNESJAPMXIIVQLFXZMEXCLHURDFYTVASUPKSOBTXKECKVVMFDYOQIANBLNHNESYKKRKZOFOO");
    msg.distances.assign("UFKFAOSPOQALDVDEIXAIZYBWDHFZYJRJGFMFKCJJPPHDKFWSNQFCFRSAEXQVUYQUCVBGHAGAKBNZHWOMTRWHMLWZLQQBTTARZDYBLYUVMIVKUWZCTQWINOZLSRPHODDKKSRWCHEGJIXGNDW");
    msg.actions.assign("OMHNGBWESPXTCTJIQYUUZINDNCZSNHPWQIDIOERDMOXYPSQTQNGVRFXOMUJFLEGOOHXGCBSZLVTLGFYHUABHYLWC");
    msg.fuel.assign("GEFKZFRSLQVZYIBEQEVJDPXQHWZABZMXKUGNCYTYWZRFHHUZSFUYSOFZMLSXFDBNQIAIAQOSQODRXNZHKXOVWIJYPTNVPMYGGFDKSSJFGDHRBURRBMWBLLBJSVLWXCBEMLNXTEAICKPICWTUNIDPCSYNVTHAAKJHJDHLYVCQRNMJGUPDOBAQPRIFHWXDCVPLMJYOLTMCRTHUVKPVAIKWENEAGYCMERTXQBDPMICOWOGOUFGJKKUWQTEO");

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
    msg.setTimeStamp(0.127171083717);
    msg.setSource(63956U);
    msg.setSourceEntity(175U);
    msg.setDestination(46882U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.920572342359;
    msg.lon = 0.758376846438;
    msg.depth = 0.415261586773;
    msg.roll = 0.657694249544;
    msg.pitch = 0.695176808145;
    msg.yaw = 0.624963911865;
    msg.rcp_time = 0.689270453609;
    msg.sid.assign("ZOMPKCKMPMSQELCGYEJVIAVCITWYVOKCOKZHYRBENNXMXQSSFKJXHTEPTSCVBCFKMHMYUJGJIRTBGUPDWFEXADHILSQTLLAXQHASBEJJJQNCHPHFGVUXARVVLRIWGGJJIIODVSUCYWBKTMNYDWFSLOWB");
    msg.s_type = 143U;

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
    msg.setTimeStamp(0.769313881686);
    msg.setSource(61017U);
    msg.setSourceEntity(14U);
    msg.setDestination(34052U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.864740298755;
    msg.lon = 0.0947760271551;
    msg.depth = 0.171878525806;
    msg.roll = 0.454932580902;
    msg.pitch = 0.240495105204;
    msg.yaw = 0.95275127313;
    msg.rcp_time = 0.821841222991;
    msg.sid.assign("FLESFXYMXVHXUHIZMWVPVBVRGSZYTTSWVJZCAFWWXHACVQIOFHRFYOPEAYBUEYQLHUKCAJUNGGXVICSMMRGCJRNGSSEGRAVFUJZKMXEPNZNJJUNBFBOEZOUKNVAJTRCLDWRMMGBJOBIJGQDXRLIATFNQGLXBTTHILDKYWKKBXLPPLRTIVZDECQEDBCTFCWQDPIQHNIWRYOA");
    msg.s_type = 184U;

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
    msg.setTimeStamp(0.535230245883);
    msg.setSource(61044U);
    msg.setSourceEntity(200U);
    msg.setDestination(8036U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.332350244309;
    msg.lon = 0.868199731953;
    msg.depth = 0.972293984504;
    msg.roll = 0.173987189479;
    msg.pitch = 0.0911107965746;
    msg.yaw = 0.589051791607;
    msg.rcp_time = 0.00483964314931;
    msg.sid.assign("MCJHFCEWLVBCZILEQPVNABCHMZAGUXRDNCOWNPOQBAXIIXDZLGWUMLYXSDFDZEVBHOHMKEMTJJAMXRIQUOATJMIADSZERSRJGRFKSKQCTZTDSDIYLGXKULVNUOLUTBYFYZMVFJKVRFGRLDAOCJDOEHWIEXLYUOZXSHBKBWPX");
    msg.s_type = 171U;

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
    msg.setTimeStamp(0.581606929108);
    msg.setSource(45877U);
    msg.setSourceEntity(32U);
    msg.setDestination(9923U);
    msg.setDestinationEntity(138U);
    msg.id.assign("CUYXGKZRHVEBOOWDPXWBKEMEUIPOFKRWRFZCPZJPZGDKQDXBFDCHWGQAHCQOJBFAIPLYSPJCVTLIBUUZABIZEYIHJCXXDSVBEQVWQZSSYALZIPFRCGMYTGVTFXSGMZNCCKOFOXHTEDVJYMKNLSRRKSLXCMGUEIOEVABASVTASHLNJDQUGQDDUATWLAYRVYBTOMRUWOTNTFEMXNNYNZH");
    msg.sensor_class.assign("VYFEFBCNAGGZQMUBFVSYPPHSXTGPSBERTOFQOKOBZSLXSZBHKMLNZKEZUSCCNXHMPRUEWRIDONTNYGLAKERTDAAWDISOVRDICUQGKRBHYFCXPIHBGLSVZCKJLVQDVPJZZQWTOUUQTYTHLOYHEQCCMPUHUVWHEOIGMCDAAWGILYKSZJLVPUFKINHQTFKBDIADRWGAFTSJYJV");
    msg.lat = 0.727392589198;
    msg.lon = 0.302550464305;
    msg.alt = 0.838161290032;
    msg.heading = 0.463817503522;
    msg.data.assign("LCDSNNRLNFJZOLVAMGKUKHVNZMBWWAOCFGKAXZMBRQHOPJXINFWCOPEHQYFICHOEAIPRBUQDIDZVRMEKJSUMJLSRQQFZLKNKZYMXPFKTSEZATDTMHTICXLJJCG");

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
    msg.setTimeStamp(0.363163299586);
    msg.setSource(23710U);
    msg.setSourceEntity(143U);
    msg.setDestination(12901U);
    msg.setDestinationEntity(62U);
    msg.id.assign("JRMHTCSTGMKHTSDSQGFZQDMVFIYXOVHAXGDNNDEBFXLYYWNZRGPYIWPUGBVQRGSLBXZRJKCJXHWACMJAUAEBXHXVYJBKQVJEURKBEUEYDTWIVB");
    msg.sensor_class.assign("OQVIPCOPEGDTWAHAANPUTE");
    msg.lat = 0.754587193314;
    msg.lon = 0.0524192527331;
    msg.alt = 0.0560819384899;
    msg.heading = 0.507280418438;
    msg.data.assign("QTLSSCJMWJPLBFUNXCPTSGNEOWINFKSFOBDIXZXDEOFAQMDGTEJYGLVXERSKKUHKZOPULHIYIMWJJQWXPCSQNCIHDXUMFPLRECWDRGDDNMVZLVLQRWOHVZMIAZONRARNCRHSIBKHQLHWFGAXYCAKYSVCXYQHPEUTZSIXH");

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
    msg.setTimeStamp(0.416759301646);
    msg.setSource(30634U);
    msg.setSourceEntity(102U);
    msg.setDestination(9158U);
    msg.setDestinationEntity(210U);
    msg.id.assign("OYVQOFIMVUFRBJKQFCKPXSMQNRNJHZZDUMAHLBHGNQTHDLIZPWMWBSAKXLJXBGCUEVRBNUSYXHCXURRSZBVIJCWPIE");
    msg.sensor_class.assign("CCBWODCQZVBPDUQRVSYBIHKOYXGLBCKNSJQZKILKNFXLDQHFDXHRTAJZBFSMMWAGJYCFLYVVWPMVDGJOKJMUYTLYQBFEDZRANPSFVQIWNTDAZOEPISTPHA");
    msg.lat = 0.704329130147;
    msg.lon = 0.714992783631;
    msg.alt = 0.179999354866;
    msg.heading = 0.978069723188;
    msg.data.assign("AXJEZCQMOKIQAXYJYRWGYKQACBBSQIMGAWLERKSEEFFVRQCNOHENVTFZFIVZFBXZULFPNRLISGOIRKNXXYVMVOGVGPDTTCMLMGSOHUNZVHJZPUMREXWWUWJYYVVNFHTSDDTKNNZMBJPFGAIMAELPLDZJEDTAPPFCSUSOGBWZIXUYSIH");

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
    msg.setTimeStamp(0.0183678957848);
    msg.setSource(5264U);
    msg.setSourceEntity(87U);
    msg.setDestination(9275U);
    msg.setDestinationEntity(193U);
    msg.id.assign("QXYJKWTDYFBSXITCZAMUOUSDQMHETEGWO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QLJWBRQTOLBHFBNPPPNAZMGHBJCVFFQZJHWGEBSDNXJDYVFLYXVZPZZXHDLDAQMFEBRRIRUHUBRXFPKGCQQFCRZUPMMLIYKTHFUCNOSMVBCSRGIXPKBEYFCNP");
    tmp_msg_0.feature_type = 141U;
    tmp_msg_0.rgb_red = 115U;
    tmp_msg_0.rgb_green = 76U;
    tmp_msg_0.rgb_blue = 11U;
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
    msg.setTimeStamp(0.836882757892);
    msg.setSource(34070U);
    msg.setSourceEntity(211U);
    msg.setDestination(42198U);
    msg.setDestinationEntity(133U);
    msg.id.assign("XUXPMKVJXYCRVVOBJXUJAFKPHEICUEWYFNVGACZPSVAQLMLCILLEBJSOWTDIZQZZTWTJQGNTHWEHZRWZXYPRDMUGPUGOJNBVDXRMNQQXUGEMOIEDFHUGYOZZSDPSRDBYBKIGMESDNLZLFBPPQJKLLEKAFSDISGNKOMTQMWTHNGCNJQWVTLVGEZOKDCCMYYRFCBUNKBXAIHQAOIAICNTJRMVU");

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
    msg.setTimeStamp(0.482006978428);
    msg.setSource(62382U);
    msg.setSourceEntity(219U);
    msg.setDestination(9328U);
    msg.setDestinationEntity(53U);
    msg.id.assign("LXUKSISMTWMHEQWYHZCGWPLZGVNZODVLEXULPSWNKBEZ");

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
    msg.setTimeStamp(0.000183331727275);
    msg.setSource(31568U);
    msg.setSourceEntity(172U);
    msg.setDestination(7333U);
    msg.setDestinationEntity(52U);
    msg.id.assign("CLOSDJJPWWTSKRIHXBNAARMIFLGFXRHCJVAZFTFEYENRPGSNKOZRMZQEBTTLBYVOWWXQYCSVRKUIJHTVINFKJOSOIZDXNYBUUUOGDIVQCTOWUXWXGQOQSSLNBVHQLFKMZNBIWIEAOPDQZXMUJVMYYERIGUPRAFKUDGY");
    msg.feature_type = 238U;
    msg.rgb_red = 158U;
    msg.rgb_green = 180U;
    msg.rgb_blue = 208U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.191469574826;
    tmp_msg_0.lon = 0.0178876414399;
    tmp_msg_0.alt = 0.0808449505747;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.553800719425);
    msg.setSource(4742U);
    msg.setSourceEntity(68U);
    msg.setDestination(18932U);
    msg.setDestinationEntity(93U);
    msg.id.assign("WWCYEEBYSMVEIQNHPPPVXIQQTULTZONBSEZAGNKCYEDGSAUNDJSYAKFAVKXTMCLDYVQWLNOFSSDUCKIH");
    msg.feature_type = 27U;
    msg.rgb_red = 168U;
    msg.rgb_green = 73U;
    msg.rgb_blue = 132U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.504833872374;
    tmp_msg_0.lon = 0.994045808548;
    tmp_msg_0.alt = 0.143318586422;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.712810805238);
    msg.setSource(61315U);
    msg.setSourceEntity(81U);
    msg.setDestination(21704U);
    msg.setDestinationEntity(107U);
    msg.id.assign("ZMSUVKWKRQXMLWATUMKGNMECFDRPELFQSSBCYGZJUYLJXEDXPABNKABUEUFHPCZNBMRYEKYZBWTQGOHICWZEBGBENICPZOXWEIPWVQDYKTJNQDMZHCH");
    msg.feature_type = 251U;
    msg.rgb_red = 105U;
    msg.rgb_green = 124U;
    msg.rgb_blue = 172U;

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
    msg.setTimeStamp(0.500421150493);
    msg.setSource(26497U);
    msg.setSourceEntity(234U);
    msg.setDestination(50368U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.0118289504916;
    msg.lon = 0.741824055722;
    msg.alt = 0.995230424889;

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
    msg.setTimeStamp(0.582875392816);
    msg.setSource(28027U);
    msg.setSourceEntity(186U);
    msg.setDestination(21737U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.483350630072;
    msg.lon = 0.50787137138;
    msg.alt = 0.948057703164;

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
    msg.setTimeStamp(0.825603312196);
    msg.setSource(24360U);
    msg.setSourceEntity(170U);
    msg.setDestination(62802U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.0715023070961;
    msg.lon = 0.13203979595;
    msg.alt = 0.511003129568;

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
    msg.setTimeStamp(0.0375928894463);
    msg.setSource(8722U);
    msg.setSourceEntity(57U);
    msg.setDestination(8239U);
    msg.setDestinationEntity(57U);
    msg.type = 212U;
    msg.id.assign("UWPYORVLSOOWTGVDAMFSAJMUVJBCMRKZGZKZUOVWSZPPTCDWOTENCKSGUICBHKLIKNLAQKURDCIWNTDHNUVRICXOPEIBDLXADTTZWFKBMJDNHSRJLFVPOOYFGRYXMQEEJCYKOFHCGWKXXTQJMBHSSEUESNPX");
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 234U;
    tmp_msg_0.value = 0.646978480301;
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
    msg.setTimeStamp(0.654600924708);
    msg.setSource(45414U);
    msg.setSourceEntity(205U);
    msg.setDestination(40483U);
    msg.setDestinationEntity(45U);
    msg.type = 67U;
    msg.id.assign("HXOCLDWTNEAHWGZXAEIIRYMKKYULTWVNQSXTUEMCOUKDRRHMSPPNXGFYLJKLBGMCPNPTBWPQRRSHRIHGIWVSNQOKTNEKBAHTLDKOXYOBBZWIBEDIZKSXRZHTEMFOAFQKNAFVVXFSLNUTZGBOJVCFJVBXWFPNXGEZCZZQSAQWODUIQCIETJMLPYEUFGZSIWBOVUIPYJQPSHZLHYYRCCAQJMDABYY");
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.387646301087;
    tmp_msg_0.dist_min_abs = 0.353668177952;
    tmp_msg_0.dist_min_mean = 0.06085050158;
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
    msg.setTimeStamp(0.439158597494);
    msg.setSource(19208U);
    msg.setSourceEntity(33U);
    msg.setDestination(61225U);
    msg.setDestinationEntity(80U);
    msg.type = 9U;
    msg.id.assign("MPIMCTVIHBBVZESIVPZOIMEIPJOBQODQFHFRQAYYKSLNWZTTJRV");
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("EXTDHRWMUXCCAZSBLIKDUOTSIPGNIMGUBRYEWFCPKKMDBHRFLGLEZXMNWIBNYTMLQGTJFOORIXKOYVILNFNGYTNFQAWZUAQCMTQGEICQEEXHXZPCJPCTSMSPAUKDTSINUFZSYQDSOAGEORIDGVIORVAVXNVYHLFMZFTBJSXJDXY");
    tmp_msg_0.lat = 0.568292874723;
    tmp_msg_0.lon = 0.553540963596;
    tmp_msg_0.z = 0.470768491288;
    tmp_msg_0.z_units = 130U;
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
    msg.setTimeStamp(0.476144825881);
    msg.setSource(43696U);
    msg.setSourceEntity(59U);
    msg.setDestination(58039U);
    msg.setDestinationEntity(78U);
    msg.localname.assign("ULZRAZQOHRALLKOVGTMAHJFTPVHCFYVFNGOUYUVFGSRTWXMJGYRSWKKDNFIWUPUBDPQKHSSCAZXUNJUYDNOIHRZINIQNWOQYXESJZEMKDJJBJIVLYATVLNATQEMRLMWHCEZPRWIXCWIQEVWTBDUSZGHFTAJPJNKCIFSSNLGQRTQFBSKPIKSAMZXRDLKJUOWMF");

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
    msg.setTimeStamp(0.270910714652);
    msg.setSource(46712U);
    msg.setSourceEntity(156U);
    msg.setDestination(9158U);
    msg.setDestinationEntity(169U);
    msg.localname.assign("MZQNVXIAZRLPKVRKYGJMCRWGRSEYFIVOGEEZVQCHCJTKLUBADLIVYCAVLMDEHKZCWFWHXAGKKDQFMPNGRTTISDQBURPYATOBZDXHKRQYUCRYMXNSHZUBAUYXDY");

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
    msg.setTimeStamp(0.865644552385);
    msg.setSource(49126U);
    msg.setSourceEntity(150U);
    msg.setDestination(1352U);
    msg.setDestinationEntity(27U);
    msg.localname.assign("HVVTGLQSKIQDJPXZBYHKSAEFAUJXEXZOMEYZICJIPKGPATFXXGQDDPQOKBLINJCYIRYSTSEVOJNRMICFKNVFVMMXCMWLVJKFMGKSATBDTDWQHLKHUKPWWSGRVBJDA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZPATTYUXMJUTQQELHPKPVGSNDLXHFCHJXFEAVVNVNRCJQAYIGUAUWFSOATIHGCMYYCBLPOIHCJUQKEBYQQJHHITWFAHMWMDEUERTSGEYYGOEPKNJXEDFHVSXGOMLWOKXAGOUPRDXROKTMNNLZPBKNBFPDUZMBMXNVCOWNIVYUMQVV");
    tmp_msg_0.sys_type = 247U;
    tmp_msg_0.owner = 43166U;
    tmp_msg_0.lat = 0.230943812219;
    tmp_msg_0.lon = 0.214623744874;
    tmp_msg_0.height = 0.589743460273;
    tmp_msg_0.services.assign("UTCHNKXMZKSJYDUWVVZGBOLYDCGTTZMWZRQIYTCTCAVSGCHXLPUVYFQJZOZJJGINTPGALDEUIHXGXRMAWKGRETOIIJLPLRDYZEDEVDKWKSUFQNXEHNHSFAFDAPLPQEQBRBCB");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.437338501503);
    msg.setSource(46430U);
    msg.setSourceEntity(238U);
    msg.setDestination(59031U);
    msg.setDestinationEntity(107U);
    msg.timeline.assign("GIDNMSXKBAOGHOPTWQCBVIILEYULBAXKFDTQQDESWARFJHQHBGOWHWVFSDENFUAEFMVNRMXRGMANUEZOJVMZOTTRAKTHQUATLEEGJOEBCBFNIQPUOUSYQCAIPXNSQDSGDOELMPLHZFIGNPWAZACZCUDJVIBCGXKWVDXJOYJTFKKHIUYJHWPRHLPRCNTCZQPPUUBMZKXMKCVMBTPLLMYCJ");
    msg.predicate.assign("WEUYOYAMURAACWSDHMCTFNLGGVI");
    msg.attributes.assign("VWUAWCZEBTQKJUJPZGVIVJYEAPYTAAFYRJBNDDOZRLGHTPTFFNQPRVSSEWANUGQCEMAKIXDXWNROEOHCGFOTQBMZREMZAPYHKAZVIKPFBHKNCOREVMTWQLMIVXFGHGGSUSWUKGRWXUBRCYYJUKWNNMFLBXLIENQHQSAHXCBJMJBDEXTDHRPDEWAPPLJDSOYFQUOIZSSNFNTZYOFCZLHXULDOIVCSQTSGGXHIMLMKMYDKTCLZUDRW");

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
    msg.setTimeStamp(0.565443705568);
    msg.setSource(28120U);
    msg.setSourceEntity(191U);
    msg.setDestination(45512U);
    msg.setDestinationEntity(128U);
    msg.timeline.assign("VJUQSCWZNZSWRUJGUGOHEXANCQDMDZBQPNYGPJTLVRIXMUUTPEYTHFNQIEXKYTTBMQHSDIEBSG");
    msg.predicate.assign("JSGYAFHZQNNIRVTUONWMEQSTIVDOIGTBGTJGMCQAHLNUKLBZKQARYLUAPEDFZQVLJVZSVTTXQZPIOWVETXUSOCENXMTOEPGQKXCSSIFJQOWH");
    msg.attributes.assign("PDLLBFWRXGIYHHNSSSLTPZBYFKNSEIJOQEZIKAHHAYFFUCHPDACXDSOPOMNWNAUUEKSGBERQIPVLVWQVDRORDFKCSTJIJZQQAPBMKNNFWHDBTRCXRPMZGCMJRCCJT");

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
    msg.setTimeStamp(0.183905214403);
    msg.setSource(40755U);
    msg.setSourceEntity(174U);
    msg.setDestination(60749U);
    msg.setDestinationEntity(42U);
    msg.timeline.assign("USKXDEWVESUJBHXPQHUADRCHCKHZBFOOJQNJGJGPFQFVETNSQMQVERXFWVJWUDFGSWLORTFBSKEBTDRKMYDLQMKIGCOHY");
    msg.predicate.assign("NBTMNNTAWVNCTCMDDSLFSHXQLFUPGVFJXIZIPGXENJKTXURJLRVSIYCYQDQKFUZGYABHRWARUGJLOECQOOPNVEWPSNGHZZTMXGYABMANCBNMOVUKBVITDBUKSPSKAQGYWOBZYFQEDKCLZYIELHXLSAFZVORFHPMQCSMZPWJYPZEJDHTRBHDETIQYCOLIOWRBURUALQWJJMWHPMQKGKJ");
    msg.attributes.assign("PUEPSQGZBLHJHNGSOXRAKFRXUECLJTMNZHGVFIRYADIDJOQJKXOWPGPQLWGFGRXEXKJIBVRUSZ");

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
    msg.setTimeStamp(0.74756841246);
    msg.setSource(21649U);
    msg.setSourceEntity(37U);
    msg.setDestination(32867U);
    msg.setDestinationEntity(183U);
    msg.command = 171U;
    msg.goal_id.assign("QHMIRSOPDKLFEWJJGDJYVDGMXFAQXAUFGQCIETTLMPCBWNWEZXEBFTBEPPYUNURHADBILNLWVFGILMIOOXWXJVKCILECURZWJDDWQNRDSMMZRBMYLCVBVWTBFLCZAQQZKXSRPUMATHKPXZICSPESYUBNOUUC");
    msg.goal_xml.assign("LLBQMHHETTPKPGBDOZTCTXYZTDWTXBJLLRYPWYSENAVPZHPKIVFCHVSMGQWWKIQXFRGJGUVMKFMLGAETWJWJIVZHMGOLYNCHWLFQTSYUIJYUXUXHOSJZNFNCYQBPCEBOCENOCSSOIKIXMBRDQDGUIFFKLYRUUNRXAJZABNJGXPVMAFZMENRWCUDGKPDVXDQJQCDTUGHJ");

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
    msg.setTimeStamp(0.634698835266);
    msg.setSource(30071U);
    msg.setSourceEntity(172U);
    msg.setDestination(64979U);
    msg.setDestinationEntity(124U);
    msg.command = 80U;
    msg.goal_id.assign("VMKMAHBCUUCCJEXDPSVGIGAWNXTKLPJUNFJZTTAAKVEMHNNAIAJLEKBXLHBDYJRMQXWJPICTOYTLZFVALTQMQGUQWCCDEERIAERSBBDYOVGPDNQQRHWMTOSHKWQPDHOZWOFOJFRXMGLKUBPUDTIHYGYNYCWSJHVYFYDXLUMKFTFCGQOYYFZPUEXFNOORIWXUAPNQKFIELBONVLEZXZCSHVSBMWCGUERGDZZLKRRBIHBSRIJTJ");
    msg.goal_xml.assign("ENZRGNPCLVTXLLQOCDMG");

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
    msg.setTimeStamp(0.952587622505);
    msg.setSource(43407U);
    msg.setSourceEntity(193U);
    msg.setDestination(25077U);
    msg.setDestinationEntity(141U);
    msg.command = 169U;
    msg.goal_id.assign("JVMQGKVTZXODCWUQHEYIAYEZAROJOZSYGHXLSJYCLCHKFIKTALNQVANPVIDLLSDRZBEXLABFGGNUTZXWFBEZRMSEQMDBHWBFIKNHHWUZYPNBGBCDDVCWOPVIUQFELOGCIRJKXJMSOAQGHIYRHIMTBJFNRKGQPUOZTVX");
    msg.goal_xml.assign("FNVJXWEODPNMDACUICYNDEURHKLEVYXXNXAHATRKKGIGLCTZNWQQMCAKMCGTNFFHBRFLHPHZTPJLMYXCBFNULOKEZKSOFZHCEEGTDPJYKGLZKB");

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
    msg.setTimeStamp(0.888229936627);
    msg.setSource(11486U);
    msg.setSourceEntity(249U);
    msg.setDestination(58623U);
    msg.setDestinationEntity(203U);
    msg.op = 48U;
    msg.goal_id.assign("BOWALVTLKFGBHDFXVIACAMPNOBJOOJNYEZPELTQFTSFVHVIZDZRZMXVHXAJEOMKSGIPQNCLBFRKWJLUMWAGNPUVIMVLKSPGQUDWLZQUHIU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OFJRUHRGTCVEGZEQDUZJQIUMFTUYHIFLSJTPEHEEPYFQJXTHMCWYKNOGDBTKGOLGPAUPJRDZANOKYJDSXTAHYAKFNZIXZMHRMVVJKAZCIYIJMHQQCUOQQGMVOLXOLSRPNOJLZFKMLPOXQVICPWEZWLVLMPXVCBSHUCVBIXWMSKKDSYCFGDDWFZWEGBRAOWWHKMETATNQYDWEAXNNQRHFNBSIIEYBXPFBJCGALTSRZDRK");
    tmp_msg_0.predicate.assign("XKCBYPVLSAWAETQZEGDNKPFFIXDQUIJUKSRNTOLYHTPTGWQSBGCAGGPBFHAWASCYGSSUERJCXLJLROQBMFMGKQZNKLIKZNGW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FGLARGJRQVFVPHYBULWNWBQGWAVFLARLHQQJBOMECXDNYUOTXFJRPKGYOCNZBXJXDIGSACDTZAMSJZHOEGPCCEQQWAIMZRRTEXSWPRCKATITOTIDYSBSHVHEWINYYWDFYZTNSIKSPFUIFJUTOYHJOPCFLGQBJKKOSUBNDMZQLUJLXONVPOVIKUPDWLUCBR");
    tmp_tmp_msg_0_0.attr_type = 14U;
    tmp_tmp_msg_0_0.min.assign("BOCOSPAFRVGWARCAPPTPPGELGCDDIAGZJOXVQAAQHDSUVEHKOORSZHXISQFXFPWOXZMYAJRFTJKSFNCTNDECOPBYIGTSHGMJDIJLWVCNXNZQFDHKMWTFLYMZSJRLZYBZCSVGAYJPHZNXCOVRRKIUDTBPBPBXDTHKRATEFDCHYVKWUNKEUGYIUKWBRQMW");
    tmp_tmp_msg_0_0.max.assign("QDQZDJXXKSCXBTUAEDFHGWQSGVSKRALGVEMKVDSGSEZYNIWZDXTFLBSTYHTPPIJUFNOXLARZKRFOWCTAMGUOOGKNRCVAWOUL");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0394477630241);
    msg.setSource(33237U);
    msg.setSourceEntity(14U);
    msg.setDestination(18402U);
    msg.setDestinationEntity(186U);
    msg.op = 77U;
    msg.goal_id.assign("CHPMNPCSKKELPIVBPDXCYJGFLTTEGPVWMPXJMBYFIXAKBGHAUCSNTBIROSQJKQSQSMVOKWAFTIC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CJSYCWHQVBBGFHJIECIDICMPRXODMAANPQSFLOGMLHOWATZOGDDGAUMLYULZFKITTAYQJZUPLUBJRAJSSLZDDZJQSUFUWPETXNHGCFYAZSEXTOJPVZZJURVOFVCZODTSBXKNQRJUHKBMWCILZNRSBANLSQKKGXVIWEEJQMEUOIDENRHWPXOCXLYGWEAMYTGIKNPBYVBYWTTQRWIFVTMMNWKEIPSNVKAPCYBHDUVFGHNPGHXXRQOXFYKFVEBM");
    tmp_msg_0.predicate.assign("TIYNRFBAPBJNJOSTGJSVIEZGUMQPTWTFCOQDSLIHEZCTCDWUXTKRODKNEZITJMMDRKHWCMXMYAWBYAQHMFHLMNOJPZYHCZPEFSHGWUPOJLRVTVQUXLJKQLBKROJVVGS");
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
    msg.setTimeStamp(0.860208454136);
    msg.setSource(31685U);
    msg.setSourceEntity(208U);
    msg.setDestination(56671U);
    msg.setDestinationEntity(159U);
    msg.op = 141U;
    msg.goal_id.assign("UGQBWWFPZGRVVFUURCZXQLLKFYJNSKGWWTBPJXMOYYMYMHMOHOJROKOITZZZYBPFRZGGHDVMVZJCPELPJPTTBYYXUHJPAAWECNVBXELC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CTJWSMUMJTCHLVANDFCWDRFRUEMXIVCDBQUFIKHPXWBZDLEISYZLRHZKQJKYZZRBNFZVBESTQEFSTKAPYNRGGQCGNJYWLKJQCGTUYGJCDHPZAEETWGRGUMIVXBABIOPURKWMFOWKZHGNLHKSIWFYFIVQESNGEIUACAZPIAXRHXXOSVYOJTUMOTBMXFXDQDHUMNBNLCVKPXJVPAOLTKUSIJVB");
    tmp_msg_0.predicate.assign("PZFJGTTTMICYPMOQFWKIOZAHFWAJRTMETBWFCJKIFTNOVRBGZSIQLBOKWULLNVYBJRHRBDXJYTSYREXASMPQWEUUVAUIUFDNYZOQRIREOSSNXJMFACILCXHGXMLOYYBHBCPDZHDUKDKPHJVJUAULQBCAGEYIZEMJPOLQWXMREGCCPQFWTPLKQDVNKIDSGLVADSOVEATZKXVQRUMWFUNNOSSNSEMKVNWKXYPGIGZEAQLP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VVHQNGTPRGVPPCNNIYMTOFBYNUHUYYCBWIXZCXGPDXJIONKKGCPUNGNSDBGXVKJJLQZRWCOWVBOODTZMVTQMRIERLFSAFYRXPQANZAFZHAEJJPCVRRJFAUQKZTEHHHJCBUSEMQSOGZKRLOYDUHIIJIUXYWVUQZMLJAIFLPKABLCIFSPUUMLCQHDOHCGDBKOWOBSWDMKXIGWKYFVXZETTFWSDJQTXSALBL");
    tmp_tmp_msg_0_0.attr_type = 98U;
    tmp_tmp_msg_0_0.min.assign("FBRVULGJBOPXKOKWCIDAOAKKBEHHMNXGOATIGZRJJFDXYBWYPHMNVZCGICIRSKMJAGLZUQRBVTITIUVLJXPIUEQLVVUMODPPQWMYOCBOTDICFULJCQEHWEZYUYGVXLDWEDNTRWZLKRCD");
    tmp_tmp_msg_0_0.max.assign("WMNMVHJVRXUMKRWQBXIQDOYLPJDSYHISHQWKFYSSWCOGZYMREDBCIGZFPXXNAOKTXFQWFTOQGSWIEFCGFPEBLVLRJWAHKKYTUBLIOJUSXSWDANIBPUSEXJPJLEXRRHMLCBTNQIWQAOEZFNGXLPOHCVGVONMFHTUJVNQFZZVUGEYHVGKFRLCDM");
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
    msg.setTimeStamp(0.690168157699);
    msg.setSource(21348U);
    msg.setSourceEntity(202U);
    msg.setDestination(10453U);
    msg.setDestinationEntity(99U);
    msg.name.assign("ZYJRBQWCERAMFPAGZKLBAPVMCQJ");
    msg.attr_type = 202U;
    msg.min.assign("EORENJNXUWSTFUAQFPTTFQYJXEZQMLHTIQRXJYRMCEDBSIRHPHSCBPQIZCREJAWWVXNZYIPDLTABHGMGKGZGCQFLNSUUFID");
    msg.max.assign("URLDFYWWOHJVQZJPQIVTYDRTACURNMEWRKDHKESDKMBXFHFGAPDIJIOCEWDSNEUNCWATUORNZAJHUVEAJRBTZHPCLETVQEBXHKMFJWMXITSYZQNMXUFZLETLCKLMVICXGBQXIDZGJTNAHBGLLLDALJRACOEQYPOGQKVIGJZBCBZRCPVPNRODXYPVXSAOWTOBWHQOQRFYMCS");

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
    msg.setTimeStamp(0.973845750943);
    msg.setSource(45685U);
    msg.setSourceEntity(104U);
    msg.setDestination(43873U);
    msg.setDestinationEntity(106U);
    msg.name.assign("KAVQIVERYZOJRBYMFOVPHDCKWDPPSKFILOKGBYXBCQOJKGZAMLTNFTHUPECPSLUTNGJEHMRMRAIXIYOAMWYCKYOCZJUEBSKBSFTGRXNCPFNXQJWJOJKPHYRFHWVXBQAQZEINXWJNDOVWECOHLXFEYSTNGIYSUAWITBBVLTADWGFHMZNAOSWQPTDZVULIZDSCQETZXDEYDQTXUMAD");
    msg.attr_type = 124U;
    msg.min.assign("NHCUIEQHDBVSOZSLKADQCPEZGFROGGWMHRTWMVX");
    msg.max.assign("DCZGBALFCDDTXVSFSWVXBAXLBGOHRDCNNQYWNRMAHWPVJIVMJQHJNEYJYWFMBYPQWURDUCZAZEWBLTSXFVITYGQUEKJQMIGKUOCIOPRRIXTIKAFYQRMCEWPEGXBCASUWLZSTYOEXIZWZLOVVIQFAHPFSJKCRZFIFGPCGSZNHINPRLDEOWSUYAXBENKAKQXRDK");

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
    msg.setTimeStamp(0.645126819459);
    msg.setSource(20744U);
    msg.setSourceEntity(18U);
    msg.setDestination(48536U);
    msg.setDestinationEntity(191U);
    msg.name.assign("UVQXIMMJLYDJXOUHUWRQERCXBMSWTOEHKHPCIVRZDCLFCQHFYIAEOHKSAEK");
    msg.attr_type = 152U;
    msg.min.assign("IPQFEGHCJFYXSTHMSAMIPVGJLKZONTTWVQTWICWEKFHJIZHKYOYABWJPXUSKWNX");
    msg.max.assign("ENNMGUMNIJGDWXBQPXJLCVVDNXMEKHVJW");

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
    msg.setTimeStamp(0.0517263562277);
    msg.setSource(37509U);
    msg.setSourceEntity(179U);
    msg.setDestination(49775U);
    msg.setDestinationEntity(139U);
    msg.timeline.assign("PXYSGZKDCQGSVHGQVDHZTJLIJXTQSYZEVLNAILDECFYGVZIBTEOOWVAXGBCODIDTQBKPUEATPTKHCXKQUMFFUSKEBSNFUGUHFZCWFBRPWWJBLYKCVMUPBFVWMYBLMMTQZWIVMMRHHZJXRHNCCOVNYRDARIKRPXJPGEXTDROQLUSPJQOJJENYKNASGAR");
    msg.predicate.assign("CBZIZFCWNFXWTDYW");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("MAOIOZUSVDMYAQQLASTJWTBAVBPCNGJRBOPFVWYQRJWYSDIAXODMXCNEJFYRNISERLPRJXZTZUTLXAPPTGFMRGGIOYMCCOBPYUJTISGPQVCZMMHZGHKSSXPLTCHGMXDPQXLILVFDUQLQAXXZIYEZQBBDVGTFJWBELVKIYSKCNVEIUZDRCEZHGMZNEXHCVWUKDWNURTEHFBAEBHYKJUCVJWUINOLGBUANANPRNFKSHDKEFSDHQQ");
    tmp_msg_0.attr_type = 83U;
    tmp_msg_0.min.assign("ADDGFABZHIVGFIYFKKQVBZQSUEOHPXZQIYOCCNNTPXFMYOAQXEJBBYTFFETSPUHDOZYYXUPYRANJTHRLRCKDWSCC");
    tmp_msg_0.max.assign("XVTIPQZJNERMMHOMYUNYVPUSDFVFKGGRBNDFMDRQZBSEVDQPAOJZBLGZDJYJHKGLXYAUEVCOTUZCMHGC");
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
    msg.setTimeStamp(0.133170877081);
    msg.setSource(31321U);
    msg.setSourceEntity(157U);
    msg.setDestination(40966U);
    msg.setDestinationEntity(40U);
    msg.timeline.assign("VMTQQUXFPNOSVFLERGWOVCCDNAQPQNKQCFOOEIWMXBGAKVOSUTPNWZYBUWAWITFIPVPNJHLIZFPSNTMWQZDCPTBTGM");
    msg.predicate.assign("JTLDRFHMDEIOUXH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QLLHLLCSDNTTUYEKCUXWTXARJUYEXRCDTEXLLFGCKATLNAWZDWDZHUXAYTOHJHMQQYFKKPGNCWPWPNBWRKDQHFJSAQBNOHUZEMDGVOZVAVHUMABI");
    tmp_msg_0.attr_type = 152U;
    tmp_msg_0.min.assign("GIHLOUKOTNHMYANJWDZZJYGFUUABHFXFUBMXEYZOIWMQJTFYBTUYJRAB");
    tmp_msg_0.max.assign("XYSQLLJXLGPFBHXGZWXZANUMSOBKFLBPCPENFAYMGNJGTWVDWLIYLRRVQXIWQPRUKISLECFBODBIPSASHAZJLDZYKKOQWBOOYZFKDICGDWFXGZRYOYHNORQNWUHOKYPAVMRCQQJXSGIIZCGJTCYPKTTPORUMVFWBKUIWQAHNRSMUBUINJDJKXITOECTQGTSDPFMELCEHUQVWFAYNEVCZVHHXMRDVMJKURPJ");
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
    msg.setTimeStamp(0.896869856796);
    msg.setSource(9222U);
    msg.setSourceEntity(234U);
    msg.setDestination(23162U);
    msg.setDestinationEntity(77U);
    msg.timeline.assign("UMVINYZFCXWNBEOBTDHRXEHIRCGKENZVPUNKAZSOBFPSCUXLQUYVTMLLNUBFSUNINGWVJQHSRMJHIBXQGOZGSELDLKZEFYJDQPETZEWJAXWIRYSXCCCJDCKKGOT");
    msg.predicate.assign("OKLASBCZBTPNBHYPLZYUJEERJURFLWKLWKCXNORSTQGXSACRRABBQWEVKMTDXOBHDHMYTDUBKSYCSRGZIMDVGQCTQVYCHPHTKVZ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GWRVZRHVDCJJCAISFRSFIGXLDBQYMBIXTOUKSLQKDZTUNQREGQPFHHBAOTBBKNNXITFLLPFQWYSEEWXAMERSJURHKEODHGCPBMZQTKWZNQCJKQCNJLMHLOGYXESNWUYZFSOCASBEEAFCOKRDDXKXIDOZYHGIVDSPDVVVGMNZIJVTBFQPCROKUWAGMEKLIAMURFTPPVBLDHMPTJPCYGYJNXQXYAWWXJNYVPUWIOHT");
    tmp_msg_0.attr_type = 18U;
    tmp_msg_0.min.assign("JHTSQJNEAAQZGQYBRZYMDOVGLEKBRCYYIJXUHHVAOMIANCFBMHLVBLFTKGSTVMFCHIWADLXTZJMMOSYSPPPNJZKEPRXAPWKHGRJJBPUWVLCCWNUNMFGGUTJGRYKQEKDWFRZOPDDXESPMZJNCAYUKCGBELXTZNKYMWGEXDVDMBWCQXORYNQHOWXVVOTXFHGSKCLBEAPHNFOKCTQQASVI");
    tmp_msg_0.max.assign("VISJCJCUKU");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.701391008125);
    msg.setSource(15440U);
    msg.setSourceEntity(201U);
    msg.setDestination(48170U);
    msg.setDestinationEntity(46U);
    msg.reactor.assign("GIFDZEBOLXUMQRMKDKVRDSGBNFUFURCPNCRZNZLVVOKTPINBPHHJVJUROIGZNOGFRYCYSEPQBIVGWOENTNXFBVETNHCAFLMKOLAZYWSCAKVPDYDDRPNGXBSJLASMHFSHIIMZJWDSWOFLAWL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MLJFQPHLRUTKMXGNBPRUOKDPNRXSDBVKWHUOWDAEHAFJAFVZYSLDDTKOGDLCVCIKUQBHOELMDWCOQSNBCGUBIYTIQTLXZCQOTGFZHJOIBHMRPWEYUAAJUXVAEINWSWKFUNIDBWFTYPSNZYMCJZYNEVMPGCFLTRIKGVJRHAWPILHSGTUZAFSRAHNXFILVEGVBYCQNROKUHJKVTMEQBSEPTDA");
    tmp_msg_0.predicate.assign("SEEKFXCDKHSKTPHCMUYBQMGTOWYGCCBXBGNVIYYELNRTJSAVDHAQUSEGBWHYWRITMODPBOAXUBDFUXYQUZYIJIPJLPOCVRFOYVLDKGFQTMKNCBZFLNDPEWKEEYXKIHSZTMKQXMJQNPFOTOJMLDUXHZWYVIAQJAALBRUPCNLAGTBMHVWIHZNOCANUZEOCSRZSKWIFXLSJ");
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
    msg.setTimeStamp(0.345379900943);
    msg.setSource(33178U);
    msg.setSourceEntity(26U);
    msg.setDestination(7392U);
    msg.setDestinationEntity(43U);
    msg.reactor.assign("NJFCDBYRYEMHTOLTRJMEFSTRIOTDWAPMBXMMSPNINCVXUVWERBNRBGVDQOBXKXAVKADHYHXWUYCAATHFQCQCXHCCNSIOUZZZLKTSGOQZELMUNZFJJADBMRPRKOHFSWTDPZUKZGDWHJLOUGPTMFQIWMRGJNIESXHVERYKDHELANIUJNVEUCKLZQQVQAKILUNKJSKPECSALFLCBBOGIWDYQYMXVPZOPGQWTFBEZLX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MHUVDHJOPCKLQNEHFJILRXKSGZWBZNKCULNVGXABOIHRPYKPPSNXCQAQSKXMSFTRAUQPIGYKUCNJEGWFJVWBXNDPVWHWFKZXQBHZZLSQISRLRVZVTRAECNDPSFZVUJJGOMPZWFECWHOMXOAGBMYUIAKCLDTDOOLGVYITAYDEBHOXDSFQLHJGETYTIRL");
    tmp_msg_0.predicate.assign("RTNAUIQMZNKVNIRMRWVGVOVLJYEWJSTBGAYEBSAKBLIKCSAGYTZCYORFOSIQDXODUGTSCTDHIUJDMXZBKODRUHACUFOJZVKCJWXFVFAQIIPRDNATMWBJCBTVLYZORCLLLHEFIUXSWXHLFBYPKOAWQFWEPXYJISXHNXQQQEGKEIZCMMDCYGTMSDPWAYZUMGGBSCOFFQHHZDBPJQGDRMMXEAVTFPNGPUOPLKNEXNKVRVSUEPRUHZ");
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
    msg.setTimeStamp(0.814338196985);
    msg.setSource(19454U);
    msg.setSourceEntity(13U);
    msg.setDestination(8112U);
    msg.setDestinationEntity(58U);
    msg.reactor.assign("HANSEHOPJWRLPPNHKEVMKDVQZVGQMALXSYLNBKKQQIVTGZAOTCCUF");

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
    msg.setTimeStamp(0.356486681824);
    msg.setSource(35626U);
    msg.setSourceEntity(161U);
    msg.setDestination(44406U);
    msg.setDestinationEntity(57U);
    msg.topic.assign("OTQQPTIHEHTVZUQPDDEBRYDGJOHAXPGNDHNIZBSZOPCAMSSJTMVLOXUTDRGIGWSJAVBNQCEIAVKGPCHXELKYFACUWOWIWQWSEFCBYBYXJGBYMOBQCZQUNJMHVQRWPHOZDJCYLOUJRBVLQRKNFFNYDNMWHEEVZPIAFUXGZRXZLLMSRPESXHODRCUNJLASSYOUZVGCCRINTFIPTXYKLRUMSJKQVAIJIEDXKWXAZKBKEFDTMFLPGYHN");
    msg.data.assign("AYBVPWGHUARYKCCAOAQFYIEUWJOQLVKCSANKUFHOPEXXOOKMAEWQNUXMAYHTWLXZDLRUXVYJGERSKKCSKLHRXQZFBJVPVTBDETEGRVMIMQNEITKIGXCPWVSGIQDISMSHESORHFRNWOHVWFZPISLDRNLOZZZQMBD");

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
    msg.setTimeStamp(0.594538856485);
    msg.setSource(32935U);
    msg.setSourceEntity(181U);
    msg.setDestination(7327U);
    msg.setDestinationEntity(103U);
    msg.topic.assign("JNRMSMIRODVYITKIRZOCJMHJVBYKZAZVHLKSSCAZIUWUXENDLLJNLUEAOQSQDGMQGGUYQRGRCPFALNDXEZKQMUN");
    msg.data.assign("VEYWRJPLNHKJGO");

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
    msg.setTimeStamp(0.332887633569);
    msg.setSource(42493U);
    msg.setSourceEntity(130U);
    msg.setDestination(17661U);
    msg.setDestinationEntity(106U);
    msg.topic.assign("ATYFIBGBDELRCNIQVXXGVRFPWPULVLWWGVPUKQJISYEVMDYRIUOXACJIBNBRVAZZCHSSKPZFXFHBOKDPCUUC");
    msg.data.assign("GRDKIPLJCBYHSBHROTJMQAGJXYUYHOCCIPOUAVAYMOKYXKFSUVTMBDYCFVVOVSLHHOQJPUSGCIZKAWKOS");

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
    msg.setTimeStamp(0.1276552788);
    msg.setSource(58818U);
    msg.setSourceEntity(140U);
    msg.setDestination(51755U);
    msg.setDestinationEntity(45U);
    msg.frameid = 88U;
    const char tmp_msg_0[] = {37, 37, 111, -118, 2, -9, 32, 64, -81, 84, 124, 76, -124, -12, 46, -57, -17, 35, 76, -95, 13, 124, 110, 82, -11, -75, 115, 99, 14, 41, 90, -13, -57, -31, -20, 115, 124, -122, -94, -52, 119, -11, -23, 29, -98, 96, -1, -2, -93, 19, 88, 38, -90, 88, 125, 46, -16, 71, -6, 53, 13, -119, 94, 114, -17, 68, 4, -35, 35, -54, 122, 99, -110, -48, 96, 85, -93, 77, 38, -73, -8, 24, 6, -43, 40, -75, 2, 71, 7, -48, 72, -106, 125, 106, -67, -76, 32, 45, 48, 64, 4, -84, -45, 12, 72, -128, -11, -30, 80, 49, 94, 101, -66, -97, -106, -111, 20, 4, -16, -28, -78, 108, 68, 107, 74, 39, -127, -90, -92, -38, -25, -54, -8, 34, -34, -54, -38, -45, 85, -84, -38, -105, -17, -99, -101, -65, 72, 80, -65, -29, -114, -118, 85, -1, 91, -100, 88, -87, 59, 20, 36, 72, -31, -92, -99, -52, 88, 108, -1, 19, 79, -74, -3, 38, 8, 46, -52, -6, -19, -29, -109, -122, 119, -108, 88, 46, 99, 36, -43, 16, 66, -45, 119, -118, -86, 49, 81, 114, 82, 51, 109, 57, 93, -119, -81, 105, -102, -2, 77, -57, 64, 88, 60, -52};
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
    msg.setTimeStamp(0.9442212513);
    msg.setSource(19054U);
    msg.setSourceEntity(153U);
    msg.setDestination(49642U);
    msg.setDestinationEntity(244U);
    msg.frameid = 132U;
    const char tmp_msg_0[] = {-34, -73, -108, 37, 118, -70, -79, -73, -72, 126, -37, 111, 39, -6, -117};
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
    msg.setTimeStamp(0.836279527915);
    msg.setSource(20311U);
    msg.setSourceEntity(63U);
    msg.setDestination(65190U);
    msg.setDestinationEntity(211U);
    msg.frameid = 62U;
    const char tmp_msg_0[] = {-116, -17, 2, -1, -29, -24, -8, -13, -30, -37, 29, 107, 24, -74, 84, 71, -92, -68, -88, 31, -70, -124, -96, 56, 1, -24, -107, 98, 35, 119, -58, -112, -118, 79, -111, -107, 103, 4, 103, -37, -8, 107, -111, -116, -66, -108, 77, 10, 27, -59, -38, 99, -115, 54, 11, 56, 69, 66, 90, 4, 101, 96, -45, 72, -40, 26, -7, 39, -86, -92, -4, -90, -71, -105, -16, -90, 117, -7, 0, 102, -8, -67, 4, 90, -100, -69, 42, 45, -18, 51, 63, 38, 69, 81, -82, -121, 43, 84, 28, -73, -100, 0, 68, 54, -110, 44, 9, 55, 112, 76, -19, 81, -125, 117, 126, 123, 52, 10, 120, -12, -114, -128, -115, 73, -128, 17, 20, -19, 113, 1, 68, -126, 96, 44, -71, 112, -99, -38, 23, 25, 44, -100, 123, -25, 92, 6, 25, -10, 20, -106, 107, 46, 22, 114, 82, -10, -35, 32, 64, -79, 74, -123, -92, -31, 91, 16, -82, -110, -28, -34, -44, -104, -102, -24, -93, -66, 21, -122, -10, -109, -56, -24, -113, 24, 52, -76, 113, 101, 104, 12, 16, -125, -26, -22, 104, -5, -101, -85, -23, -56, 109, -91, -79, -88, 90, -87, -104, -74, 76, -26, -112, -18, 76, 12, 42, 113, -71, -19, 55, 124, 27, -24, -55, -7, 93, -75, -42, 121, 124, -43, -25, 93, 68, -98, -12, 112, -44, -27, -121, 51, 100, -39, 26, -97, 100, 51, -121, -89};
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
    msg.setTimeStamp(0.178716312324);
    msg.setSource(38989U);
    msg.setSourceEntity(204U);
    msg.setDestination(62437U);
    msg.setDestinationEntity(37U);
    msg.fps = 78U;
    msg.quality = 153U;
    msg.reps = 35U;
    msg.tsize = 116U;

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
    msg.setTimeStamp(0.283286890548);
    msg.setSource(837U);
    msg.setSourceEntity(114U);
    msg.setDestination(50275U);
    msg.setDestinationEntity(84U);
    msg.fps = 148U;
    msg.quality = 190U;
    msg.reps = 247U;
    msg.tsize = 53U;

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
    msg.setTimeStamp(0.610780527489);
    msg.setSource(48598U);
    msg.setSourceEntity(89U);
    msg.setDestination(38945U);
    msg.setDestinationEntity(140U);
    msg.fps = 52U;
    msg.quality = 217U;
    msg.reps = 75U;
    msg.tsize = 81U;

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
    msg.setTimeStamp(0.427716206978);
    msg.setSource(15910U);
    msg.setSourceEntity(42U);
    msg.setDestination(62945U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.895111407948;
    msg.lon = 0.0473222346414;
    msg.depth = 239U;
    msg.speed = 0.96633780418;
    msg.psi = 0.99647795694;

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
    msg.setTimeStamp(0.662999404797);
    msg.setSource(13179U);
    msg.setSourceEntity(231U);
    msg.setDestination(54298U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.980734474946;
    msg.lon = 0.875663608549;
    msg.depth = 71U;
    msg.speed = 0.255046051217;
    msg.psi = 0.570315111794;

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
    msg.setTimeStamp(0.182330900312);
    msg.setSource(48648U);
    msg.setSourceEntity(12U);
    msg.setDestination(16849U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.510961352316;
    msg.lon = 0.925907704087;
    msg.depth = 109U;
    msg.speed = 0.356851661819;
    msg.psi = 0.0311151200699;

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
    msg.setTimeStamp(0.743488344335);
    msg.setSource(34166U);
    msg.setSourceEntity(234U);
    msg.setDestination(58296U);
    msg.setDestinationEntity(108U);
    msg.label.assign("AIZMAFIRGODUXHUYAVQBWFKZQZKNBMJNPCJBYPOQJPHLHVAFZJPQXZVTQGTDLDPVYWEK");
    msg.lat = 0.016244407292;
    msg.lon = 0.316696630372;
    msg.z = 0.518965227975;
    msg.z_units = 110U;
    msg.cog = 0.347170946272;
    msg.sog = 0.653590807325;

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
    msg.setTimeStamp(0.140736352638);
    msg.setSource(5538U);
    msg.setSourceEntity(171U);
    msg.setDestination(48206U);
    msg.setDestinationEntity(4U);
    msg.label.assign("CDZFWUZNSRLDIBVQVERVFKRDJCNGPPUXCPMNDPQBQPLDIOHHCNGAOKOEUVXZXXBNR");
    msg.lat = 0.789212798335;
    msg.lon = 0.179521361048;
    msg.z = 0.32014519653;
    msg.z_units = 32U;
    msg.cog = 0.0827755928191;
    msg.sog = 0.635943052233;

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
    msg.setTimeStamp(0.548957093729);
    msg.setSource(20763U);
    msg.setSourceEntity(102U);
    msg.setDestination(7251U);
    msg.setDestinationEntity(234U);
    msg.label.assign("ODKAYZGNVXKYHJKIUIRPPMVINCYXDUTDHDMBFYIEPVQUNFCXFSAHTZCKXNJPBOSLRGYHFRGUJLFNQIUMANDSUDOGSLGTPTVWLTZAARKSOEWCTOQSEMJEUPVOPQRAOGBFZQATIWBPZEZPVCLKVHWYMAWBNLDOEXTXECMDGHJBVXGJWHISHQBWBMACWOPKZDEYJLVYGRWQIRFINHTQLMUZSJNBTYURCIUXMSGJCZVXLFRXL");
    msg.lat = 0.657812710922;
    msg.lon = 0.461565541068;
    msg.z = 0.856775360953;
    msg.z_units = 11U;
    msg.cog = 0.0381445321776;
    msg.sog = 0.261742046821;

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
    msg.setTimeStamp(0.327809972967);
    msg.setSource(45981U);
    msg.setSourceEntity(80U);
    msg.setDestination(13090U);
    msg.setDestinationEntity(201U);
    msg.name.assign("FBOUCLBQKBYUPICYVLOPZRJPXIGNO");
    msg.value.assign("UVLRSELMYPYEHFDAELAAHTPXLMPOPLUAHFUMXSBXOWDBOIUJVFJUVUGWDKHEKEYIARK");

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
    msg.setTimeStamp(0.964016424475);
    msg.setSource(45455U);
    msg.setSourceEntity(13U);
    msg.setDestination(11330U);
    msg.setDestinationEntity(128U);
    msg.name.assign("TIBHIPBCHBOJUKEMXYUKNVWHDAHXIXQSIADENAYORKVJKCPX");
    msg.value.assign("MBPXGHCQWJVFWKWGUEZXBIGKONNXQIUAPWIYORVQBWKVAOSAIUEUYNZJWDUFPFCBWSVDDRECXYXMPLZBXOCHIGFIYDFNMFROB");

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
    msg.setTimeStamp(0.490379549549);
    msg.setSource(34049U);
    msg.setSourceEntity(162U);
    msg.setDestination(44737U);
    msg.setDestinationEntity(195U);
    msg.name.assign("XDYLVYFTHFERTHJOXUOPIWXNHPWSFXZYMWOWORNKLXPFUQIHBARSTAPQRCNPKMCKKUGGSDVDCJYWKIEJJHBSSEBLBFBTAZDCKFCGIIUCTNLUDRHLIAPXAEVKOQZTGZPHTROLZHUHZHEIQFVKBDTBR");
    msg.value.assign("FQEWGBNGEFZJQQWLJNJMQLVPPZHIJBGZNHHUAGORHTYEVOCPIHGBDWUWZPUHBPAMLWZQGSFYGIAOBRSPBLTSXAQVYDTFZBYSITVWXTXVNKYAYQTFMZPHSMOYZRRNEKJJCOAMNTAXBLBFXWLVCCEQODMKPXDERIOBRGTXFCRWIXLZPLSIKMSNYNQOTIMLDUJDTUVJXNEYLKVHOIPUEADZSUKCNDRUAJGQEHKUWCJIOCY");

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
    msg.setTimeStamp(0.171744152935);
    msg.setSource(64228U);
    msg.setSourceEntity(137U);
    msg.setDestination(37250U);
    msg.setDestinationEntity(50U);
    msg.name.assign("GVSGIMWPXGCLOFIAECRKTKROGYMXEJPJNYNBUSLAXLADXVVPYQQPOBGFOFHMXLZVVQAMFMIJXAGKURZURKPJQDEQJRWETKSQYHOBMDNPSKYYXPZFCNZBSMINBPPDFVHTCGJIVRNDWSWLUKMRTONEAZMIFGWNWJDURLDSXLCTIQOOYEHYTTLXZSBHZIDZBKEWIWSPZGAFULHWUFIBUHXHUQCTCKWCJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ILNUQSYYBJRWTAYOFRALQHBANCASXCBKLKBBCOSPSCDFDEABMDSJRXHKNEHSFVVAEGBPJDJJONZNPSNSIEIFOCDRBXMXWRX");
    tmp_msg_0.value.assign("XDRMPUJGZOOMERHHAHDMQLZOQWINISWFNRECEMBXUZCCCTXVUAADEVXCQFUTWJGUAYFREDTKWQKYQNUTYIKSKZIOCDBHFWNXYIZJQYMPSYJWKIGQGZGEDTHL");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.904664410207);
    msg.setSource(39816U);
    msg.setSourceEntity(253U);
    msg.setDestination(62030U);
    msg.setDestinationEntity(101U);
    msg.name.assign("BALPETYYTVMJBR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YWPDPNVSNUAHFTYSLNDVHZZNCLBSJIMIIXLDMVIWPNAKMMTGOGYGPBZJBHDTXMBCFFQVUYPSPJACXCLEJWEAVDPFKOKUXFZYEQMIZDKUZJVMYKXHVOTIAAZOETOFQCTWGCURXTGLUXNOHMFQODKGFJYCRJKZMUILPERBQQDBT");
    tmp_msg_0.value.assign("QGKCQTDGVXQXTRFJFALOEXRSFIOVKMGCKWCVGVBKAFDBHPIMVENJLEBFKMIUNXEPARIYIBZXAJZSEYFQHNZKPVFJKURUYLQBYFUMLBOHMXCZJMNWHIOCTTWVPDUXWADJKZVRGOOGMNZSSPKBMBPJERRNYIPZOIHNCPPLLMILMBVJZURDDDSUANSGSXSWGSYWYQQDCLFXFRTDUCHLTPWBODLYZEEHEYWUUNTWZEHRAOCQJGWSQTAYACANJTOIHG");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.659696166923);
    msg.setSource(65420U);
    msg.setSourceEntity(166U);
    msg.setDestination(10130U);
    msg.setDestinationEntity(185U);
    msg.name.assign("HZFKIGAZATRMNPSEPAOPZWCHGHYQIZRWCBSHEOAZJJJFUUNR");

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
    msg.setTimeStamp(0.310341168978);
    msg.setSource(44038U);
    msg.setSourceEntity(173U);
    msg.setDestination(6294U);
    msg.setDestinationEntity(156U);
    msg.name.assign("SUGPINEGWBYRPRTPFKHCJLJEZDYUJJVIYVRJBGSYTWCMWHUECCRNUUAZPQBMXOEWUMXNQZXIVPNNTSWSOHLOJBBMPNAIFEJQYQFJBRZDSAHKTIGEJKWHVVPFGSQUYKDUFMVOZGQNTMDZFNCFVTTWRIUAKEDXIODSZBKAYFXGYBIHDMLPLXXAHHMBBGOYGMZUXRXTORXWIKPWPLNVEDRSMYLKCNDTJSOTL");
    msg.visibility.assign("BBRFHTKMPLCUTJXSAFGJRVDCXTKGIVXUOSWWEHAQSHATCYUGDIUQDHZUQIYLMLZVFSVPVWEXGNIYFDYUUHYYMABBANMJLMZNRJOAXISSEAANCDLGHLUNXMDLNOKBJUKPONTCKAEFLJPYGRIKQZFFXPYEINTVSEXJCETOTQPRCZJOZSHFWOQBRZCRQVOTWLQOUWRDBPMZQ");
    msg.scope.assign("GKNCYDBUJONVAMMHLPXHTVKXQFETBIZAKSHRJKYHKFZPXN");

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
    msg.setTimeStamp(0.286037391305);
    msg.setSource(20394U);
    msg.setSourceEntity(145U);
    msg.setDestination(51373U);
    msg.setDestinationEntity(236U);
    msg.name.assign("TNNZCDNAZDAXNHOEWIJERKVUORJFQGHYMLJFDHBRJSCYWAEGPKGUBSTVLQKTDUDVOYHXVUHWMVOXOIAUXZUJPBLAVFUXMBYTHJRLXQQSVTZEZNIMSBHYCSXKFSOQOWZLAEXPZLRCFSPMMDURHLHN");
    msg.visibility.assign("XTVRAHKEVTABRUGURENOVKGJJAZHQXIGKBQOOAQWLPGHALGLKXIOXWQUSYDDIMFDSUWEZOFVADLYDLHBJHPWMRGVMMCJYYMXERVEKMIBDWNBPDNUSCTPVZFYETBLJJWPLFSIGRDBJSNTTXAZQCCEFHTHXOYSROCMZNJOISZDKSNXAYWHEUQRAUXFLVQBMEPIEJCGRZAVGKMHWPFZYUS");
    msg.scope.assign("DVYJWAFCBIUVCNVDYFBSWSMYGPNMAIGFJLMNHEQHKHFZWOBAXELIKGGWTMVZBDUUCLWXITABLMJXEXBMSVQKVXDIZUJXXJJIOPCQVQBGXKJRLFIPIPXWSGZURSSZP");

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
    msg.setTimeStamp(0.194007362556);
    msg.setSource(49610U);
    msg.setSourceEntity(184U);
    msg.setDestination(913U);
    msg.setDestinationEntity(133U);
    msg.name.assign("HQKLVMXQDWIJHEEOYBLZBFZNENUMLXBTAUUOISCAHYKZIOWOTSNHHPWELJZTMWJXQTOMOPGCNACUBWYNREKLIDMSZYJJGGEFAPJDXDDFGYCDW");
    msg.visibility.assign("SCBJFOMGPBCHYITPEWFPOXMWQHIVRLCIFHWMIKEBZVYMSGLMNZHXSSDKZVZZVMAKVLUDOUSKRQNJRFBLXRQXNMWNLJE");
    msg.scope.assign("NNZOGGLXKGBPQUYFQTWIDHVRCZVUVXYCZWDAFOKHJQBESDROCVLYWGMWAQMGYTODWEUZRYFJIXTJNMBHRYJOLUBSFPRKWATHQLFDRHPNKJGCYMRFSJLDPSTUPKOTCEAFHNBPGQESSKTEXRCPOVWSYVIUXFMGEULSBLHAYKQFEVTXMNIQBCHRNZDOLMZNASYLTBXSXCABHXIICUTDAUZKIPINAMJOFANZEPXZJMMVWEWDZJHIJOLQWVE");

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
    msg.setTimeStamp(0.687398345952);
    msg.setSource(65028U);
    msg.setSourceEntity(100U);
    msg.setDestination(11760U);
    msg.setDestinationEntity(176U);
    msg.name.assign("PAMGLYUPBADXLFYHBTDEDLKLWJSRFZGICOEHRCGRQXVSHRZIXKPWLJGCMLQJTIQBJIUZJZCMUTICKHXWMEOMPQUGQZBDGFCVOBIONHFDPMNFRLOOLYNISWETNYWAJTBDRLVKAEXQOCPTAUETVKHAVJGFEZYPKQVHYKDJSYXDNDMPGTHZOOZXSSQGXEVVUBLRWMMFQSYOAQFIWAJUEUZSPEWTIWSNBJAYUHRHWYSNXKCAU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IQGHCGZEJQCGY");
    tmp_msg_0.value.assign("RDAIOPJDHEQLVVLEUVMGQCQUWQZVUDRKMSUZTPNZPTXGZWOWSLWDIUCOHWGZHPJMESAJCTOANBSIEFMCLGYNBDWFVYGQOSAFKBFLUCZPDQLYRIMBGLNZXOEJXWXXFKLZWPOOILMUCCSKBERNYHHMJIFJQNRIBXAXHSYOVYLMKKSSFBVQPAGUIXTTVNKFRPRRUZPJHENGQGAWANRWEDKXEDMBH");
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
    msg.setTimeStamp(0.322795150957);
    msg.setSource(5118U);
    msg.setSourceEntity(227U);
    msg.setDestination(14359U);
    msg.setDestinationEntity(91U);
    msg.name.assign("RMMYYAELQZOQGRCMFULNDCMGDKHPBAMPMLJNHZCZHWNIVKARPPIVJEGZSLJHJCLNEZRGCNVURZQDMWVRFSOTVMUEUTTWCYCXUNFXHNTOFBHSTQYWDUDSPZKJGOPHVUDFBPYEKCDTDTICBUVBYDAAXBFNRWMXGNVAIJFPUSKYJIZSLSGWSSHWWXIOQQLQJIAVQEJTKHLLFKREYZXBEZXQGXPPFAUK");

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
    msg.setTimeStamp(0.0671083501814);
    msg.setSource(6423U);
    msg.setSourceEntity(60U);
    msg.setDestination(60386U);
    msg.setDestinationEntity(225U);
    msg.name.assign("LDJDTTIGUGYLPURWKBGUCJMIIAHUGYYXRVZWBUSEBAJBUNQKVMEYGYQDESZR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BWVCIECWMXFPYHEYWLQFMEPLETOKJGNRNQUWSXMMUJDZYHQDWAUNEHANBAINUHWXPKUGVIJQLZIJZCVKTPARTOQMKOESKCWJMUATBILLHJQJEKSSDPDDYXDQOUIZXOHFAKGPCVZOYNIFRLSNXDGZXAMCHGCKJRBGWLACYPIFRTAOULOVPZPXBRSRETNDJPS");
    tmp_msg_0.value.assign("WHIFLQXXZXRMIBGHDXIDHCURJNZNAPWJGRKLFPXHNVYNVAJQCIBDUBTZTFTEFMYZUCRIPHQKVIVQUDGALQHZCMLHYPJBEPARQXDGSGOYERTNGPBJQQSWZWSYQTOTHJZJUEOWSPVCOOLLSOFELFVKCTKYWRMZCNOWVWXNOSKQLRBDAUXTNPAHIFDMMEIKGMW");
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
    msg.setTimeStamp(0.763126583096);
    msg.setSource(23976U);
    msg.setSourceEntity(246U);
    msg.setDestination(46441U);
    msg.setDestinationEntity(74U);
    msg.name.assign("EVVXSCMDVAPTGIATWSFMOCOIQGETQBNMCYFBMGHJSURBDAFSZMIYDSNIELWJJXJNKRVUMYUUCFXIBBXCWMLJJBEGBIJKYFNUKPHTYIOOARFGPWOKRZSZOXEOIMVIWHTHZWUDMFTRYPYLGCGRLFQHRPKDVEASOCADKCDJEPSXKLXKFQLDHRYPHUOAGVSVBZQIELBTQWLGUKVQURL");

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
    msg.setTimeStamp(0.811819286055);
    msg.setSource(60018U);
    msg.setSourceEntity(222U);
    msg.setDestination(22501U);
    msg.setDestinationEntity(45U);
    msg.name.assign("MBIRYFRUUQFLNREKZMSSTGYLQPCPQSDOWGBGWQGKPYPOVZXCSIEURXARNUDEJVRUOMUST");

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
    msg.setTimeStamp(0.0686449236733);
    msg.setSource(32462U);
    msg.setSourceEntity(116U);
    msg.setDestination(51167U);
    msg.setDestinationEntity(142U);
    msg.name.assign("TYKREFOEPTWCAAJNQZKARSTWSLQTPLSMZVIHAWCZNPSDZSUVVIBLRFKGDRJVXSCHEEMNYSTXTZUJADRRLIATLQNHFLICJKTGEBFGPBPVWLDSFDSUFKOOMXQUTKMKXIXHQGGNXFVGGIRQZYNXYCJBQHHJBIGAOPGEMFPYKABWULWFBQJSWJAQMCCUHLKMLOJXBZVVEWVZMDBXOQCPYRIMO");

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
    msg.setTimeStamp(0.522909428786);
    msg.setSource(54953U);
    msg.setSourceEntity(204U);
    msg.setDestination(35098U);
    msg.setDestinationEntity(175U);
    msg.timeout = 1162612518U;

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
    msg.setTimeStamp(0.108046861112);
    msg.setSource(50344U);
    msg.setSourceEntity(121U);
    msg.setDestination(35519U);
    msg.setDestinationEntity(208U);
    msg.timeout = 3523190858U;

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
    msg.setTimeStamp(0.00634481126449);
    msg.setSource(35003U);
    msg.setSourceEntity(202U);
    msg.setDestination(62816U);
    msg.setDestinationEntity(165U);
    msg.timeout = 2465346769U;

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
    msg.setTimeStamp(0.148790004197);
    msg.setSource(57464U);
    msg.setSourceEntity(103U);
    msg.setDestination(38751U);
    msg.setDestinationEntity(176U);
    msg.sessid = 3167576549U;

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
    msg.setTimeStamp(0.375299078876);
    msg.setSource(9950U);
    msg.setSourceEntity(130U);
    msg.setDestination(54331U);
    msg.setDestinationEntity(39U);
    msg.sessid = 3969412520U;

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
    msg.setTimeStamp(0.0929618897624);
    msg.setSource(25899U);
    msg.setSourceEntity(219U);
    msg.setDestination(52464U);
    msg.setDestinationEntity(73U);
    msg.sessid = 197424408U;

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
    msg.setTimeStamp(0.374866697388);
    msg.setSource(46485U);
    msg.setSourceEntity(226U);
    msg.setDestination(7630U);
    msg.setDestinationEntity(163U);
    msg.sessid = 1938998290U;
    msg.messages.assign("VRJWOUIWMGFVOABXRCUIDKKAYWVAPZBKFEJWVEZDYNAJUXKHZSSNBT");

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
    msg.setTimeStamp(0.905083287877);
    msg.setSource(21502U);
    msg.setSourceEntity(28U);
    msg.setDestination(52051U);
    msg.setDestinationEntity(89U);
    msg.sessid = 749644957U;
    msg.messages.assign("ZBOCHLTVYYPNNJTBELDYUGMUVOKQOOCCFAYKXZGOQPONIZJHLQPZJGDSAKCGQHAFIUFCSKZQQJVWHDNQPRXXGDDMSFCILWCUKFVTAWQSIREKTOEEXNADWMITRSTJPEPXVUFXWEHLBRITIKGKOBTUXZJABLIFXVQOEDLLSTIFVZLSRHNFGTLHSRNHUMY");

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
    msg.setTimeStamp(0.335574652604);
    msg.setSource(59312U);
    msg.setSourceEntity(186U);
    msg.setDestination(22509U);
    msg.setDestinationEntity(166U);
    msg.sessid = 3194103542U;
    msg.messages.assign("EQNJDPDUBCWGPHKENFLNLIGZHTXCNCQQQSBUOSASVYGDINJZNEJABILOFBPYKMZWAPODSCZZFRWWXGRUJJIIEFCPYKZOMPVSRF");

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
    msg.setTimeStamp(0.384953173486);
    msg.setSource(11809U);
    msg.setSourceEntity(1U);
    msg.setDestination(9769U);
    msg.setDestinationEntity(0U);
    msg.sessid = 2618351404U;

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
    msg.setTimeStamp(0.386584781067);
    msg.setSource(4453U);
    msg.setSourceEntity(2U);
    msg.setDestination(18803U);
    msg.setDestinationEntity(191U);
    msg.sessid = 1508904185U;

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
    msg.setTimeStamp(0.993319923933);
    msg.setSource(45129U);
    msg.setSourceEntity(115U);
    msg.setDestination(31737U);
    msg.setDestinationEntity(145U);
    msg.sessid = 577243238U;

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
    msg.setTimeStamp(0.531733308724);
    msg.setSource(45988U);
    msg.setSourceEntity(107U);
    msg.setDestination(39294U);
    msg.setDestinationEntity(76U);
    msg.sessid = 3758611979U;
    msg.status = 161U;

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
    msg.setTimeStamp(0.865071159794);
    msg.setSource(8111U);
    msg.setSourceEntity(174U);
    msg.setDestination(47514U);
    msg.setDestinationEntity(92U);
    msg.sessid = 2726402050U;
    msg.status = 54U;

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
    msg.setTimeStamp(0.847088388822);
    msg.setSource(30193U);
    msg.setSourceEntity(192U);
    msg.setDestination(60525U);
    msg.setDestinationEntity(192U);
    msg.sessid = 3288795617U;
    msg.status = 139U;

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
    msg.setTimeStamp(0.688842457706);
    msg.setSource(9394U);
    msg.setSourceEntity(230U);
    msg.setDestination(32623U);
    msg.setDestinationEntity(92U);
    msg.name.assign("IIFNXDWMBKZJBRVYLTAQRUWMHMYYKWKSEQDLHNEFOVLROXRAMPOQCXCFFHQHZEOGLNAJIOEPWYZGISYGVRABEWHPSCIXLEDJDITKP");

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
    msg.setTimeStamp(0.336544813344);
    msg.setSource(44596U);
    msg.setSourceEntity(169U);
    msg.setDestination(47557U);
    msg.setDestinationEntity(57U);
    msg.name.assign("VVENYGXSJSMSUFFOTSNTFCM");

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
    msg.setTimeStamp(0.691176707113);
    msg.setSource(29808U);
    msg.setSourceEntity(147U);
    msg.setDestination(58049U);
    msg.setDestinationEntity(85U);
    msg.name.assign("BMWKDKMGOHZCBFISUZQDTBYEEOXEQQCFMOLASGHYKDZAFQLJGRSWNBCQJXNDIGKLVHJUFATNLYKKYYYCFLAVECPFVLNSNIAXZWEBHMRBLHGDBZCRWTMEJXNSJXKJVPRBNYVUUPTJNRUKURMTWJGPZWQZGPVHXGYTFXCRJAHELTKZHDVGUNJMDWXPKXACUIOOIDIBWIOAIWYWQNRLGTQDSOVQSTFCRMBZMHZVOESFILPMSOXPCURPTHS");

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
    msg.setTimeStamp(0.703865469176);
    msg.setSource(63900U);
    msg.setSourceEntity(245U);
    msg.setDestination(126U);
    msg.setDestinationEntity(124U);
    msg.name.assign("IZBEAZVOCKOUGKLPNOKZIWJNWRVSRUMANSYCVDASXXI");

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
    msg.setTimeStamp(0.869984800143);
    msg.setSource(30231U);
    msg.setSourceEntity(11U);
    msg.setDestination(50507U);
    msg.setDestinationEntity(222U);
    msg.name.assign("YWTURQBNRYDTSGF");

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
    msg.setTimeStamp(0.816488402132);
    msg.setSource(19715U);
    msg.setSourceEntity(129U);
    msg.setDestination(57254U);
    msg.setDestinationEntity(176U);
    msg.name.assign("JKGYAILLKAYQJWEVXCTVRHZXXASUKNZSYDOSDFJKNGYAOQVFFIKEKRYFYBFNHANUTWVBAXRPZIFOSWEHXAIQTRZEOOHKUWDU");

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
    msg.setTimeStamp(0.7241247039);
    msg.setSource(1762U);
    msg.setSourceEntity(118U);
    msg.setDestination(47869U);
    msg.setDestinationEntity(55U);
    msg.type = 178U;
    msg.error.assign("QCKRBAAVHWOHSVZIBIIIHIUXYIWPRPHQXYBQMRXNQEKQKTAMEYPFKDZDGOJCGZBRAVNWJKNRMUEHFSNYGEUJRQSKDFDLENCJXETUBQTCWXGAMPJYLOLMVRVTVNNYUZCPDWHZREPMGVGOPHWJWGWXLXTGZMCOSSLOUJELAYWAFQZIPSBGXIFKMTEITUHMDOAJLNWFVCYYLU");

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
    msg.setTimeStamp(0.672762607909);
    msg.setSource(38253U);
    msg.setSourceEntity(200U);
    msg.setDestination(38051U);
    msg.setDestinationEntity(29U);
    msg.type = 234U;
    msg.error.assign("FQKNEFYTELPMCKSGFULNJNCGIUDQHOHMYRKFDTTYZRWGHRVMQAMQRWECEMMAEIBXKVPVNDHBLBCAKDZFXTZMXXPZNTYLXBJHKRAAINCWCOHUQSYO");

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
    msg.setTimeStamp(0.755167348063);
    msg.setSource(26651U);
    msg.setSourceEntity(182U);
    msg.setDestination(18372U);
    msg.setDestinationEntity(87U);
    msg.type = 129U;
    msg.error.assign("GZQIHDFTZFMBGQSBIZKTCMZWOOQSTWJSOYAKJCGAGEHKIYXDHBQEKAVGUEFMPJXNJWW");

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
    msg.setTimeStamp(0.23249611513);
    msg.setSource(35277U);
    msg.setSourceEntity(39U);
    msg.setDestination(47708U);
    msg.setDestinationEntity(152U);
    msg.seq = 42503U;
    msg.sys_dst.assign("RBUKRTPNDVJQALDJNRYXCDVYPCVMUPEKJOMYCXDZBNRRXKFMSYLOPRIFQXOWRTQEFWZICYTQRBKQTIUHVUZLXEOJZHYNQSZZZSGKEZTTPSSBQHTUJJAHTXWBHFGLWAHAKMTLUZEHMWKFUUKKVKGCNFACCPEVATYEIXCPDJIPMFRONOSDWSFHJMLVEWDXGWVILNHOGPBNDPRVXJF");
    msg.flags = 29U;
    const char tmp_msg_0[] = {82, -33, -1, -97, -106, 88, -32, -46, -10, 125, -97, -29, 24, -123, 9, 72, -10, -16, 63, -29, 77, -25, -95, 121, -98, -75, 92, -42, -95, -31, -1, 7, 17, -114, 101, 19, -31, 12, 48, -90, -104, 118, 82, -84, 93, -13, 123, 69, 13, -126, -112, 118, 38, 35, 3, -1, -105, 56, -1, 59, 36, 115, 32, 1, 58, -40, 64, -54, 78, 82, 24, -111, 11, -49, 101, -78, 113, -51, 112, -127, 57, -80, -42, 5, -41, -86, 83, -90, -1, -65, -27, -66, -24, 59, -80, -79, 124, 51, 106, -102, -60, 21, 124, -40, -40, -11, 21, 37, -120, 86, 105, -2, 35, 91, 25, -76, -115, 46, 36, -116};
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
    msg.setTimeStamp(0.151416719725);
    msg.setSource(5357U);
    msg.setSourceEntity(198U);
    msg.setDestination(41702U);
    msg.setDestinationEntity(208U);
    msg.seq = 50237U;
    msg.sys_dst.assign("XZHEFTUCASIGTOPSKUXCZXYXKNQEPDLBEPGRWJOANVQMHYIRBJYUWQMMJYMOFFWGYXBYDHYKSOKHQDWKTWGDABEPTXBCHGPEBPYZMFLJTIXVLOCYZNISUIGOQVCFWRWRXLQDKZUVZWQVCCEDSNLKRUEJVKZSNBVIOOUHANDSJWAGILQALFHXAIMWGFRTEMSOMTKIQNRNHPEAU");
    msg.flags = 228U;
    const char tmp_msg_0[] = {-112, 39, 92, -58, -57, -29, 4, 98, -59, -99, -38, 27, 16, -68, -49, 45, 88, 120, -114, 51, 97, -38, -93, 125, 33, 43, 96, 97, 1, 5, -19, -128, -15, -127, -127, 73, -5, 35, 46, -66, -60, -20, -57, -41, -17, 4};
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
    msg.setTimeStamp(0.71607152866);
    msg.setSource(31328U);
    msg.setSourceEntity(86U);
    msg.setDestination(48534U);
    msg.setDestinationEntity(28U);
    msg.seq = 15506U;
    msg.sys_dst.assign("HYQJUJPPQLMIUQRWSTZDYDEWMQOFVDVEQPJIIXNXDAOBPQYBKRDXIZZGWZHTFUFVBXBEKKALYRMTJTNAGDZNZCEAYENLVIOKFTPKGUHORVBKPGTZVCADFRQCYNWMJWMEDWOULMGSVKWOTRSJDSMI");
    msg.flags = 15U;
    const char tmp_msg_0[] = {-87, -52, -50, -26, 92, -34, 92, 40, 57, -117, 124, 92, -31, 101, 41, 102, 11, -35, 9, -9, -46, -46, -2, -101, -57, 54, -31, -31, -64, -5, -90, -33, -52, -10, 91, 24, -47, -25, 33, -84, -30, -24, -71, -31, 76, -47, 12, 117, -123, -115, 28, -66, 103, 59, -58, -54, 123, 73, -5, 115, 19, 7, -46, -98, -49, -92, -50, -71, 118, -122, 17, 84, -94, -14, 92, -108, 99, 113, -48, 27, -58, 43, -63, 10, -37, 44, 2, 111, 116, 20, 90, 53, 45, 117, -54, -1, -3, -115, 65, -104, -52, 59, 121, 33, -95, -11, 87, -69, 75, -28, 52, 38, 112, 51, 100, -21, 5, 91, -91, -12, 66, 31, 119, -22, 104, 60, -88, 97, -5, -27, 11, -47, -77, -65, 52, -126, 88, -84, 18, 18, 36, -4, 85, 22, 82, 87, -55, -67, 63, -118, 75, -51, -94, 3, 43, 102, 116, 107, 76, -124, 106, 92, 22, 108, -51, -108, 122, 69, -85, -16, -29, -118, 56, -8, -62, -47, 55, 98, 83, -8, -103, 65, -57, -32, -32, -77, 46, -52, 87, -54, -22, -36, -82, -95, 14, 43, -43, -56, -128, -29, 75, 121, -55, 93, 74, 92, -94, 25, 75, -57, -31, 102, 72, -108, 86, 60, -88, -44, 108, 44, -37, 89, -9};
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
    msg.setTimeStamp(0.719134155836);
    msg.setSource(47539U);
    msg.setSourceEntity(75U);
    msg.setDestination(57150U);
    msg.setDestinationEntity(243U);
    msg.sys_src.assign("AKSKXWILSYTCOREDQRWSZJJHVAJOAEVDSMVMIXHIMFHLXIXMLKMYAPYNDTYXFVUBTIGHFBDTHKTAROZZVMNGIYYVFOJDJADYURSXUPQURQCMDEJCGOCCBGMDDYUFRZANAYCULFINCNJQLPEPLTKWWOZTKTQHPKWSBQGBPSWNLAOFABZEDHNLUKZRGSCPVBBQMNKVXOUTCOWGHJZIQGSONPETVZJYPSWCFZLFIUQBWQ");
    msg.sys_dst.assign("MYYOMDPTRTCUOBMZGJMMLSBIFEKGZKVJUWLOKTLXHWQEQQUNVVQTVIUZFIZVAMGD");
    msg.flags = 102U;
    const char tmp_msg_0[] = {2, 16, -27, 45, 104, 107, 58, 56, 122, -19, -98, -69, 23, 87, 101, -59, 16, 89, -64, 39, -41, 83, 103, -54, -78, -9, -37, -50, 57, 126, 66, -124, 58, -68, 45, -120, 58, 117, 56, 34, 3, 118, -88, -4, 109, 106, -96, 75, -77, -124, -67, 31, -99, -11, -9, -34, 23, -68, -49, 7, -60, 86, 36, 98, -68, 39, -99, 90, 121, 9, -107, 94, -23, -11, 86, -50, 59, 126, -58, 54, -103, -25, 88, 105, 110, 97, 6, 9, 37, 89, 29, -63, 106, -76, 29, 7, 110, -26, -69, -18, -100, -85, 12, 28, -23, -29, 46, 25, -23, -62, -46, 39, -90, 65, 101, 27, -69, 98, -8, 68, -2, -72, -17, 8, 99, -91, 81, -53, -61, -1, 75, -97, -50, -5, -22, -112, 18, 46, 27, 100, -1, 103, -125, 116, -82, 71, -89, -29, 14, 119, 89, 27, 122, 118, 59, 112, -52, 46, 76, 16, 23, 29, -83, 102, -16, -1, 53, -64, 27, -90, -11, -54, 21, -53, 39, -100, -41, -26, -11, 60, 77, -41, 85};
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
    msg.setTimeStamp(0.775977809522);
    msg.setSource(39570U);
    msg.setSourceEntity(233U);
    msg.setDestination(55912U);
    msg.setDestinationEntity(9U);
    msg.sys_src.assign("DZFFUXHKXIWICDEJETLOZASYVFMNLNHABQXPTTJVRBFWYOXRNKMPBOORMWUZKCAKATBBFCHIOSDCMUFSAPXBOYIJDVNHRHYOORAQHSUPJZURRWGLFEPVFTUHKDMCNTVZPPRJQXYVLGSGIWZMUFQJKGRCLDEKINVBLDYWMMPVGQQPZWJUNIH");
    msg.sys_dst.assign("WXGHZWHDOMBTMNYCHFMKCJVDBFYTWBEVFXAUEMCLCLTGPUHQSCXORDFKOQNEEBQRZCFUOYNHXAGZ");
    msg.flags = 44U;
    const char tmp_msg_0[] = {-36, 67, 21, 64, 110, -124, -59, 25, 72, 63, 14, -112, -70, -20, -32, -85, -7, -78, 107, -26, 66, -13, 55, -119, 72, -120, 47, 32, -14, -26, -47, 76, -58, 124, -58, 76, -69, 78, -58, -35, -82, 118, -128, 72, -49, -25, -52, 8, 123, -24, 80, 13, -75, 122, -49, -67, -68, 30, -25, 122, 62, -53, -23, 38, -42, -51, 30, 89, 71, 33, 119, 0, -119, -63, 42, -104, -63, 1, -54, 3, -22, -44, 73, 103, -88, 11, 100, -27, -27, -59, 55, -23, -116, 77, 9, 16, 35, 44, -17, 111, 79, 120, -45, -78, -89, 88, -123, -125, -22, -43, -3, 6, -42, -15, 73, 0, 62, -27, -123, -104, -81, 97, 96, -77, 50, -26, -12, -27, -18, -83, 97, 89, -114, -22, 25, -49, -16, 39, -90, -41, -78, -33, 122, -36, -94, -90, -126, -11, -91, 38, -41, -71, 75, 42, -90, -95, 28, -4, 81, -121, 109, -58, 64, -86, 91, -125, -98, -62, -32, -75, 42, -88, -53, -81, 104, -58, 118, -75, 86, 104, -21, 67, -53, 69, 77, -29, -83, -40, -126, 84, -111, 81, 72, -67, 62, 33, -7, 64, 19, -119, -85, 52, -55, -109, -91, 7, 33, -25, -10, -36, 61, -14, 80, 12, -102, 105, -93, 92, 16, -99, 100, 55, -62, -29, 13, 49, -47, 88, -45, -6, 28, -23, -49, 19, -22, 113, 44};
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
    msg.setTimeStamp(0.238644443948);
    msg.setSource(44920U);
    msg.setSourceEntity(82U);
    msg.setDestination(39453U);
    msg.setDestinationEntity(185U);
    msg.sys_src.assign("BSUILOBLYYYXDKVNZHIKXYFHVIDQHDXBLUPAOAIQRVRKEJKGFMWXONOMBLKJQBKSLPFAZCRMPZANUDHFRCVWEBZYBPHVUDGJUZQUMWEKXLCZKACUXSNMNHIVGDQTDTAC");
    msg.sys_dst.assign("EHSPWZKVHICLZKZVEWQXMZQXHJLHDSONFGKSPACPPMXGRKPMBMOQSACCQYZDRYNR");
    msg.flags = 207U;
    const char tmp_msg_0[] = {110, 26, -32, -65, -46, 52, 30, -118, 35, 58, 123, -28, -67, 46, 102, -93, 36, 17, -111, 28, 69, -116, -95, -72, -39, 110, -15, 40, -119, 6, 84, 110, -109, -18, 63, -22, -39, 46, -44, -33, -76, 79, -39, 1, 24, -23, -87, 110, 91, -58, -12, -70, 51, 95, -34, 78, 42, 43, -115, -41, -22, -35, 96, 48, 79, -41, -120, 37, -63, -86, 112, -87, -70, -39, 98, -22, -32, -70, 49, 100, 27, -10, -27, -52, 115, 1, 96, -4, 2, 18, -114, -49, 122, 66, 75, -116, -81, -117, -1, 0, 107, -22, -76, -12, 75, -42, 41, -25, -125, 14, 63, -107, -128, 7, 18, -106, -24, -74, -89, -98, 70, 0};
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
    msg.setTimeStamp(0.494000261956);
    msg.setSource(32531U);
    msg.setSourceEntity(182U);
    msg.setDestination(24312U);
    msg.setDestinationEntity(169U);
    msg.seq = 45709U;
    msg.value = 57U;
    msg.error.assign("LFIFOLSIMZLQMACFHQEBPHLBUWBPTYUHAYOLAKVUJHENORBNOXFFWHE");

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
    msg.setTimeStamp(0.170071982252);
    msg.setSource(34419U);
    msg.setSourceEntity(25U);
    msg.setDestination(22047U);
    msg.setDestinationEntity(252U);
    msg.seq = 31391U;
    msg.value = 14U;
    msg.error.assign("BBKWLQOICTEDYXMCUTCEENWWINRPDRQVQGLQISDOWAQDSCUSZPNWVKOFHFLIACWFLKZRYRUXTDPNZJMBSMJWJDNWNHNMJIYIMAPGVWGQFKJJVKTAEBXULFQERAVYIASYBXETSUYCQAHFKPWPHXCERGYZKJPMGVVPYCCMOZOTJSHHETRUSANSLGRGXKZLOOLDPGESIUFBZONDMZRPXTHKYDURZXTKVYXVM");

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
    msg.setTimeStamp(0.483886481291);
    msg.setSource(179U);
    msg.setSourceEntity(36U);
    msg.setDestination(33658U);
    msg.setDestinationEntity(18U);
    msg.seq = 62411U;
    msg.value = 81U;
    msg.error.assign("MADFRYQTSHFNPDDRWRHSVHKAABTASWHMADIOBJGIISEKWEMNLDNBXUVZUCRDHTXQFKPKMZUGAMHIOGLVIYNCHXVPKGCNPNEZUIGCUWHCOAEYQSQZHGUFOBXVUUYMOJEISNZMZRLKNYKRLLZBAVFZPCQWLJVZHUIBASULJBNVBTWECGYFXXWEXOLIMCYDFQXMQZMGJYOPKFPXATRYKVDOWR");

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
    msg.setTimeStamp(0.194669265939);
    msg.setSource(13744U);
    msg.setSourceEntity(25U);
    msg.setDestination(29218U);
    msg.setDestinationEntity(31U);
    msg.seq = 48840U;
    msg.sys.assign("JIALOBLTOGCPHVAPHJKZFHUFZPHGWMKOYGIRAOFCBQSIKRQRLPIDZAFLQYYVWZEKSENPEJATWRSRVWNUQGNAVOQUDRDFVJZDVXDKSXTXKMGONOVMXVMQZFPEHDOUVBFXRRCQJUSYAYJDBMWHFTGHGYRFWNEHPNEUDUQAKCQ");
    msg.value = 0.412164375883;

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
    msg.setTimeStamp(0.485533132646);
    msg.setSource(21115U);
    msg.setSourceEntity(105U);
    msg.setDestination(19544U);
    msg.setDestinationEntity(131U);
    msg.seq = 47907U;
    msg.sys.assign("FGRPSZCZCHMRQJMBGXOACZNLXTDVCNNSGWPTSFTKTZMSDGOOTMKQDMHNGHUCUUBHXEIAOAWFJCWIHHXTVZTIKDSEKSIVJGPQDIFNFJYWNFYSDBQREYWNBVEBYLDMZECXQQOWLEIPFXYTHAIFMUECOXXILRJQJNZAPCENFKBYTZYCPPILRDPJVREKURKSBKYORVHVTJEVFWGOYMQPQDWUSAJBRGVBZHNUZJWALUYDLXXAMKASBPUGVGIOOLU");
    msg.value = 0.705343330531;

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
    msg.setTimeStamp(0.752623012489);
    msg.setSource(21973U);
    msg.setSourceEntity(131U);
    msg.setDestination(65218U);
    msg.setDestinationEntity(114U);
    msg.seq = 46641U;
    msg.sys.assign("CCIQVATQRAUJDDEDOCVKQRAYXLZULYDMNMIFTBMYSUKQRGHACPIVJWSYMZMWNIHEPYSFDLTQFEFXJRDPKDBDASLZZGHETRNKLUXUUVWFHUCGKTOWKZYGSVJHBGOSQEDLICXRIZLIZBIHPQNJEAWKOOYGWTOEMKLEULTBHXNWSWNCCVAXAPTNBKMYHAJTHQPBDVSMMJFM");
    msg.value = 0.49341366282;

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
    msg.setTimeStamp(0.469296953928);
    msg.setSource(46037U);
    msg.setSourceEntity(85U);
    msg.setDestination(27440U);
    msg.setDestinationEntity(82U);
    msg.action = 216U;
    msg.longain = 0.382541990724;
    msg.latgain = 0.501616899183;
    msg.bondthick = 2812072167U;
    msg.leadgain = 0.548888755588;
    msg.deconflgain = 0.815312765452;

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
    msg.setTimeStamp(0.668103912566);
    msg.setSource(39555U);
    msg.setSourceEntity(139U);
    msg.setDestination(2753U);
    msg.setDestinationEntity(210U);
    msg.action = 30U;
    msg.longain = 0.271346306678;
    msg.latgain = 0.107057938029;
    msg.bondthick = 3268175744U;
    msg.leadgain = 0.131182071281;
    msg.deconflgain = 0.880252936181;

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
    msg.setTimeStamp(0.427265340041);
    msg.setSource(19891U);
    msg.setSourceEntity(8U);
    msg.setDestination(50136U);
    msg.setDestinationEntity(228U);
    msg.action = 75U;
    msg.longain = 0.450819786734;
    msg.latgain = 0.184056519046;
    msg.bondthick = 1784105836U;
    msg.leadgain = 0.315711520639;
    msg.deconflgain = 0.235015386779;

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
    msg.setTimeStamp(0.672182755969);
    msg.setSource(14053U);
    msg.setSourceEntity(195U);
    msg.setDestination(38438U);
    msg.setDestinationEntity(107U);
    msg.err_mean = 0.869138174485;
    msg.dist_min_abs = 0.445861326364;
    msg.dist_min_mean = 0.925619808095;

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
    msg.setTimeStamp(0.729685125787);
    msg.setSource(32887U);
    msg.setSourceEntity(235U);
    msg.setDestination(32509U);
    msg.setDestinationEntity(72U);
    msg.err_mean = 0.726493353945;
    msg.dist_min_abs = 0.609585325552;
    msg.dist_min_mean = 0.24760779506;

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
    msg.setTimeStamp(0.266733716603);
    msg.setSource(42102U);
    msg.setSourceEntity(120U);
    msg.setDestination(39487U);
    msg.setDestinationEntity(229U);
    msg.err_mean = 0.796923054929;
    msg.dist_min_abs = 0.00504399336162;
    msg.dist_min_mean = 0.31011730885;

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
    msg.setTimeStamp(0.688776280607);
    msg.setSource(46613U);
    msg.setSourceEntity(114U);
    msg.setDestination(19175U);
    msg.setDestinationEntity(24U);
    msg.action = 131U;
    msg.lon_gain = 0.72486411648;
    msg.lat_gain = 0.365210658799;
    msg.bond_thick = 0.889957624222;
    msg.lead_gain = 0.547255845926;
    msg.deconfl_gain = 0.893953827321;
    msg.accel_switch_gain = 0.0631436880362;
    msg.safe_dist = 0.245286105878;
    msg.deconflict_offset = 0.0509397869776;
    msg.accel_safe_margin = 0.569417364001;
    msg.accel_lim_x = 0.0742790666198;

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
    msg.setTimeStamp(0.338764665027);
    msg.setSource(28138U);
    msg.setSourceEntity(142U);
    msg.setDestination(42345U);
    msg.setDestinationEntity(93U);
    msg.action = 177U;
    msg.lon_gain = 0.141467096066;
    msg.lat_gain = 0.32738434662;
    msg.bond_thick = 0.670452316994;
    msg.lead_gain = 0.739903804535;
    msg.deconfl_gain = 0.971882868719;
    msg.accel_switch_gain = 0.283930042579;
    msg.safe_dist = 0.337887563232;
    msg.deconflict_offset = 0.414039181601;
    msg.accel_safe_margin = 0.451316049857;
    msg.accel_lim_x = 0.978933258958;

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
    msg.setTimeStamp(0.145177155971);
    msg.setSource(51303U);
    msg.setSourceEntity(38U);
    msg.setDestination(59155U);
    msg.setDestinationEntity(118U);
    msg.action = 243U;
    msg.lon_gain = 0.249522967079;
    msg.lat_gain = 0.26262986749;
    msg.bond_thick = 0.968779667045;
    msg.lead_gain = 0.0848863573653;
    msg.deconfl_gain = 0.378527784302;
    msg.accel_switch_gain = 0.991593848237;
    msg.safe_dist = 0.576649158001;
    msg.deconflict_offset = 0.110799697576;
    msg.accel_safe_margin = 0.964939341674;
    msg.accel_lim_x = 0.980293853931;

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
    msg.setTimeStamp(0.972589574314);
    msg.setSource(34272U);
    msg.setSourceEntity(107U);
    msg.setDestination(13140U);
    msg.setDestinationEntity(26U);
    msg.type = 124U;
    msg.op = 117U;
    msg.err_mean = 0.162603937759;
    msg.dist_min_abs = 0.60901557934;
    msg.dist_min_mean = 0.528739783649;
    msg.roll_rate_mean = 0.580893522141;
    msg.time = 0.731041249497;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 251U;
    tmp_msg_0.lon_gain = 0.673930619858;
    tmp_msg_0.lat_gain = 0.898600270498;
    tmp_msg_0.bond_thick = 0.178933693494;
    tmp_msg_0.lead_gain = 0.666736486158;
    tmp_msg_0.deconfl_gain = 0.598386908188;
    tmp_msg_0.accel_switch_gain = 0.20126464531;
    tmp_msg_0.safe_dist = 0.33148016395;
    tmp_msg_0.deconflict_offset = 0.222664678028;
    tmp_msg_0.accel_safe_margin = 0.292880901998;
    tmp_msg_0.accel_lim_x = 0.384108175273;
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
    msg.setTimeStamp(0.0488917191658);
    msg.setSource(30747U);
    msg.setSourceEntity(213U);
    msg.setDestination(51690U);
    msg.setDestinationEntity(109U);
    msg.type = 166U;
    msg.op = 0U;
    msg.err_mean = 0.771573556211;
    msg.dist_min_abs = 0.55575359167;
    msg.dist_min_mean = 0.850851881944;
    msg.roll_rate_mean = 0.568338204658;
    msg.time = 0.517043071962;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 165U;
    tmp_msg_0.lon_gain = 0.269154214775;
    tmp_msg_0.lat_gain = 0.693276080089;
    tmp_msg_0.bond_thick = 0.277959749229;
    tmp_msg_0.lead_gain = 0.0280195530555;
    tmp_msg_0.deconfl_gain = 0.136194005791;
    tmp_msg_0.accel_switch_gain = 0.11976232828;
    tmp_msg_0.safe_dist = 0.356885408856;
    tmp_msg_0.deconflict_offset = 0.990459322941;
    tmp_msg_0.accel_safe_margin = 0.777637085418;
    tmp_msg_0.accel_lim_x = 0.237769291221;
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
    msg.setTimeStamp(0.35166557954);
    msg.setSource(40778U);
    msg.setSourceEntity(38U);
    msg.setDestination(34639U);
    msg.setDestinationEntity(118U);
    msg.type = 208U;
    msg.op = 219U;
    msg.err_mean = 0.745159310188;
    msg.dist_min_abs = 0.96453208607;
    msg.dist_min_mean = 0.63780636927;
    msg.roll_rate_mean = 0.8792995381;
    msg.time = 0.732816842405;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 49U;
    tmp_msg_0.lon_gain = 0.351871929901;
    tmp_msg_0.lat_gain = 0.111978320459;
    tmp_msg_0.bond_thick = 0.589508969956;
    tmp_msg_0.lead_gain = 0.7507890241;
    tmp_msg_0.deconfl_gain = 0.99524276687;
    tmp_msg_0.accel_switch_gain = 0.00952286769301;
    tmp_msg_0.safe_dist = 0.671871163312;
    tmp_msg_0.deconflict_offset = 0.166281110515;
    tmp_msg_0.accel_safe_margin = 0.377716431084;
    tmp_msg_0.accel_lim_x = 0.321608191555;
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
    msg.setTimeStamp(0.517058178901);
    msg.setSource(13314U);
    msg.setSourceEntity(109U);
    msg.setDestination(5913U);
    msg.setDestinationEntity(215U);
    msg.uid = 131U;
    msg.frag_number = 103U;
    msg.num_frags = 98U;
    const char tmp_msg_0[] = {-125, 56, 101, 20, -121, 99, -96, 53, 88, 107, 81, 28, -53, 15, 79, -14, 57, 118, -31, -121, 110, 60, 116, 113, -5, -17, -72, -83, 77, 60, -87, -54, -15, -126, -77, 59, -21, 61, 123, 83, 36, -110, 65, 49, 55, 86, -102, 34, -38, 117, 9, 107, 24, 63, -116, -112, 78, 72, -43, 74, -65, -83, 103, -60, 80, -81, -110, -114, 2, 49, 7, -69, -10, -92, 10, 16, 75, 1, -95, 73, 19, -127, -32, 61, -94, 17, -74, 12, -98, 91, -70, -28, -12, -87, -122, 90, -70, -9, 110, -5, 31, -87, -114, 8, -112, -6, 21, -121, -24, 54, -43, 66, -111, 67, 32, -113, 122, -59, -76, -59, -94, -16, 95, -9, -85, 96, 94, 101, -124, 79, 36, -17, -117};
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
    msg.setTimeStamp(0.198594664977);
    msg.setSource(3832U);
    msg.setSourceEntity(77U);
    msg.setDestination(60513U);
    msg.setDestinationEntity(246U);
    msg.uid = 164U;
    msg.frag_number = 64U;
    msg.num_frags = 177U;
    const char tmp_msg_0[] = {-97, 56, -28, 108, 64, 5, -77, 39, 70, 11, -68, -125, 23, -95, -79, -83, -88, 117, -33, 18, 94, 42, -74, 103, -43, 50, 126, 98, -30, -90, -105, -79, -125, 30, 49, 65, -70, 33, -15, -89, 71, 43, 1, -59, 3, 30, -115, 115, -14, -40, 30, -111, -64, -115, 110, -82, 103, 55, 37, -112, -81, -5, 58, -112, 20, 17, -90, -122, 53, -27, 43, -5, 5, -77, 64, 4, 123, 124, -73, 119, 88, 4, 94, 113, 4, 2, 34, 121, 13, 112, 89, 38, -113, 125, 110, 48, 113, -37, -8, 117, -71, -6, 26, 33, -3, -120, -128, 83, -106, 69, -69, -3, 54, 108, -75, -112, 126, 49, -99, -9, -15, -88, -6, -118, 90, -79, 70, -50, -68, -116, -78, 96, -116, -55, 55, 124, 31, 56, -11, -72, -84, -10};
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
    msg.setTimeStamp(0.619330620505);
    msg.setSource(25470U);
    msg.setSourceEntity(197U);
    msg.setDestination(37879U);
    msg.setDestinationEntity(83U);
    msg.uid = 109U;
    msg.frag_number = 124U;
    msg.num_frags = 173U;
    const char tmp_msg_0[] = {-99, -15, -7, 37, -18, -113, -98, -36, -17, 111, 58, 51, -76, 39, -34, 97, 36, 77, 29, -121, 104, 87, 79, -70, 6, -37, -2, -51, -63, 116, 20, 54, 68, 64, 56, -67, 33, -1, 44, -68, -41, -48, 33, -126, 96, 15, 23, 12, 123, -33, 28, -104, -51, 56, -75, -26, 10, 88, -75, 125, -99, -15, -95, -15, 49, 97, -82, -72, -26, -40, -106, -30, -91, -108, -116, 41, -18, -94, -82, 9, -44, -9, 21, 77, -125, -59, -83, 75, -84, -30, -85, -11, 3, 76, -8, -75, -119, 105, 102, 24, -82, -60, 37, -1, 37, -96, 16, -108, 86, -87, 53, 67, -39, 51, -70, -108, -48, -21, -101, 56, 56, 100, -19, -86, -49, 22, 37, -88, 54, 18, 4, 120, 32, -79, -61, -96, 58, 28, -78, 91, -127, -94, -81, -83, -128, 120, -96, -96, 13, 21, 6, -42, 102, 96, 47, -13, -17, -121, 89, 16, -102, -7, 1, -9, -119, -38, -48, 103, -63, 95, 3, -75, -87, -22, -44, 24, 81, 9, -78, -78, 13, -11, -57, 44, 114, 30, -67, -12, 17, -68, -126, -128, -112, -32, -25, 8, 125, -63, 55, 114, -30, -68, 48, -65, -37, -44, -78, -19, 57, -14, 46, -75, 19, -80, 125, 126, 49, 110};
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
    msg.setTimeStamp(0.0550288535427);
    msg.setSource(21337U);
    msg.setSourceEntity(202U);
    msg.setDestination(14161U);
    msg.setDestinationEntity(38U);
    msg.content_type.assign("FNFCAHRTYSGIQLRQXRHSGWJBYNTTILVHFDSPLYBEEZMOKWQWHOLMKKLPCGOVGTYYARRVGICQJGJVRYOHJCZSHLYXTOMDJTSIUWDYTVKUIRFXEVUPZXLVESMZDPNUPDTAQILBOTUUMXAIBJIRZFVBDSGSIQGAZCGNZSIWWACRMNVCPENWWBDKMOEUQQFYJMXAEJYHANSBKKVDBDQ");
    const char tmp_msg_0[] = {0, -97, -78, -55, -18, 68, -2, -98, 53, 95, 114, 49, -28, 113, -114, -124, -116, -51, -101, 19, 16, -22, 35, 86, -122, 99, -86, 38, -89, 32, -101, -48, -81, 126, 109, -67, -9, -37, 79, 11, 30, -6, -68, -32, 121, 89, 0, 9, -82, -54, -40, 98, -43, 99, -53, 96, -80, 36, -124, 25, -96, 32, 76, -1, -38, -7, 37, -23, 74, 21, -103, 95, -45, -30, -76, -1, -122, 25, -53, 106, -77, 54, -119, -110, 88, -124, -44, 24, -27, 29, 82, -37, 62, -118, 2, 72, -19, 79, 114, 27, -125, 55, -47, 27, -113, -42, 49, -74, -96, 103, -57, 31, -49, -79, 17, 2, 20, 99, 80, -31, -30, 120, -66, 112, 76, 60, -105, 61, -67, 110};
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
    msg.setTimeStamp(0.363847085842);
    msg.setSource(37146U);
    msg.setSourceEntity(249U);
    msg.setDestination(22509U);
    msg.setDestinationEntity(50U);
    msg.content_type.assign("TUBAERVHNPGXDLIBHYLFKRUBETZGTJVIYDSFEKNKRTUEGWKAVILDCEQMFGJRMPRKWSLCRWOSJGHDJKZQBTIXGZNCQWCBMIIALDCANGXSOUGXUPQINPEQSREJRTJTCYWTDMMNHLBSN");
    const char tmp_msg_0[] = {73, -47, -59, -10, -77, -66, 126, -5, 125, -36, -114, -124, -120, 122, -107, -124, -50, -15, -73, -42, 20, -48, -92, 36, -36, -65, -46, -76, 0, -53, -15, -125, 46, -44, -50, 79, 51, -45, 21, -36, -103, 111, -21, -98, 36, -50, 16, 94, 108, -105, 67, 9, -79, 47, 10, -105, 1, 30, -62, 27, -51, 98, -29, -3, 92, -45, 18, 52, 105, 37, -88, 87, -21, -12, -119, -84, 51, -22, -95, 78, -36, 50, -16, -128, 117, -37, -34, 49, -77, 118, 41, -69, 108, 92, 117, -51, 14, -83, -126, -103, 49, -22, -70, 84, 40, 33, 107, 43, -14, -10, -41, 123, 42, 35, 30, 109, -63, 118, -96, 30, -17, -33, 73, -37, 16, -95, 51, -75};
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
    msg.setTimeStamp(0.0194212078184);
    msg.setSource(22013U);
    msg.setSourceEntity(76U);
    msg.setDestination(39733U);
    msg.setDestinationEntity(177U);
    msg.content_type.assign("LUZBMBJKANQNVQWJGEJLHVFABARBMWGDAKYLLQOPKQICYZSEXUSYUTWIIZOYNORVXPIZPQQOXUCSCJZXFXLMOFDSTCOKBPSLSIAEVCWZEWMATQOVFREHFTGEFTFLXZLKGBDWHHMDYRDVHGUDMAIXIHXGGUNSJQVEKORYPKBUZQPUCYIPXRFBZXAJLDRRFJ");
    const char tmp_msg_0[] = {1, 20, -11, 40, -29, -64, -39, 27, 50, 118, -105, 34, 86, -40, -7, 42, -54, -52, -123, -44, -27, 41, -60, 90, -24, -95, 46, 104, -50, -12, 44, -42, 65, -88, -42, -122, 56, -128, -14, 86, 10, -52, 11, -18, -77, 81, -89, 32, 5, -120, 102, -45, 112, -106, 25, -39, 31, -120, 117, -18, -76, -88, 20, 77, -103, -30, -57, -127, 88, -117, 65, -58, 102, -21, 86, 102, 43, 8, 43, 125, -69, -124, 23, 115, 90, 13, -107, -113, -32, -37, -91, -14, 62, -65, -37, 84, -80, -21, 55, 124, 86, -62, -116, -77, -104, -23, -48, 51, -78, -15, 43, -29, -54, -107, -12, -128, 87, 121, -43, -89, 113, 120, -116, -18, -111, 44, -23, 55, -20, 110, -96, -5, -67, -79, 99, 95, 25, 89, -74, 118, 113, 116, 78, -128, 57, -69, -29, -22, 125, -116, -108, 83, -65, 99, -44, 72, 125, 96, -106, -30, 77, 18, 105, 44};
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
    msg.setTimeStamp(0.835332877566);
    msg.setSource(53168U);
    msg.setSourceEntity(159U);
    msg.setDestination(24494U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.20662105201);
    msg.setSource(40769U);
    msg.setSourceEntity(55U);
    msg.setDestination(21887U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.296829686272);
    msg.setSource(54445U);
    msg.setSourceEntity(170U);
    msg.setDestination(11387U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.104175253168);
    msg.setSource(46147U);
    msg.setSourceEntity(17U);
    msg.setDestination(48687U);
    msg.setDestinationEntity(78U);
    msg.target = 33143U;
    msg.bearing = 0.668867458317;
    msg.elevation = 0.867912261711;

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
    msg.setTimeStamp(0.601259148874);
    msg.setSource(47451U);
    msg.setSourceEntity(124U);
    msg.setDestination(623U);
    msg.setDestinationEntity(107U);
    msg.target = 47538U;
    msg.bearing = 0.310209802174;
    msg.elevation = 0.950570774186;

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
    msg.setTimeStamp(0.586298894445);
    msg.setSource(32059U);
    msg.setSourceEntity(97U);
    msg.setDestination(23690U);
    msg.setDestinationEntity(245U);
    msg.target = 23511U;
    msg.bearing = 0.734961817025;
    msg.elevation = 0.704227914479;

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
    msg.setTimeStamp(0.11251013592);
    msg.setSource(16584U);
    msg.setSourceEntity(230U);
    msg.setDestination(58255U);
    msg.setDestinationEntity(13U);
    msg.target = 20145U;
    msg.x = 0.404086144095;
    msg.y = 0.0967480371516;
    msg.z = 0.743237336622;

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
    msg.setTimeStamp(0.796784045082);
    msg.setSource(29549U);
    msg.setSourceEntity(139U);
    msg.setDestination(50132U);
    msg.setDestinationEntity(223U);
    msg.target = 56225U;
    msg.x = 0.393950749963;
    msg.y = 0.399113215696;
    msg.z = 0.41055491671;

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
    msg.setTimeStamp(0.621406927744);
    msg.setSource(25516U);
    msg.setSourceEntity(48U);
    msg.setDestination(35747U);
    msg.setDestinationEntity(80U);
    msg.target = 11416U;
    msg.x = 0.588183368719;
    msg.y = 0.708081461112;
    msg.z = 0.954440069458;

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
    msg.setTimeStamp(0.500556723213);
    msg.setSource(12045U);
    msg.setSourceEntity(59U);
    msg.setDestination(63087U);
    msg.setDestinationEntity(135U);
    msg.target = 22951U;
    msg.lat = 0.507472247312;
    msg.lon = 0.886940606277;
    msg.z_units = 169U;
    msg.z = 0.797133173393;

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
    msg.setTimeStamp(0.499025496569);
    msg.setSource(11276U);
    msg.setSourceEntity(137U);
    msg.setDestination(31864U);
    msg.setDestinationEntity(143U);
    msg.target = 2511U;
    msg.lat = 0.31238759861;
    msg.lon = 0.436652648758;
    msg.z_units = 69U;
    msg.z = 0.52031192085;

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
    msg.setTimeStamp(0.0244829185829);
    msg.setSource(35898U);
    msg.setSourceEntity(140U);
    msg.setDestination(35520U);
    msg.setDestinationEntity(79U);
    msg.target = 39319U;
    msg.lat = 0.300124419809;
    msg.lon = 0.520025991429;
    msg.z_units = 85U;
    msg.z = 0.644847316884;

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
    msg.setTimeStamp(0.0754473975335);
    msg.setSource(16529U);
    msg.setSourceEntity(173U);
    msg.setDestination(1337U);
    msg.setDestinationEntity(189U);
    msg.locale.assign("UKSJXJYRYGFCWMKXFRRCATEKHWPIXLIKMZWOMTITQXGDBSTVGLBWIAPONYLWGDWQERXIDKJMDODJKCKBSAAABVTRNUULZXIHZOIAV");
    const char tmp_msg_0[] = {20, 5, 2, 31, -38, 0, 33, 61, -25, -46, 52, -100, 22, 120, 49, -21, -91, 92, -26, -84, 58, -100, -83, 26, -26, -107, -84, -104, 32, 104, -88, 28, 99, -123, 38, 102, 72, 56, -66, -17, -62, -71, 121, -46, 46, -85, -72, -118, 62, 101, -104, -67, -24, 115, 30, -66, -22, -57, 79, -71, -97, 43, 78, -66, -45, 114, -116, -112, -58, 14, -60, -126, 122, -110, 124, 72, -93, 8, 36, -108, 110, 45, -44, 2, 37, 111, 28, 79, -98, 106, -63, 98, -76, 75, 25, -81, -29, 49, 18, -90, -44, 45, 70, -121, -66, 65, -109, -86, 124, 23, -111, 91, 45, -64, -105, 25, 56, 45, -5, 124, 54, 99, -84, 81, 17, 69, 108, -77, -26, 89, 122, -41, 101, -128, 114, -103, -3, 35, -124, 47, 11, 95, -80, -120, -76, 20, -62, -127, 118, -3, 37, 102, -13, 14, -76, -98, -20, 126, -72, -39, -124, 126, -43, -77, 74, 66, -18, -93, -32, 37, -20};
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
    msg.setTimeStamp(0.610210308076);
    msg.setSource(11528U);
    msg.setSourceEntity(106U);
    msg.setDestination(38471U);
    msg.setDestinationEntity(206U);
    msg.locale.assign("KKYDADNXJDTESNLLSGVNEXDKWDFRYDBFOPLMBTSAKYFPVQUJOBBDCORWRLIUXVBOKSUZCHVWAWNSPNJJLGKDMNGCQJKOZLPKLFIZWNWZJHQVDFUCTBTZJVRGKXYB");
    const char tmp_msg_0[] = {27, -74, -89, 76, 79, -72, 72, 67, 59, 65, -10, -54, -107, 126, -92, 35, -80, 6, 100, 84, 93, -102, -124, 73, 32, -32, -19, 95, 25, -8, -78, 113, -89, -117, 41, 109, 9, -69, -114, -84, 40, -117, 106, -128, 66, -28, 102, -63, -1, -18, -42, -97, 70, 63, 91, -24, -100, 83, 70, -26, 26, 22, -104, -57, 74, 117, -67, -81, 57, 101, 52, -16, -82, 4, 59, 46, -109, -115, 105, 62, 66, 101, -64, -3, 97, 104, -53, -96, 15, 20, -20, 70, -61, -3, 99, -13, -105, 108, 35, 81, 120, 33, -118, -25, -32, -79, 62, 62, 25, -19, 81, -38, -88, 9, 28, -98, 25, -41, -45, 100, 67, -90, 115, 111, 89, -119, -82, -51, 105, 49, -124, 69, 69, 110, -19, 119, -24, -32, -10, -88, -101, -52, -92, 117, -69, 57, -58, -48, -88, -52, 79, 25, 81, -50, -116, -36, 20, 8, -89, -124, 36, 80, 55, 110, 28, -65, 123, -67, -61, -42, 21, -64, -45, -86, 24, -56, 119, -111, -100, -17, -24, 56, 119, -59, 100, 77, 3, -85, -16, 67, -96, 59, -98, 40, 20, -18};
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
    msg.setTimeStamp(0.0539191825706);
    msg.setSource(35441U);
    msg.setSourceEntity(210U);
    msg.setDestination(59648U);
    msg.setDestinationEntity(185U);
    msg.locale.assign("ASPRANWRXWGKQHJVDIOBXEPRTUIYIOOLJUIALWWBLVTFKMILRJPTAIENJYRYQEJUCIOZEVDFSHKGZHXCGYZJBVHNHTMQOFBPCUZFAUEJGMLEMPMZQCNSNTWGBHOUYCUDXOGQXCTJKGUDYFALLEQQQSZVHMOWCDOCAPDSYKIDSZYMTELFVPTRFCBWNMKXVDWBVDWXKWYNKHVNZIXLUHIESHMXRKSR");
    const char tmp_msg_0[] = {-31, -43, 71, 3, -69, 23, 94, -94, 90, -31, -112, 37, 98, -105, 120, 100, 70, 38, -113, -55, -62, -41, -98, -38, -126, -35, -55, 6, 124, -126, 61, 56, -68, -33, -37, -6, -28, 103, 12, -22, -43, -90, 104, 18, 88, -54, 17, 7, 7, -71, -126, -6, -120, -79, -111, 114, 21, 122, -21, -116, -7, 122, -19, -26, 79, 104, 121, -9, -126, -102, -110, -125, 105, -29, -51, 95, -2, -20, -51, 86, -60, 106, 27, -28, -103, 100, 18, -18, -107, -76, -56, -23, 101, 24, 123, -66, 59, 37, 68, -122, 24, -96, 68, -111, -63, 21, -19, 64, -127, -83, -124, -30, 13, -83, 43, -57, -47, -30, -20, 40, -119, -68, 8, -71};
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
    msg.setTimeStamp(0.707968428923);
    msg.setSource(1326U);
    msg.setSourceEntity(204U);
    msg.setDestination(54244U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.157124034061);
    msg.setSource(7573U);
    msg.setSourceEntity(7U);
    msg.setDestination(28248U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.110658988849);
    msg.setSource(29289U);
    msg.setSourceEntity(74U);
    msg.setDestination(40167U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.728145164733);
    msg.setSource(26651U);
    msg.setSourceEntity(179U);
    msg.setDestination(17325U);
    msg.setDestinationEntity(146U);
    msg.camid = 55U;
    msg.x = 49914U;
    msg.y = 1997U;

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
    msg.setTimeStamp(0.257754451275);
    msg.setSource(22610U);
    msg.setSourceEntity(243U);
    msg.setDestination(61876U);
    msg.setDestinationEntity(68U);
    msg.camid = 163U;
    msg.x = 64638U;
    msg.y = 4088U;

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
    msg.setTimeStamp(0.468634738344);
    msg.setSource(60731U);
    msg.setSourceEntity(23U);
    msg.setDestination(17884U);
    msg.setDestinationEntity(30U);
    msg.camid = 11U;
    msg.x = 7142U;
    msg.y = 44975U;

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
    msg.setTimeStamp(0.766530996218);
    msg.setSource(32437U);
    msg.setSourceEntity(167U);
    msg.setDestination(54262U);
    msg.setDestinationEntity(60U);
    msg.camid = 196U;
    msg.x = 32052U;
    msg.y = 19981U;

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
    msg.setTimeStamp(0.121281140668);
    msg.setSource(272U);
    msg.setSourceEntity(55U);
    msg.setDestination(49845U);
    msg.setDestinationEntity(252U);
    msg.camid = 61U;
    msg.x = 134U;
    msg.y = 28730U;

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
    msg.setTimeStamp(0.0314364159925);
    msg.setSource(50622U);
    msg.setSourceEntity(187U);
    msg.setDestination(59259U);
    msg.setDestinationEntity(15U);
    msg.camid = 57U;
    msg.x = 55895U;
    msg.y = 52989U;

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
    msg.setTimeStamp(0.0335859026305);
    msg.setSource(59930U);
    msg.setSourceEntity(224U);
    msg.setDestination(43361U);
    msg.setDestinationEntity(76U);
    msg.tracking = 106U;
    msg.lat = 0.841485142236;
    msg.lon = 0.352701587169;
    msg.x = 0.223999102775;
    msg.y = 0.726012190396;
    msg.z = 0.11160524254;

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
    msg.setTimeStamp(0.632936371058);
    msg.setSource(53104U);
    msg.setSourceEntity(121U);
    msg.setDestination(60867U);
    msg.setDestinationEntity(1U);
    msg.tracking = 190U;
    msg.lat = 0.809706597828;
    msg.lon = 0.235074442598;
    msg.x = 0.388861507629;
    msg.y = 0.294681521991;
    msg.z = 0.968550938803;

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
    msg.setTimeStamp(0.0654156988577);
    msg.setSource(34999U);
    msg.setSourceEntity(195U);
    msg.setDestination(52177U);
    msg.setDestinationEntity(222U);
    msg.tracking = 108U;
    msg.lat = 0.697216365442;
    msg.lon = 0.633059576682;
    msg.x = 0.946756336353;
    msg.y = 0.888434414787;
    msg.z = 0.124874871506;

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
    msg.setTimeStamp(0.186421524489);
    msg.setSource(20902U);
    msg.setSourceEntity(109U);
    msg.setDestination(10289U);
    msg.setDestinationEntity(20U);
    msg.target.assign("ZIDJXGHLTGLSXRLPDYGMTGWCDDHXOTKYHLEQPMQKRNEZXWZVUOFYQITBPXYPHFBHKNCZYDUQWNOYHTEOHOLMMRAJPEIQZTCNYPYALRBBTCGSXUBALCACHEMZORSQSSEMMFPCDMSK");
    msg.lbearing = 0.676768919954;
    msg.lelevation = 0.373517947294;
    msg.bearing = 0.756293198145;
    msg.elevation = 0.982329103158;
    msg.phi = 0.595659236109;
    msg.theta = 0.888435171697;
    msg.psi = 0.951392511226;
    msg.accuracy = 0.261415702422;

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
    msg.setTimeStamp(0.974288261693);
    msg.setSource(53724U);
    msg.setSourceEntity(252U);
    msg.setDestination(5713U);
    msg.setDestinationEntity(119U);
    msg.target.assign("PZNPWZANUDRYKQJHVTEYMACCOGQWNXIBMFGXDSREABVKPWQSTQYBEECMFROXTTHTAIVYMQVZVKBUZHBSDOFEDCOMPYLQEHWKOKDXILFIJKZXLLNVGJUCWZWTLWNQSNEBJEVXDKFGNBOLMGPGZTYP");
    msg.lbearing = 0.51618455058;
    msg.lelevation = 0.175705943417;
    msg.bearing = 0.866548031384;
    msg.elevation = 0.733249746132;
    msg.phi = 0.230933785797;
    msg.theta = 0.745815226431;
    msg.psi = 0.307271706604;
    msg.accuracy = 0.985978682203;

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
    msg.setTimeStamp(0.156591957098);
    msg.setSource(27445U);
    msg.setSourceEntity(216U);
    msg.setDestination(37975U);
    msg.setDestinationEntity(76U);
    msg.target.assign("BSLPGNZCUQOCXDBJKDPNWCZRSNEREHZTTBDVZHWNKMUAXQVXBXOSYMFKKUYIRDNCVSUFYIHMAZEYBHKGJPAKVRTNHQLWCEZVFOXLCIJVVFQOWXNZKJRURGGMWVHHRIIDYMGIAJRIXOBQPDPFPCPNTDQFSRFJFZOTHWALRQMKILTPWYFJUECPPJXJYGT");
    msg.lbearing = 0.34200609277;
    msg.lelevation = 0.30297949693;
    msg.bearing = 0.869183367724;
    msg.elevation = 0.941430271765;
    msg.phi = 0.746022745565;
    msg.theta = 0.695013540524;
    msg.psi = 0.211575509293;
    msg.accuracy = 0.360560714577;

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
    msg.setTimeStamp(0.336857565794);
    msg.setSource(27435U);
    msg.setSourceEntity(29U);
    msg.setDestination(15603U);
    msg.setDestinationEntity(214U);
    msg.target.assign("UAWFXDKDFTOMOKIVTUSRSSIZMBLAMJHUUGRAIVPDYGTZZIQMHNOBMCHFDDGOTNAVWOVDWJEEKMFHFLUSRENRPCRUPOCOWXWFNSLRCGXQPMDIZXCJXEEHAHLBQLJZCVKIVFWDVGNQZGEWYSGJRIELNAKPWLBHQQKYPRXYINQFAYPNMTMSVLTQGNUCLBGCSYCJFXTXUOOBYHYKZKPTUIAECGWRT");
    msg.x = 0.776570181417;
    msg.y = 0.715606964225;
    msg.z = 0.690259086772;
    msg.n = 0.0639139468131;
    msg.e = 0.684165808554;
    msg.d = 0.334542190418;
    msg.phi = 0.794067318963;
    msg.theta = 0.628059790663;
    msg.psi = 0.021501026629;
    msg.accuracy = 0.294305053356;

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
    msg.setTimeStamp(0.662059613014);
    msg.setSource(52221U);
    msg.setSourceEntity(28U);
    msg.setDestination(24316U);
    msg.setDestinationEntity(61U);
    msg.target.assign("UJVGCUGSSMBMFKBQURAGASFYFLMPOGNMFNZCHBDEUPINHNTBRNISDCVECAXZVBSMQLIFDHAYETEHRKJLXDQPTMRZTQVOINXKQCEJWNPZOPQPXTXXAHIKMQLZOQTSBUWJYOVWPBJTRCYGRFVWAASZVDSITEL");
    msg.x = 0.0843277114056;
    msg.y = 0.188344969531;
    msg.z = 0.941478941725;
    msg.n = 0.33444499641;
    msg.e = 0.406145008611;
    msg.d = 0.3209356287;
    msg.phi = 0.884924190096;
    msg.theta = 0.980083220496;
    msg.psi = 0.351648879784;
    msg.accuracy = 0.741589218269;

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
    msg.setTimeStamp(0.679884903674);
    msg.setSource(29280U);
    msg.setSourceEntity(181U);
    msg.setDestination(7487U);
    msg.setDestinationEntity(20U);
    msg.target.assign("TIYGQUVSUFOEPBHRSZQBIOOFYDVIDRPVKATPRAQHMBJQVSHGQMZDXXBDGGIEQNCGLDXOLRONCCUXRJBFYGTSOUSSMJJMYUEADTLHISXYVBNSLAQZCLJCWTRHSIFETQEXCUCVRTAPMIWPPLFUYONJPBSIRNJYMVKXAHWABRIPFUZKGWIXDLKCENHDHBAOKYKVEGYEROKEXZPXGZNUVBDQMLZKTHGLJKNAWCWZFNDMUQFJVLWTWOF");
    msg.x = 0.816460021019;
    msg.y = 0.038844933538;
    msg.z = 0.18284079559;
    msg.n = 0.363824124369;
    msg.e = 0.336454681589;
    msg.d = 0.558608879973;
    msg.phi = 0.791992989552;
    msg.theta = 0.754228773997;
    msg.psi = 0.909964227852;
    msg.accuracy = 0.920653321578;

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
    msg.setTimeStamp(0.734991283607);
    msg.setSource(58745U);
    msg.setSourceEntity(117U);
    msg.setDestination(23374U);
    msg.setDestinationEntity(108U);
    msg.target.assign("FAPMPLIYPASUNQDHWAQSPBOZMWFIXBWOPYNXSIHIENGLVTBONNDOAAEGNXBAEDIZINLOJSHHAGJHZJTLAMBCVWFM");
    msg.lat = 0.0105650543401;
    msg.lon = 0.833152970124;
    msg.z_units = 37U;
    msg.z = 0.858228661184;
    msg.accuracy = 0.447766156418;

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
    msg.setTimeStamp(0.743708840404);
    msg.setSource(27039U);
    msg.setSourceEntity(147U);
    msg.setDestination(40722U);
    msg.setDestinationEntity(127U);
    msg.target.assign("HCZVUYAUXWNWKQESRMOJTYJAPZWHCCKUSXWHAZRNYIMTGGMJAUTISSUDGNQFZQCVWGLOGBXJSBKQFLXOCYMUFKMPAFRBOBADMDVHBCQDPSRVKJCXLFFWJGDVQDUOLTXXVZXIYKQEHCNITYBEVNLRLIOUSNYEIIORHEKMJQTRDBVVCIGEZMPBNXHFZAOQL");
    msg.lat = 0.0681899325616;
    msg.lon = 0.6849003364;
    msg.z_units = 249U;
    msg.z = 0.111292200337;
    msg.accuracy = 0.0267820576858;

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
    msg.setTimeStamp(0.0926603957437);
    msg.setSource(50384U);
    msg.setSourceEntity(135U);
    msg.setDestination(31345U);
    msg.setDestinationEntity(79U);
    msg.target.assign("WQUBEVIMMCUZUDBSNRRMTDJKYCXDFRQTNXKESVOGGHQSVHOAZAOVCBFFSCQEJGWEWLARGCNBJAVBGZEJAJBOMTWPHRHQXAKURAOTXOYPKZIDDEONMZGTWQGONYAPSTCJPFVKJPPZBIKCFUTMGFESLLISKMPXKLDVQRXGYBSOIEEVQCHZMUBPUYBNDXVXURMRKHYZDYLEWWSUZLTCFTIQLIJUMGLYDXKZOQITXY");
    msg.lat = 0.343171774168;
    msg.lon = 0.921574097219;
    msg.z_units = 65U;
    msg.z = 0.027265524483;
    msg.accuracy = 0.993680652563;

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
    msg.setTimeStamp(0.106465831783);
    msg.setSource(58831U);
    msg.setSourceEntity(36U);
    msg.setDestination(12879U);
    msg.setDestinationEntity(224U);
    msg.name.assign("HADJXOBBGUZLXWVIXDTSKMWMQWBDLHNUQUPEJBLGVRVWCZLEARGEBONVBBSRZAIFYZQQZGM");
    msg.lat = 0.215411738624;
    msg.lon = 0.147456030236;
    msg.z = 0.286626785911;
    msg.z_units = 16U;

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
    msg.setTimeStamp(0.416067012672);
    msg.setSource(54902U);
    msg.setSourceEntity(76U);
    msg.setDestination(3460U);
    msg.setDestinationEntity(249U);
    msg.name.assign("TKIVJLGKWCAMNMXNVHFEDVEUSYJBTPZABSYWGELETDDPKSC");
    msg.lat = 0.853237243044;
    msg.lon = 0.820344895687;
    msg.z = 0.294316518634;
    msg.z_units = 126U;

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
    msg.setTimeStamp(0.242740726906);
    msg.setSource(5819U);
    msg.setSourceEntity(188U);
    msg.setDestination(59183U);
    msg.setDestinationEntity(236U);
    msg.name.assign("UYWFIPMASGGPDLEPKBGWIDORPNIMVNBQYQTJZQPYYMYASZNHZMOZFFGMHSFZFVXNXTAYJAUDXVEVRGCDTKJKRICDGROAJQWVVJFEGXMFGENUHDKJRHTAACLHXDIXCZXLXNVLGECWBJPJNYKUHWFSTTOSE");
    msg.lat = 0.702788257236;
    msg.lon = 0.51544859655;
    msg.z = 0.495833530537;
    msg.z_units = 74U;

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
    msg.setTimeStamp(0.894794813039);
    msg.setSource(62900U);
    msg.setSourceEntity(176U);
    msg.setDestination(44955U);
    msg.setDestinationEntity(227U);
    msg.op = 41U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("GAJUZGZCDTJCDIDIMTJMJJGEPYQXZRZVQYFDOAAWAHLJRMBSGFVPKADXRTYPKFMYNUUBMBCCMLEWKQKOABWRLAZSHICDCYHFPJEKTGKUSIIJHAUSCKRHQVSZINTFXNVWRMLCYWQDIOBBQOKGHTWLDTNMFCFNQVSEZQEXGZURE");
    tmp_msg_0.lat = 0.382893460618;
    tmp_msg_0.lon = 0.0698317150106;
    tmp_msg_0.z = 0.945146794986;
    tmp_msg_0.z_units = 222U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.90519809893);
    msg.setSource(47249U);
    msg.setSourceEntity(136U);
    msg.setDestination(8986U);
    msg.setDestinationEntity(92U);
    msg.op = 91U;

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
    msg.setTimeStamp(0.784812181933);
    msg.setSource(14243U);
    msg.setSourceEntity(204U);
    msg.setDestination(40817U);
    msg.setDestinationEntity(98U);
    msg.op = 178U;

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
    msg.setTimeStamp(0.076196721416);
    msg.setSource(64228U);
    msg.setSourceEntity(121U);
    msg.setDestination(32593U);
    msg.setDestinationEntity(230U);
    msg.value = 0.978794849038;
    msg.type = 111U;

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
    msg.setTimeStamp(0.753149903327);
    msg.setSource(50797U);
    msg.setSourceEntity(47U);
    msg.setDestination(18271U);
    msg.setDestinationEntity(217U);
    msg.value = 0.819783640916;
    msg.type = 8U;

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
    msg.setTimeStamp(0.0817093654343);
    msg.setSource(10594U);
    msg.setSourceEntity(99U);
    msg.setDestination(49575U);
    msg.setDestinationEntity(195U);
    msg.value = 0.989151246047;
    msg.type = 228U;

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
    msg.setTimeStamp(0.505036813687);
    msg.setSource(59813U);
    msg.setSourceEntity(201U);
    msg.setDestination(36456U);
    msg.setDestinationEntity(125U);
    msg.value = 0.642291319502;

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
    msg.setTimeStamp(0.42156413973);
    msg.setSource(41176U);
    msg.setSourceEntity(47U);
    msg.setDestination(11867U);
    msg.setDestinationEntity(156U);
    msg.value = 0.203231443889;

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
    msg.setTimeStamp(0.838049873599);
    msg.setSource(51478U);
    msg.setSourceEntity(231U);
    msg.setDestination(18353U);
    msg.setDestinationEntity(177U);
    msg.value = 0.256426784218;

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
    msg.setTimeStamp(0.831394449863);
    msg.setSource(59201U);
    msg.setSourceEntity(238U);
    msg.setDestination(30258U);
    msg.setDestinationEntity(56U);
    msg.timestamp_last_service = 0.907238314253;
    msg.time_next_service = 0.227331740931;
    msg.time_motor_next_service = 0.116901883102;
    msg.time_idle_ground = 0.102820205124;
    msg.time_idle_air = 0.587932462686;
    msg.time_idle_water = 0.813871812863;
    msg.time_idle_underwater = 0.161679631222;
    msg.time_idle_unknown = 0.628731064406;
    msg.time_motor_ground = 0.387347620899;
    msg.time_motor_air = 0.264884111684;
    msg.time_motor_water = 0.374150550952;
    msg.time_motor_underwater = 0.207451561784;
    msg.time_motor_unknown = 0.187637100367;
    msg.rpm_min = 22109;
    msg.rpm_max = -20866;
    msg.depth_max = 0.250984863182;

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
    msg.setTimeStamp(0.451174218306);
    msg.setSource(17198U);
    msg.setSourceEntity(98U);
    msg.setDestination(25159U);
    msg.setDestinationEntity(179U);
    msg.timestamp_last_service = 0.864617478589;
    msg.time_next_service = 0.0416879984967;
    msg.time_motor_next_service = 0.77311001028;
    msg.time_idle_ground = 0.875243055743;
    msg.time_idle_air = 0.160549373586;
    msg.time_idle_water = 0.102277994129;
    msg.time_idle_underwater = 0.501881182792;
    msg.time_idle_unknown = 0.0378320052485;
    msg.time_motor_ground = 0.230018222916;
    msg.time_motor_air = 0.298253957665;
    msg.time_motor_water = 0.486178863963;
    msg.time_motor_underwater = 0.728897482149;
    msg.time_motor_unknown = 0.547849875505;
    msg.rpm_min = 18334;
    msg.rpm_max = 20145;
    msg.depth_max = 0.879463501659;

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
    msg.setTimeStamp(0.190599699647);
    msg.setSource(38626U);
    msg.setSourceEntity(72U);
    msg.setDestination(61952U);
    msg.setDestinationEntity(91U);
    msg.timestamp_last_service = 0.465941418053;
    msg.time_next_service = 0.614248018402;
    msg.time_motor_next_service = 0.857797276719;
    msg.time_idle_ground = 0.306467893906;
    msg.time_idle_air = 0.579115928019;
    msg.time_idle_water = 0.234791922363;
    msg.time_idle_underwater = 0.15249556751;
    msg.time_idle_unknown = 0.398626340078;
    msg.time_motor_ground = 0.618235974988;
    msg.time_motor_air = 0.207240023889;
    msg.time_motor_water = 0.29258468921;
    msg.time_motor_underwater = 0.22388833054;
    msg.time_motor_unknown = 0.283976637494;
    msg.rpm_min = 2486;
    msg.rpm_max = -11122;
    msg.depth_max = 0.628318874411;

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
    msg.setTimeStamp(0.255017426285);
    msg.setSource(49746U);
    msg.setSourceEntity(175U);
    msg.setDestination(47314U);
    msg.setDestinationEntity(14U);
    msg.severity = 230U;
    msg.text.assign("LDDHYSLBXZLNIKLOPPNOYWUYBURJOITCCYJVHUWIRPCIKAHVWKWRAPSXBKOKNEGYMCDBIVQOPHGJENRUBTZUTFYQEFJRHXHBWNFBC");

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
    msg.setTimeStamp(0.938650776702);
    msg.setSource(32865U);
    msg.setSourceEntity(0U);
    msg.setDestination(20040U);
    msg.setDestinationEntity(11U);
    msg.severity = 110U;
    msg.text.assign("WSFKQXKWWDZATPOGPRRHZKJVNVRZBTTQNBZSWOJBMXJUNIQGDSJKHAXOVSLBTLQEHUEDEQAMNF");

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
    msg.setTimeStamp(0.65153011361);
    msg.setSource(14356U);
    msg.setSourceEntity(145U);
    msg.setDestination(1632U);
    msg.setDestinationEntity(118U);
    msg.severity = 204U;
    msg.text.assign("OILZEDCIKICYNRDAVIPZENUSBXVFWMNGUNJTWQSLVJRSJGETQGKIYLMSTQZHCCMTXUVQZSQTWKFJCZODMZTPLUCKPIEBFRBYSKQRLSNUJYBKPRBVHMDLYJVGUCMEFVKPSBEHGAKF");

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
    msg.setTimeStamp(0.15938786982);
    msg.setSource(36039U);
    msg.setSourceEntity(167U);
    msg.setDestination(42901U);
    msg.setDestinationEntity(188U);
    msg.channel = 40;
    msg.value = 1313665790;
    msg.gain = 91U;

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
    msg.setTimeStamp(0.363746074673);
    msg.setSource(39833U);
    msg.setSourceEntity(10U);
    msg.setDestination(61940U);
    msg.setDestinationEntity(160U);
    msg.channel = 10;
    msg.value = 1365043936;
    msg.gain = 154U;

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
    msg.setTimeStamp(0.00910051354842);
    msg.setSource(15859U);
    msg.setSourceEntity(251U);
    msg.setDestination(3030U);
    msg.setDestinationEntity(80U);
    msg.channel = -102;
    msg.value = -509374377;
    msg.gain = 175U;

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
    msg.setTimeStamp(0.103403436934);
    msg.setSource(20313U);
    msg.setSourceEntity(9U);
    msg.setDestination(18619U);
    msg.setDestinationEntity(21U);
    msg.gamma = 0.513460039883;
    msg.gamma_dot = 0.392469086347;
    msg.x = 0.492892016568;
    msg.y = 0.295992107023;
    msg.z = 0.21938745153;
    msg.vx = 0.0879381806618;
    msg.vy = 0.905281172175;
    msg.vz = 0.898094978608;
    msg.err_x = 0.934231372496;
    msg.err_y = 0.772501167318;
    msg.err_z = 0.320265414866;
    msg.start_x = 0.948879461746;
    msg.start_y = 0.40686754758;
    msg.start_z = 0.855973235037;
    msg.end_x = 0.151590461221;
    msg.end_y = 0.533458999151;
    msg.end_z = 0.155976854969;
    msg.track_bearing = 0.46436743783;

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
    msg.setTimeStamp(0.632065516121);
    msg.setSource(33134U);
    msg.setSourceEntity(177U);
    msg.setDestination(24519U);
    msg.setDestinationEntity(59U);
    msg.gamma = 0.333172293705;
    msg.gamma_dot = 0.550953807692;
    msg.x = 0.821670223255;
    msg.y = 0.394509259852;
    msg.z = 0.223727727362;
    msg.vx = 0.993299657342;
    msg.vy = 0.492081227011;
    msg.vz = 0.00701832310293;
    msg.err_x = 0.523910059955;
    msg.err_y = 0.680218697382;
    msg.err_z = 0.209651373891;
    msg.start_x = 0.9444611735;
    msg.start_y = 0.888269479553;
    msg.start_z = 0.0705220874994;
    msg.end_x = 0.441337331533;
    msg.end_y = 0.120345111282;
    msg.end_z = 0.637471730134;
    msg.track_bearing = 0.35358701501;

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
    msg.setTimeStamp(0.769664845576);
    msg.setSource(36268U);
    msg.setSourceEntity(194U);
    msg.setDestination(30928U);
    msg.setDestinationEntity(133U);
    msg.gamma = 0.572353991885;
    msg.gamma_dot = 0.491166222272;
    msg.x = 0.815296319909;
    msg.y = 0.840873048434;
    msg.z = 0.203967556913;
    msg.vx = 0.475783144882;
    msg.vy = 0.459339145098;
    msg.vz = 0.664771991901;
    msg.err_x = 0.402892239395;
    msg.err_y = 0.777286140628;
    msg.err_z = 0.868749062015;
    msg.start_x = 0.33112714662;
    msg.start_y = 0.117778120527;
    msg.start_z = 0.66861967416;
    msg.end_x = 0.0470649580287;
    msg.end_y = 0.877892799333;
    msg.end_z = 0.750027858712;
    msg.track_bearing = 0.712190661951;

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
    msg.setTimeStamp(0.781163813172);
    msg.setSource(18917U);
    msg.setSourceEntity(44U);
    msg.setDestination(9782U);
    msg.setDestinationEntity(57U);
    msg.agent_id = 2363441052U;
    msg.x = 0.990326862972;
    msg.y = 0.112094018881;
    msg.z = 0.161908597477;
    msg.gamma = 0.291573169089;

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
    msg.setTimeStamp(0.538343916048);
    msg.setSource(57996U);
    msg.setSourceEntity(171U);
    msg.setDestination(13991U);
    msg.setDestinationEntity(161U);
    msg.agent_id = 1808031363U;
    msg.x = 0.146386837907;
    msg.y = 0.933554546967;
    msg.z = 0.682339643985;
    msg.gamma = 0.435016677319;

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
    msg.setTimeStamp(0.579528919705);
    msg.setSource(31414U);
    msg.setSourceEntity(74U);
    msg.setDestination(33091U);
    msg.setDestinationEntity(191U);
    msg.agent_id = 81316963U;
    msg.x = 0.754749220685;
    msg.y = 0.199666532088;
    msg.z = 0.380475137124;
    msg.gamma = 0.0096740278052;

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
    msg.setTimeStamp(0.24327700804);
    msg.setSource(22825U);
    msg.setSourceEntity(107U);
    msg.setDestination(56738U);
    msg.setDestinationEntity(254U);
    msg.value = 219U;

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
    msg.setTimeStamp(0.0614948426357);
    msg.setSource(19180U);
    msg.setSourceEntity(213U);
    msg.setDestination(28676U);
    msg.setDestinationEntity(81U);
    msg.value = 158U;

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
    msg.setTimeStamp(0.233257013423);
    msg.setSource(45902U);
    msg.setSourceEntity(253U);
    msg.setDestination(61174U);
    msg.setDestinationEntity(192U);
    msg.value = 234U;

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
    msg.setTimeStamp(0.391492483661);
    msg.setSource(19954U);
    msg.setSourceEntity(66U);
    msg.setDestination(63651U);
    msg.setDestinationEntity(108U);
    msg.value = 0.522452367085;

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
    msg.setTimeStamp(0.238033283307);
    msg.setSource(55920U);
    msg.setSourceEntity(3U);
    msg.setDestination(24259U);
    msg.setDestinationEntity(88U);
    msg.value = 0.344795354064;

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
    msg.setTimeStamp(0.752565264429);
    msg.setSource(61908U);
    msg.setSourceEntity(165U);
    msg.setDestination(918U);
    msg.setDestinationEntity(170U);
    msg.value = 0.389773340515;

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
    msg.setTimeStamp(0.0866288297164);
    msg.setSource(21019U);
    msg.setSourceEntity(234U);
    msg.setDestination(9234U);
    msg.setDestinationEntity(247U);
    msg.value = 253U;

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
    msg.setTimeStamp(0.71352424707);
    msg.setSource(57055U);
    msg.setSourceEntity(12U);
    msg.setDestination(37238U);
    msg.setDestinationEntity(7U);
    msg.value = 15U;

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
    msg.setTimeStamp(0.395141717341);
    msg.setSource(28993U);
    msg.setSourceEntity(94U);
    msg.setDestination(34168U);
    msg.setDestinationEntity(67U);
    msg.value = 31U;

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
    msg.setTimeStamp(0.671707358243);
    msg.setSource(7495U);
    msg.setSourceEntity(35U);
    msg.setDestination(32661U);
    msg.setDestinationEntity(165U);
    msg.value = 0.498999168946;

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
    msg.setTimeStamp(0.316064079879);
    msg.setSource(40602U);
    msg.setSourceEntity(19U);
    msg.setDestination(2281U);
    msg.setDestinationEntity(215U);
    msg.value = 0.73905876554;

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
    msg.setTimeStamp(0.190326550042);
    msg.setSource(65531U);
    msg.setSourceEntity(249U);
    msg.setDestination(25608U);
    msg.setDestinationEntity(137U);
    msg.value = 0.0481283369972;

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

  {
    IMC::EBCInitiate msg;
    msg.setTimeStamp(0.343479298073);
    msg.setSource(60235U);
    msg.setSourceEntity(68U);
    msg.setDestination(64309U);
    msg.setDestinationEntity(171U);
    msg.value = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EBCInitiate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EBCInitiate msg;
    msg.setTimeStamp(0.977683959327);
    msg.setSource(36045U);
    msg.setSourceEntity(84U);
    msg.setDestination(58443U);
    msg.setDestinationEntity(51U);
    msg.value = 37U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EBCInitiate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EBCInitiate msg;
    msg.setTimeStamp(0.0896866280166);
    msg.setSource(20777U);
    msg.setSourceEntity(70U);
    msg.setDestination(46612U);
    msg.setDestinationEntity(168U);
    msg.value = 27U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EBCInitiate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EBCState msg;
    msg.setTimeStamp(0.808464392392);
    msg.setSource(17953U);
    msg.setSourceEntity(127U);
    msg.setDestination(33874U);
    msg.setDestinationEntity(7U);
    msg.value = 0.224876975113;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EBCState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EBCState msg;
    msg.setTimeStamp(0.998537211526);
    msg.setSource(8972U);
    msg.setSourceEntity(44U);
    msg.setDestination(52159U);
    msg.setDestinationEntity(190U);
    msg.value = 0.0677897845619;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EBCState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EBCState msg;
    msg.setTimeStamp(0.294084110202);
    msg.setSource(17059U);
    msg.setSourceEntity(84U);
    msg.setDestination(30520U);
    msg.setDestinationEntity(72U);
    msg.value = 0.0613434227957;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EBCState #2", msg == *msg_d);
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
