#include <stdio.h>
#include <stdlib.h>

int greatest(int a, int b);

int main(void){
    int a, b, c, maior;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    maior = greatest(a, greatest(b, c));
    printf("%d eh o maior\n", maior);
    return 0;
}

int greatest(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}