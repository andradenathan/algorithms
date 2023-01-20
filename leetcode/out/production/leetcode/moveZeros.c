#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
  int aux = 0;
  for(int i = 0; i < numsSize; i++) {
    if(nums[i] != 0) {
      nums[aux] = nums[i];
      aux++;
    }    
  }
  
  while(aux < numsSize) {
    nums[aux] = 0;
    aux++;
  }
}

int main(void) {
  int arr[5] = {0, 1, 0, 3, 12};
  moveZeroes(arr, 5);
  for(int i = 0; i < 5; i++) {
    printf("%d\n", arr[i]);
  }
}