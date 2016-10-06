currentPath = "~/INET_SDN_dev/inet_sdn/examples/inet_sdn/scenario/results/"

attack_25packets = currentPath."attack_004.dat"
attackFree = currentPath."attackFreeResults1.dat"


set xlabel "simTime (sec)"
set ylabel "Packets received during each sec"
set key default
set xr [0:250]
set yr [0:50]

plot attack_25packets using 3:4 title 'Attack injection rate: 25 packets/s' with linespoints, \
attackFree using 3:4 title 'No Attack' with linespoints

set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 14
set output currentPath . "/attack_25packets.eps"
replot
pause -1