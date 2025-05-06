#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

unsigned int fibonacci(int terms) {
  if (terms <= 1) {
    return terms;
  }
  return fibonacci(terms - 1) + fibonacci(terms - 2);
}


int main() {
  setlocale(LC_ALL, "Portuguese");

  int terms = 0;
  printf("Enter a number: ");
  scanf("%d", &terms);

  for (int i = 0; i < terms; i++) {
    printf("%d ", fibonacci(i));
  }

  return 0;
}