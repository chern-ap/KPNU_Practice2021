public class Kata
{
  public static int dontGiveMeFive(int start, int end)
  {
    int result = 0;
    for (int i = start; i <= end; i++) {
      if (String.valueOf(i).indexOf('5') == -1)
        result++;
    }
    return result;
  }
}
