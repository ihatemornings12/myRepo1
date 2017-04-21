#!/bin/bash

grep "^491" ./results/hide_alert-0.vec > sum_sum.ods
grep "^492" ./results/hide_alert-0.vec > avg_sum.ods
grep "^493" ./results/hide_alert-0.vec > sum_avg.ods
grep "^494" ./results/hide_alert-0.vec > avg_avg.ods

grep "RTU1" LogDSO.dat > rtu1_dso.ods
grep "RTU2" LogDSO.dat > rtu2_dso.ods
grep "RTU3" LogDSO.dat > rtu3_dso.ods
grep "RTU4" LogDSO.dat > rtu4_dso.ods

grep "^515" ./results/hide_alert-0.vec > rtu1_sum_real.ods
grep "^515" ./results/hide_alert-0.vec > rtu1.avg_real.ods

grep "^537" ./results/hide_alert-0.vec > rtu2_sum_real.ods
grep "^538" ./results/hide_alert-0.vec > rtu2.avg_real.ods
grep "^559" ./results/hide_alert-0.vec > rtu3_sum_real.ods
grep "^560" ./results/hide_alert-0.vec > rtu3.avg_real.ods
