import subprocess, os

resultsPath = os.getcwd() 
plotFile = resultsPath + '/plot3.plt'

vectorID = "132"

attack_25packets = resultsPath + '/attack_004-0.vec'
outputFile = resultsPath + '/attack_004.dat'

grepCmd = ["grep", "^" + vectorID, attack_25packets]
gnuplotCmd = ["gnuplot", plotFile]

with open(outputFile, 'w') as grepResult:
	p1 = subprocess.Popen(grepCmd,stdout=grepResult)
	grepResult.flush()
	grepResult.close()

attack_25packetsPlot = subprocess.Popen(gnuplotCmd, stdout= subprocess.PIPE).communicate()[0]