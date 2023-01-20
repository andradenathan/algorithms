#include <stdio.h>
#include <stdlib.h>

void rotate(int* nums, int numsSize, int k) {
  int* arr;
  int temp; 
  arr = malloc(sizeof(int) * numsSize);

  // shifting elems to the last position
  for(int i = 0; i < numsSize - k; i++)
    arr[i+k] = nums[i];

  // adding the last k's values
  for(int i = 0; i < k; i++) 
    arr[i] = nums[numsSize - k + i];

  for(int i = 0; i < numsSize; i++)
    nums[i] = arr[i];
}

int main() {
  int arr[7] = {1,2,3,4,5,6,7};
  rotate(arr, 7, 3);
  for(int i = 0; i < 7; i++) {
    printf("%d,", arr[i]);
  }
  printf("\n");
}