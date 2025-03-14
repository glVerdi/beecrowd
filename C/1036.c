#include <stdio.h>
#include <math.h>

double delta(double b, double a, double c);
double raiz_positiva(double b, double delta, double a);
double raiz_negativa(double b, double delta, double a);

int main (void) {
    double A, B, C, R1, R2;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    if (A == 0) {
        printf("Impossivel calcular\n");
    } else if (delta(B, A, C) < 0) {
        printf("Impossivel calcular\n");
    } else {
        R1 = raiz_positiva(B, delta(B, A, C), A);
        R2 = raiz_negativa(B, delta(B, A, C), A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
        }
    return 0;
}

double delta(double b, double a, double c) {
    return (pow(b, 2.0) - 4.0 * a * c);
}

double raiz_positiva(double b, double delta, double a) {
    return (-b + sqrt(delta)) / (2.0 * a);
}

double raiz_negativa(double b, double delta, double a) {
    return (-b - sqrt(delta)) / (2.0 * a);
}