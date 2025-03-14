#include <stdio.h>

int soma(int a, int b);

int main (void) {
    int A, B, X;
    scanf("%d",&A); // Endereço de A, onde A está na memória
    scanf("%d", &B); // Endereço de B, onde B está na memória
    X = soma(A, B);
    printf("X = %d\n", X);
    return 0;
}

int soma(int a, int b) {
    return a + b;
}