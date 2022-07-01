#include <stdio.h>
#include <stdlib.h>

void n_seg_iguais(int n){
    if (n <= 0) {
        printf("Não há nenhum segmento de numeros. \n");
        return;
    }
    int i, atual, anterior, seg_iguais = 1;
    printf("Digite o primeiro numero da sequencia: ");
    scanf("%d", &atual);
    anterior = atual;
    for(i = 2; i <= n; i++){
        printf("Digite o %do numero da sequencia: ", i);
        scanf("%d", &atual);
        if (atual != anterior)
            seg_iguais++;

        anterior = atual;
    }
    printf("Segmentos de numeros iguais: %d\n", seg_iguais);
}

int main(){
    int n;
    scanf("%d", &n);
    n_seg_iguais(n);
}