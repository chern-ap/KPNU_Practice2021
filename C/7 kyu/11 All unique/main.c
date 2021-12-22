#include <stdbool.h>
#include <string.h>

bool has_unique_chars(const char *str) 
{
    int i = 0, j = 0;
    while (str[i])
    {
      j = i + 1;
      while(str[j])
      {
        if (str[i] == str[j])
          return false;
        j++;
      }
      i++;
    }
    return true;
}
