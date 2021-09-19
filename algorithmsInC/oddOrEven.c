#include <stdio.h>

int main() {
  int entrada, i, num;
  scanf("%d", &entrada);
  for(i = 0; i < entrada; i++) {
    scanf("%d", &num);
    if(num == 0) printf("NULL\n");
    else if(num % 2 != 0 && num > 0) 
      printf("ODD POSITIVE\n");
    else if(num % 2 != 0 && num < 0)
      printf("ODD NEGATIVE\n");
    else if(num % 2 == 0 && num > 0)
      printf("EVEN POSITIVE\n");
    else if(num % 2 == 0 && num < 0)
      printf("EVEN NEGATIVE\n");
  }
  return 0;
}