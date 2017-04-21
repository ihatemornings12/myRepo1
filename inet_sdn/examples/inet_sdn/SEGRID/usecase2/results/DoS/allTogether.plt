set xlabel "simTime (sec)"
set ylabel "DSO packet reception delay"
set key outside
set xr [0:300]
set yr [0:40]

plot './attackFree/dsoDelay' using ($3):($4) title 'Attack Free (s)' with linespoints, \
'./0.001/dsoDelay' using ($3):($4) title '0.001 injection rate(s)' with linespoints, \
'./0.0005/dsoDelay' using ($3):($4) title '0.0005 injection rate(s)' with linespoints, \
'./0.0002/dsoDelay' using ($3):($4) title '0.0002 injection rate(s)' with linespoints, \
'./0.0001/dsoDelay' using ($3):($4) title '0.0001 injection rate(s)' with linespoints
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 10
set output 'DSOdelayAll.eps'
replot
