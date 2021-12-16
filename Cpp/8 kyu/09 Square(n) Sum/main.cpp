#include <vector>

int square_sum(const std::vector<int>& numbers)
{
  int result = 0;
  for (int i = 0; i < numbers.size(); i++)
    {
     result = result + (numbers[i] * numbers[i]);
    }
    return result;
}
