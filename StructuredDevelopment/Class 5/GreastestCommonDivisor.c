#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

unsigned int gcd(unsigned int a, unsigned int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  int a, b;

  printf("Enter a number: ");
  scanf("%d", &a);
  printf("Enter a number: ");
  scanf("%d", &b);

  printf("The Greatest Common Divisor of %d and %d is %d\n", a, b, gcd(a, b));

  return 0;
}

