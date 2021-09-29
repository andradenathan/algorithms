#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void * a, const void * b) {
  return (*(int*)a - *(int*)b);
}

int ocorrencias(int vetor[], int size, int numero) {
  int i, contador = 0; 
  for(i = 0; i < size; i++) 
    if(vetor[i] == numero)
      contador++;
  return contador;
}

int main(void) {
  int entrada, i, frequencias;
  scanf("%d", &entrada);
  int numeros[entrada];
  for(i = 0; i < entrada; i++) 
    scanf("%d", &numeros[i]);

  qsort(numeros, entrada, sizeof(int), cmpfunc);
  
  for(i = 0; i < entrada; i++) {
   frequencias = ocorrencias(numeros, entrada, numeros[i]);
   if(numeros[i] != numeros[i+1])
   printf("%d aparece %d vez(es)\n", numeros[i], frequencias);
  }
  return 0;
}