set xlabel "simTime (sec)"
set ylabel "Number of received packets every second in DSO"
set key default
set xr [0:300]
set yr [0:15000]

plot 'packets' using 1:2 title 'Attack Free' with linespoints, \
'' using 1:3 title '2000 packets every second' with linespoints, \
'' using 1:4 title '5000 packets every second' with linespoints, \
'' using 1:5 title '8000 packets every second' with linespoints, \
'' using 1:6 title '10000 packets every second' with linespoints

set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'packets.eps'
replot
