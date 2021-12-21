bool solution(std::string const &str, std::string const &ending) {
    if (std::equal(ending.rbegin(), ending.rend(), str.rbegin())) return true;
    return false;
}
