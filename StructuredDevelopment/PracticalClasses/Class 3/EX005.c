#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
 * Crie um programa que peça ao usuário para inserir duas strings. Depois, o programa deve
 * concatenar (juntar) essas duas strings e imprimir o resultado.
 */

/*
 * Create a prgram that ask for the user to enter two strings. Then, the program must concatenate both strings and
 * print-out the result.
 */

int main() {
  setlocale(LC_ALL, "Portuguese");
  char str1[50];
  char str2[50];

  printf("Type some text, up to 50 characters.\n>> ");
  scanf("%s", str1);
  printf("Type some text, up to 50 characters.\n>> ");
  scanf("%s", str2);

  strcat(str1, " ");
  strcat(str1, str2);

  printf("%s", str1);
  return 0;
}