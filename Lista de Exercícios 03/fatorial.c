#include <stdio.h>
#include <stdlib.h>

// Assumindo que n >= 0
int fatorial(int n) {
    int fat = 1;
    while(n > 0) {
        fat *= n;
        n--;
    }
    return fat;
}

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("Fatorial de %d: %d\n", n, fatorial(n));
}