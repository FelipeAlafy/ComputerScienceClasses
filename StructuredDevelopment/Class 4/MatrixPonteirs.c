#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int matriz[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
  };

  int *ptr = NULL;
  ptr = &matriz[0][0];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", *ptr);
      ptr++;
    }
    printf("\n");
  }

  return 0;
}