#include <stdio.h>

int main() {
  unsigned long long int fibonacci[100];
  int  i, entrada, casos;
  fibonacci[0] = 0;
  fibonacci[1] = fibonacci[2] = 1;
  for(i = 3; i < 100; i++) {
    fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
  }
  scanf("%d\n", &entrada);
  for(i = 0; i < entrada; i++) {
    scanf("%d", &casos);
    printf("Fib(%d) = %lld\n", casos, fibonacci[casos]);
  }

  return 0;
}