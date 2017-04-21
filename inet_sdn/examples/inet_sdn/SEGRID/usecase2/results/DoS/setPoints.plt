set ylabel "Fault restoration in terms of RTT (msec)"

set key default
set yr [0:2.5]

set style data histogram
set style histogram cluster gap 1
set style fill pattern 1
set boxwidth 0.9
set xtic scale 0

# 2, 3, 4, 5 are the indexes of the columns; 'fc' stands for 'fillcolor'
plot 'setPoints' using ($2*1000):xtic(1) ti col lc rgb "#8B008B", '' u ($3*1000) ti col  lc rgb "#1E90FF"

#fc rgb Fault_60s
#fc rgb Fault_120s

set terminal postscript eps enhanced colour "Helvetica" 18
set output 'setPoints.eps'
replot
