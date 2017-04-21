set xlabel "simTime (sec)"
set ylabel "DSO packet delivery delay (msec)"
set key default
set xr [0:300]


plot 'dsoDelay' using ($3):($4*1000) title '2000pkts/sec (10sec)' with linespoints
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 18
set output 'DSOdelay.eps'
replot
