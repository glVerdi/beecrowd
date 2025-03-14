#include <stdio.h>

int sum(int a, int b);

int main (void) {
    int A, B, soma;
    scanf("%d", &A);
    scanf("%d", &B);
    soma = sum(A, B);
    printf("SOMA = %d\n", soma);
    return 0;
}

int sum(int a , int b) {
    return a + b;
}