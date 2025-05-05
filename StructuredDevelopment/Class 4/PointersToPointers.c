#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int x = 10;
  int *y = &x;
  int **z = &y;

  printf("O valor de x é %d\n", x);
  printf("O valor de *y é %d\n", *y);
  printf("O valor de **z é %d\n", **z);
  printf("O valor de *(*z + 1) é %d\n", *(*z + 1));

  return 0;
}