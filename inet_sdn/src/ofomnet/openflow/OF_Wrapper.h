/*
 * OF_Wrapper.h
 *
 *  Created on: 31.05.2012
 *      Author: rachor
 */

#ifndef OF_WRAPPER_H_
#define OF_WRAPPER_H_

#include <omnetpp.h>
#include "openflow.h"
#include "Open_Flow_Message_m.h"
#include "EtherFrame_m.h"
#include "IPv4Address.h"

class OF_Wrapper : public cObject
{
public:
    OF_Wrapper();
    ~OF_Wrapper();

    //wrapper class for several data.
    // used for notifications and signals.
    Open_Flow_Message *msg;
    uint32_t buffer_id;
    uint16_t outport;
    oxm_basic_match *match;
    EthernetIIFrame *frame;
    int connID;
    IPv4Address *ip_src;
    IPv4Address ip_victim;
    void setframe(EthernetIIFrame *frame);
};



#endif /* OF_WRAPPER_H_ */
