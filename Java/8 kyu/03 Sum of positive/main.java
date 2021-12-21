public class Positive{

  public static int sum(int[] arr){
    int result = 0;
    for(int number : arr){
      if(number > 0){
        result += number;
      }
    }
    return result;
  }
}
