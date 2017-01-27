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

#ifndef SMARTMETER_H
#define SMARTMETER_H

#include "INETDefs.h"
#include "omnetpp.h"


using namespace std;

class SmartMeter : public cSimpleModule
{
    private:       
        //signal
        simsignal_t measurementDataSignal;
	private:
		void sendMeasurementData();
		void nextReading();

  	public:
    	virtual void initialize();
    	virtual void handleMessage(cMessage *msg);
    	virtual void finish();
 
};

#endif
