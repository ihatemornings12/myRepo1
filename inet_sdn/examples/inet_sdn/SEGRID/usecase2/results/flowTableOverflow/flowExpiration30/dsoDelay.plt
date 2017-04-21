set xlabel "simTime (sec)"
set ylabel "DSO packet delivery delay (msec)"
set key default
set xr [0:300]
set yr [0.4:2.6]


plot './attackFree/dsoDelay' using ($3):($4*1000) title 'Attack Free' with linespoints, \
'./0.002/dsoDelay' using ($3):($4*1000) title '500 injected packet per sec ' with linespoints, \
 './0.001/dsoDeliver' using ($3):($4*1000) title '1000 injected packet per sec ' with linespoints


set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 10
set output 'DSOdelayComp.eps'
replot
