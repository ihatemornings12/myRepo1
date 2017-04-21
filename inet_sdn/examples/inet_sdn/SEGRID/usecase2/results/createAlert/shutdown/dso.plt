set xlabel "simTime (sec)"
set ylabel "Total energy generation in the grid (MW)"
set key default
set xr [0:300]
set yr[0:130]

plot 'dso' using 1:2 title 'DSO record' with linespoints, \
'' using 1:4 title 'Attack Free' with linespoints, \
'' using 1:3 title 'Threshold' with linespoints
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'dso.eps'
replot
