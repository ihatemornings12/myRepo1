import subprocess, os

resultsPath = os.getcwd() 
plotFile = resultsPath + '/plot4.plt'

gnuplotCmd = ["gnuplot", plotFile]
attackFreePlot = subprocess.Popen(gnuplotCmd, stdout= subprocess.PIPE).communicate()[0]