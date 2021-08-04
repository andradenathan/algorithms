#include <stdio.h>
#include <math.h>

int main() {
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  
  double delta = (b * b) - 4.0 * a * c;
  
  double r1 = (b * (-1) + sqrt(delta)) / (2 * a); 
  double r2 = (b * (-1) - sqrt(delta)) / (2 * a);

  if(delta < 0 || a == 0) {
    printf("Impossivel calcular\n");
    return 0;
  }
  
  printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
  return 0;
}