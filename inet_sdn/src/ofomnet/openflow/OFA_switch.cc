#include <OFA_switch.h>

#include "NotifierConsts.h"
#include "IPv4Datagram.h"
#include "IPvXAddressResolver.h"
#include "ARPPacket_m.h"

#include "openflow.h"
#include "Open_Flow_Message_m.h"
#include "OF_Wrapper.h"
#include "OFP_Packet_In_m.h"
#include "OFP_Packet_Out_m.h"
#include "OFP_Flow_Mod_m.h"
#include "OFP_Features_Reply_m.h"
#include "OFP_Flow_Removed_m.h"
#include "OFP_Flow_Stats_Request_m.h"
#include "OFP_Flow_Stats_Reply_m.h"
#include "OFP_Echo_Reply_m.h"
#include "OFP_Port_Status_m.h"
#include "OFP_Error_Msg_m.h"

#define MSGKIND_CONNECT  0
#define MSGKIND_SEND     1
#define MSGKIND_FLOW_ENTRY_TIMER 2


Define_Module(OFA_switch);

simsignal_t OFA_switch::fullFlowTableSignal = registerSignal("fullFlowTable");
simsignal_t OFA_switch::rttSignal = registerSignal("myRtt");

OFA_switch::OFA_switch() {}

OFA_switch::~OFA_switch() {}

void OFA_switch::initialize()
{
    fullTable = false;
    
    cModule *ITModule = getParentModule()->getSubmodule("buffer");
    buffer = check_and_cast<Buffer *>(ITModule);
    
    getParentModule()->subscribe("NF_NO_MATCH_FOUND",this);
    getParentModule()->subscribe("NF_PORT_STATUS", this);
    
    cModule *ITModule3 = getParentModule()->getSubmodule("flow_Table");
    flow_table = check_and_cast<Flow_Table *>(ITModule3);

    NF_FLOOD_PACKET = registerSignal("NF_FLOOD_PACKET");
    NF_SEND_PACKET = registerSignal("NF_SEND_PACKET");
    NF_NO_MATCH_FOUND = registerSignal("NF_NO_MATCH_FOUND");
    NF_PORT_STATUS = registerSignal("NF_PORT_STATUS");

    const char *address = par("address");
    int port = par("port");
    timeout = par("flow_timeout");
    socket.bind(*address ? IPvXAddress(address) : IPvXAddress(), port);
    socket.setOutputGate(gate("tcpOut"));
    socket.setDataTransferMode(TCP_TRANSFER_OBJECT);

    timeoutMsg = new cMessage("timer");
    timeoutMsg->setKind(MSGKIND_CONNECT);
    scheduleAt((simtime_t)par("startTime"), timeoutMsg);
}

void OFA_switch::handleMessage(cMessage *msg) {
    if (msg->isSelfMessage()) {
        if (msg->getKind()==MSGKIND_FLOW_ENTRY_TIMER) { //flow expires
            oxm_basic_match *match = (oxm_basic_match *) msg->getContextPointer();
            sendFlowRemovedMesagge(match); //inform controller
            bool isEmpty = flow_table->deleteEntry(match); //delete the flow entry from the flow table
            if (isEmpty) {
                fullTable = false;
                emit(fullFlowTableSignal, 0);
            }         
        }
        else {
            handleTimer(msg);
        }
    }
    if (dynamic_cast<Open_Flow_Message *>(msg) != NULL) {
        Open_Flow_Message *of_msg = (Open_Flow_Message *)msg;
        ofp_type type = (ofp_type)of_msg->getHeader().type;
        EV << "OFA_switch, ofp_type: " << type << endl;
        switch (type)
        {
        case OFPT_PACKET_OUT:
            handlePacketOutMessage(of_msg);
            break;
        case OFPT_FLOW_MOD:
            handleFlowModMessage(of_msg); //new flow entry
            break;
        case OFPT_FEATURES_REQUEST:
            handleFeaturesRequestMessage(of_msg);
            break;
        case OFPT_ECHO_REQUEST:
            handleEchoRequestMessage(of_msg);
        case OFPT_STATS_REQUEST:
        	handleFlowStatsRequest(of_msg); //flow stats request
        	break;
        default:
            break;
        }

    }
    delete msg;
}

void OFA_switch::handleTimer(cMessage *msg) {
    switch (msg->getKind())
    {
    case MSGKIND_CONNECT:
        EV << "starting session\n";
        connect(); // active OPEN
		break;
    case MSGKIND_SEND:
        break;
    }
}

void OFA_switch::handleFeaturesRequestMessage(Open_Flow_Message *of_msg) {
    OFP_Features_Reply *featuresReply = new OFP_Features_Reply("FeaturesReply");
    featuresReply->getHeader().version = OFP_VERSION;
    featuresReply->getHeader().type = OFPT_FEATURES_REPLY;
    featuresReply->setByteLength(1);
    featuresReply->setKind(TCP_C_SEND);
    int connID = socket.getConnectionId();
    featuresReply->setDatapath_id(connID);
    int capacity = buffer->getCapacity();
    featuresReply->setN_buffers(capacity);
    socket.send(featuresReply);
}

void OFA_switch::handleEchoRequestMessage(Open_Flow_Message *of_msg) {
    OFP_Echo_Reply *echoReply = new OFP_Echo_Reply("EchoReply");
    echoReply->getHeader().version = OFP_VERSION;
    echoReply->getHeader().type = OFPT_ECHO_REPLY;
    echoReply->setByteLength(1);
    echoReply->setKind(TCP_C_SEND);
    int connID = socket.getConnectionId();
    echoReply->setDatapath_id(connID);
    socket.send(echoReply);
}


void OFA_switch::handleFlowStatsRequest(Open_Flow_Message *of_msg) {
	EV << "OFA_Switch:: FlowStatsReply" << endl;
	
	OFP_Flow_Stats_Reply *flowStatsReply = new OFP_Flow_Stats_Reply("FlowStatsReply");
	flowStatsReply->getHeader().type = OFPT_STATS_REPLY;
	flowStatsReply->setByteLength(1);
	flowStatsReply->setKind(TCP_C_SEND);
	int connID = socket.getConnectionId();
	flowStatsReply->setDatapath_Id(connID);
	ofp_flow_stats *stats = new ofp_flow_stats;		
	stats = flow_table->returnStats();
	int size = stats[0].size;	
	stats++;
	flowStatsReply->setFlowStatsArrayArraySize(size);
	for (int i=0; i<size; i++) 
		flowStatsReply->setFlowStatsArray(i, stats);		
	socket.send(flowStatsReply);
	stats = NULL;
	delete stats;
}

void OFA_switch::sendFlowRemovedMesagge(oxm_basic_match *match) {
	OFP_Flow_Removed *flowRemoved = new OFP_Flow_Removed("FlowRemoved");
	//flowRemoved->getHeader().version = OFP_VERSION;
	flowRemoved->getHeader().type = OFPT_FLOW_REMOVED;
	flowRemoved->setByteLength(1);
	int connID = socket.getConnectionId();
	flowRemoved->setDatapath_id(connID);
	flowRemoved->setReason(OFPR_HARD_TIMEOUT);
	uint32_t cnt = flow_table->getPacketCount(match);
	flowRemoved->setPacket_count(cnt);
	flowRemoved->setMatch(*match);
	socket.send(flowRemoved);
}

void OFA_switch::receiveSignal(cComponent *src, simsignal_t id, cObject *obj) {
    Enter_Method_Silent();
    //printNotificationBanner(category, details);
    
    // no matching entry found in flow table
    if (id == NF_NO_MATCH_FOUND) {
        handlePacket();
    }
    else if (id == NF_PORT_STATUS) {
        if (dynamic_cast<OF_Wrapper *>(obj) != NULL) {
            OF_Wrapper *wrapper = (OF_Wrapper *) obj;
            uint16_t portNo = wrapper->outport;
            handlePortChange(portNo);
        }
    }
    else {}
}

// notify the controller that the status of the port changed
void OFA_switch::handlePortChange(uint16_t portNo) {
    OFP_Port_Status *msg = new OFP_Port_Status("portChange");
    msg->getHeader().version = OFP_VERSION;
    msg->getHeader().type = OFPT_PORT_STATUS;
    msg->setReason(OFPPR_DELETE);
    msg->setByteLength(1);
    int connID = socket.getConnectionId();
	msg->setDatapath_Id(connID);
    ofp_port_status *port_status = new ofp_port_status();
    port_status->desc.port_no = portNo;
    msg->setPort_status(*port_status);
    socket.send(msg);
}

// handle unmatched packets and send packet-in message to controller
void OFA_switch::handlePacket() {
    EthernetIIFrame *frame = buffer->dequeue();
    OFP_Packet_In *packetIn = new OFP_Packet_In("packetIn");
    packetIn->getHeader().version = OFP_VERSION;
    packetIn->getHeader().type = OFPT_PACKET_IN;
    packetIn->setReason(OFPR_NO_MATCH);

    packetIn->setByteLength(1);
    packetIn->setTimestamp(simTime());

    if (par("sendCompletePacket").boolValue()==true || buffer->isfull()) {
        // send full packet with packet-in message
        packetIn->encapsulate(frame);
        packetIn->setBuffer_id(OFP_NO_BUFFER);
    } else {
        // store packet in buffer and only send header fields
        oxm_basic_match *match = new oxm_basic_match();
        match->OFB_IN_PORT = frame->getArrivalGate()->getIndex();

        match->OFB_ETH_SRC = frame->getSrc();
        match->OFB_ETH_DST = frame->getDest();
        match->OFB_ETH_TYPE = frame->getEtherType();
        //extract ARP specific match fields if present
        if(frame->getEtherType()==ETHERTYPE_ARP){
            ARPPacket *arpPacket = check_and_cast<ARPPacket *>(frame->getEncapsulatedPacket());
            match->OFB_ARP_OP = arpPacket->getOpcode();
            match->OFB_ARP_SHA = arpPacket->getSrcMACAddress();
            match->OFB_ARP_THA = arpPacket->getDestMACAddress();
            match->OFB_ARP_SPA = arpPacket->getSrcIPAddress();
            match->OFB_ARP_TPA = arpPacket->getDestIPAddress();
        }

        packetIn->setMatch(*match);
        uint32_t buffer_id = buffer->storeMessage(frame);

        packetIn->setBuffer_id(buffer_id);
    }
    socket.send(packetIn);

}


void OFA_switch::connect() {
    socket.renewSocket();
    const char *connectAddress = par("connectAddress");
    int connectPort = par("connectPort");

    if (getParentModule()->getParentModule()->getSubmodule("controller") != NULL) {
        // multiple controllers; full path is needed for connect address
        connectAddress = getParentModule()->getParentModule()->getSubmodule("controller")->getFullPath().c_str();
    }
    
    socket.connect(IPvXAddressResolver().resolve(connectAddress), connectPort);
}



void OFA_switch::handlePacketOutMessage(Open_Flow_Message *of_msg) {
    EV << "OFA_switch::handlePacketOutMessage" << endl;
    OFP_Packet_Out *packet_out_msg = (OFP_Packet_Out *) of_msg;

    simtime_t rtt = simTime() - packet_out_msg->getTimestamp();
    emit(rttSignal, rtt);
    
    uint32_t buffer_id = packet_out_msg->getBuffer_id();
    uint32_t in_port = packet_out_msg->getIn_port();
    unsigned int actions_size = packet_out_msg->getActionsArraySize();
    if (buffer_id != OFP_NO_BUFFER) {
        // packet stored in buffer
        for (unsigned int i = 0; i < actions_size; i++) {
            ofp_action_header *action = &(packet_out_msg->getActions(i));
            execute_packet_out_action(action, buffer_id, in_port);
        }
    }
    else {
        // packet encapsulated in packet-out message
        EthernetIIFrame *frame =  dynamic_cast<EthernetIIFrame *>(packet_out_msg->decapsulate());
        for (unsigned int i = 0; i < actions_size; i++) {
            ofp_action_header *action = &(packet_out_msg->getActions(i));
            execute_packet_out_action(action, frame, in_port);
        }
    }
}

// packet stored in buffer
void OFA_switch::execute_packet_out_action(ofp_action_header *action, uint32_t buffer_id, uint32_t inport) {
    ofp_action_output *action_output = (ofp_action_output *) action;
    if(action_output->port == OFPP_ANY){
        EV << "Dropping packet in buffer with ID: " << buffer_id << endl;
        delete buffer->returnMessage(buffer_id);
        return;
    }
    uint32_t outport = action_output->port;
    OF_Wrapper *wrapper = new OF_Wrapper();
    wrapper->buffer_id = buffer_id;
    if (outport == OFPP_FLOOD) {
        emit(NF_FLOOD_PACKET, wrapper);
    }
    else {
        wrapper->outport = outport;
        emit(NF_SEND_PACKET, wrapper);
    }

}
// packet encapsulated and not stored in buffer
void OFA_switch::execute_packet_out_action(ofp_action_header *action, EthernetIIFrame *frame, uint32_t inport) {
    ofp_action_output *action_output = (ofp_action_output *) action;
    EV << "outport: " << action_output->port << endl;
    uint32_t outport = action_output->port;
    OF_Wrapper *wrapper = new OF_Wrapper();
    wrapper->buffer_id = OFP_NO_BUFFER;
    wrapper->setframe(frame);

    if (outport == OFPP_FLOOD) {
        EV << "outport==ofpp_flood" << endl;
        emit(NF_FLOOD_PACKET, wrapper);
    }
    else {
        wrapper->outport = outport;
        emit(NF_SEND_PACKET, wrapper);
    }
}

void OFA_switch::handleFlowModMessage(Open_Flow_Message *of_msg) {
    EV << "OFA_switch::handleFlowModMessage" << endl;
    OFP_Flow_Mod *flow_mod_msg = (OFP_Flow_Mod *) of_msg;   
    switch (flow_mod_msg->getCommand()) {
        case OFPFC_ADD: 
            addNewFlowEntry(flow_mod_msg);
            break;   
        case OFPFC_DELETE: {
            flow_table->deleteFlowTable();
            OF_Wrapper *wrapper = new OF_Wrapper();
            emit(NF_PORT_STATUS, wrapper);
            break;
        }
        default:
            break;
    }
}

void OFA_switch::addNewFlowEntry(OFP_Flow_Mod *flow_mod_msg) {
    oxm_basic_match *match = &flow_mod_msg->getMatch();
    
    // Construct unique name for flow entry timeout message
    ofp_action_output actions[1];
    entry_data *data = new entry_data();
    flow_table_instructions *instruc = new flow_table_instructions;
    int actionsSize = flow_mod_msg->getActionsArraySize();
    if (actionsSize > 0) {
        actions[0] = flow_mod_msg->getActions(0);
        instruc->actions[0] = actions[0];
        data->instruc = instruc;
    }
    else {
        //DROP ACTION
        actions[0].port = -1;
        instruc->actions[0] = actions[0];
        data->instruc = instruc;
    }
            
    flow_table_counters *counters = new flow_table_counters;
    counters->packet_count = 1;
    data->counters = counters;
            
    int priority = flow_mod_msg->getPriority();
    flow_table_priority *prior = new flow_table_priority;
    prior->priority = priority;
    data->prior = prior;
    
    //add new entry in the flow table if does not exist
    
    if (!flow_table->lookup(match)) {
        bool newEntry = flow_table->addEntry(match, data);
        if (newEntry) {
            oxm_basic_match *copy = new oxm_basic_match();

            copy->OFB_ETH_DST = match->OFB_ETH_DST;
            copy->OFB_ETH_SRC = match->OFB_ETH_SRC;
            copy->OFB_ETH_TYPE = match->OFB_ETH_TYPE;
            copy->OFB_IN_PORT = match->OFB_IN_PORT;
            copy->OFB_IPV4_DST = match->OFB_IPV4_DST;
            copy->OFB_IPV4_SRC = match->OFB_IPV4_SRC;
            copy->OFB_IP_PROTO = match->OFB_IP_PROTO;
            copy->NW_DST = match->NW_DST;
            copy->NW_SRC = match->NW_SRC;
            copy->wildcards = match->wildcards;

            std::stringstream timerName;
            timerName << "sMac:" << copy->OFB_ETH_SRC;
            timerName << ", dMac:" << copy->OFB_ETH_DST;
            timerName << ", iPort:" << copy->OFB_IN_PORT;
            timerName << ", eType:" << copy->OFB_ETH_TYPE;
            timerName << ", dIp:" << copy->OFB_IPV4_DST;
            timerName << ", sIp:" << copy->OFB_IPV4_SRC;
            timerName << ", dstPort:" << copy->NW_DST;
            timerName << ", srcPort:" << copy->NW_SRC;

	        // set the timer for flow expiration
            cMessage *timeoutmsg = new cMessage(timerName.str().c_str());
            timeoutmsg->setKind(MSGKIND_FLOW_ENTRY_TIMER);
            timeoutmsg->setContextPointer(copy);
            scheduleAt(simTime()+timeout, timeoutmsg);
        }
        else { //full flow table send error message to controller
            OFP_Error_Msg *error_msg = new OFP_Error_Msg("OFPT_ERROR_MSG");
            error_msg->getHeader().version = OFP_VERSION;
            error_msg->getHeader().type = OFPT_ERROR;
            error_msg->setType(OFPET_FLOW_MOD_FAILED);
            error_msg->setCode(OFPFMFC_ALL_TABLES_FULL);
            
            error_msg->setByteLength(1);
            error_msg->setKind(TCP_C_SEND);
	        socket.send(error_msg);
        
            if (!fullTable) {
                fullTable = true;
                emit(fullFlowTableSignal, 1);
            }
        }
    }
}



