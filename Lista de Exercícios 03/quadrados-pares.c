#include <stdio.h>
#include <stdlib.h>

int quadrado(int n){
    return n*n;
}

int main() {
    int soma = 0, i, quadatual = quadrado(2); // Quadrado do primeiro número par
    int n;
    printf("n = ");
    scanf("%d", &n);
    for(i = 4; quadatual <= n; i += 2) {
        i == 4 ? printf("%d", quadatual) : printf(" + %d", quadatual); // Linha de código para melhorar a saída do sinal "+"
        soma += quadatual;
        quadatual = quadrado(i);
    }   
    printf(" = %d\n", soma);
}