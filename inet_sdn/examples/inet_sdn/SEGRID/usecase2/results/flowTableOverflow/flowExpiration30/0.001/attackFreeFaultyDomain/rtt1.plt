set xlabel "simTime (sec)"
set ylabel "RTT - PacketOut (s)"
set key default
set xr [0:300]

plot 's1rtt' using ($3):($4) title 's1-AttackFree' with linespoints

set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 10
set output 'rtt1.eps'
replot
