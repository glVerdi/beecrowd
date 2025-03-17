#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2);

int main(void) {
    double x1, y1, x2, y2, distancia;
    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);
    distancia = distance(x1, y1, x2, y2);
    printf("%.4lf\n", distancia);
    return 0;
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow((x2 - x1), 2.0) + pow((y2 - y1), 2.0));
}