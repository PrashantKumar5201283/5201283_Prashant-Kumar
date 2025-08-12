#include "demo.h"
#include <stdlib.h>
float average(int arr[], int size)
{
  if (size <= 0 || arr == NULL)
  {
    return 0.0f; // Handle empty array or null pointer
  }
  float sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  return (float)sum / size; // Calculate and return the average
}
