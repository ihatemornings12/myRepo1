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

package inet.applications.inet_sdn.smartGrid;

simple RTUApp {
    parameters:
        @display("i=block/app");
        int intervalReport = default(3);  
              
        // server mode
        string localAddress = default("");
        int localPort = default(1000);
        // client mode
        string connectAddress = default("");
        int connectPort = default(1025); 
        
        double startTime @unit(s) = default(0s); // time first session begins
        
        @signal[sentPk](type=cPacket);
        @signal[rcvdPk](type=cPacket);
        @statistic[rcvdPk](title="packets received"; source=rcvdPk; record=count,"sum(packetBytes)","vector(packetBytes)"; interpolationmode=none);
        @statistic[sentPk](title="packets sent"; source=sentPk; record=count,"sum(packetBytes)","vector(packetBytes)"; interpolationmode=none);
        @statistic[endToEndDelay](title="end-to-end delay"; source="messageAge(rcvdPk)"; unit=s; record=histogram,vector; interpolationmode=none);
        
        @signal[set_points_delay] (type = s);
        @statistic[set_points_delay](title="set_points_delay"; source = set_points_delay; record=vector; interpolationmode=none);
               
        @signal[sum_energy](type=double);
        @statistic[sum_energy](title="sum_energy"; source=sum_energy; record=vector; interpolationmode=none);
        @signal[avg_energy](type=double);
        @statistic[avg_energy](title="avg_energy"; source=avg_energy; record=vector; interpolationmode=none);
        @signal[RTU_threshold](type=double);
        @statistic[RTU_threshold](title="RTU_threshold"; source=RTU_threshold; record=vector; interpolationmode=none);
    gates:
        input tcpIn @labels(TCPCommand/up);
        output tcpOut @labels(TCPCommand/down);
}

