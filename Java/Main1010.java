import java.io.IOException;
import java.util.Scanner;

public class Main1010 {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int codigo1, codigo2, quantidade1, quantidade2;
        double preco1, preco2, total;
        codigo1 = sc.nextInt();
        quantidade1 = sc.nextInt();
        preco1 = sc.nextDouble();
        codigo2 = sc.nextInt();
        quantidade2 = sc.nextInt();
        preco2 = sc.nextDouble();
        total = (quantidade1 * preco1) + (quantidade2 * preco2);
        System.out.printf("VALOR A PAGAR: R$ %.2f\n", total);
        sc.close();
    }
}