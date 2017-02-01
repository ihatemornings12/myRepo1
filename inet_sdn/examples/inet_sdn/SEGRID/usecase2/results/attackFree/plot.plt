currentPath = "~/myGit/myRepo1/myRepo1/inet_sdn/examples/inet_sdn/SEGRID/usecase2/results/attackFree"
filename = currentPath. "/sum.txt"

#Attack Free

set xlabel "simTime (sec)"
set ylabel "Packets received during each sec"

set key default
set xr [0:250]
set yr [0:120]

plot filename using 1:2 title 'Total Energy Generation (System overview) - Attack Free' with linespoints


set terminal postscript eps enhanced font ',20' color
set output currentPath . "sysem_overview.eps"
replot

pause -1
