#include <vector>

std::vector<int> two_oldest_ages(std::vector<int> ages)
{
    sort(ages.rbegin(), ages.rend());
    return {ages[1], ages[0]};
}
