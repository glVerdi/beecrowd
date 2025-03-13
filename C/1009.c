#include <stdio.h>

int main (void) {
    char nome[100];
    double vendas, salario, total;
    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
    total = salario + (vendas * 0.15);
    printf("TOTAL = R$ %.2f\n", total);
    return 0;
}