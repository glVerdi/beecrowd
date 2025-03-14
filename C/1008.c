#include <stdio.h>

double salary(int horas, double ganho_por_hora);

int main (void) {
    int num, horas;
    double ganho_por_hora, salario;
    scanf("%d", &num);
    scanf("%d", &horas);
    scanf("%lf", &ganho_por_hora);
    salario = salary(horas, ganho_por_hora);
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", salario);
    return 0;
}

double salary(int horas, double ganho_por_horas) {
    return ganho_por_horas * horas;
}