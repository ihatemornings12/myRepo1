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

#include "Report.h"

Report::Report() 
{
    counter = 0;
    sum = 0.0;
    sum_energy = 0.0;
    sum_powerQ = 0;
}

Report::~Report () 
{
}

void Report::updateRecord(double energy, int power) 
{
    updateCounter();
    updateEnergyGeneration(energy);
    updatePowerQuality(power);
}

void Report::updateCounter() {
    counter++;
}

void Report::updateEnergyGeneration(double energy) 
{
    sum_energy += energy; 
}

void Report::updatePowerQuality(int power)
{
    sum_powerQ += power;
}

double Report::getAvgEnergyGeneration() 
{
    if (counter!=0)
        return sum_energy/counter;
    else
        return 0;
}

int Report::getAvgPowerQuality() 
{
    if (counter!=0)
        return sum_powerQ/counter;
    else
        return 0;
}

void Report::resetData() 
{
    counter = 0;
    sum_energy = 0.0;
    sum_powerQ = 0;
}
double Report::getSumEnergy() 
{
    return sum_energy;
}
// ---------------------------------------------------------------
// used by DC
void Report::setCounter(double x) {
    counter = x;
}

int Report::getCounter () {
    return counter;
}

void Report::setSum(double x) {
    sum = x;
}

double Report::getSum () {
    return sum;
}


void Report::updateSum(double x) {
    sum += x;
}

void Report::updateRecord(double x)
{
}

double Report::getAvg() 
{
    if(counter!=0) 
        return sum/counter;
    else
        return 0;
}
