#include <stdio.h>

double value_to_pay(double preco1, int quantidade1, double preco2, int quantidade2);

int main(void) {
    int codigo1, codigo2, quantidade1, quantidade2;
    double preco1, preco2, total;
    scanf("%d", &codigo1);
    scanf("%d", &quantidade1);
    scanf("%lf", &preco1);
    scanf("%d", &codigo2);
    scanf("%d", &quantidade2);
    scanf("%lf", &preco2);
    total = value_to_pay(preco1, quantidade1, preco2, quantidade2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}

double value_to_pay(double preco1, int quantidade1, double preco2, int quantidade2) {
    return (preco1 * quantidade1) + (preco2 * quantidade2);
}