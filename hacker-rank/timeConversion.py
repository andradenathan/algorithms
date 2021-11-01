import math
import os
import random
import re
import sys

def timeConversion(s):
  if 'PM' in s:
    hour = int(s[:2])
    if hour < 12:
      hour += 12
      result = str(hour) + s[2:8]
      return result
    else:
      return s[:8]

  else:
    hour = int(s[:2])
    if hour > 10:
      hour += 12
      hour %= 24
      if hour < 10:
        hour = "0" + str(hour)
      result = hour + s[2:8]
      return result
    else:
      return s[:8]
  
if __name__ == '__main__':
  fptr = open(os.environ['OUTPUT_PATH'], 'w')
  s = input()
  result = timeConversion(s)
  fptr.write(result + '\n')
  fptr.close()