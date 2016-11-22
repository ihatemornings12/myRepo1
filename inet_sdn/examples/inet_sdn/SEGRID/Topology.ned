package inet.examples.inet_sdn.SEGRID;

import inet.nodes.inet.StandardHost;
import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import inet.util.ThruputMeteringChannel;
import inet.globalfilter.GlobalFilter;
import inet.ofomnet.openflow.nodes.*;

network Topology
{
	parameters:		
		string attackConfigurationFile = default("none");
		
	@display("bgb=2000,1000");
	types:
        channel ethernetline extends ThruputMeteringChannel {
            delay = 1us;
            datarate = 100Mbps;
            //thruputDisplayFormat = "u";
        }
	submodules:
		globalFilter: GlobalFilter {
			@display("p=1800,200");
		}

		configurator: FlatNetworkConfigurator {
            parameters:
                @display("p=1800, 500");
        }
        
        DSO: StandardHost {
           interfaceTable.displayAddresses=true;
           @display("p=1000,100;i=device/mainframe");
        }
        
        RTU1: StandardHost {
        interfaceTable.displayAddresses=true;
           @display("p=600,350;i=device/server");
        }
        RTU2: StandardHost {
            interfaceTable.displayAddresses=true;
            @display("p=1400,350;i=device/server");
        }
        
        DC1: StandardHost {
           interfaceTable.displayAddresses=true;        
           @display("p=700,750;i=device/laptop");
        }
        DC2: StandardHost {
            interfaceTable.displayAddresses=true;
            @display("p=900,750;i=device/laptop");
        }
        DC3: StandardHost {
            interfaceTable.displayAddresses=true;        
            @display("p=1100,750;i=device/laptop");
        }
        DC4:StandardHost {
            interfaceTable.displayAddresses=true;                
            @display("p=1300,750;i=device/laptop");
        }
        
        SM_DC1[2]: StandardHost {
            interfaceTable.displayAddresses=true;                
            @display("i=device/palm2");
        }
        
        SM_DC2[2]: StandardHost {
            interfaceTable.displayAddresses=true;                
            @display("i=device/palm2");
        }
        
        SM_DC3[2]: StandardHost {
            interfaceTable.displayAddresses=true;                
            @display("i=device/palm2");
        }
        
        SM_DC4[2]: StandardHost {
            interfaceTable.displayAddresses=true;                
            @display("i=device/palm2");
        }
        
//       SM1: StandardHost {
//          interfaceTable.displayAddresses=false;                
//          @display("p=650,900;i=device/palm2");
//       }
        
//        SM2: StandardHost {
//          interfaceTable.displayAddresses=false;                
//          @display("p=750,900;i=device/palm2");
//        }
        
//        SM3: StandardHost {
//          interfaceTable.displayAddresses=false;                
//          @display("p=850,900;i=device/palm2");
//       }
//       
//       SM4: StandardHost {
//          interfaceTable.displayAddresses=false;                
//          @display("p=950,900;i=device/palm2");
//        }
//       SM5: StandardHost {
//          interfaceTable.displayAddresses=false;                
//          @display("p=1050,900;i=device/palm2");
//       }
        
//       SM6: StandardHost {
//          interfaceTable.displayAddresses=false;                
//          @display("p=1150,900;i=device/palm2");
//        }
//        
//        SM7: StandardHost {
//          interfaceTable.displayAddresses=false;                
//          @display("p=1250,900;i=device/palm2");
//       }
        
//      SM8: StandardHost {
//          interfaceTable.displayAddresses=false;                
//          @display("p=1350,900;i=device/palm2");
//      }
//       
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
        
        controller: Open_Flow_Controller_SEA {
            @display("p=1500,200");
        }

        
	connections allowunconnected:
	
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
       
        controller.ethg++ <--> ethernetline  { @display("ls=,0");} <--> s1.gate_controller++; //hidden connection
        controller.ethg++ <--> ethernetline { @display("ls=,0");} <--> s2.gate_controller++;
        controller.ethg++ <--> ethernetline { @display("ls=,0");} <--> s3.gate_controller++;
        controller.ethg++ <--> ethernetline { @display("ls=,0");} <--> s4.gate_controller++;        
        controller.ethg++ <--> ethernetline { @display("ls=,0");} <--> s5.gate_controller++;
        controller.ethg++ <--> ethernetline { @display("ls=,0");} <--> s6.gate_controller++;
        controller.ethg++ <--> ethernetline { @display("ls=,0");} <--> s7.gate_controller++;
        controller.ethg++ <--> ethernetline { @display("ls=,0");} <--> s8.gate_controller++;                

        DSO.ethg++ <--> ethernetline <--> s1.ethg++;
        
        RTU1.ethg++ <--> ethernetline <--> s2.ethg++;
        RTU2.ethg++ <--> ethernetline <--> s3.ethg++;
        
        DC1.ethg++ <--> ethernetline <--> s6.ethg++;
        DC2.ethg++ <--> ethernetline <--> s6.ethg++;
        
        DC3.ethg++ <--> ethernetline <--> s7.ethg++;
        DC4.ethg++ <--> ethernetline <--> s7.ethg++;     
        
        for i=0..1 {
            SM_DC1[i].ethg++ <--> ethernetline <-->DC1.ethg++;
            SM_DC2[i].ethg++ <--> ethernetline <-->DC2.ethg++;
            SM_DC3[i].ethg++ <--> ethernetline <-->DC3.ethg++;
            SM_DC4[i].ethg++ <--> ethernetline <-->DC4.ethg++;
        }
             
                                		
//		globalFilter.nodes++ <--> client1.global_filter;
//		globalFilter.nodes++ <--> client2.global_filter;
//		globalFilter.nodes++ <--> client3.global_filter;
//		globalFilter.nodes++ <--> client4.global_filter;
//		globalFilter.nodes++ <--> server1.global_filter;
//		globalFilter.nodes++ <--> server2.global_filter;
//		globalFilter.nodes++ <--> server3.global_filter;
//		
//		globalFilter.nodes++ <--> s1.global_filter;
//		globalFilter.nodes++ <--> controller.global_filter;
}
