#include<math.h>
long int findNextSquare(long int sq) {
 if(floor(sqrt(sq)) == sqrt(sq)) return pow(sqrt(sq)+1,2);
  else return -1;
}
