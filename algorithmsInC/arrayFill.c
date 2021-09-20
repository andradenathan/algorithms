#include <stdio.h>

int main() {
  double N[100];
  int i;
  double entrada;
  scanf("%lf", &entrada);
  N[0] = entrada;
  printf("N[0] = %.4lf\n", N[0]);
  for(i = 1; i < 100; i++) {
    N[i] = N[i-1] * 0.5;
    printf("N[%d] = %.4lf\n", i, N[i]);
  }

  return 0;
}