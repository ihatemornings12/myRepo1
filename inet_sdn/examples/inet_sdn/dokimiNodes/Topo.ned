package inet.examples.inet_sdn.dokimiNodes;

import inet.nodes.inet_sdn.smartGrid.DataConcentrator;
import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;

network Topo
{
    parameters:		
		string attackConfigurationFile = default("none");
		@display("bgb=2000,1000");
	submodules:
	    configurator: FlatNetworkConfigurator {
            parameters:
                @display("p=1800, 600");
        }
        
        DC: DataConcentrator {}

    connections allowunconnected:


}








