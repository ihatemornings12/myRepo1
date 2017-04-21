#!/bin/bash

grep "^491" ./results/create_alert-0.vec > ./results/createAlert/shutdown/dso_sum_sum.ods
grep "^492" ./results/create_alert-0.vec > ./results/createAlert/shutdown/dso_avg_sum.ods
grep "^493" ./results/create_alert-0.vec > ./results/createAlert/shutdown/dso_sum_avg.ods
grep "^494" ./results/create_alert-0.vec > ./results/createAlert/shutdown/dso_avg_avg.ods

grep "RTU1" LogDSO.dat > ./results/createAlert/shutdown/rtu1_dso.ods
grep "RTU2" LogDSO.dat > ./results/createAlert/shutdown/rtu2_dso.ods
grep "RTU3" LogDSO.dat > ./results/createAlert/shutdown/rtu3_dso.ods
grep "RTU4" LogDSO.dat > ./results/createAlert/shutdown/rtu4_dso.ods

grep "^515" ./results/create_alert-0.vec > ./results/createAlert/shutdown/rtu1_sum_real.ods
grep "^515" ./results/create_alert-0.vec > ./results/createAlert/shutdown/rtu1.avg_real.ods
grep "^517" ./results/create_alert-0.vec > ./results/createAlert/shutdown/rtu1.thresh.ods

grep "^537" ./results/create_alert-0.vec > ./results/createAlert/shutdown/rtu2_sum_real.ods
grep "^538" ./results/create_alert-0.vec > ./results/createAlert/shutdown/rtu2.avg_real.ods
grep "^540" ./results/create_alert-0.vec > ./results/createAlert/shutdown/rtu2.thresh.ods

grep "^559" ./results/create_alert-0.vec > ./results/createAlert/shutdown/rtu3_sum_real.ods
grep "^560" ./results/create_alert-0.vec > ./results/createAlert/shutdown/rtu3.avg_real.ods
grep "^563" ./results/create_alert-0.vec > ./results/createAlert/shutdown/rtu3.thresh.ods
