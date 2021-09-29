#include <stdio.h>

int main() {
  int i, m, n, res, aux;
  while(1) {
    scanf("%d %d", &m, &n);
    res = 0;
    if(m <= 0 || n <= 0) break;
    if(m < n) {
      aux = n;
      n = m;
      m = aux;
    }

    for(i = n; i <= m; i++) {
      printf("%d ", i);
      res += i;
    }
    printf("Sum=%d\n", res);
  }
  return 0;
}