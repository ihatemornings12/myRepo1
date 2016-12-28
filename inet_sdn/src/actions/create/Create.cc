/**
 * @file Create.cc
 * @author Francesco Racciatti <racciatti.francesco@gmail.com>
 */


#include "Create.h"
#include <list>
#include "seapputils.h"

#include "UDPControlInfo.h"
#include "TCPCommand_m.h"
#include "IPv4ControlInfo.h"

#include "UDPPacket.h"
#include "TCPSegment.h"
#include "TrafficLightPacket_m.h"
#include "Ieee802Ctrl_m.h"
#include "IPv4Datagram.h"
#include "PPPFrame_m.h"
#include "EtherFrame_m.h"
#include "IdealAirFrame_m.h"
#include "AirFrame_m.h"

//A.S
#include "ApplicationPacket_m.h"
#include "SendApplicationPacket_m.h"
#include "MeasurementData_m.h"

CreateInfo::CreateInfo()
{ 
}


CreateInfo::~CreateInfo()
{
}


void Create::buildNewPacket(cPacket** packet, int layer, type_t type) const
{
	switch (layer) {

		// create a packet of layer 5
		case 5: {
			
			// create the specific packet
			switch (type) { 
				case type_t::TLREPORT_UDP_SEND: {
					*packet = (cPacket*) (new TrafficLightStatus());
					break;
				}
				case type_t::TLREPORT_UDP_DATA: {
					*packet = (cPacket*) (new TrafficLightStatus());
					break;
				}				
				case type_t::CNCMD_UDP_SEND: {
					*packet = (cPacket*) (new TrafficLightCmd());
					break;
				}
				case type_t::CNCMD_UDP_DATA: {
					*packet = (cPacket*) (new TrafficLightCmd());
					break;
				}
				//A.S
				case type_t::APPLICATION_PACKET: {
					*packet = (cPacket*) (new ApplicationPacket());
					break;
				}
				case type_t::SEND_APPLICATION_PACKET: {
					*packet = (cPacket*) (new SendApplicationPacket());
					break;
				}
				
				case type_t::MEASUREMENT_DATA: {
				    *packet = (cPacket*) (new MeasurementData());  
				    break;
				}
				
				// in general, INET has not well structured packets of layer 5
				default: {
					*packet = new cPacket("CreatedPacket-Layer5", 0);
					break;
				}
			}		
            // <A.S>
            (*packet)->setByteLength(1);	
            	
			(*packet)->addPar("isFiltered");
			(*packet)->par("isFiltered").setBoolValue(true);
			
			(*packet)->addPar("isApplicationPacket");
			(*packet)->par("isApplicationPacket").setBoolValue(true);
			
			(*packet)->addPar("isToSend");
			(*packet)->par("isToSend").setBoolValue(false);

            // <A.S>
			(*packet)->addPar("fromGlobalFilter");
			(*packet)->par("fromGlobalFilter").setBoolValue(false);

			cObject* controlInfo = nullptr;
			
			switch (type) {	
			
				// UDP send data
				case type_t::UDP_SEND_COMMAND: {
					controlInfo = new UDPSendCommand();
					(*packet)->setControlInfo(controlInfo);					
					break;
				}
				
				// UDP bind
				case type_t::UDP_BIND_COMMAND: {
					controlInfo = new UDPBindCommand();
					(*packet)->setControlInfo(controlInfo);	
					break;
				}
				
				// UDP connect
				case type_t::UDP_CONNECT_COMMAND: {
					controlInfo = new UDPConnectCommand();
					(*packet)->setControlInfo(controlInfo);	
					break;
				}
				
				// UDP close
				case type_t::UDP_CLOSE_COMMAND: {
					controlInfo = new UDPCloseCommand();
					(*packet)->setControlInfo(controlInfo);	
					break;
				}
				
				// UDP data indication
				case type_t::UDP_DATA_INDICATION: {
					controlInfo = new UDPDataIndication();
					(*packet)->setControlInfo(controlInfo);					
					break;
				}
				
				// UDP error indication
				case type_t::UDP_ERROR_INDICATION: {
					controlInfo = new UDPErrorIndication();
					(*packet)->setControlInfo(controlInfo);	
					break;
				}
				
				// TCP send command
				case type_t::TCP_SEND_COMMAND: {
					controlInfo = new TCPSendCommand();
					(*packet)->setControlInfo(controlInfo);					
					break;
				}
								

				// TCP open command
				case type_t::TCP_OPEN_COMMAND: {
					controlInfo = new TCPOpenCommand();
					(*packet)->setControlInfo(controlInfo);					
					break;
				}

				// TCP connect info
				case type_t::TCP_CONNECT_INFO: {
					controlInfo = new TCPConnectInfo();
					(*packet)->setControlInfo(controlInfo);					
					break;
				}
				
				// TCP error info
				case type_t::TCP_ERROR_INFO: {
					controlInfo = new TCPErrorInfo();
					(*packet)->setControlInfo(controlInfo);					
					break;
				}
				
				// TCP command
				case type_t::TCP_COMMAND: {
					controlInfo = new TCPCommand();
					(*packet)->setControlInfo(controlInfo);					
					break;
				}
				
				// TL UDP SEND command
				case type_t::TLREPORT_UDP_SEND: {
					controlInfo = new UDPSendCommand();
					(*packet)->setControlInfo(controlInfo);					
					break;
				}
				
				// CNCMD UDP SEND command
				case type_t::CNCMD_UDP_SEND: {
					controlInfo = new UDPSendCommand();
					(*packet)->setControlInfo(controlInfo);					
					break;
				}
				
				// TL UDP DATA command
				case type_t::TLREPORT_UDP_DATA: {
					controlInfo = new UDPDataIndication();
					(*packet)->setControlInfo(controlInfo);					
					break;
				}
				
				// CNCMD UDP DATA command
				case type_t::CNCMD_UDP_DATA: {
					controlInfo = new UDPDataIndication();
					(*packet)->setControlInfo(controlInfo);					
					break;
				}
				
				// <A.S>
				case type_t::APPLICATION_PACKET: {
					controlInfo = new UDPDataIndication();
					(*packet)->setControlInfo(controlInfo);
					break;
				}
				// <A.S>
				case type_t::SEND_APPLICATION_PACKET: {
					controlInfo = new UDPSendCommand();
					(*packet)->setControlInfo(controlInfo);					
					break;
				}
				
				// <A.S>
				case type_t::MEASUREMENT_DATA: {
				    (*packet)->setKind(TCP_C_SEND);
				    controlInfo = new TCPSendCommand();
				    (*packet)->setControlInfo(controlInfo);
				    break;
				}
				// TODO add here the code to set other control infos for layer 5
			}	
		
			break;
		}

		// create a packet of layer 4
		case 4: {
			
			// create the right packet
			if (type == type_t::UDP_OVER_IPV4) {
				*packet = new UDPPacket("CreatedPacket-UDP", 0);
                // <A.S>
                (*packet)->setByteLength(8);
			}
			
			if (type == type_t::TCP_OVER_IPV4) {
				*packet = new TCPSegment("CreatedSegment-TCP", 0);	
                // <A.S>
				(*packet)->setByteLength(20);
			}
			
			// add & set parameters
			(*packet)->addPar("isFiltered");
			(*packet)->par("isFiltered").setBoolValue(true);
			
			(*packet)->addPar("isApplicationPacket");
			(*packet)->par("isApplicationPacket").setBoolValue(true);
			
			(*packet)->addPar("isToSend");
			(*packet)->par("isToSend").setBoolValue(false);
            
            // <A.S>
			(*packet)->addPar("fromGlobalFilter");
			(*packet)->par("fromGlobalFilter").setBoolValue(false);
			
							
			// append control info only to the outer packet
			
			if (!isOuterPacket(layer)) {
				return;
			}
			cObject* controlInfo = nullptr;
			
			switch (type) {
			
				case type_t::UDP_OVER_IPV4: {
					controlInfo = new IPv4ControlInfo();
					(*packet)->setControlInfo(controlInfo);					
					return;
				}
				
				case type_t::TCP_OVER_IPV4: {
					controlInfo = new IPv4ControlInfo();
					(*packet)->setControlInfo(controlInfo);					
					return;
				}
			
			
			}
			
			return;
		}

		// create a packet of layer 3
		case 3: {
		
			// TODO extend with others protocols
			*packet = new IPv4Datagram("Created packet-IPv4Datagram", 0);
			// <A.S>
			(*packet)->setByteLength(20);
			
			// add & set parameters
			(*packet)->addPar("isFiltered");
			(*packet)->par("isFiltered").setBoolValue(true);
			
			(*packet)->addPar("isApplicationPacket");
			(*packet)->par("isApplicationPacket").setBoolValue(true);
			
			(*packet)->addPar("isToSend");
			(*packet)->par("isToSend").setBoolValue(false);
            
            // <A.S>
			(*packet)->addPar("fromGlobalFilter");
			(*packet)->par("fromGlobalFilter").setBoolValue(false);
			
			// append control info only to the outer packet
			if (!isOuterPacket(layer)) {
				return;
			}
			cObject* controlInfo = nullptr;
			
			switch (type) {
			
				case type_t::IPV4DATAGRAM: {
					// no control info
					controlInfo = new IPv4Datagram();
					(*packet)->setControlInfo(controlInfo);
					return;
				}
				
				case type_t::IPV4DATAGRAM802CTRL: {
					controlInfo = new Ieee802Ctrl();
					(*packet)->setControlInfo(controlInfo);					
					return;
				}
			
			}
		
			break;
		}

		// create a packet of layer 2
		case 2: {
			
			switch (type) {
			
				case type_t::PPPFRAME: {
					*packet = new PPPFrame("CreatedPacket-PPP", 0);	
					// <A.S>
					(*packet)->setByteLength(7); 
					break;
				}
				case type_t::ETHERNETIIFRAME: {
					*packet = new EthernetIIFrame("CreatedPacket-EthernetIIFrame", 0);	
					// <A.S>
					(*packet)->setByteLength(18);
					break;
				}
				case type_t::IDEALAIRFRAME: {
					*packet = new IdealAirFrame("CreatedPacket-IdealAirFrame", 0);
					break;
				}
				case type_t::AIRFRAME: {
					*packet = new AirFrame("CreatedPacket-AirFrame", 0);
					break;
				}
			
			}
			
			// add & set parameters
			(*packet)->addPar("isFiltered");
			(*packet)->par("isFiltered").setBoolValue(true);
			
			(*packet)->addPar("isApplicationPacket");
			(*packet)->par("isApplicationPacket").setBoolValue(true);
			
			(*packet)->addPar("isToSend");
			(*packet)->par("isToSend").setBoolValue(false);

            // <A.S>
			(*packet)->addPar("fromGlobalFilter");
			(*packet)->par("fromGlobalFilter").setBoolValue(false);
			
							
			// append control info only to the outer packet
			
			if (!isOuterPacket(layer)) {
				return;
			}
			cObject* controlInfo = nullptr;
		
			break;
		}

	}
	
}


type_t Create::getType (int layer, string typeCode)
{

	switch (layer) {
	
		// layer 5
		case 5: {		
			if (typeCode == "0000") {
				return type_t::UDP_SEND_COMMAND;
			}
			if (typeCode == "0001") {
				return type_t::UDP_BIND_COMMAND;
			}
			if (typeCode == "0002") {
				return type_t::UDP_CONNECT_COMMAND;
			}
			if (typeCode == "0003") {
				return type_t::UDP_CLOSE_COMMAND;
			}
			if (typeCode == "0004") {
				return type_t::UDP_DATA_INDICATION;
			}
			if (typeCode == "0005") {
				return type_t::UDP_ERROR_INDICATION;
			}

			if (typeCode == "0100") {
				return type_t::TCP_SEND_COMMAND;
			}
			if (typeCode == "0101") {
				return type_t::TCP_OPEN_COMMAND;
			}
			if (typeCode == "0102") {
				return type_t::TCP_CONNECT_INFO;
			}
			if (typeCode == "0103") {
				return type_t::TCP_ERROR_INFO;
			}
			if (typeCode == "0104") {
				return type_t::TCP_COMMAND;
			}
			
			if (typeCode == "0200") {
				return type_t::TLREPORT_UDP_SEND;
			}
			if (typeCode == "0201") {
				return type_t::TLREPORT_UDP_DATA;
			}
			if (typeCode == "0300") {
				return type_t::CNCMD_UDP_SEND;
			}
			if (typeCode == "0301") {
				return type_t::CNCMD_UDP_DATA;
			}
			// <A.S>
			if (typeCode == "1000" ) {
				return type_t::APPLICATION_PACKET;
			}
			if (typeCode == "1001" ) {
				return type_t::SEND_APPLICATION_PACKET;
			}
			if (typeCode == "1002") {
			    return type_t::MEASUREMENT_DATA;
			}

		}
		
		// layer 4		
		case 4: {
			if (typeCode == "0000") {
				return type_t::UDP_OVER_IPV4;
			}
			//if (typeCode == "0001") {
			//	return type_t::UDP_OVER_IPV6;
			//}
			if (typeCode == "0010") {
				return type_t::TCP_OVER_IPV4;
			}
			//if (typeCode == "0011") {
			//	return type_t::TCP_OVER_IPV6;
			//}
		}
		
		// layer 3		
		case 3: {	
			if (typeCode == "0000") {
				return type_t::IPV4DATAGRAM;
			}
			if (typeCode == "0001") {
				return type_t::IPV4DATAGRAM802CTRL;
			}
			//if (typeCode == "0100") {
			//	return type_t::IPV6DATAGRAM;
			//}
			//if (typeCode == "0101") {
			//	return type_t::IPV6DATAGRAM802CTRL;
			//}
			
		}
		
		// layer 2		
		case 2: {
			if (typeCode == "0000") {
				return type_t::PPPFRAME;
			}
			if (typeCode == "0010") {
				return type_t::ETHERNETIIFRAME;
			}
			if (typeCode == "0020") {
				return type_t::IDEALAIRFRAME;
			}
			if (typeCode == "0030") {
				return type_t::AIRFRAME;
			}
		
		}
		
		default: {
			string errorMsg = "[type_t Create::getType (int, string)] Error, can't recognize the control code " + typeCode;
			errorMsg.append(" on layer" + to_string(layer));
			opp_error(errorMsg.c_str());
		}
	
	}
		
}


Create::Create(const string layer5Type, const string layer4Type, const string layer3Type, const string layer2Type) : ActionBase(action_t::CREATE)
{
	if (layer5Type != "-1") {
		CreateInfo* createInfo = new CreateInfo();
		createInfo->layer = 5;
		createInfo->type = getType(5, layer5Type);
		createInfos.push_back(createInfo);
	}
	
	if (layer4Type != "-1") {
		CreateInfo* createInfo = new CreateInfo();
		createInfo->layer = 4;
		createInfo->type = getType(4, layer4Type);
		createInfos.push_back(createInfo);
	}
	
	if (layer3Type != "-1") {
		CreateInfo* createInfo = new CreateInfo();
		createInfo->layer = 3;
		createInfo->type = getType(3, layer3Type);
		createInfos.push_back(createInfo);
	}
	
	if (layer2Type != "-1") {
		CreateInfo* createInfo = new CreateInfo();
		createInfo->layer = 2;
		createInfo->type = getType(2, layer2Type);
		createInfos.push_back(createInfo);
	}
	
	involvedLayer = NONE_LAYER;
}


Create::~Create()
{	
	for (size_t i = 0; i < createInfos.size(); i++) {
		delete createInfos[i];
	}
}


void Create::execute(cPacket **packet)
{
	cPacket* encapsulatedPacket = nullptr;

	int layer;
	type_t type;

	for (size_t i = 0; i < createInfos.size(); i++) {
		layer = createInfos[i]->layer;
		type = createInfos[i]->type;
	
		buildNewPacket(&encapsulatedPacket, layer, type);
	
		// top layer doesn't encapsulate packets
		if (i != 0) {
			encapsulatedPacket->encapsulate(*packet);
		}
		
		*packet = encapsulatedPacket;
	}
	
	setParameterRecursively(*packet, "isFiltered", true);
	
	// <A.S>
	if (strcmp((*packet)->getOwner()->getName(), "globalFilter") == 0)
		setParameterRecursively(*packet, "fromGlobalFilter", true);
}


bool Create::isOuterPacket(int layer) const
{
	for (size_t i = 0; i < createInfos.size(); i++) {
		if (layer > (createInfos[i]->layer))
			return false;
	}

	return true;
}
