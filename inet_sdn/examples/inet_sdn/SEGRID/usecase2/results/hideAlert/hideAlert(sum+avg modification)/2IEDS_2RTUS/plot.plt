#filename = '~/myGit/myRepo1/myRepo1/inet_sdn/examples/inet_sdn/SEGRID/usecase2/results/hideAlert(sum+avg\ modification)/2IEDS_2RTUS/test.txt'

set xlabel "simTime (sec)"
set ylabel "energy generation"
set key outside
set xr [0:300]
set yr [0:200]

plot 'test.txt' using 1:3 title 'threshold' with linespoints
 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 10
set output "test.eps"
replot
