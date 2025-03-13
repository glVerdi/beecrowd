#include <stdio.h>

int main (void) {
    int num, horas;
    double ganho_por_hora, salario;
    scanf("%d", &num);
    scanf("%d", &horas);
    scanf("%lf", &ganho_por_hora);
    salario = ganho_por_hora * horas;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", salario);
    return 0;
}