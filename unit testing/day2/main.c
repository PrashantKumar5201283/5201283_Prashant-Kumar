#include <stdio.h>
#include "demo.h"
#include "unity.h"
void setUp()
{
  printf("Setting up tests...\n");
}
void tearDown()
{
  printf("Tearing down tests...\n");
}
void test_sum()
{
  TEST_ASSERT_EQUAL_INT(30, sum(10, 20));
}

int main()
{
  int a = 10;
  int b = 20;
  int c = sum(a, b);
  int d = square(a);
  printf("sum of %d and %d is %d\n", a, b, c);
  printf("square of %d is %d\n", a, d);
  UNITY_BEGIN();
  RUN_TEST(test_sum);
  return UNITY_END();
}
