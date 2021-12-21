unsigned __int128 factorial(unsigned n)
{
    return n ? n * factorial(n-1) : 1;
}
