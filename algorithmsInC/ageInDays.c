#include <stdio.h>

int main() {
  int idadeEmDias;
  int anoEmDias = 365;
  int mesEmDias = 30;

  int ano;
  int mes;
  int dia;

  scanf("%d", &idadeEmDias);

  ano = idadeEmDias / anoEmDias;
  mes = (idadeEmDias % anoEmDias)/mesEmDias;
  dia = (idadeEmDias % anoEmDias)%mesEmDias;

  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);  

  return 0;
}