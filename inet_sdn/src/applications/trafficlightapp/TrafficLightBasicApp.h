

#ifndef TRAFFICLIGHTBASICAPP_H
#define TRAFFICLIGHTBASICAPP_H

#include <vector>

#include "INETDefs.h"

#include "TrafficLightPacket_m.h"
#include "ApplicationBase.h"
#include "UDPSocket.h"
#include "omnetpp.h"
#include <string>

using namespace std;

class TrafficLightBasicApp : public ApplicationBase
{
  protected:
    enum SelfMsgKinds { START = 1, SEND, STOP };

    UDPSocket socket;
    int localPort, destPort;
    std::vector<IPvXAddress> destAddresses;
    simtime_t startTime;
    simtime_t stopTime;
    cMessage *selfMsg;

    // statistics
    int numSent;
    int numReceived;

    static simsignal_t sentPkSignal;
    static simsignal_t rcvdPkSignal;

    // chooses random destination address
    virtual IPvXAddress chooseDestAddr();
    virtual void sendPacket();
    virtual void processPacket(cPacket *msg);
    virtual void setSocketOptions();

  public:
    TrafficLightBasicApp();
    ~TrafficLightBasicApp();

  protected:
    virtual int numInitStages() const { return 4; }
    virtual void initialize(int stage);
    virtual void handleMessageWhenUp(cMessage *msg);
    virtual void finish();

    virtual void processStart();
    virtual void processSend();
    virtual void processStop();

    virtual bool handleNodeStart(IDoneCallback *doneCallback);
    virtual bool handleNodeShutdown(IDoneCallback *doneCallback);
    virtual void handleNodeCrash();
};

#endif

