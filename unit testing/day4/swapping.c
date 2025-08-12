#include "demo.h"
#include <stdio.h>
void swapping(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
  printf("a = %d, b = %d\n", *a, *b);
}