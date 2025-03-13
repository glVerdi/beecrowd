import java.io.IOException;
import java.util.Scanner;

public class Main1008 {
    public static void main(String[] args) throws IOException{
        Scanner sc = new Scanner(System.in);
        int num, horas;
        double ganho_por_hora, salario;
        num = sc.nextInt();
        horas = sc.nextInt();
        ganho_por_hora = sc.nextDouble();
        salario = ganho_por_hora * horas;
        System.out.println("NUMBER = " + num);
        System.out.printf("SALARY = U$ %.2f\n", salario);
        sc.close();
    }
}