#include <stdio.h>

int main() {
  int entry, i, j;
  int joaoX, joaoD;
  int mariaX, mariaD;
  scanf("%d", &entry);
  for(i = 0; i < entry; i++) {
    int resJoao = 0;
    int resMaria = 0;
    for(j = 0; j < 3; j++) {
      scanf("%d %d", &joaoX, &joaoD);
      resJoao += joaoX * joaoD;
    }
    for(j = 0; j < 3; j++) {
      scanf("%d %d", &mariaX, &mariaD);
      resMaria += mariaX * mariaD;
    }

    if(resJoao > resMaria) {
      printf("JOAO\n");
    } else {
      printf("MARIA\n");
    }
  }  
  return 0;
}