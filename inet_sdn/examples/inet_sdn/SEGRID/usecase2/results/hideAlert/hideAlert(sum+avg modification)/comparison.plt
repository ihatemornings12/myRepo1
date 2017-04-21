set xlabel "simTime (sec)"
set ylabel "Total energy generation in the grid (MW)"
set key default
set xr [0:300]
set yr [0:350]

plot 'comparison' using 1:11 title 'DSO record' with linespoints, \
'' using 1:3 title 'Real Status of 2 faulty IEDs in 1 RTU' with linespoints, \
'' using 1:4 title 'Real Status of 2 faulty IEDs in 2 RTUs' with linespoints, \
'' using 1:5 title 'Real Status of 2 faulty IEDs in 3 RTUs' with linespoints, \
'' using 1:6 title 'Real Status of 3 faulty IEDs in 3 RTUs' with linespoints, \
'' using 1:2 title 'Threshold' with linespoints
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'comparison.eps'
replot
