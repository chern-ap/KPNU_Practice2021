public class Kata{
  public static String bonusTime(final int salary, final boolean bonus) {
    int result = salary;
    if(bonus){
      result = salary * 10;
    } else {
      result = salary;
    }
    String retresult = Integer.toString(result);
    
    return "\u00A3" + retresult;
  }
}
