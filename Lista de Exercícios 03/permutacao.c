#include <stdio.h>
#include <stdlib.h>
int contadigitos(int n, int d) {
    int vezes = 0;
    while(n != 0){
        if (n%10 == d) vezes++;
        n /= 10;
    }
    return vezes;
}
int main() {
    int a, b, auxa, digitoatual;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    auxa = a;
    while(auxa != 0) {
        digitoatual = auxa % 10;
        if (contadigitos(a, digitoatual) != contadigitos(b, digitoatual)) {
            printf("%d nao eh permutacao de %d\n", a, b);
            return 0;
        }
        auxa /= 10;
    }
    printf("%d eh permutacao de %d\n", a, b);
    return 0;
}