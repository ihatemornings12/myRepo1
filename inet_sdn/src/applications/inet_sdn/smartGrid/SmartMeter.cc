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

#include "SmartMeter.h"
#include "MeasurementData_m.h"
#include "seapputils.h"

Define_Module(SmartMeter);

void SmartMeter::initialize() {
	measurementDataSignal = registerSignal("MeasurementData");
	nextReading();
}

void SmartMeter::finish() {
}

void SmartMeter::handleMessage(cMessage *msg) {
    if (msg->isSelfMessage()) {      
        MeasurementData *data = new MeasurementData();
        data->setByteLength(1);
        data->setEnergyConsumption(0.40);
        data->setTimestamp(simTime());
        emit(measurementDataSignal, data);     
        
        delete msg;
        nextReading();
    }
}

void SmartMeter::nextReading() {
    cMessage *reading = new cMessage("ReadingData");
    int randomInterval = generateRandomIntValue(1,3);
    scheduleAt(simTime() + randomInterval, reading);
}
