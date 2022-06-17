#include <stdio.h>


int main() {
  int n, resto, bin = 0, pot = 1;
  scanf("%d", &n);
  while (n != 0) {
    resto = n % 2;
    if (resto == 0) { pot = pot * 10; } else {
      bin = resto * pot + bin;
      pot = pot * 10;
    }
    n = n/2;
  }
  printf("Binario: %d\n", bin);
}
