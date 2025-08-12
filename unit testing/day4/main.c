#include "unity.h"
#include <stdio.h>
#include "demo.h"

void setUp(void)
{
  printf("Setting up tests...\n");
}
void tearDown(void)
{
  printf("Tearing down tests...\n");
}
void test_swapping()
{
  int x = 5, y = 10;
  printf("Before swapping: x = %d, y = %d\n", x, y);
  swapping(&x, &y);
  TEST_ASSERT_EQUAL(10, x);
  TEST_ASSERT_EQUAL_INT(5, y);
}
void test_average()
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  float avg = average(arr, size);
  TEST_ASSERT_FLOAT_WITHIN(0.01, 3.0, avg); //
}
void test_reverse_array()
{
  int arr[] = {1, 2, 3, 4, 5};
  int reverse[] = {5, 4, 3, 2, 1};
  int size = sizeof(arr) / sizeof(arr[0]); // Call reverse_array here!
  TEST_ASSERT_EQUAL_INT_ARRAY(reverse, arr, size);
}
int main(void)
{
  UNITY_BEGIN();

  RUN_TEST(test_swapping);
  RUN_TEST(test_average);
  RUN_TEST(test_reverse_array);

  return UNITY_END();
}