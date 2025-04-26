#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Crie uma função que recebe um array de inteiros e seu tamanho e retorna a soma de todos os
 * elementos do array. Use essa função em seu programa principal.
 */

/*
 * Make a function that gets an array of integer and its size as input, and return the sum between all elements
 * of the array. Use this function in your main program.
 * */

int sumElements(int array[], int size);


int main() {
  setlocale(LC_ALL, "Portuguese");

  int array[5] = {1, 2, 3, 4, 5};

  int sum = sumElements(array, 5);

  printf("The sum of the array is: %d\n", sum);

  return 0;
}

int sumElements(int array[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += array[i];
  }
  return sum;
}