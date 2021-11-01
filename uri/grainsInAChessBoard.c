#include <stdio.h>
#include <math.h>

int main() {
  int entrada, casas;
  int i, j;
  unsigned long long int resultado, graos, dobro;
  scanf("%d", &entrada);
  for(i = 1; i <= entrada; i++) {
    scanf("%d", &casas);
    graos = 0;
    dobro = 1;
    for(j = 0; j < casas; j++) {
      graos += dobro;
      dobro *= 2;
    }
    resultado = graos / 12000;
    printf("%lld kg\n", resultado);
  }

  return 0;
}