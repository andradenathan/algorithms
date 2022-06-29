#include <stdio.h>

int main() {
  int i;
  int A[37];
  A[0] = 0;
  for(i = 1; i < 37; i++) {
    if(i % 3 == 0) {
      A[i] = A[i-3] + 5;
    }
    else {
      A[i] = A[i-1] + 1;
    }
  }
  for(i = 1; i <= 37; i+=3) {
    printf("I=%d J=%d\n", i, A[37-i]);
  }
  return 0;
}