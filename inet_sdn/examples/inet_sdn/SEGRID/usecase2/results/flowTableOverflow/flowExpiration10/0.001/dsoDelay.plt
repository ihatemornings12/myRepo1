set xlabel "simTime (sec)"
set ylabel "DSO packet delivery delay (msec)"
set key default
set xr [0:300]


plot 'dsoDelay' using ($3):($4*1000) title 'flow expir: 10s' with linespoints, \
'../../flowExpiration30/0.001/DSOdelay' using ($3):($4*1000) title 'flow expir: 30s' with linespoints
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 10
set output 'DSOdelay.eps'
replot
