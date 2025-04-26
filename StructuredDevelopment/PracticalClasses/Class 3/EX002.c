#include <stdio.h>
#include <locale.h>

/**
  * Crie um programa que declare um array de 10 inteiros, preencha o array com números de 1
  * a 10, e então imprima a soma de todos os elementos.
  **/

/**
 * Make a program that create a ten integer array, filling it up with numbers from one to ten, and then print-out the
 * sum of its elements.
 **/

int main() {
  setlocale(LC_ALL, "Portuguese");
  int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int sum = 0;

  for (int i = 0; i < 10; i++) {
    sum += numbers[i];
  }
  printf("The sum between 1 and 10 is: %d\n", sum);
  return 0;
}