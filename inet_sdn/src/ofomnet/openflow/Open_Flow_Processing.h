/*
 * Open_Flow_Processing.h
 *
 *  Created on: 27.07.2012
 *      Author: rachor
 */

#ifndef OPEN_FLOW_PROCESSING_H_
#define OPEN_FLOW_PROCESSING_H_

#include <omnetpp.h>
#include <EtherFrame_m.h>
#include <MACAddress.h>
#include <ARPPacket_m.h>
#include "Flow_Table.h"
#include "Buffer.h"
#include "OF_Wrapper.h"
#include "TCPCommand_m.h"
#include "IPv4Datagram.h"
#include <vector>
#include "INotifiable.h"

class Open_Flow_Processing : public cSimpleModule, public cListener
{
public:
    void disablePorts(std::vector<int> ports);
    Open_Flow_Processing();
    ~Open_Flow_Processing();
    void receiveSignal(cComponent *src, simsignal_t id, cObject *obj);

protected:
    Flow_Table *flow_table;
    Buffer *buffer;

    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
    void sendPacketOut();
    void processQueuedMsg(cMessage *data_msg);
    void finish();
private:
    EthernetIIFrame *frameBeingReceived;
    std::vector<int> port_vector;

    //        cMessage *event;
    //        cMessage *data_msg;
    bool busy;
    std::list<cMessage *> msg_list;
    double serviceTime;
    simsignal_t NF_NO_MATCH_FOUND;
    simsignal_t NF_SEND_PACKET;
    simsignal_t NF_FLOOD_PACKET;
    simsignal_t NF_PORT_STATUS;
    bool sent = false;
    int droppedPkt;
    static simsignal_t droppedPktSignal;
    int fwd_pkts;
    string name;
};


#endif /* OPEN_FLOW_PROCESSING_H_ */
