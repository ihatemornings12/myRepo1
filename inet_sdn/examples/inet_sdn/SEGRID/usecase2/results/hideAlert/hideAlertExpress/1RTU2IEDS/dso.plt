set xlabel "simTime (sec)"
set ylabel "Total power generation in the grid (MW)"
set title "Smart grids's performance recorded by DSO Control Center"
set key default
set xr [0:303]
set yr [0:160]

plot 'dso' using ($1):($2) title 'DSO Record' with linespoints lt rgb "#8B008B", \
'' using ($1):($4) title 'Real Status' with linespoints lt rgb "#228B22", \
'' using ($1):($3) title 'Threshold' with linespoints lt rgb "#1E90FF"
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'dso.eps'
replot
