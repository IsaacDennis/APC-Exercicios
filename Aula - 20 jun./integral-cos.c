#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double pot(double x, int n) {
    int i;
    double res = 1;
    for (i = 1; i <= n; i++)
        res *= x;

    return res;
}
int fat(int n) {
    int i, res = 1;
    for (i = 1; i <= n; i++)
        res *= i;
    
    return res;
}
double cosseno(double x, double eps) {
    double cos = 1, termo = 1;
    int k = 1;
    while(fabs(termo) > eps) {
        termo = pot(-1, k)*pot(x, 2*k)/fat(2*k);
        cos += termo;
        k++;
    }
    return cos;
}
float cosseno_termo(float x, float p) {
  float resultado = 1, termo = 1;
  int k = 1;
  while (termo > p || termo < -p) {
    termo = -termo*x*x/(4*k*k-2*k);
    resultado += termo;
    k++;
  }
  return resultado;

}
double integral(double a, double b, int n) {
    double h = (b - a)/n;
    double eps = 0.0001;
    double res = cos(a) + cos(b);
    int i;
    for(i = 1; i < n; i++) {
        res += 2*cos(a+i*h);
    }
    return res*h/2;
}
int main() {
    double a, b;
    double integral_cos;
    int n;
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("n = ");
    scanf("%d", &n);
    integral_cos = integral(a, b, n);
    printf("Integral de %.2lf a %.2lf com %d subintervalos = %lf\n", a, b, n, integral_cos);
    return 0;
}