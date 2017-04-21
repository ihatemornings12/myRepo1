set xlabel "simTime (sec)"
set ylabel "Packet delivery time to DSO (msec)"
set key default
set xr [0:300]

plot 'dsoDelay' using ($3):($4*1000) title 'Attack' with linespoints

 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 18
set output 'DSOdelay1.eps'
replot
