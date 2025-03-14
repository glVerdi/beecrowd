#include <stdio.h>

double average(double a, double b, double c);

int main (void) {
    double A, B, C, media;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    media = average(A, B, C);
    printf("MEDIA = %.1lf\n", media);
    return 0;
}

double average(double a, double b, double c) {
    return ((a * 2.0) + (b * 3.0) + (c * 5.0)) / (2.0 + 3.0 + 5.0);
}