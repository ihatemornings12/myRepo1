/*
 * OFA_controller.h
 *
 *  Created on: 23.05.2012
 *      Author: rachor
 */

#ifndef OFA_CONTROLLER_H_
#define OFA_CONTROLLER_H_

#include <omnetpp.h>
#include "TCPSocket.h"
#include "IPv4Datagram.h"
#include "Open_Flow_Message_m.h"
#include "OFP_Packet_In_m.h"
#include "OFP_Flow_Mod_m.h"
#include "AttackDetection.h"

class AttackDetection;

class OFA_controller: public cSimpleModule, public cListener
{
public:
    OFA_controller();
    ~OFA_controller();
    void floodPacket(uint32_t buffer_id, OFP_Packet_In *packet_in_msg, int connID);
    void sendPacket(uint32_t buffer_id, OFP_Packet_In *packet_in_msg, uint32_t outport, int connID);
    void packet_out(cGate gate);
    void sendFlowModMessage(ofp_flow_mod_command mod_com, oxm_basic_match *match, uint32_t outport, int connID);
    void handshake(cMessage *msg);
    TCPSocket *findSocketFor(cMessage *msg);

	void installProtectionRule(oxm_basic_match *match);
	
	double returnStatsInterval();
	
protected:
	
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);

    void sendPacket(int numBytes, int expectedReplyBytes, bool serverClose = false);
    TCPSocket socket1;
    typedef std::map<int,TCPSocket *> SocketMap;
    SocketMap  socketMap;
    void connect();
    void handleFeaturesReply(Open_Flow_Message *of_msg);
    void processQueuedMsg(cMessage *data_msg);
	void handleFlowRemovedMessage(Open_Flow_Message *of_msg);

	void flowStatsRequest();
	void handleFlowStatsReply(Open_Flow_Message *of_msg);
	
	void receiveSignal(cComponent *src, simsignal_t id, cObject *obj);

    // <A.S>
    void sendEchoRequest();
    void handleEchoReply(Open_Flow_Message *of_msg);
    void handleErrorMessage(Open_Flow_Message *of_msg);

private:
    void checkEchoReplies();
    void checkStatsReplies();
    void findDisconnectedSwitch(std::vector<int> activeSwitches);
    void updateSocketConnection();
    void handlePortStatus(Open_Flow_Message *of_msg);
private:
    enum selfMsgsKind {STATS_REQUEST = 1, ECHO_REQUEST, CHECK, CHECK_STATS};

    simsignal_t PacketInSignalId;
    simsignal_t connIDSignal;
    
    // <A.S>
    simsignal_t errorSignal;
    cListener *listener;

    bool busy;
    std::list<cMessage *> msg_list;
    double serviceTime;
    double statsInterval; //time interval of flow stats request
    double statsInt;
    
    //self messages
    cMessage *reqFlowStats;
    cMessage *echoRequestMsg;
    std::vector<int> activeSwitches;
    bool allActive;
    bool allCollectStats;
    
    //collected statistics
    typedef std::map<int, ofp_flow_stats *> StatsMap;
    StatsMap collectedStats;
    AttackDetection *attackDetection;
};



#endif /* OFA_CONTROLLER_H_ */
