set xlabel "simTime (sec)"
set ylabel "RTT - PacketOut (s)"
set key default
set xr [0:300]

plot 's6rtt' using ($3):($4) title 's6' with linespoints

 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 10
set output 'rtt6.eps'
replot
