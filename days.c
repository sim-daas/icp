#include <stdio.h>

int main() {
  int year, month, day, inp = 0;
  scanf("Enter number of days: %d", &inp);

  year = inp / 365;
  month = inp % 365 / 30;
  day = inp % 365 % 30;

  printf("%d year, %d month, %d day", year, month, day);

  return 0;
}
