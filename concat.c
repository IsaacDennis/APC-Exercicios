#include <stdio.h>

int main () {
  int n1, n2, aux, concat;
  printf("Digitar dois inteiros = ");
  scanf("%d %d", &n1, &n2);
  aux = n2;
  while (aux != 0) {
    n1 *= 10;
    aux = aux/10;
  }
  concat = n1 + n2;
  printf("Numero concatenado: %d\n", concat);
}
