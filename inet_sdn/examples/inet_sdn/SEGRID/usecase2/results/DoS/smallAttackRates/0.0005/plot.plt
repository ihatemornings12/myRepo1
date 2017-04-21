set xlabel "simTime (sec)"
set ylabel "DSO packet reception delay"
set key outside
set xr [0:300]
set yr [0:2]

plot 'dsoDelay' using ($3):($4*1000) title 'DSO packet reception delay 0.0005 injection rate(ms)' with linespoints
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 10
set output 'DSOdelay.eps'
replot
