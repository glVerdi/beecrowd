import java.io.IOException;

public class Main1095 {
    public static void main(String[] args) throws IOException {
        int I = 1;
        int J = 60;
        while (J >= 0 ) {
            System.out.printf("I=%d J=%d\n", I, J);
            I = I + 3;
            J = J - 5;
        }
    }
}
