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

simple DSOApp {
    parameters:
        @display("i=block/app");
        
        double maxEnergyGen = default(100.0);
        string operation = default("shut down");
        int maxPowerQ = default(4);
        int minPowerQ = default(1);
        
        //acts like a server
        string localAddress = default("");
        int localPort = default(1025);
        
        @signal[rcvdPk](type=cPacket);
        @statistic[rcvdPk](title="packets received"; source=rcvdPk; record=count,"sum(packetBytes)","vector(packetBytes)"; interpolationmode=none);
        
        @signal[sentPk](type=cPacket);
        @statistic[sentPk](title="packets sent"; source=sentPk; record=count,"sum(packetBytes)","vector(packetBytes)"; interpolationmode=none);
        @statistic[endToEndDelay](title="end-to-end delay"; source="messageAge(rcvdPk)"; unit=s; record=histogram,vector; interpolationmode=none);
        
        @signal[sum_of_sum](type=double);
        @statistic[sum_of_sum](title="sum_of_sum"; source=sum_of_sum; record=vector; interpolationmode=none);
        @signal[avg_of_sum](type=double);
        @statistic[avg_of_sum](title="avg_of_sum"; source=avg_of_sum; record=vector; interpolationmode=none);
        @signal[sum_of_avg](type=double);
        @statistic[sum_of_avg](title="sum_of_avg"; source=sum_of_avg; record=vector; interpolationmode=none);
        @signal[avg_of_avg](type=double);
        @statistic[avg_of_avg](title="avg_of_avg"; source=avg_of_avg; record=vector; interpolationmode=none);
        
        @signal[dso_msg_delay] (type = s);
        @statistic[dso_msg_delay](title="dso_msg_delay"; source = dso_msg_delay; record=vector; interpolationmode=none);
        
        @signal[pktsSec](type=cPacket);
        @statistic[pktsSec](title="packets received per sec"; source=pktsSec; record=vector; interpolationmode=none);
        
    gates:
        input tcpIn @labels(TCPCommand/up);
        output tcpOut @labels(TCPCommand/down);
}

