#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
 * Crie um programa que peça ao usuário para inserir uma string e uma letra. O programa deve
 * então contar quantas vezes essa letra aparece na string.
 */

/*
 * Make a program that ask to the user to insert a string and then ask for a character. Then the software must count
 * how many times the char appers on the string.
 */

int main() {
  setlocale(LC_ALL, "Portuguese");
  char str1[50];
  char character;

  printf("Digite a string: ");
  fgets(str1, 50, stdin);

  printf("Digite a character: ");
  scanf("%s", &character);

  int counter = 0;

  for (int i = 0; i < strlen(str1); i++) {
    if (str1[i] == character) {
      counter++;
    }
  }

  char str2[strlen(str1) - 1];
  for (int i = 0; i < strlen(str1) - 1; i++) {
    str2[i] = str1[i];
  }

  printf("I have founded, in the string %s the character %c, %d times.\n", str2, character, counter);

  return 0;
}