#include "unity.h"
#include <stdio.h>
#include "demo.h"
#define DISABLE_TEST
void setUp(void) {}
void tearDown(void) {}

void test_leapyear(void)
{
  TEST_ASSERT_TRUE(leapYear(2000)); // Example test
}

void test_nonleapyear(void)
{
  TEST_ASSERT_FALSE(leapYear(1900)); // Example test
}

int main(void)
{
  UNITY_BEGIN();

  RUN_TEST(test_leapyear);

// Ye test sirf tab run hoga jab DISABLE_TEST define NA ho
#if !defined(DISABLE_TEST)
  RUN_TEST(test_nonleapyear);
#endif

  return UNITY_END();
}
