

#include "TrafficLightBasicApp.h"
#include "TrafficLightPacket_m.h"

#include "InterfaceTableAccess.h"
#include "IPvXAddressResolver.h"
#include "NodeOperations.h"
#include "UDPControlInfo_m.h"
#include "omnetpp.h"
#include <string>

Define_Module(TrafficLightBasicApp);

simsignal_t TrafficLightBasicApp::sentPkSignal = registerSignal("sentPk");
simsignal_t TrafficLightBasicApp::rcvdPkSignal = registerSignal("rcvdPk");

TrafficLightBasicApp::TrafficLightBasicApp()
{
    selfMsg = NULL;
}

TrafficLightBasicApp::~TrafficLightBasicApp()
{
    cancelAndDelete(selfMsg);
}

void TrafficLightBasicApp::initialize(int stage)
{
    ApplicationBase::initialize(stage);

    if (stage == 0)
    {
        numSent = 0;
        numReceived = 0;
        WATCH(numSent);
        WATCH(numReceived);

        localPort = par("localPort");
        destPort = par("destPort");
        startTime = par("startTime").doubleValue();
        stopTime = par("stopTime").doubleValue();
        if (stopTime >= SIMTIME_ZERO && stopTime < startTime)
            error("Invalid startTime/stopTime parameters");
        selfMsg = new cMessage("sendTimer");
    }
}

void TrafficLightBasicApp::finish()
{
    recordScalar("packets sent", numSent);
    recordScalar("packets received", numReceived);
    ApplicationBase::finish();
}

void TrafficLightBasicApp::setSocketOptions()
{
    int timeToLive = par("timeToLive");
    if (timeToLive != -1)
        socket.setTimeToLive(timeToLive);

    int typeOfService = par("typeOfService");
    if (typeOfService != -1)
        socket.setTypeOfService(typeOfService);

    const char *multicastInterface = par("multicastInterface");
    if (multicastInterface[0])
    {
        IInterfaceTable *ift = InterfaceTableAccess().get(this);
        InterfaceEntry *ie = ift->getInterfaceByName(multicastInterface);
        if (!ie)
            throw cRuntimeError("Wrong multicastInterface setting: no interface named \"%s\"", multicastInterface);
        socket.setMulticastOutputInterface(ie->getInterfaceId());
    }

    bool receiveBroadcast = par("receiveBroadcast");
    if (receiveBroadcast)
        socket.setBroadcast(true);

    bool joinLocalMulticastGroups = par("joinLocalMulticastGroups");
    if (joinLocalMulticastGroups)
        socket.joinLocalMulticastGroups();
}

IPvXAddress TrafficLightBasicApp::chooseDestAddr()
{
    int k = intrand(destAddresses.size());
    if (destAddresses[k].isIPv6() && destAddresses[k].get6().isLinkLocal()) // KLUDGE for IPv6
    {
        const char *destAddrs = par("destAddresses");
        cStringTokenizer tokenizer(destAddrs);
        const char *token;

        for (int i = 0; i <= k; ++i)
            token = tokenizer.nextToken();
        destAddresses[k] = IPvXAddressResolver().resolve(token);
    }
    return destAddresses[k];
}

void TrafficLightBasicApp::sendPacket()
{
    char msgName[32];
    sprintf(msgName, "FRANCESCO-%d", numSent);
	
	 
    //cPacket *payload = new cPacket(msgName);
    //payload->setByteLength(par("messageLength").longValue());
	
	//<F.R.>
	// EXAMPLE
	//ApplicationPacket* payload = new ApplicationPacket();
	//payload -> setValue(31121987);
    //((cPacket*) payload)->setByteLength(par("messageLength").longValue());

	double periodGreen = getParentModule()->par("periodGreen").doubleValue();
	double periodYellow = getParentModule()->par("periodYellow").doubleValue();
	double periodRed = getParentModule()->par("periodRed").doubleValue();
	string roadType = getParentModule()->par("roadType").stringValue();
	double time = (simTime()).dbl();

	TrafficLightStatus* payload = new TrafficLightStatus();
	
	payload->setTime(time);
	payload->setPeriodGreen(periodGreen);
	payload->setPeriodYellow(periodYellow);
	payload->setPeriodRed(periodRed);
	payload->setRoadType(roadType.c_str());
	
    IPvXAddress destAddr = chooseDestAddr();

    emit(sentPkSignal, payload);
    socket.sendTo(payload, destAddr, destPort);
    numSent++;
}

void TrafficLightBasicApp::processStart()
{
    socket.setOutputGate(gate("udpOut"));
    socket.bind(localPort);
    setSocketOptions();

    const char *destAddrs = par("destAddresses");
    cStringTokenizer tokenizer(destAddrs);
    const char *token;

    while ((token = tokenizer.nextToken()) != NULL) {
        IPvXAddress result;
        IPvXAddressResolver().tryResolve(token, result);
        if (result.isUnspecified())
            EV << "cannot resolve destination address: " << token << endl;
        else
            destAddresses.push_back(result);
    }

    if (!destAddresses.empty())
    {
        selfMsg->setKind(SEND);
        processSend();
    }
    else
    {
        if (stopTime >= SIMTIME_ZERO)
        {
            selfMsg->setKind(STOP);
            scheduleAt(stopTime, selfMsg);
        }
    }
}

void TrafficLightBasicApp::processSend()
{
    sendPacket();
    simtime_t d = simTime() + par("sendInterval").doubleValue();
    if (stopTime < SIMTIME_ZERO || d < stopTime)
    {
        selfMsg->setKind(SEND);
        scheduleAt(d, selfMsg);
    }
    else
    {
        selfMsg->setKind(STOP);
        scheduleAt(stopTime, selfMsg);
    }
}

void TrafficLightBasicApp::processStop()
{
    socket.close();
}

void TrafficLightBasicApp::handleMessageWhenUp(cMessage *msg)
{
    if (msg->isSelfMessage())
    {
        ASSERT(msg == selfMsg);
        switch (selfMsg->getKind()) {
            case START: processStart(); break;
            case SEND:  processSend(); break;
            case STOP:  processStop(); break;
            default: throw cRuntimeError("Invalid kind %d in self message", (int)selfMsg->getKind());
        }
    }
    else if (msg->getKind() == UDP_I_DATA)
    {
        // process incoming packet
        processPacket(PK(msg));
    }
    else if (msg->getKind() == UDP_I_ERROR)
    {
        EV << "Ignoring UDP error report\n";
        delete msg;
    }
    else
    {
        error("Unrecognized message (%s)%s", msg->getClassName(), msg->getName());
    }

    if (ev.isGUI())
    {
        char buf[40];
        sprintf(buf, "rcvd: %d pks\nsent: %d pks", numReceived, numSent);
        getDisplayString().setTagArg("t", 0, buf);
    }
}

void TrafficLightBasicApp::processPacket(cPacket *pk)
{
    emit(rcvdPkSignal, pk);
    EV << "Received packet: " << UDPSocket::getReceivedPacketInfo(pk) << endl;
    delete pk;
    numReceived++;
}

bool TrafficLightBasicApp::handleNodeStart(IDoneCallback *doneCallback)
{
    simtime_t start = std::max(startTime, simTime());
    if ((stopTime < SIMTIME_ZERO) || (start < stopTime) || (start == stopTime && startTime == stopTime))
    {
        selfMsg->setKind(START);
        scheduleAt(start, selfMsg);
    }
    return true;
}

bool TrafficLightBasicApp::handleNodeShutdown(IDoneCallback *doneCallback)
{
    if (selfMsg)
        cancelEvent(selfMsg);
    //TODO if(socket.isOpened()) socket.close();
    return true;
}

void TrafficLightBasicApp::handleNodeCrash()
{
    if (selfMsg)
        cancelEvent(selfMsg);
}

