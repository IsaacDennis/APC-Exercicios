#include <stdlib.h>
#include <stdio.h>
const float PI = 3.14159265;

double senh(double x, double p) {
  double termo = x, resultado = x;
  int k = 1;
  while(termo > p || termo < -p) {
    termo = termo*x*x/(4*k*k+2*k);
    resultado += termo;
    k++;
  }
  return resultado;
}

int main() {
  double ang, resultado, termo, p = 0.0001;
  int k = 1;
  printf("x (graus): ");
  scanf("%lf", &ang);
  // Conversão para radianos
  ang = ang*PI/180;
  termo = ang, resultado = ang;
  while(termo > p || termo < -p) {
    termo = termo*ang*ang/(4*k*k+2*k);
    resultado += termo;
    k++;
  }
  printf("senh(%lf): %lf\n", ang, resultado);
}

