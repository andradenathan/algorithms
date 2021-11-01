#include <stdio.h>

int calls = 0;

int fibonacci(int n) {
  calls += 1;
  if (n < 2) return n;
  return fibonacci(n-1) + fibonacci(n-2);
}

int main() {  
  int entry, i, res;
  scanf("%d", &entry);
  for(i = 0; i < entry; i++) {
    calls = 0;
    int n;
    scanf("%d", &n);
    res = fibonacci(n);
    printf("fib(%d) = %d calls = %d\n", n, calls - 1, res);
  }
  return 0;
}