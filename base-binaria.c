#include <stdio.h>


int main () {
  int n, resto, bin, pot = 1;
  printf("n: ");
  scanf("%d", &n);
  bin = n % 2;
  while (n != 0) {
    n = n/2;
    resto = n % 2;
    pot = pot * 10;
    if (resto == 0) continue;
    bin = pot + bin;
  }
  printf("Binario: %d\n", bin);
}
