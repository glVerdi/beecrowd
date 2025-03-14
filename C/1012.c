#include <stdio.h>
#include <math.h>
#define PI 3.14159

double area_triangulo(double a, double c);
double area_circulo(double c);
double area_trapezio(double a, double b, double c);
double area_quadrada(double b);
double area_retangulo(double a, double b);

int main(void) {
    double A, B, C, areaTri, areaCir, areaTra, areaQua, areaRe;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    areaTri = area_triangulo(A, C);
    areaCir = area_circulo(C);
    areaTra = area_trapezio(A, B, C);
    areaQua = area_quadrada(B);
    areaRe = area_retangulo(A, B);
    printf("TRIANGULO: %.3f\n", areaTri);
    printf("CIRCULO: %.3f\n", areaCir);
    printf("TRAPEZIO: %.3f\n", areaTra);
    printf("QUADRADO: %.3f\n",areaQua);
    printf("RETANGULO: %.3f\n",areaRe);
    return 0;
}

double area_triangulo(double a, double c) {
    return (a * c) / 2;
}
double area_circulo(double c) {
    return PI * pow(c, 2.0);
}
double area_trapezio(double a, double b, double c) {
    return (a + b) / 2 * c;
}
double area_quadrada(double b) {
    return (b * b);
}
double area_retangulo(double a, double b) {
    return (a * b);
}