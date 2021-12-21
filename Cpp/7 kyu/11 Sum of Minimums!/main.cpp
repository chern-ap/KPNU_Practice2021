#include <vector>
#include <algorithm>

int sum_of_minimums(const std::vector<std::vector<int>> &numbers)
{
  int result = 0;
  for(auto i: numbers){
    result += *(std::min_element(i.begin(), i.end()));
  }
  
  return result;
}
