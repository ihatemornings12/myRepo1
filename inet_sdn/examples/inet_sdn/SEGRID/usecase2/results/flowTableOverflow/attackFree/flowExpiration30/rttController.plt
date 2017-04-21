set ylabel "RTT - Packet Out (msec)"

set key default
set boxwidth 0.25
set style fill pattern 1
set xr [-0.5:8]
plot 'rttController' using ($0-.05):($2*1000):($3*1000):xtic(1) with boxerrorbars title "Attack Free" 
     
set terminal postscript eps enhanced colour "Helvetica" 18
set output 'rttController.eps'
replot


