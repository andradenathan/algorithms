#include <stdio.h>

int main() {
  int entrada, i, valores = 0;
  for(i = 0; i < 5; i++) {
  scanf("%d", &entrada);
  if(entrada % 2 == 0) 
    valores++;
  }
  printf("%d valores pares\n", valores);
  return 0;
}