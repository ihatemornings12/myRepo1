set xlabel "simTime (sec)"
set ylabel "Total power generation of domain with compromised RTU (MW)" 
set title "Domain's performance with compromised RTU recorded by DSO Control Center" 
set key default
set xr [0:303]
set yr [0:80]

plot 'records' using ($2):($5) title 'DSO Record' with linespoints lt rgb "#DAA520", \
'' using ($2):($3) title 'Real Status' with linespoints lt rgb "#228B22", \
'' using ($2):($8) title 'Attack Free' with linespoints lt rgb "#8B008B", \
'' using ($2):($7) title 'Threshold' with linespoints lt rgb "#1E90FF"
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 18
set output 'rtu.eps'
replot