set ylabel "Time difference between 'MonitoringData' - 'SetPoints' (ms)"

set key default
set yr [0:6]

set style data histogram
set style histogram cluster gap 1
set style fill pattern 1
set boxwidth 0.9
set xtic scale 0

plot 'rttSetPointsSwitch' using ($2*1000):xtic(1) ti col lc rgb "#8B008B", \
'' u ($3*1000) ti col  lc rgb "#1E90FF"

set terminal postscript eps enhanced colour "Helvetica" 18
set output 'rttSetPointsSwitch.eps'
replot
