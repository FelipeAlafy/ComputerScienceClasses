#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

unsigned int factorial(const int initial) {
  if (initial == 1) {
    return 1;
  }
  return initial * factorial(initial - 1);
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  int initial = 0;
  printf("Enter a number: ");
  scanf("%d", &initial);
  printf("The factorial of %d is %d\n", initial, factorial(initial));
  return 0;
}