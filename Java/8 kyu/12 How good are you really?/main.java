public class Kata {
  public static boolean betterThanAverage(int[] classPoints, int yourPoints) {
    int sum = yourPoints;
    int avrg = 0;
    for(int i:classPoints){
      sum+=i;
    }
    avrg = (sum/(classPoints.length + 1));
    return yourPoints>avrg? true:false;
  }
}
