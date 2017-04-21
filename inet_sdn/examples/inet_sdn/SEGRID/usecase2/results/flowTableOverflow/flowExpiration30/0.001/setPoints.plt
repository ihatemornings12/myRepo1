set ylabel "Fault restoration delay (ms)"
set key outside

set style fill pattern 4
set boxwidth 0.4 

plot './setPoints' every ::0::0 using ($1):($3*1000):xtic(2) title 'Attack Free' with boxes , \
'' every ::1::1 using ($1):($3*1000):xtic(2) title '1000 injected packets per sec in the switch' with boxes

set terminal postscript eps enhanced colour "Helvetica" 10
set output 'SetPointsReceptionDelay.eps'
replot
pause -1
