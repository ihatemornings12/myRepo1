set xlabel "simTime (sec)"
set ylabel "Total power generation in domain (MW)"
set title "Single domain's performance recorded by DSO Control Center"
set key default
set xr [0:303]


plot 'rtu' using ($1):($2) title 'DSO/RTU record' with linespoints lt rgb "#8B008B", \
'' using ($1):($3) title 'Threshold' with linespoints lt rgb "#1E90FF"
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'rtu.eps'
replot
