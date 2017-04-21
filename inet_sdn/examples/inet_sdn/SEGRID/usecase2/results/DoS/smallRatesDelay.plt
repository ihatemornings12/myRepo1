set xlabel "simTime (sec)"
set ylabel "DSO packet delivery (ms)"
set xr [0:300]
set yr [0:2]

plot './smallAttackRates/0.000125/DSOmsgDel' using ($3):($4*1000) title 'Packet Injection Rate: 8000 packets every sec' with linespoints, \
'./smallAttackRates/0.0002/dsoDelay' using ($3):($4*1000) title 'Packet Injection Rate: 5000 packets every sec' with linespoints, \
'./smallAttackRates/0.0005/dsoDelay' using ($3):($4*1000) title 'Packet Injection Rate: 2000 packets every sec' with linespoints, \
'./attackFree/dsoDelay' using ($3):($4*1000) title 'Attack Free (ms)' with linespoints
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 10
set output 'smallRatesDealy.eps'
replot
