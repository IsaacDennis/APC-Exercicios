#include <stdio.h>
#include <stdlib.h>

#define VERDADE 1
#define FALSO 0

int numero_perfeito(int n){
    int i, soma = 0;
    for (i = 1; i < n; i++) 
        if (n % i == 0) soma += i;

    if (soma == n) {
        return VERDADE;
    } else
        return FALSO;
}

int main() {
    int n, i;
    printf("Digite um natural maior ou igual a 12: ");
    scanf("%d", &n);
    for (i = 6; i < n; i++) {
        if (numero_perfeito(i) && numero_perfeito(n - i)) {
            printf("Sim. %d = %d + %d\n", n, i, n-i);
            return 0;
        }
    }
    printf("Nao.\n");
    return 0;
}