import java.io.IOException;
import java.util.Scanner;

public class Main1002 {
    public static void main (String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        double pi = 3.14159;
        double raio, area;
        raio = sc.nextDouble();
        area = pi * (raio * raio);
        System.out.printf("A=%.4f\n", area);
        sc.close();
    }
}
