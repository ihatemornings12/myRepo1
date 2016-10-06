currentPath = "~/INET_SDN_dev/inet_sdn/examples/inet_sdn/scenario/results/"

client2_02_client3_03 = currentPath . "server2/02_03/rcvPkts.dat"
client2_05_client3_02 = currentPath . "server2/05_02/rcvPkts.dat"
client2_05_client3_05 = currentPath . "server2/05_05/rcvPkts.dat"


#Attack Free

set xlabel "simTime (sec)"
set ylabel "Packets received during each sec"
set key default
set xr [0:250]
set yr [0:25]

plot client2_02_client3_03 using 3:4 title 'No Attack: Client2: 5 pkt/sec, Client3: 3.33 pkt/sec' with linespoints, \
client2_05_client3_02 using 3:4 title 'No Attack: Client2: 2 pkt/sec, Client3: 5 pkt/sec' with linespoints, \
client2_05_client3_05 using 3:4 title 'No Attack: Client2: 2 pkt/sec, Client3: 2 pkt/sec' with linespoints

set terminal postscript eps enhanced font ',20' color
set output currentPath . "/attackFree_mulptipleTransmissionRates.eps"
replot

pause -1