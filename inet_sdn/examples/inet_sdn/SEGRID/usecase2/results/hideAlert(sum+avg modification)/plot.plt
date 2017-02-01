currentPath = "/home/alex/myGit/myRepo1/myRepo1/inet_sdn/examples/inet_sdn/SEGRID/usecase2/results/hideAlert(sum+avg\ modification)/"

filename = currentPath."test.dat"

set xlabel "simTime (sec)"
set ylabel "energy generation (mV)"
set key default
set xr [0:300]
set yr [0:200]

plot filename using 1:2 title 'threshold' with linespoints, \
filename using 1:11 title 'dso_overview' with linespoints, \
filename using 1:3 title 'real_status_1RTU_2IED' with linespoints, \
filename using 1:4 title 'real_status_2RTU_2IED' with linespoints, \
filename using 1:5 title 'real_status_2RTU_3IED' with linespoints, \
filename using 1:6 title 'real_status_3RTU_3IED' with linespoints

set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 10
set output currentPath . "/test.eps"
replot
pause -1
