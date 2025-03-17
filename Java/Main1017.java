import java.io.IOException;
import java.util.Scanner;

public class Main1017 {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int horas, km;
        double gasolina;
        horas = sc.nextInt();
        km = sc.nextInt();
        gasolina = (horas * km) / 12.0;
        System.out.printf("%.3f\n", gasolina);
        sc.close();
    }
}
