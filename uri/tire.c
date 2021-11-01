#include <stdio.h>

int main() {
  int pressaoMotorista, pressaoBomba;
  scanf("%d %d", &pressaoMotorista, &pressaoBomba);
  printf("%d\n", (pressaoMotorista - pressaoBomba));
  return 0;
}