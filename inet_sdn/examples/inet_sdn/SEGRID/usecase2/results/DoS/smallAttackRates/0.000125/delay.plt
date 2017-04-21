set xlabel "simTime (sec)"
set ylabel "DSO packet reception delay"
set key outside
set xr [0:300]


plot 'DSOmsgDel' using 3:4 title 'PacketInjection rate:8000 pkts/sec' with linespoints
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 10
set output 'DSOmsgdelay.eps'
replot
