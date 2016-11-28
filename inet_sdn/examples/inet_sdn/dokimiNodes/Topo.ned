package inet.examples.inet_sdn.dokimiNodes;

import inet.nodes.inet_sdn.smartGrid.DataConcentrator;
import inet.nodes.inet_sdn.smartGrid.RTU;
import inet.nodes.inet_sdn.smartGrid.DSO;
import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import ned.DatarateChannel;

network Topo
{
    parameters:		
		string attackConfigurationFile = default("none");
		@display("bgb=2000,1000");
    types:
        channel C extends DatarateChannel
        {
            datarate = 10Mbps;
            delay = 0.1us;
        }
	submodules:
	    configurator: FlatNetworkConfigurator {
            parameters:
                @display("p=1800, 600");
        }
        
        DC: DataConcentrator {}
        RTU1: RTU{}
        DSO: DSO {}
    connections allowunconnected:
        DC.ethg++ <--> C <--> RTU1.ethg++;
        RTU1.ethg++ <--> C <--> DSO.ethg++;

}








