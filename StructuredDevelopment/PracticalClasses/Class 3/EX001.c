#include <stdio.h>
#include <locale.h>

/*
 * Crie um programa que declare um array (vetor) de 5 inteiros, permita que o usuário preencha
 * esse array, e ao final imprima os números na ordem inversa
 */

/*
 * Make a program that contains a five integer arrays, that allow the user to fill it up, then print the array in
 * inverse order.
 */

int main() {
  setlocale(LC_ALL, "Portuguese");
  int numbers[5];
  for (int i = 0; i < 5; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  for (int i = 5; i > 0; i--) {
    printf("%d\n", i);
  }
  return 0;
}