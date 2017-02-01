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

#include "Record.h"

/* The class is used by the RTU application to record 
 * and compute the average and sum values for the domain. 
 */
 
Record::Record() 
{
    energy = 0.0;
    avg = 0.0;
    sum = 0.0;
    cnt = 0;
}

Record::~Record()
{
}

void Record::reset() 
{   
    energy = 0.0;
    avg = 0.0;
    sum = 0.0;
    cnt = 0;
    senders.clear();
}


void Record::updateRecord (double energy) 
{
    sum += energy; //(sum) per domain
    ++cnt;
    avg = sum/cnt; //(avg) per domain
}

double Record::getSumEnergy()
{
    return sum;
}

double Record::getAvgEnergy()
{
    return avg;
}


int Record::getCounter() 
{
    return cnt;
}

int Record::getSenders() 
{
    return senders.size();
}



/*
 * RecordDSO inherits Record. The class is used by the DSO application to record
 * and compute the average and sum values for the system. 
 */
RecordDSO::RecordDSO() 
{
    avgAvg = 0.0;
    sumAvg = 0.0;
}

RecordDSO::~RecordDSO()
{
}

void RecordDSO::reset() 
{
    Record::reset();
    avgAvg = 0.0;
    sumAvg = 0.0;
}

double RecordDSO::getAvgAvgEnergy()
{
    return avgAvg;
}

double RecordDSO::getSumAvgEnergy()
{
    return sumAvg;
}

void RecordDSO::updateRecord(double avgE, double sumE, const string id) 
{   
    if (senders.find(id) == senders.end()) {
        senders.insert(id);
        ++cnt;
        
        //records for system's overview
        sum += sumE; //sum(sum) 
        avg = sum/cnt; //(avg(sum)) 
        
        sumAvg += avgE; //(sum(avg) 
        avgAvg = sumAvg/cnt; //avg(avg) 
    }
    else 
        cout<< "Sender " << id << " sends double data\n"; 

}



