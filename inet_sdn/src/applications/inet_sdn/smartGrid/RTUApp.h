//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#ifndef RTUAPP_H
#define RTUAPP_H

#include "omnetpp.h"
#include "INETDefs.h"
#include "TCPSocket.h"

#include "Record.h"
#include "Measurement_m.h"

using namespace std;

class RTUApp : public cSimpleModule, public cListener
{
	private:
	    enum SelfMsgKinds { CONNECT = 1, SEND };
        cMessage *timeoutMsg;       
        cMessage *reportMsg; 
        TCPSocket socket;

        Record *record;
        map<string, int> faulty_ied; //ieds and their threshold
        
        int interval;
        double startTime;
        // statistics
        int numSent;
        int numReceived;
        int ied;
        double threshold;
        simtime_t timestamp;
        
        static simsignal_t rcvdPkSignal;
        static simsignal_t sentPkSignal;
        static simsignal_t sum_energySignal, avg_energySignal, thresholdSignal, setPointsDelaySignal;
        simsignal_t commandSignal;

    private:
        void connect();
        //void startListening();
        void bind();
        void displayGUI();    
        
        void sendReportToDSO();
        void checkMeasurement(Measurement *data);
        void process (cMessage *msg);
    protected:
	    void receiveSignal(cComponent *src, simsignal_t id, cObject *obj);   
                 
  	public:
  	    RTUApp();
  	    virtual ~RTUApp();
    	virtual void initialize(int stage);
    	virtual void handleMessage(cMessage *msg);
    	virtual void finish();
 
};

#endif
