#include <stdio.h>

int distance(int x);

int main(void) {
    int x, distancia;
    scanf("%d", &x);
    distancia = distance(x);
    printf("%d minutos\n", distancia);
    return 0;
}

int distance(int x) {
    return (2 * x);
}