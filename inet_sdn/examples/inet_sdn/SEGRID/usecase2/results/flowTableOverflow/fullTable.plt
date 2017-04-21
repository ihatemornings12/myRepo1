set ylabel "Full Flow Table of the compromised switch (sec)"
set key outside

set yr [59:62]

set style fill pattern 1
set boxwidth 0.2

plot './fullTable' every ::0::0 using ($1):($3):xtic(2) title '1000pkts:10s' with boxes , \
'' every ::1::1 using ($1):($3):xtic(2) title '500 pkts:10s' with boxes , \
'' every ::2::2 using ($1+0.3):($3):xtic(2) title '1000 pkts:30s' with boxes, \
'' every ::3::3 using ($1+0.3):($3):xtic(2) title '500 pkts:30s' with boxes

set terminal postscript eps enhanced colour "Helvetica" 10
set output 'fullFlowTable_s4.eps'
replot
pause -1
