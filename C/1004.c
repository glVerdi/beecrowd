#include <stdio.h>

int mult(int a, int b);

int main (void) {
    int A, B, prod;
    scanf("%d", &A);
    scanf("%d", &B);
    prod = mult(A, B);
    printf("PROD = %d\n", prod);
    return 0;
}

int mult(int a, int b) {
    return a * b;
}