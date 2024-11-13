#include <stdio.h>

int main() {
  double b, h, a;
  printf("Enter base and height: ");
  scanf("%lf %lf", &b, &h);
  a = 0.5 * b * h;
  printf("%lf\n", a);
}
