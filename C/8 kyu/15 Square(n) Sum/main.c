#include <stddef.h>

int square_sum(const int *values, size_t count)
  {
  int result = 0;
   for (int i = 0; i < count; i++)
   {
      result = result + (values[i] * values[i]);
   };
  return result;
};
