#include <string>
#include <utility>

std::pair<std::string, std::string> capitalize(const std::string &s)
{
    std::string sml = s;
    std::string bg  = s;
    for (int i = 0; i < sml.length(); i+=2) {
    sml[i] = sml[i] - 32;
    }
    for (int i = 1; i < bg.length(); i+=2) {
    bg[i] = bg[i] - 32;
    }
    return {sml, bg};
}
