#include <stdio.h>
#include <stdlib.h>

int main() {
  long long int quantidadeSoldAliado, quantidadeSoldInimigo, resultado;

  while(scanf("%llu %llu", &quantidadeSoldAliado, &quantidadeSoldInimigo) != EOF) {
    resultado = abs(quantidadeSoldAliado - quantidadeSoldInimigo);
    printf("%llu\n", resultado);
  }

  return 0;
}