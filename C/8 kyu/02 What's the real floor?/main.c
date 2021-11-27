int get_real_floor(int n)
{
  if (n>=1 && n<13)
    return n-1;
  else if (n>=13)
    return n-2;
  else
    return n;
}
