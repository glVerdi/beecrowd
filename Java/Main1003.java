import java.io.IOException;
import java.util.Scanner;

public class Main1003 {
    public static void main (String arg[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        int A,B;
        A = sc.nextInt();
        B = sc.nextInt();
        int soma = A + B;
        System.out.println("SOMA = " + soma);
        sc.close();
    }
}