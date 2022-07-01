#include <stdlib.h>
#include <stdio.h>

int primo(int n) {
    int i; //Variável de iteração
    if (n <= 1)
        return 0;
    for (i = 2; i < n; i++) {
        if (n % i == 0) 
            return 0;
    }
    return 1;
}
int main() {
    int n, natual, i, soma = 0;
    printf("Quantidade de numeros da sequencia: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Digite o %do da sequencia: ", i);
        scanf("%d", &natual);
        if (primo(natual))
            soma += natual;
    }
    printf("Soma dos primos: %d\n", soma);
}