#include <stdio.h>

int main() {
  int n1, n2, i, soma = 0, maior = 0, menor = 0;
  scanf("%d %d", &n1, &n2);
  if(n2 > n1) {
    maior = n2;
    menor = n1;
  } else {
    maior = n1;
    menor = n2;
  }
  for(i = menor + 1; i < maior; i++) {
    if(i % 2 != 0) {
      soma += i;
    }
  }
  printf("%d\n", soma);
  return 0;
}