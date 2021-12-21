public class Kata {
    public static String findNeedle(Object[] haystack) {
    
        String rtrn = "";
        
        for(int i = 0; i < haystack.length; i++) {
            if(haystack[i] == "needle") {
                rtrn = "found the needle at position " + i;
                break;
            }
        }
        return rtrn;
    }   
}
