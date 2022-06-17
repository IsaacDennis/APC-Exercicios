#include <stdlib.h>
#include <stdio.h>


int main() {
  int a, b, auxa, auxb, resto, reda, redb;
  printf("Fracao (a/b) = ");
  scanf("%d/%d", &a, &b);
  resto = a % b;
  auxa = a;
  auxb = b;
  while (resto != 0) {
    auxa = auxb;
    auxb = resto;
    resto = auxa % auxb;
  }
  reda = a / auxb;
  redb = b / auxb;
  printf("Fracao irredutivel = %d/%d\n", reda, redb);
  return 0;
}
