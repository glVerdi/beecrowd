import java.io.IOException;
import java.util.Scanner;

public class Main1002 {
    public static void main (String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        double pi = 3.14159;
        double R;
        R = sc.nextDouble();
        double A = pi * (R * R);
        System.out.printf("A=%.4f\n", A);
        sc.close();
    }
}
