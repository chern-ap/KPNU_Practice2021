public class TotalPoints {
    public static int points(String[] games) {
     int result = 0;
        for(String s : games){
          int x = Integer.parseInt(s.split(":",2)[0],10);
          int y = Integer.parseInt(s.split(":",2)[1],10);
          if(x > y){ result += 3;}
          if(x == y){ result += 1;}
        }
      return result;
    }
}
