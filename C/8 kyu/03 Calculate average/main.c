double find_average(double* array, int length) {
  double result = 0;
  if (length > 0)
    {
    for (int i = 0; i < length; i++)
  {
      result += array[i];
  }
  return result /= length;
     }
     else return 0;
}
