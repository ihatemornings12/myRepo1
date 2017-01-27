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

#ifndef DSOAPP_H
#define DSOAPP_H

#include "omnetpp.h"
#include "INETDefs.h"
#include "TCPSocket.h"
#include "TCPSocketMap.h"

#include "MonitoringData_m.h"
#include "Record.h"
#include <fstream>

using namespace std;

class DSOApp : public cSimpleModule, public cListener
{
	private:
    cMessage *timeoutMsg;        
    TCPSocket socket;
    TCPSocketMap socketMap;
         
    map<string, list<MonitoringData*>> info;
    RecordDSO *record;
                
    int numReceived;       
    int numSent;
                
    // limits
    double threshold;

                
    // signals
    static simsignal_t rcvdPkSignal;
    static simsignal_t sentPkSignal;
    static simsignal_t sum_of_sumSignal, avg_of_sumSignal, sum_of_avgSignal, avg_of_avgSignal;
                
    void listen();
    void displayGUI();
    bool withinLimits(double energy);
    void defineSetPoints(cMessage *msg);
                
    void updateFile(MonitoringData *msg);
    ofstream file;
    string fileName;
        
  	public:
    DSOApp();
    ~DSOApp();
  	    
    virtual void initialize(int stage);
    virtual void handleMessage(cMessage *msg);
    virtual void finish();
    int getRTUs();
 
};

#endif
