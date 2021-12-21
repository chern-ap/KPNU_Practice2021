#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  int result = 0;
for (int i = 0; i < a.size(); i++)
{
  result += (a[i] + b[i]);
}
  return result;
}
