#include <stdbool.h>
#include <math.h>
bool is_square(int n) {
double sqe = sqrt(n);
return (round(sqe) == sqe && n >= 0) ? true : false;
}
