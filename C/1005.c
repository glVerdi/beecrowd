#include <stdio.h>

double average(double a, double b);

int main (void) {
    double A, B, media;
    scanf("%lf", &A);
    scanf("%lf", &B);
    media = average(A, B);
    printf("MEDIA = %.5lf\n", media);
    return 0;
}

double average(double a, double b) {
    return ((a * 3.5) + (b * 7.5)) / (3.5 + 7.5);
}