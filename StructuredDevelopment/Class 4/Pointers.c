#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int x = 10;
  char z = 'M';

  printf("O valor de x é: %d\n", x);
  printf("O valor de z é: %c\n", z);

  int *ponteiro_x;
  char *ponteiro_z;

  ponteiro_x = &x;
  ponteiro_z = &z;

  printf("O valor de *ponteiro_x é: %d\n", ponteiro_x);
  printf("O valor de *ponteiro_z é: %d\n", ponteiro_z);

  printf("O valor acessado pelo *ponteiro_x é: %d\n", *ponteiro_x);
  printf("O valor acessado pelo *ponteiro_z é: %c\n", *ponteiro_z);

  return 0;
}