import java.util.Arrays;
public class Kata {
    public static int findShort(String s) {
        int min = Integer.MAX_VALUE;
        for(String each : s.split(" "))
        {
        if(each.length() < min)
        min = each.length();
        }
         return min;
    }
}
