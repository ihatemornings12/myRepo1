set xlabel "simTime (sec)"
set ylabel "RTT - PacketOut (s)"
set key default
set xr [0:300]

plot 's1rtt' using ($3):($4) title 's1-AttackFree' with linespoints, \
's2rtt' using ($3):($4) title 's2-AttackFree' with linespoints, \
's4rtt' using ($3):($4) title 's4-AttackFree' with linespoints, \
's6rtt' using ($3):($4) title 's6-AttackFree' with linespoints
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 10
set output 'rttAF.eps'
replot
