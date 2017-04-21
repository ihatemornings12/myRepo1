#!/bin/sh
grep "^34" -w switch-overflow-0.vec > s1rtt
grep "^84" -w switch-overflow-0.vec > s2rtt
grep "^134" -w switch-overflow-0.vec > s3rtt
grep "^184" -w switch-overflow-0.vec > s4rtt
grep "^234" -w switch-overflow-0.vec > s5rtt
grep "^295" -w switch-overflow-0.vec > s6rtt
grep "^356" -w switch-overflow-0.vec > s7rtt
