#include <stdio.h>

void rotate(int* nums, int numsSize, int k) {
  for(int i = 0; i < k; i++) {
    int temp = nums[numsSize - 1];
    for(int j = numsSize - 1; j > 0; j--) {
      nums[j] = nums[j-1];
    }
    nums[0] = temp;
  }
}

int main() {
  int arr[7] = {1,2,3,4,5,6,7};
  rotate(arr, 7, 3);
  for(int i = 0; i < 7; i++) {
    printf("%d,", arr[i]);
  }
  printf("\n");
}