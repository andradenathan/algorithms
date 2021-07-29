#include <stdio.h>

int main() {
  char nome;
  double salario_fixo;
  double vendas;
  double total;

  scanf("%s\n%lf\n%lf", &nome, &salario_fixo, &vendas);
  
  total = salario_fixo + (vendas * 0.15);

  printf("TOTAL = R$ %.2lf\n", total);

  return 0;
}