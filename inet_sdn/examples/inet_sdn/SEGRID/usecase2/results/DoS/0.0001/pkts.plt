set xlabel "simTime (sec)"
set ylabel "DSO number of received packets every second"
set key outside
set xr [0:300]


plot 'pktsRcv' using 3:4 title 'DSO number of received packets every second' with linespoints
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 10
set output 'numPackets.eps'
replot
