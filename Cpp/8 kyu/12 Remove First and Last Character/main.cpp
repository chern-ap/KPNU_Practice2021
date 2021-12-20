#include <string>

using namespace std; 

string sliceString (string str )
{
  str.erase(0, 1);
  str.erase(str.size()-1);
  return str ; 
}
