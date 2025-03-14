#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calc(double raio);

int main (void) {
    double raio, area;
    scanf("%lf", &raio);
    area = calc(raio);
    printf("A=%.4lf\n", area);
    return 0;
}

double calc (double raio) {
    return PI * pow(raio, 2.0);
}