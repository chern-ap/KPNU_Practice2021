#include <string.h>
#include <stdlib.h>

char *repeat_str(size_t count, const char *src) {
size_t slen = strlen(src);
char * result = malloc((count*slen)+1);
  
int i; char * p;
for (i=0, p = result; i < count; ++i, p += slen ) {
    memcpy(p, src, slen);
  }
  *p = '\0';
  
  return result;
}
