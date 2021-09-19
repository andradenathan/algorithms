#include <stdio.h>
#include <math.h>

int main() {
  int entrada, i, j;
  double resultado;
  scanf("%d", &entrada);
  for(i = 2; i <= entrada; i += 2) {
    resultado = pow(i, 2);
    printf("%d^2 = %.lf\n", i, resultado);
  }
  return 0;
}