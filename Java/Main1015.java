import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;

public class Main1015 {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        double x1, y1, x2, y2, distancia;
        x1 = sc.nextDouble();
        y1 = sc.nextDouble();
        x2 = sc.nextDouble();
        y2 = sc.nextDouble();
        distancia = Math.sqrt(Math.pow((x2 - x1), 2.0) + Math.pow((y2 - y1), 2.0));
        System.out.printf("%.4f\n", distancia);
        sc.close();
    }
}
