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

package inet.examples.inet_sdn.SEGRID.usecase2;

import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import inet.util.ThruputMeteringChannel;
import inet.globalfilter.GlobalFilter;
import inet.ofomnet.openflow.nodes.*;
import inet.nodes.inet_sdn.smartGrid.*;
import inet.exmachina.ExMachina;

network Topo
{
	parameters:		
		string attackConfigurationFile = default("none");
		
	@display("bgb=2000,1000");
	types:
        channel ethernetline extends ThruputMeteringChannel {
            delay = 1us;
            datarate = 1Gbps;
        }
	submodules:
		globalFilter: GlobalFilter {
			@display("p=1800,200");
		}

        exmachina: ExMachina {
           parameters:
                @display("p=1800, 400");
        }
		configurator: FlatNetworkConfigurator {
            parameters:
                @display("p=1800, 600");
        }
        
        // SDN components
        
        // OpenFlow switches
        s1: Open_Flow_Switch_SEA  {
            @display("p=1000,200");
        }
        s2: Open_Flow_Switch_SEA  {
            @display("p=800,350");
        }
        s3: Open_Flow_Switch_SEA  {
            @display("p=1200,350");
        }
        s4: Open_Flow_Switch_SEA  {
            @display("p=800,500");
        }
        s5: Open_Flow_Switch_SEA  {
            @display("p=1200,500");
        }
        s6: Open_Flow_Switch_SEA  {
            @display("p=800,650");
        }
        s7: Open_Flow_Switch_SEA  {
            @display("p=1200,650");
        }
        s8: Open_Flow_Switch_SEA  {
            @display("p=1000,575");
        }
        // SDN controller
        controller: Open_Flow_Controller_SEA {
            @display("p=1400,100");
        }

        // Smart Grid components
        DSO: DSO {
            interfaceTable.displayAddresses=true;
            @display("p=1000,60;i=device/mainframe");
        }
        
        RTU1: RTU {
           interfaceTable.displayAddresses=true;        
           @display("p=700,750;i=device/laptop");

        }
        RTU2: RTU {
            interfaceTable.displayAddresses=true;
            @display("p=900,750;i=device/laptop");
        }
        RTU3: RTU {
            interfaceTable.displayAddresses=true;        
            @display("p=1100,750;i=device/laptop");
        }
        RTU4: RTU {
            interfaceTable.displayAddresses=true;                
            @display("p=1300,750;i=device/laptop");
        }

              
	connections allowunconnected:
	    DSO.ethg++ <--> ethernetline <--> s1.ethg++;
        
        RTU1.ethg++ <--> ethernetline <--> s6.ethg++;
        RTU2.ethg++ <--> ethernetline <--> s6.ethg++;
        RTU3.ethg++ <--> ethernetline <--> s7.ethg++;
        RTU4.ethg++ <--> ethernetline <--> s7.ethg++;     
        
	
	    s1.ethg++ <--> ethernetline <--> s2.ethg++;
        s1.ethg++ <--> ethernetline <--> s3.ethg++;
        
        s2.ethg++ <--> ethernetline <--> s3.ethg++;     
        
        s2.ethg++ <--> ethernetline <--> s4.ethg++;
        s3.ethg++ <--> ethernetline <--> s5.ethg++;        
        
        s4.ethg++ <--> ethernetline <--> s6.ethg++;        
        s5.ethg++ <--> ethernetline <--> s7.ethg++;
        
        s4.ethg++ <--> ethernetline <--> s8.ethg++;
        s5.ethg++ <--> ethernetline <--> s8.ethg++;
        
        s6.ethg++ <--> ethernetline <--> s7.ethg++;
        

//SDN controller connected to all OF switches      
		controller.ethg++ <--> ethernetline { @display("ls=,0");} <--> s1.gate_controller++;
		controller.ethg++ <--> ethernetline { @display("ls=,0");} <--> s2.gate_controller++;
        controller.ethg++ <--> ethernetline { @display("ls=,0");} <--> s3.gate_controller++;
        controller.ethg++ <--> ethernetline { @display("ls=,0");} <--> s4.gate_controller++;        
        controller.ethg++ <--> ethernetline { @display("ls=,0");} <--> s5.gate_controller++;
        controller.ethg++ <--> ethernetline { @display("ls=,0");} <--> s6.gate_controller++;
        controller.ethg++ <--> ethernetline { @display("ls=,0");} <--> s7.gate_controller++;
        controller.ethg++ <--> ethernetline { @display("ls=,0");} <--> s8.gate_controller++; 		


//global filter connected with all the nodes 		
		globalFilter.nodes++ <--> { @display("ls=,0");} <--> s1.global_filter;
		globalFilter.nodes++ <--> { @display("ls=,0");} <--> s2.global_filter;
        globalFilter.nodes++ <--> { @display("ls=,0");} <--> s3.global_filter;
		globalFilter.nodes++ <--> { @display("ls=,0");} <--> s4.global_filter;
		globalFilter.nodes++ <--> { @display("ls=,0");} <--> s5.global_filter;
		globalFilter.nodes++ <--> { @display("ls=,0");} <--> s6.global_filter;
		globalFilter.nodes++ <--> { @display("ls=,0");} <--> s7.global_filter;
		globalFilter.nodes++ <--> { @display("ls=,0");} <--> s8.global_filter;								        
		globalFilter.nodes++ <--> { @display("ls=,0");} <--> controller.global_filter;
		
		globalFilter.nodes++ <--> { @display("ls=,0");} <--> DSO.global_filter;
		globalFilter.nodes++ <--> { @display("ls=,0");} <--> RTU1.global_filter;
        globalFilter.nodes++ <--> { @display("ls=,0");} <--> RTU2.global_filter;
        globalFilter.nodes++ <--> { @display("ls=,0");} <--> RTU3.global_filter;
        globalFilter.nodes++ <--> { @display("ls=,0");} <--> RTU4.global_filter;
}


