#include <stddef.h>

const char *odd_or_even(const int *v, size_t sz) {
    size_t result = 0;
    for(size_t i=0; i<sz; i++) {
        result += v[i];
    }
    return (result % 2) ? "odd" : "even";
}
