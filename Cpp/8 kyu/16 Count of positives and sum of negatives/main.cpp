#include <vector>

using namespace std;

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
  int pos = 0;
  int neg = 0;
  int count = 1;
  if (input.size() > 0)
    {
  for (std::vector<int>::iterator it = input.begin() ; it != input.end(); ++it)
      {
            if (*it > 0) pos += count;
            else neg += *it;
      }
  return {pos, neg};
    }
  else return  {};
 }
