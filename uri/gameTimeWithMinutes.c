#include <stdio.h>

int main() {
  int horaInicial, minutoInicial, horaFinal, minutoFinal, horaTotal = 0, minutoTotal = 0;
  scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);

  if(horaFinal <= horaInicial && minutoFinal <= minutoInicial) {
    horaFinal += 24;
  } else if(minutoFinal <= minutoInicial) {
    minutoFinal += 60;
    horaFinal -= 1;
  }

  int segundoFinal = (horaFinal * 3600) + (minutoFinal * 60);
  int segundoInicial = (horaInicial * 3600) + (minutoInicial * 60);
  horaTotal = (segundoFinal - segundoInicial) / 3600;
  minutoTotal = ((segundoFinal - segundoInicial) - (horaTotal * 3600)) / 60;
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaTotal, minutoTotal);
  return 0;
}