set xlabel "simTime (sec)"
set ylabel "number of hops per packet"
set key default
set xr [0:300]
set yr [0:10]

plot 'dsoHops' using ($3):($4) title 'Attack' with linespoint  lt rgb "#8B008B", \
'dsoHopsAF' using ($3):($4) title 'AttackFree' with linespoint lt rgb "#1E90FF"

 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'hops.eps'
replot
