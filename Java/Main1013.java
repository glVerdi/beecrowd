import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;

public class Main1013 {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int a, b, c, maiorab, maiorabc;
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        maiorab = (a + b + Math.abs(a - b)) / 2;
        maiorabc = (maiorab + c + Math.abs(maiorab - c)) / 2;
        System.out.println(maiorabc + " eh o maior");
        sc.close();
    }
}
