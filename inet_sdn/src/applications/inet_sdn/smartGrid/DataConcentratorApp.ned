package inet.applications.inet_sdn.smartGrid;


simple DataConcentratorApp {
    parameters:
        @display("i=block/app");
        int intervalReport @unit ("s") = default(2s);
        string connectAddress = default("");
        int connectPort = default(1000); 
}

