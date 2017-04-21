set xlabel "simTime (sec)"
set ylabel "Packet delivery time to DSO (msec)"
set key default
set xr [0:300]
set yr [0:5]

plot '../attackFree/flowExpiration10/dsoDeliver' using ($3):($4*1000) title 'Attack Free' with linespoint  lt rgb "#8B008B", \
'./0.001/dsoDeliver' using ($3):($4*1000) title '1000 injected packets every second' with linespoint lt rgb "#1E90FF", \
'./0.0005/dsoDeliver' using ($3):($4*1000) title '2000 injected packets every second' with linespoint  lt rgb "#DAA520"

 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'dsoDeliverComp.eps'
replot
