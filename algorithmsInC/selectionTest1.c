#include <stdio.h>

int main() {
  int a;
  int b;
  int c;
  int d;

  scanf("%d %d %d %d", &a, &b, &c, &d);
  if(b > c && d > a && (c+d) > (a+b) && c > 0 && d > 0 && a % 2 == 0) {
    printf("Valores aceitos\n");
    return 0;
  }

  printf("Valores nao aceitos\n");
  return 0;
}