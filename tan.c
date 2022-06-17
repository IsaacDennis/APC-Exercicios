#include <stdio.h>
#include <math.h>
const float PI = 3.14159265;
float sen(float x, float p) {
  float resultado = x, termo = x;
  int k = 1;
  while (termo > p || termo < -p) {
    termo = -termo*x*x/(4*k*k+2*k);
    resultado += termo;
    k++;
  }
  return resultado;
}
float mcos(float x, float p) {
  float resultado = 1, termo = 1;
  int k = 1;
  while (termo > p || termo < -p) {
    termo = -termo*x*x/(4*k*k-2*k);
    resultado += termo;
    k++;
  }
  return resultado;

}
int main() {
  float ang, rsen, rcos, tan;
  scanf("%f", &ang);
  rsen = sen(ang*PI/180,  0.0001);
  rcos = mcos(ang*PI/180, 0.0001);
  tan  = rsen/rcos; 
  printf("sen: %.4f\n", rsen);
  printf("cos: %.4f\n", rcos);
  printf("tan: %.5f\n", tan);
}
