set xlabel "simTime (sec)"
set ylabel "Packet delivery time to DSO (msec)"
set key default
set xr [0:300]
set yr [0:5]

plot './flowExpiration10/0.0005/dsoDeliver' using ($3):($4*1000) title 'Flow Expiration: 10s' with linespoint  lt rgb "#8B008B", \
'./flowExpiration30/0.0005/dsoDeliver' using ($3):($4*1000) title 'Flow Expiration: 30s' with linespoint lt rgb "#1E90FF", \
'./flowExpiration60/0.0005/dsoDeliver' using ($3):($4*1000) title 'Flow Expiration: 60s' with linespoint  lt rgb "#DAA520"

 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'dsoDeliverComp2000.eps'
replot
