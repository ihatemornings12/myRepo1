set xlabel "simTime (sec)"
set ylabel "Delivery time per packet to the DSO (sec)"
set key default
set xr [0:303]
set yr [0:40]

plot './attackFree/dsoDelay' using ($3):($4) title 'Attack Free' with linespoints lt rgb "#8B008B", \
'./0.00011111/dsoDelivery' using ($3):($4) title '9000 packets every second' with linespoints lt rgb "#228B22", \
'./0.000105263/dsoDelivery' using ($3):($4) title '9500 packets every second' with linespoints lt rgb "#FF00FF", \
'./0.0001/dsoDelay' using ($3):($4) title '10000 packets every second' with linespoints lt rgb "#1E90FF"
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'DSOPacketDelivery.eps'
replot
