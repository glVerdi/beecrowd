#include <stdio.h>

int main(void) {
    int i = 1;
    int j = 60;
    while (j >= 0){
        printf("I=%d J=%d\n", i, j);
        i = i + 3;
        j = j - 5;
    }
    return 0;
}