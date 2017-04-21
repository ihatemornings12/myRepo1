set xlabel "simTime (sec)"
set ylabel "Packet delivery time to DSO (msec)"
set key default
set xr [0:300]
set yr [0:3]

plot 'dsoDeliver' using ($3):($4*1000) title 'Attack Free' with linespoints

 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'AttackFree.eps'
replot
