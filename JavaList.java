import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class App {
    public static void main(String[] args) {
        List<String> list = new ArrayList<>(Arrays.asList("one", "two", "three"));

        list = List.of("1", "2", "3");
    }
}