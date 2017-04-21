package inet.examples.seappexpression;

import inet.nodes.inet.StandardHost;
import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import inet.util.ThruputMeteringChannel;
import inet.nodes.ethernet.EtherSwitch;
import inet.globalfilter.GlobalFilter;

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
        switch: EtherSwitch {
            @display("p=300,300");
        }


	connections allowunconnected:
		switch.ethg++  <--> ethernetline <--> client.ethg++;
		switch.ethg++  <--> ethernetline <--> server.ethg++;

		globalFilter.nodes++ <--> client.global_filter;
		globalFilter.nodes++ <--> server.global_filter;
        		
}
