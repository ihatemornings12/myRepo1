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

using namespace std;

class RTUApp : public cSimpleModule, public cListener
{
	private:
	    enum SelfMsgKinds { CONNECT = 1, SEND };
        cMessage *timeoutMsg;       
        cMessage *reportMsg; 
        TCPSocket socket;
        //Report *report;
        Record *record;
        
        int interval;
        double startTime;
        // statistics
        int numSent;
        int numReceived;
        int ied;
        double threshold;
        
        static simsignal_t rcvdPkSignal;
        static simsignal_t sentPkSignal;
        static simsignal_t sum_energySignal, avg_energySignal;
        simsignal_t setPointsSignal;

    private:
        void connect();
        //void startListening();
        void bind();
        void displayGUI();    
        
        void sendReportToDSO();
        
        void process (cMessage *msg);
    protected:
	    void receiveSignal(cComponent *src, simsignal_t id, cObject *obj);   
                 
  	public:
  	    RTUApp();
  	    ~RTUApp();
    	virtual void initialize(int stage);
    	virtual void handleMessage(cMessage *msg);
    	virtual void finish();
 
};

#endif
