set ylabel "Time difference between 'Packet In' and 'Packet Out' (msec)"

set key default
set boxwidth 0.25 
set style fill pattern 1

set xr [-0.5:8]
set yr [0:0.4]

plot 'rttComp' using ($0-.05):($2*1000):($3*1000):xtic(1) with boxerrorbars title "Flow Expiration: 10s" lc rgb "#8B008B", \
     '' using ($0+0.25):($4*1000):($5*1000) with boxerrorbars title "Flow Expiration: 30s" lc rgb "#1E90FF", \
     '' using ($0+0.55):($6*1000):($7*1000) with boxerrorbars title "Flow Expiration: 60s" lc rgb "#DAA520"
     
set terminal postscript eps enhanced colour "Helvetica" 18
set output 'rttControllerComp.eps'
replot
