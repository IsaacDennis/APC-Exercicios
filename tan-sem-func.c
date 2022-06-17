#include <stdlib.h>
#include <stdio.h>
#include <math.h>
const float PI = 3.141592;
int main() {
  float ang, sen, cos, termo_sen, termo_cos, p, resultado;
  int k;
  printf("Angulo (graus): ");
  scanf("%f", &ang);
  printf("Precisao: ");
  scanf("%f", &p);
  ang = ang*PI/180;
  termo_sen = ang, sen = ang;
  k = 1;
  while (termo_sen > p || termo_sen < -p) {
    termo_sen = -termo_sen*ang*ang/(4*k*k+2*k);
    sen += termo_sen;
    k++;
  }
  k = 1;
  termo_cos = 1, cos = 1;
  while (termo_cos > p || termo_cos < -p) {
    termo_cos = -termo_cos*ang*ang/(4*k*k-2*k);
    cos += termo_cos;
    k++;
  }
  resultado = round(cos) == 0 ? 0 : sen/cos; // Evitar divisao por zero
  printf("ang: %f\n", ang);
  printf("sen: %f\n", sen);
  printf("cos: %f\n", cos);
  printf("Resultado: %.3f\n", resultado);
  return 0;
}
