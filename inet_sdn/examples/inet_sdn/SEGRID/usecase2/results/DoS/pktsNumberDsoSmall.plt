set xlabel "simTime (sec)"
set ylabel "Number of received packets every second in DSO"
set key default
set xr [0:300]
set yr [0:15000]

plot './attackFree/noAttackPkts' using 3:4 title 'Attack Free' with linespoints, \
'./smallAttackRates/0.0005/pkts' using 3:4 title '2000 packets every second' with linespoints, \
'./smallAttackRates/0.0002/pkts' using 3:4 title '5000 packets every second' with linespoints, \
'./smallAttackRates/0.000125/DSOmsg' using 3:4 title '8000 packets every second' with linespoints, \
'./0.0001/pktsRcv' using 3:4 title '10000 packets every second' with linespoints

set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 20
set output 'packets.eps'
replot




 

