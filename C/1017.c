#include <stdio.h>

double gasolina_gasta(int horas, int km);

int main(void) {
    int horas, km;
    double gasolina;
    scanf("%d", &horas);
    scanf("%d", &km);
    gasolina = gasolina_gasta(horas, km);
    printf("%.3lf\n", gasolina);
    return 0;
}

double gasolina_gasta(int horas, int km) {
    return (km * horas) / 12.0;
}