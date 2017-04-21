set xlabel "simTime (sec)"
set ylabel "Packet delivery time to DSO (msec)"
set key default
set xr [0:300]
set yr [0:3]

plot './flowExpiration10/dsoDeliver' using ($3):($4*1000) title 'Flow Expiration: 10s' with linespoints lt rgb "#8B008B", \
'./flowExpiration30/dsoDeliver' using ($3):($4*1000) title 'Flow Expiration: 30s' with linespoints lt rgb "#1E90FF", \
'./flowExpiration60/dsoDeliver' using ($3):($4*1000) title 'Flow Expiration: 60s' with linespoints lt rgb "#DAA520"

 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'AttackFreeComp.eps'
replot
