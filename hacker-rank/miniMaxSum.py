import math
import os
import random
import re
import sys

def miniMaxSum(arr):
  minNumber = 0
  maxNumber = 0
  for i in range(1, len(arr)):
    arr.sort()
    minNumber += arr[i-1]
    maxNumber += arr[i]

  print(f"{minNumber} {maxNumber}")

if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))
    miniMaxSum(arr)