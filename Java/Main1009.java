import java.io.IOException;
import java.util.Scanner;

public class Main1009 {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        String nome;
        double salario, vendas, total;
        nome = sc.next();
        salario = sc.nextDouble();
        vendas = sc.nextDouble();
        total = salario + (vendas * 0.15);
        System.out.printf("TOTAL = R$ %.2f\n", total);
        sc.close();
    }
}