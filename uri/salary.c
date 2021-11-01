#include <stdio.h>

int main() {
  int numero_funcionario;
  int horas_trabalhadas;
  double salario; 

  scanf("%d\n%d\n%lf", &numero_funcionario, &horas_trabalhadas, &salario);
  
  salario *= horas_trabalhadas; 

  printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numero_funcionario, salario);

  return 0;
}