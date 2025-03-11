#include <stdio.h>

int main (void) {
    int A, B, X;
    scanf("%d",&A); // Endereço de A, onde A está na memória
    scanf("%d", &B); // Endereço de B, onde B está na memória
    X = A + B;
    printf("X = %d\n", X);
    return 0;
}