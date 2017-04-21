#!/bin/sh
grep "^33" -w switch-overflow-0.vec > s1Full
grep "^82" -w switch-overflow-0.vec > s2Full
grep "^180" -w switch-overflow-0.vec > s4Full

grep "^514" -w switch-overflow-0.vec > dsoHops
grep "^539" -w switch-overflow-0.vec > rtu1Hops
grep "^564" -w switch-overflow-0.vec > rtu2Hops
grep "^589" -w switch-overflow-0.vec > rtu3Hops
grep "^614" -w switch-overflow-0.vec > rtu4Hops

grep "^560" -w switch-overflow-0.vec > rtu2SetPoints

grep "^512" -w switch-overflow-0.vec > dsoDelay

grep "^513" -w switch-overflow-0.vec > dsoPktsRcvd
