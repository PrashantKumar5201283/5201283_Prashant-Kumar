#include <stdio.h>
#include "demo.h"

int main()
{
  int a = 10;
  int b = 20;
  int c = sum(a, b);
  int d = square(a);
  printf("sum of %d and %d is %d\n", a, b, c);
  printf("square of %d is %d\n", a, d);
  return 0;
}
