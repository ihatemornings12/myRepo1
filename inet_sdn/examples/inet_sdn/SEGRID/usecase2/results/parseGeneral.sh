#!/bin/sh
grep "^514" -w General-0.vec > dsoHops
grep "^539" -w General-0.vec > rtu1Hops
grep "^564" -w General-0.vec > rtu2Hops
grep "^589" -w General-0.vec > rtu3Hops
grep "^614" -w General-0.vec > rtu4Hops

grep "^560" -w General-0.vec > rtu2SetPoints

grep "^512" -w General-0.vec > dsoDelay

grep "^513" -w General-0.vec > dsoPktsRcvd
