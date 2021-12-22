import java.util.stream.Collectors;

public class TwoToOne {
    public static String longest (String s1, String s2) {
        return (s1 + s2).chars().distinct().mapToObj(c -> String.valueOf((char)c)).sorted().collect(Collectors.joining());
    }
}
