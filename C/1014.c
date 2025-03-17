#include <stdio.h>

double consumo(int x, double y);

int main(void) {
    int x;
    double y, total;
    scanf("%d", &x);
    scanf("%lf", &y);
    total = consumo(x, y);
    printf("%.3lf km/l\n", total);
    return 0;
}

double consumo(int x, double y) {
    return (x / y);
}