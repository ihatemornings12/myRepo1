set xlabel "simTime (sec)"
set ylabel "Packet delivery time to DSO (msec)"
set key default
set xr [0:300]
set yr [0.4:5]
set samples 400

plot 'comparisonDSO' using ($1):($4*1000) title 'Attack Free' with linespoint  lt rgb "#8B008B", \
'' using ($1):($2*1000) title '1000 injected packets every second' with linespoints lt rgb "#1E90FF", \
'' using ($1):($3*1000) title '2000 injected packets every second' with linespoints lt rgb "#DAA520"

set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'compDSO30.eps'
replot
