#include <stddef.h>

unsigned binary_array_to_numbers(const unsigned *bits, size_t count)
{
  int result = 0;
  for (int i=0; i<count; i++) {
    result = result << 1;
    result += bits[i];
  }
  return result;
};
