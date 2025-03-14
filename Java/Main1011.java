import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;

public class Main1011 {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        double raio, volume, pi;
        pi = 3.14159;
        raio = sc.nextDouble();
        volume = (4/3.0) * pi * Math.pow(raio, 3.0);
        System.out.printf("VOLUME = %.3f\n", volume);
        sc.close();
    }
}