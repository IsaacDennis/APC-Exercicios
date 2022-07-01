#include <stdio.h>
#include <stdlib.h>
int quadrado (int n) {
    return n*n;
}
int main() {
    int n, k, quadatual = 4; //4, pois o primeiro número par é 2
    printf("n = ");
    scanf("%d", &n);
    for (k = 2; quadatual <= n; k += 2, quadatual = quadrado(k))
        printf("%d\n", quadatual);
}