#include <stdio.h>
#include "demo.h"

int main()
{
  int a = 10;
  int b = 20;
  int c = sum(a, b);
  int d = square(a);
  int f = divide(b, a);
  printf("divide of %d and %d is %d\n", b, a, f);
  printf("sum of %d and %d is %d\n", a, b, c);
  printf("square of %d is %d\n", a, d);
  return 0;
}
