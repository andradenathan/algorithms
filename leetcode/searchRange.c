#include <stdio.h>
#include <stdlib.h>

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
  *returnSize = 2;
  int* arr = malloc(*(returnSize) * sizeof(int));
  arr[0] = -1;
  arr[1] = -1;

  int left = 0;
  int middle, aux = 0;
  int right = numsSize - 1;
  while(left <= right) {
    middle = left + (right - left) / 2;
    if(nums[middle] == target) {
      arr[aux] = middle;
      aux++;
    }
    if(nums[middle] < target) left = middle + 1;
    else right = middle - 1;
  }

  return arr;
}

int main(void) {
  int arr[6] = {5,7,7,8,8,10};
  int* tam = 2;
  int* returnSize = searchRange(arr, 6, 8, &tam);
  for(int i = 0; i < 2; i++) {
    printf("%d ", returnSize[i]);
  }
  printf("\n");
  free(returnSize);
  return 0;
}