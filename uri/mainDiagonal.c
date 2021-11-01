#include <stdio.h>

int main() {
  float matrix[12][12];
  float res = 0.0;
  int i, j;
  char operation;
  scanf(" %c", &operation);
  for(i = 0; i < 12; i++) {
    for(j = 0; j < 12; j++) {
      scanf("%f", &matrix[i][j]);
    }
  }
  
  for(i = 0; i < 11; i++) {
    for(j = i+1; j < 12; j++) {
      res += matrix[i][j];
    }
  }

  if(operation == 'S') {
    printf("%.1f\n", res);
  }

  else if(operation == 'M') {
    printf("%.1f\n", res/66);
  }

  return 0;
}