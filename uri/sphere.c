#include <stdio.h>

int main() {
  double raio;
  
  scanf("%lf", &raio);

  double volume = (4/3.0) * 3.14159 * (raio * raio * raio);
  
  printf("VOLUME = %.3lf\n", volume);

  return 0;
}