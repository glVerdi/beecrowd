import java.io.IOException;
import java.util.Scanner;

public class Main1014 {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int x;
        double y, consumo;
        x = sc.nextInt();
        y = sc.nextDouble();
        consumo = (x / y);
        System.out.printf("%.3f km/l\n", consumo);
        sc.close();
    }
}
