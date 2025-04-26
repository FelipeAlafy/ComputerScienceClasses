#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/*
 * Crie um programa que declare um array de 5 números de ponto flutuante, permita que o usuário
 * preencha o array, e então imprima o maior e o menor número.
 */

/*
 * Make a program that create a 5 floating point array, that enables the user to fill it up, end then print-out the max
 * and min values in it.
 */

void replace_char(char *string, char find, char replace, int replaceLimit);

float maxValue(const float array[], int size);
float minValue(float array[], int size);

int main() {
  setlocale(LC_ALL, "Portuguese");
  float numbers[5];

  for (int i = 0; i < 5; i++) {
    printf("Enter number a floating number for position %d:\n>> ", i + 1);
    char value[10];
    scanf("%s", value);
    replace_char(value, ',', '.', 1);
    numbers[i] = atof(value);
  }

  const float min = minValue(numbers, 5);
  const float max = maxValue(numbers, 5);

  printf("The maximum value is %.3f\n", max);
  printf("The minimum value is %.3f\n", min);

  return 0;
}

float maxValue(const float array[], const int size) {
  float max = 0.0F;

  for (int i = 0; i < size; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }

  return max;
}

float minValue(float array[], const int size) {
  float min = maxValue(array, size);
  for (int i = 0; i < size; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }
  return min;
}

void replace_char(char *string, const char find, const char replace, const int replaceLimit) {
  const int length = strlen(string);
  int founded = 0;
  for (int i = 0; i < length; i++) {
    if (string[i] == find) {
      string[i] = replace;
      founded++;
    }
    if (founded > replaceLimit) {
      return;
    }
  }
}