#include <stdio.h>

int main() {
  int codigo_peca1;
  int peca1;
  double valor_unitario1;

  int codigo_peca2;
  int peca2;
  double valor_unitario2;

  double total;

  scanf("%d %d %lf", &codigo_peca1, &peca1, &valor_unitario1);
  scanf("%d %d %lf", &codigo_peca2, &peca2, &valor_unitario2);

  total = (peca1 * valor_unitario1) + (peca2 * valor_unitario2);
  printf("VALOR A PAGAR: R$ %.2lf\n", total);

  return 0;
}