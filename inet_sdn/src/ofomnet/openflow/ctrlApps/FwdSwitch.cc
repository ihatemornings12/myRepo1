#include <omnetpp.h>
#include "FwdSwitch.h"
#include "openflow.h"
#include "OFP_Packet_In_m.h"
#include "OF_Wrapper.h"
#include "OFA_controller.h"
#include "Open_Flow_Message_m.h"
#include "IPv4Datagram.h"
#include "TCPSegment.h"
#include "UDPPacket.h"

using namespace std;


Define_Module(FwdSwitch);

FwdSwitch::FwdSwitch() {}

FwdSwitch::~FwdSwitch() {}

void FwdSwitch::initialize()
{
    cModule *ITModule = getParentModule()->getSubmodule("ofa_controller");
    controller = check_and_cast<OFA_controller *>(ITModule);

    getParentModule()->subscribe("PacketIn",this);

}


void FwdSwitch::receiveSignal(cComponent *src, simsignal_t id, cObject *obj)
{
    if (dynamic_cast<OF_Wrapper *>(obj) != NULL)
    {
        OF_Wrapper *wrapper = (OF_Wrapper *) obj;
        Open_Flow_Message *of_msg = wrapper->msg;
        OFP_Packet_In *packet_in = (OFP_Packet_In *) of_msg;
        uint32_t buffer_id = packet_in->getBuffer_id();


        EthernetIIFrame *eth_pkt;
        IPv4Datagram *ip_pkt;

        uint32_t inport;
        MACAddress src_mac;
        MACAddress dst_mac;
        int eth_type;
        
        IPv4Address dst_ip;
        IPv4Address src_ip;
        int ip_proto, dst_port, src_port;
        
        // packet is encapsulated in packet-in message
        if (buffer_id == OFP_NO_BUFFER)
        {
		    inport = packet_in->getEncapsulatedPacket()->getArrivalGate()->getIndex();
		    src_mac = dynamic_cast<EthernetIIFrame *>(packet_in->getEncapsulatedPacket())->getSrc();
		    dst_mac = dynamic_cast<EthernetIIFrame *>(packet_in->getEncapsulatedPacket())->getDest();
		    
		    eth_pkt = dynamic_cast<EthernetIIFrame *>(packet_in->getEncapsulatedPacket());
		    eth_type = dynamic_cast<EthernetIIFrame *>(packet_in->getEncapsulatedPacket())->getEtherType();
		    
		    ip_pkt = dynamic_cast<IPv4Datagram *>(eth_pkt->getEncapsulatedPacket());
		    
		    if (ip_pkt != NULL) {
		    	dst_ip = ip_pkt->getDestAddress();
		    	src_ip = ip_pkt->getSrcAddress();
		    	ip_proto = ip_pkt->getTransportProtocol();	  
		    	
		    	if (ip_proto == 6) { //TCP packet
		    		TCPSegment *tcp_packet;
					tcp_packet = dynamic_cast<TCPSegment *>(ip_pkt->getEncapsulatedPacket());
					if(tcp_packet != NULL) {
						dst_port = tcp_packet->getDestPort();
						src_port = tcp_packet->getSrcPort();
					}
		    	}
		    	else if (ip_proto == 17) { /* UDP packet */
		    		UDPPacket *udp_packet;
		    		udp_packet = dynamic_cast<UDPPacket *>(ip_pkt->getEncapsulatedPacket());
		    		if (udp_packet != NULL) {
		    			dst_port = udp_packet->getDestinationPort();
		    			src_port = udp_packet->getSourcePort();
		    		}
		    	}
		    	else { }	
		    }
		    
		    
        }
        //packet is stored in buffer
        else
        {
            inport = packet_in->getMatch().OFB_IN_PORT;
            src_mac = packet_in->getMatch().OFB_ETH_SRC;
            dst_mac = packet_in->getMatch().OFB_ETH_DST;
            eth_type = packet_in->getMatch().OFB_ETH_TYPE;
            dst_ip = packet_in->getMatch().OFB_IPV4_DST;
		    src_ip = packet_in->getMatch().OFB_IPV4_SRC;
		    ip_proto = packet_in->getMatch().OFB_IP_PROTO;
        }
        
        
        // get connection ID for OpenFlow switch which has sent the Packet-In message
        TCPCommand *ind = dynamic_cast<TCPCommand *>(packet_in->getControlInfo());

        if (!ind)
            opp_error("Switch: no TCPCommand control info in message (not from TCP?)");
        int connID = ind->getConnId();
        EV <<  "connID: " << connID << endl;
        MAC_connID m_c;
        m_c.address = src_mac;
        m_c.connID = connID;

/* L2 learning: Switch function */
        //search map for source mac address
        std::multimap<MAC_connID, uint32_t>::iterator i = mac_to_port.begin();
        bool mac_found2 = 0;
        while (i!=mac_to_port.end()) {
            if (src_mac.compareTo(i->first.address)==0 && connID == i->first.connID ) {
                mac_found2 = 1;
            }
            i++;
        }
        //insert source address into map
        if (mac_found2==0) {
            mac_to_port.insert(pair<MAC_connID, uint32_t> (m_c, inport));
        }


        // search map for destination mac address
        std::multimap<MAC_connID, uint32_t>::iterator j = mac_to_port.begin();
        bool mac_found = 0;
        while (j!=mac_to_port.end()) {
            if (dst_mac.compareTo(j->first.address)==0 && connID == j->first.connID ) {
                mac_found = 1;
                EV << "mac-adresse gefunden" << dst_mac <<endl;
                uint32_t outport = j->second;
                EV << outport << endl;
                oxm_basic_match *match = new oxm_basic_match();
/* Create the match rules */
                // packet is encapsulated
                if (buffer_id == OFP_NO_BUFFER) {
                	/* ARP Packet: Match with MAC addresses */
		            match->OFB_IN_PORT = packet_in->getEncapsulatedPacket()->getArrivalGate()->getIndex();
				    match->OFB_ETH_SRC = dynamic_cast<EthernetIIFrame *>(packet_in->getEncapsulatedPacket())->getSrc();
				    match->OFB_ETH_DST = dynamic_cast<EthernetIIFrame *>(packet_in->getEncapsulatedPacket())->getDest();
				    match->OFB_ETH_TYPE = dynamic_cast<EthernetIIFrame *>(packet_in->getEncapsulatedPacket())->getEtherType();
				    /* IP Packet: Add the IP addresses */
				    if (eth_type == 2048 && ip_pkt != NULL) { 
				    	match->OFB_IPV4_DST = dst_ip;
				    	match->OFB_IPV4_SRC = src_ip;
				    	match->OFB_IP_PROTO = ip_proto;
				    	if (ip_proto == 1) {
				    		EV << "ICMP packet " << endl;
				    	}
				    	/*TCP packet: Add TCP source & destination port */
				    	else if (ip_proto == 6) {  
				    		match->NW_DST = dst_port;
				    		match->NW_SRC = src_port;
				    	}
				    	/* UDP Packet: Add UDP source & destination port */
				    	else if (ip_proto == 17) { 
				    		match->NW_DST = dst_port;
				    		match->NW_SRC = src_port;
				    	}
				    	else {
				    		EV << "No such transport protocol" <<endl;
				    	}
				    }

		         }
                // packet is stored in buffer
                else
                {
                    match->OFB_IN_PORT = packet_in->getMatch().OFB_IN_PORT;
                    match->OFB_ETH_SRC = packet_in->getMatch().OFB_ETH_SRC;
                    match->OFB_ETH_DST = packet_in->getMatch().OFB_ETH_DST;
                    match->OFB_ETH_TYPE = packet_in->getMatch().OFB_ETH_TYPE;
                    
                    //TODO:complete this case too.
                }
                controller->sendFlowModMessage(OFPFC_ADD, match, outport, connID);
                controller->sendPacket(buffer_id, packet_in, outport, connID);
            }

            j++;
        }
        if (mac_found==0)
        {
            EV << "mac-adresse nicht gefunden" << endl;
            controller->floodPacket(buffer_id, packet_in, connID);

        }
    }



}
