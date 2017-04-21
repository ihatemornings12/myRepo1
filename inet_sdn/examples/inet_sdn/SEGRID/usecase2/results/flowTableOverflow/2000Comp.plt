set xlabel "simTime (sec)"
set ylabel "Packet delivery time to DSO (msec)"
set key default
set xr [0:300]
set yr [0:5]

plot '2000Comp' using ($1):($2*1000) title 'Flow Expiration: 10s' with linespoint  lt rgb "#8B008B", \
'' using ($1):($3*1000) title 'Flow Expiration: 30s' with linespoint lt rgb "#1E90FF", \
'' using ($1):($4*1000) title 'Flow Expiration: 60s' with linespoint  lt rgb "#DAA520"

 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output '2000Comp.eps'
replot
