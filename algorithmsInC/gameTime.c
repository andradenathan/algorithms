#include <stdio.h>

int main() {
  int initialHour, finalHour;
  scanf("%d %d", &initialHour, &finalHour);
  if(finalHour <= initialHour) finalHour += 24;
  int res = (finalHour - initialHour);
  printf("O JOGO DUROU %d HORA(S)\n", res);
  return 0;
}