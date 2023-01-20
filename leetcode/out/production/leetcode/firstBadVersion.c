#include <stdio.h>
#include <stdbool.h>

bool isBadVersion(int version);

int firstBadVersion(int n) {
  int left = 0;
  int right = n;
  int middle, val;
  while(left <= right) {
    middle = left + (right - left)/ 2;
    if(isBadVersion(middle)) {
      val = middle;
      right = middle - 1;
    }
    else {
      left = middle +1;
    }
  }
  return val;
}