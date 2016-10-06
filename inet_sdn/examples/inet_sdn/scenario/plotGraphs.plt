currentPath = "~/INET_SDN_dev/inet_sdn/examples/inet_sdn/scenario"
#attackFreeResults = currentPath . "/results/attackFreeResults.txt"

#Attack Free

set xlabel "simTime (sec)"
set ylabel "Packets received during each sec"
set key default
set xr [0:250]
set yr [0:70]

#give the  filename as parameter
#plot filename using 3:4 title 'Attack Free' with linespoints
#set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 14
#set output currentPath . "/attackFree.eps"
#replot
#pause -1

#multiple files

#a=system('a=`tempfile`;cat *.dat > $a;echo "$a"')
#plot a u 3:4 with linespoints ls 

set style line 1 lw 2 lc 1 lt 1 pt 1 pi -1 pointsize 0.8 pointinterval 0
set style line 2 lw 2 lc 2 lt 1 pt 2 pi -1 pointsize 0.8 pointinterval 0
set style line 3 lw 2 lc 3 lt 1 pt 3 pi -1 pointsize 0.8 pointinterval 0
set style line 4 lw 2 lc 4 lt 1 pt 4 pi -1 pointsize 0.8 pointinterval 0

FILES = system("ls -1 *.dat")
plot for [i=1:words(FILES)] word(FILES,i) u 3:4 with linespoints ls i
set output currentPath . "/multiple.eps"
replot
pause -1