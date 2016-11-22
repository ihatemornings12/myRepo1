package inet.nodes.inet_sdn.smartGrid;

import inet.nodes.inet.StandardHost;
import inet.applications.inet_sdn.smartGrid.SmartMeter;
import inet.applications.inet_sdn.smartGrid.DataConcentratorApp;

module DataConcentrator extends StandardHost {
    parameters:
        @display("i=device/pc2");
        int numStartMeters = default (2);
    submodules:
        dataConcentrator: DataConcentratorApp;
        smartMeter[numStartMeters]: SmartMeter;
}

