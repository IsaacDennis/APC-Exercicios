#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  long long semente;
  int dado1, dado2, soma, pontos;
  time(&semente);
  srand((unsigned)semente);
  dado1 = 1 + rand()%6;
  dado2 = 1 + rand()%6;
  soma = dado1 + dado2;
  printf("Jogador lançou %d + %d = %d\n", dado1, dado2, soma);
  if (soma != 7 && soma >= 4 && soma <= 10) {
    pontos = soma;
    printf("Pontos do jogador = %d\n", pontos);
    // Loop infinito
    while(1) {
      dado1 = 1 + rand()%6;
      dado2 = 1 + rand()%6;
      soma = dado1 + dado2;
      printf("Jogador lançou %d + %d = %d\n", dado1, dado2, soma);
      if (soma == 7) {
        printf("Jogador perdeu a partida\n");
        break;
      } else if (soma == pontos) {
        printf("Jogador venceu a partida\n");
        break;
      }
    }
  } else if (soma == 7 || soma == 11) {
    printf("Jogador venceu a partida\n");
  } else
    printf("Jogador perdeu a partida\n");

  getchar();
  return 0;
}
