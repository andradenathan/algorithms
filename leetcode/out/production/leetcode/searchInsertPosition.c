#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
  int left = 0;
  int right = numsSize - 1;
  int middle;
  while(left <= right) {
    middle = left + (right - left) /2;
    if(nums[middle] == target) return middle;
    if(nums[middle] < target) left = middle + 1; 
    else right = middle - 1;
  }
  return left;
}
