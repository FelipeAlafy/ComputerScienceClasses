#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

union number {
  int integer;
  float floating;
};

int main() {
  setlocale(LC_ALL, "Portuguese");
  union number num;
  num.integer = 10;
  num.floating = 3.14F;
  printf("%d\n", num.integer);
  printf("%.2f\n", num.floating);

  printf("Impressão dos endereços de memorias das váriaveis da union:\n");
  printf("%p\n", &num.integer);
  printf("%p\n", &num.floating);

  return 0;
}