import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;

public class Main1002 {
    public static void main (String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        double pi = 3.14159;
        double raio, area;
        raio = sc.nextDouble();
        area = pi * pow(raio, 2.0);
        System.out.printf("A=%.4f\n", area);
        sc.close();
    }
}
