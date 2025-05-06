#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int *get_array(int size) {
  int *arr = malloc(size * sizeof(int));
  return arr;
}


int main() {
  setlocale(LC_ALL, "Portuguese");

  int *arr = get_array(10);
  for (int i = 0; i < 10; i++) {
    arr[i] = i + 1;
    printf("%d ", arr[i]);
  }

  free(arr);

  return 0;
}