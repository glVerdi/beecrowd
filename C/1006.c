#include <stdio.h>

int main (void) {
    double A, B, C, media;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    media = ((A * 2.0) + (B * 3.0) + (C * 5.0)) / (2.0 + 3.0 + 5.0);
    printf("MEDIA = %.1lf\n", media);
    return 0;
}