#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main () {
  setlocale(LC_ALL, "Portuguese");
  int a, b;
  printf("Digite o primeiro valor: ");
  scanf("%d", &a);
  getchar();
  printf("Digite o segundo valor: ");
  scanf("%d", &b);
  swap(&a, &b);
  getchar();
  printf("O primeiro valor é: %d\n", a);
  printf("O segundo valor é: %d\n", b);
  return 0;
}