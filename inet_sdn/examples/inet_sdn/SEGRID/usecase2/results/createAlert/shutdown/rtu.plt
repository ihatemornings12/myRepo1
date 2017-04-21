set xlabel "simTime (sec)"
set ylabel "Total energy generation of compromised RTU (MW)"
set key default
set xr [0:300]

plot 'rtu' using 1:2 title 'High Alert Attack' with linespoints, \
'' using 1:4 title 'Real Status' with linespoints, \
'' using 1:5 title 'Attack Free' with linespoints, \
'' using 1:3 title 'Threshold' with linespoints
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'rtu.eps'
replot
