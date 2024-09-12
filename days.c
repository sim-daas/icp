#include <stdio.h>

int main() {
  int year, weeks, day, inp;
  scanf("%d", &inp);

  year = inp / 365;
  weeks = inp % 365 / 7;
  day = inp % 365 % 7;

  printf("%d year, %d weeks, %d day\n", year, weeks, day);

  return 0;
}
