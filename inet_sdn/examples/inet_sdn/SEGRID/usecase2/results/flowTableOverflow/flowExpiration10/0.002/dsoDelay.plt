set xlabel "simTime (sec)"
set ylabel "DSO packet delivery delay (msec)"
set key outside
set xr [0:300]


plot 'dsoDelay' using ($3):($4*1000) title '500 injected packet per sec in the switch (flow expir: 10s)' with linespoints, \
'../../flowExpiration30/0.002/dsoDelay' using ($3):($4*1000) title '500 injected packet per sec in the switch (flow expir: 30s)' with linespoints
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 10
set output 'DSOdelay.eps'
replot
