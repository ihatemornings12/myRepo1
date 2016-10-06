import subprocess, os

resultsPath = os.getcwd() 
plotFile = resultsPath + '/plot1.plt'

vectorID = "132"

#one file!-
attackFreeResults = resultsPath + '/General-0.vec'
outputFile = resultsPath + '/attackFreeResults1.dat'

grepCmd = ["grep", "^" + vectorID, attackFreeResults]
gnuplotCmd = ["gnuplot", "-e", "filename='" + outputFile + "'", plotFile]

with open(outputFile, 'w') as grepResult:
	p1 = subprocess.Popen(grepCmd,stdout=grepResult)
	grepResult.flush()
	grepResult.close()

attackFreePlot = subprocess.Popen(gnuplotCmd, stdout= subprocess.PIPE).communicate()[0]