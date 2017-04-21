set xlabel "simTime (sec)"
set ylabel "Packet delivery time to DSO (msec)"
set key default
set xr [0:300]
set yr [0:5]

plot 'dsoDeliver' using ($3):($4*1000) title 'Attack of 2000 pkts/sec' with linespoints

set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'DSOdelay2.eps'
replot
