#include <stdio.h>


int main() {
  int i, j;
  printf("Enter two integers: ");
  scanf("%d %d", &i, &j);

  if (i > j)  
   printf("%d is greater than %d\n", i, j);
  else if (j > i)
    printf("%d is greater than %d\n", j, i);
  else {
    printf("i and j are equal\n");
  }

  return 0;
}
