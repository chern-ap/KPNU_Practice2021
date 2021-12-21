std::string reverse_letter(const std::string& str) {
    std::string result;
    for(int i = str.size(); i >= 0; --i) {
        if(isalpha(str[i])) {
            result += str[i];
        }
    }
    return result;
}
