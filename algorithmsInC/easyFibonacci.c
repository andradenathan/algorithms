#include <stdio.h>

int main() {
  int fib[46];
  int i, entrada, aux;
  fib[0] = 0;
  fib[1] = fib[2] = 1;
  scanf("%d", &entrada);
  for(i = 3; i <= 45; i++) {
    fib[i] = fib[i-1] + fib[i-2];
  }

  for(i = 0; i < entrada - 1; i++) { 
    printf("%d ", fib[i]);
    aux = fib[i+1];
  }
  printf("%d\n", aux);
  return 0;
}