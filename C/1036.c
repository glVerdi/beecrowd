#include <stdio.h>
#include <math.h>

int main (void) {
    double A, B, C, R1, R2;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    if (A == 0) {
        printf("Impossivel calcular\n");
    } else if ((pow(B, 2.0) - 4.0 * A * C) < 0) {
        printf("Impossivel calcular\n");
    } else {
        R1 = (-B + sqrt(pow(B, 2.0) - 4.0 * A * C)) / (2.0 * A);
        R2 = (-B - sqrt(pow(B, 2.0) - 4.0 * A * C)) / (2.0 * A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
        }
    return 0;
}