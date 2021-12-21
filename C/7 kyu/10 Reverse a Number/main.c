long long reverse_num(long long n) {
  long long result = 0;
  while (n != 0) {
    result = result * 10 + n % 10;
    n = n / 10;
  }
  return result;
}
