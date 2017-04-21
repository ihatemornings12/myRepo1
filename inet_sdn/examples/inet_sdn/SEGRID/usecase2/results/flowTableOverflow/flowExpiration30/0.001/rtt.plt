set xlabel "simTime (sec)"
set ylabel "RTT - PacketOut (ms)"
set key default
set xr [0:300]

plot './attackFree/s6rtt' using ($3):($4*1000) title 's6-AttackFree' with linespoints, \
's4rtt' using ($3):($4*1000) title 's4' with linespoints

 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 10
set output 'rtt.eps'
replot
