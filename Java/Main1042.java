import java.io.IOException;
import java.util.Scanner;

public class Main1042 {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int a, b, c, menor, medio, maior;
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        if (a <= b && a <= c) {
            menor = a;
            if (b <= c) {
                medio = b;
                maior = c;
            } else {
                medio = c;
                maior = b;
            }
        } else if (b <= a && b <= c) {
            menor = b;
            if (a <= c) {
                medio = a;
                maior = c;
            } else {
                medio = c;
                maior = a;
            }
        } else {
            menor = c;
            if (a <= b) {
                medio = a;
                maior = b;
            } else {
                medio = b;
                maior = a;
            }
        }
        System.out.println(menor);
        System.out.println(medio);
        System.out.println(maior);
        System.out.println();
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        sc.close();
    }
}
