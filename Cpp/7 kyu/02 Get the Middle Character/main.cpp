std::string get_middle(std::string input) 
{
  int lngth = (input.length() % 2 == 0) ? 2 : 1;
  int i = (input.length() - 1) / 2;
  return input.substr(i, lngth);
}
