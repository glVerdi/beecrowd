import java.io.IOException;

public class Main1059 {
    public static void main(String[] args) throws IOException {
        int n = 1;
        while (n <= 100) {
            if (n % 2 == 0) {
                System.out.println(n);
            }
            n = n + 1;
        }
    }
}
