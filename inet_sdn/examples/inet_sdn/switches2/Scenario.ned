package inet.examples.inet_sdn.switches2;

import inet.nodes.inet.StandardHost;
import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import inet.util.ThruputMeteringChannel;
import inet.globalfilter.GlobalFilter;
import inet.ofomnet.openflow.nodes.*;

network Scenario
{
	parameters:
		string attackConfigurationFile = default("none");
	@display("bgb=600,450");
	types:
        channel ethernetline extends ThruputMeteringChannel
        {
            delay = 1us;
            datarate = 100Mbps;
            thruputDisplayFormat = "u";
        }
	submodules:
		configurator: FlatNetworkConfigurator {
            parameters:
                @display("p=50,400");
        }
        globalFilter: GlobalFilter {
			@display("p=500,41;");
		};
        client: StandardHost {
            @display("p=30,300;i=device/laptop");
        }
        server: StandardHost {
            @display("p=570,300;i=device/server");
        }
        s1: Open_Flow_Switch_SEA {
            @display("p=300,300");
        }
       // open_flow_switch2: Open_Flow_Switch_SEA{
     //       @display("p=400,300");
    //    }
        controller: Open_Flow_Controller_SEA {
            @display("p=300,41");
        }

        
	connections allowunconnected:
		s1.ethg++  <--> ethernetline <--> client.ethg++;
        //open_flow_switch1.ethg++  <--> ethernetline <--> open_flow_switch2.ethg++;
		s1.ethg++  <--> ethernetline <--> server.ethg++;

		controller.ethg++ <--> ethernetline <--> s1.gate_controller++;
    //    controller.ethg++ <--> ethernetline <--> open_flow_switch2.gate_controller++;


        globalFilter.nodes++ <--> client.global_filter;
		globalFilter.nodes++ <--> server.global_filter;
}


