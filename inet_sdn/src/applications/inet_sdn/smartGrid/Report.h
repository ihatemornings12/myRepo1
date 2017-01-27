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

#ifndef REPORT_H
#define REPORT_H

#include <omnetpp.h>

class Report {
    private:
        int counter;
        double sum;
        double sum_energy;
        int sum_powerQ;
    public:
        Report();
        ~Report();
        
        // ----------------------------
        // used by DC 
        int getCounter();
        double getSum();
        
        void setCounter(double x);
        void setSum(double x);
        
        void updateSum(double x);
        void updateRecord(double x);
        double getAvg();
        // -------------------------------        
        void updateRecord(double energy, int power);
        double getAvgEnergyGeneration(); 
        int getAvgPowerQuality();     
        void updateCounter();  
        void updateEnergyGeneration(double energy); 
        void resetData();
        double getSumEnergy();
        
    private:


        void updatePowerQuality(int power);
};
#endif

