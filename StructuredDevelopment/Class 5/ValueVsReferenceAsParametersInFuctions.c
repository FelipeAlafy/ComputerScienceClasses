#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void sort(int *arr, const int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        const int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  int arr[] = {2, 3, 1, 5, 4};
  const int size = sizeof(arr) / sizeof(arr[0]);
  sort(&arr[0], size);

  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}