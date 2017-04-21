#!/bin/bash

grep "^491" ./results/General-0.vec > sum_sum.ods
grep "^492" ./results/General-0.vec > avg_sum.ods
grep "^493" ./results/General-0.vec > sum_avg.ods
grep "^494" ./results/General-0.vec > avg_avg.ods

grep "RTU1" LogDSO.dat > rtu1_dso.ods
grep "RTU2" LogDSO.dat > rtu2_dso.ods
grep "RTU3" LogDSO.dat > rtu3_dso.ods
grep "RTU4" LogDSO.dat > rtu4_dso.ods
