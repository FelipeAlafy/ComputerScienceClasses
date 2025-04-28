#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int array[5] = {1, 2, 3, 4, 5};
  int *ponteiro_para_primeiro_elemento = &array[0];
  int *ponteiro_para_ultimo_elemento = &array[4];

  printf("Primeiro Elemento: %d\n", *ponteiro_para_primeiro_elemento);
  printf("Último Elemento: %d\n", *ponteiro_para_ultimo_elemento);
  ponteiro_para_primeiro_elemento++;
  printf("Segundo Elemento: %d\n", *ponteiro_para_primeiro_elemento);
  ponteiro_para_ultimo_elemento--;
  printf("Penultimo Elemento: %d\n", *ponteiro_para_ultimo_elemento);


  if (ponteiro_para_primeiro_elemento == ponteiro_para_ultimo_elemento) {
    printf("Mesmo local");
  }
  return 0;
}