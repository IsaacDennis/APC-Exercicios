#include <stdlib.h>
#include <stdio.h>

int main() {
  int m, n, i, termo;
  printf("m = ");
  scanf("%d", &m);
  for (n = 1; n <= m; n++) {
    printf("%dx%d = 1", n, n);
    for (i = 1; i <= n-1; i++) {
      termo = 2*i + 1;
      printf(" + %d", termo);
    }
    printf("\n");
  }
  return 0;
}
