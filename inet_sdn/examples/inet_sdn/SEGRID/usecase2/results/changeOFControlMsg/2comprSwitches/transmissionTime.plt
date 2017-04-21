set xlabel "simTime (sec)"
set ylabel "Packet delivery time to DSO (msec)"
set key default
set xr [0:300]
set yr [0:3]

plot 'transmTimeToDSO' using ($3):($4*1000) title 'Attack' with linespoint  lt rgb "#8B008B", \
'transmTimeToDSOAF' using ($3):($4*1000) title 'AttackFree' with linespoint lt rgb "#1E90FF"

 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'transmissionTime.eps'
replot
