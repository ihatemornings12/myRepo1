set xlabel "simTime (sec)"
set ylabel "Full Flow Table"
set key outside
set xr [0:300]
set yr [500:1010]

plot 's4Full' using ($3):($5) title '1000 injected packet per sec in the switch (flow expir: 10s)' with points, \
'../0.002/s4Full' using ($3):($5) title '500 injected packet per sec in the switch (flow expir: 10s)' with points
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 10
set output 's4Full.eps'
replot
