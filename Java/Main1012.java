import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;

public class Main1012 {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        double A, B, C, PI = 3.14159, areaTri, areaCir, areaTra, areaQua, areaRe;
        A = sc.nextDouble();
        B = sc.nextDouble();
        C = sc.nextDouble();
        areaTri = (A * C) / 2;
        areaCir = PI * Math.pow(C, 2.0);
        areaTra = (A + B) / 2 * C;
        areaQua = (B * B);
        areaRe = (A * B);
        System.out.printf("TRIANGULO: %.3f\n", areaTri);
        System.out.printf("CIRCULO: %.3f\n", areaCir);
        System.out.printf("TRAPEZIO: %.3f\n", areaTra);
        System.out.printf("QUADRADO: %.3f\n", areaQua);
        System.out.printf("RETANGULO: %.3f\n", areaRe);
        sc.close();
    }
}
