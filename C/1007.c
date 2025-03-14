#include <stdio.h>

int defference(int a, int b, int c, int d);

int main (void) {
    int A, B, C, D, Diferenca;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    Diferenca = diffrence(A, B, C, D);
    printf("DIFERENCA = %d\n", Diferenca);
    return 0;
}

int diffrence(int a, int b, int c, int d) {
    return (a * b) - (c * d);
}