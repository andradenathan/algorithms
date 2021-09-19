#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c, temp;
  scanf("%f %f %f", &a, &b, &c);

  if(a < c) {
    temp = a;
    a = c;
    c = temp;
  }

  if(b < c) {
    temp = b;
    b = c;
    c = temp; 
  }

  if(a < b) {
    temp = a;
    a = b;
    b = temp;
  }

  if(a >= b + c) printf("NAO FORMA TRIANGULO\n");
  else {
    if(pow(a, 2) == pow(b, 2) + pow(c, 2)) printf("TRIANGULO RETANGULO\n");
    else if(pow(a, 2) > (pow(b, 2) + pow(c, 2))) printf("TRIANGULO OBTUSANGULO\n");
    else if(pow(a, 2) < (pow(b, 2) + pow(c, 2))) printf("TRIANGULO ACUTANGULO\n");
    if(a == b && b == c) printf("TRIANGULO EQUILATERO\n");
    else if(a == b || b == c) 
      printf("TRIANGULO ISOSCELES\n");
  }

  return 0;
}