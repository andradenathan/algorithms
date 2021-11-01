#include <stdio.h>

int main() {
  float entrada;
  int i, positivo = 0;
  for(i = 0; i < 6; i++) {
    scanf("%f", &entrada);
    if(entrada > 0) positivo++;
  }
  printf("%d valores positivos\n", positivo);
  return 0;
}