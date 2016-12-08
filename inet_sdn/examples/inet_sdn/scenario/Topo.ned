package inet.examples.inet_sdn.scenario;

import inet.nodes.inet.StandardHost;
import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import inet.networklayer.autorouting.ipv4.IPv4NetworkConfigurator;
import inet.util.ThruputMeteringChannel;
import inet.globalfilter.GlobalFilter;
import inet.ofomnet.openflow.nodes.*;
import inet.exmachina.ExMachina;



network Topo
{
	parameters:		
		string attackConfigurationFile = default("none");
		
	@display("bgb=2000,1000");
	types:
        channel ethernetline extends ThruputMeteringChannel
        {
            delay = 1us;
            datarate = 100Mbps;
            //thruputDisplayFormat = "u";
        }
	submodules:
		globalFilter: GlobalFilter {
			@display("p=1800,200");
		}

        exmachina: ExMachina {
           parameters:
                @display("p=1800, 700");
        }
		configurator: FlatNetworkConfigurator {
            parameters:
                @display("p=1800, 500");
        }
        client1: StandardHost {
           @display("p=150,250;i=device/laptop");
        }
        client2: StandardHost {
            @display("p=150,450;i=device/laptop");
        }
        client3: StandardHost {
           @display("p=150,650;i=device/laptop");
        }
        client4: StandardHost {
            @display("p=150,850;i=device/laptop");
        }
        server1: StandardHost {
            @display("p=1500,350;i=device/server");
        }
        server2:StandardHost {
            @display("p=1500,550;i=device/server");
        }
        server3:StandardHost {
            @display("p=1500,850;i=device/server");
        }
        
        s1: Open_Flow_Switch_SEA  {
            @display("p=1000,650");
        }
        controller: Open_Flow_Controller_SEA {
            @display("p=1000,100");
        }

        
	connections allowunconnected:
        
        client1.ethg++ <--> ethernetline <--> s1.ethg++;
        client2.ethg++ <--> ethernetline <--> s1.ethg++;
        client3.ethg++ <--> ethernetline <--> s1.ethg++;
        client4.ethg++ <--> ethernetline <--> s1.ethg++;
        server1.ethg++ <--> ethernetline <--> s1.ethg++;
        server2.ethg++ <--> ethernetline <--> s1.ethg++;
        server3.ethg++ <--> ethernetline <--> s1.ethg++;        

		controller.ethg++ <--> ethernetline <--> s1.gate_controller++;
		
		globalFilter.nodes++ <--> client1.global_filter;
		globalFilter.nodes++ <--> client2.global_filter;
		globalFilter.nodes++ <--> client3.global_filter;
		globalFilter.nodes++ <--> client4.global_filter;
		globalFilter.nodes++ <--> server1.global_filter;
		globalFilter.nodes++ <--> server2.global_filter;
		globalFilter.nodes++ <--> server3.global_filter;
		
		globalFilter.nodes++ <--> s1.global_filter;
		globalFilter.nodes++ <--> controller.global_filter;
}
