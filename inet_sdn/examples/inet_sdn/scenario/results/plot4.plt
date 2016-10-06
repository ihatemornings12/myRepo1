currentPath = "~/INET_SDN_dev/inet_sdn/examples/inet_sdn/scenario/results/"

attack_40packets = currentPath . "007_30/pktspersec.txt"
attack_25packets = currentPath . "004_30/pktspersec.txt"
attack_14packets = currentPath . "0025_30/pktspersec.txt"
noattack = currentPath . "attackFreeResults1.dat"

set xlabel "simTime (sec)"
set ylabel "Packets received during each sec"
set key default
set xr [0:250]
set yr [0:70]

plot attack_40packets using 3:4 title 'Attack injection rate: 40 packets/s' with linespoints, \
attack_25packets using 3:4 title 'Attack injection rate: 25 packets/s' with linespoints, \
attack_14packets using 3:4 title 'Attack injection rate: 14 packets/s' with linespoints, \
noattack using 3:4 title 'No Attack' with linespoints

set terminal postscript eps enhanced font ',20' color
set output currentPath . "/attackFree_mulptipleTransmissionRates.eps"
replot

pause -1