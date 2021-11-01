#include <stdio.h>

unsigned long long int factorial(int n) {
  if (n == 0)
    return 1;

  return n * factorial(n-1);
}

int main(void) {
  int fact1, fact2;
  while(scanf("%d %d", &fact1, &fact2) != EOF) {
    printf("%lld\n", factorial(fact1)+factorial(fact2));
  }
  return 0;
}