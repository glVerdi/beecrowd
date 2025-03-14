#include <stdio.h>
#include <math.h>
#define PI 3.14159

double sphere(double raio);

int main(void) {
    double raio, volume;
    scanf("%lf", &raio);
    volume = sphere(raio);
    printf("VOLUME = %.3f\n", volume);
    return 0;
}

double sphere(double raio) {
    return (4/3.0) * PI * pow(raio, 3.0);
}