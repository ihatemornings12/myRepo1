set xlabel "simTime (sec)"
set ylabel "Total energy generation in the grid (MW)"
set key default
set xr [0:303]
set yr [0:160]

plot 'dso' using ($1):($2) title 'DSO Record' with linespoints, \
'' using ($1):($4) title 'Real Status' with linespoints, \
'' using ($1):($3) title 'Threshold' with linespoints
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'dso.eps'
replot