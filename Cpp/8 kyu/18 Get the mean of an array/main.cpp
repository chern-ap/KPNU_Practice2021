#include <numeric>

using namespace std;

int get_average(std::vector <int> marks)
{
    auto const avrg = static_cast<float>(marks.size());
    return reduce(marks.begin(), marks.end()) / avrg;
}
