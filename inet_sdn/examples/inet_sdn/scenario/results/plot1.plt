currentPath = "~/INET_SDN_dev/inet_sdn/examples/inet_sdn/scenario/results/"

#Attack Free

set xlabel "simTime (sec)"
set ylabel "Packets received during each sec"
set key default
set xr [0:250]
set yr [0:25]

#give the  filename as parameter
plot filename using 3:4 title 'No Attack: Client2: 5 pkt/sec, Client3: 3.33 pkt/sec' with linespoints

set terminal postscript eps enhanced font ',20' color
set output currentPath . "/attackFree1.eps"
replot
pause -1