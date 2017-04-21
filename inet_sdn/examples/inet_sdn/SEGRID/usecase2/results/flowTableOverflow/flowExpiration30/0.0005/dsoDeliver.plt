set xlabel "simTime (sec)"
set ylabel "Packet delivery time to DSO (msec)"
set key default
set xr [0:300]
set yr [0:5]

plot '../../attackFree/flowExpiration30/dsoDeliver' using ($3):($4*1000) title 'Attack Free' with linespoints, \
'../0.001/dsoDeliver' using ($3):($4*1000) title 'Attack of 1000 pkts/sec' with linespoints, \
'dsoDeliver' using ($3):($4*1000) title 'Attack of 2000 pkts/sec' with linespoints

 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'DSOdelay2000.eps'
replot
