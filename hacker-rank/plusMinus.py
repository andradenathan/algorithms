import math
import os
import random
import re
import sys

def plusMinus(arr):
  n = len(arr)
  rate = 0
  countZero = 0
  countNegative = 0
  countPositive = 0
  for i in arr:
    if i == 0:
      countZero += 1 

    elif i > 0:
      countPositive += 1
    
    else:
      countNegative += 1

  print(f"{countPositive/n:.6f}")
  print(f"{countNegative/n:.6f}")
  print(f"{countZero/n:.6f}")

  return rate

if __name__ == '__main__':
  n = int(input().strip())
  arr = list(map(int, input().rstrip().split()))
  plusMinus(arr)