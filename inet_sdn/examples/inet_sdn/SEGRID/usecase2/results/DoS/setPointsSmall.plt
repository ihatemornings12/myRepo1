set ylabel "Fault restoration RTT (ms)"
set key outside

set style fill pattern 4
set boxwidth 0.4 

plot './setPointsSmall' every ::0::0 using ($1):($3*1000):xtic(2) title 'Attack Free, t=60s' with boxes, \
'' every ::1::1 using ($1):($3*1000):xtic(2) title '2000 injected packets per sec' with boxes, \
'' every ::2::2 using ($1+0.3):($3*1000):xtic(2) title '5000 injected packets per sec' with boxes, \
'' every ::3::3 using ($1+0.3):($3*1000):xtic(2) title '10000 injected packets per sec' with boxes

set terminal postscript eps enhanced colour "Helvetica" 10
set output 'SetPointsRTT_small.eps'
replot


