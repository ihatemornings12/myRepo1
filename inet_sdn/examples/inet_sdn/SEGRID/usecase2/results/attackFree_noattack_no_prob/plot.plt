set xlabel "simTime (sec)"
set ylabel "Total energy generation in the network (MW)"
set key default
set xr [0:303]
set yr [0:120]

plot 'data' using ($1):($2) title 'Total energy generation (DSO record)' with linespoints, \
'' using ($1):($3) title 'Threshold' with linespoints
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'totalEnergy.eps'
replot
