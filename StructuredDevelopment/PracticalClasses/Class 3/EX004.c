#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Crie um programa que declare um array de 30 caracteres para receber um nome, permita que o
 * usuário digite o seu nome, e então imprima os caracteres na ordem em que foram inseridos e em
 * ordem inversa
 */

/*
 * Make a program that declare a 30 character array to be filled up with a name, ask the user for
 * it name, and then print-out character in order that it have been inserted and vice-versa order.
 */

int main() {
  setlocale(LC_ALL, "Portuguese");

  char name[30];
  printf("Enter name: ");
  scanf("%s", name);

  int length = 0;

  for (int i = 0; name[i] != '\0'; i++) {
    printf("%c", name[i]);
    length++;
  }
  printf("\n");

  for (int i = length -1; i > -1; i--) {
    printf("%c", name[i]);
  }
  printf("\n");

  return 0;
}