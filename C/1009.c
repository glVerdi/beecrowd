#include <stdio.h>

double comissao(double salario, double vendas);

int main (void) {
    char nome[100];
    double vendas, salario, total;
    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
    total = comissao(salario, vendas);
    printf("TOTAL = R$ %.2f\n", total);
    return 0;
}

double comissao(double salario, double vendas) {
    return salario + (vendas * 0.15);
}