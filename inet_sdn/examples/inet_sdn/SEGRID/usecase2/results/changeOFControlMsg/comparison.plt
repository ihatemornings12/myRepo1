set xlabel "simTime (sec)"
set ylabel "Packet delivery time to DSO (msec)"
set key default
set xr [0:300]
set yr [0:3]

plot './attackFree/transmTimeToDSOAF' using ($3):($4*1000) title 'Attack Free' with linespoint lt rgb "#8B008B", \
'./2comprSwitches/transmTimeToDSO' using ($3):($4*1000) title 'Traffic redirection (s6+s5)' with linespoint  lt rgb "#1E90FF", \
'3compr1Drop/transmTimeToDSO' using ($3):($4*1000) title 'Traffic redirection + Drop OF Flow mod messgaes (s8)' with linespoint lt rgb "#DAA520", \
'4compr2Drop/transmTimeToDSO' using ($3):($4*1000) title 'Traffic redirection + Drop OF Flow mod messgaes (s8+s2)' with linespoint lt rgb "#228B22"

 
set terminal postscript eps enhanced colour dashed lw 1 "Helvetica" 18
set output 'comparison.eps'
replot

