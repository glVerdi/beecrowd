import java.io.IOException;
import java.util.Scanner;

public class Main1016 {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int x, distancia;
        x = sc.nextInt();
        distancia = 2 * x;
        System.out.println(distancia + " minutos");
        sc.close();
    }
}
