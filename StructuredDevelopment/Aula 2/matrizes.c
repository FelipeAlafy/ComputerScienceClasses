#include <stdio.h>

int main() {
    int matriz[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    matriz[2][1] = 12;

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 2; j++) {
        printf("Matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
      }
    }
}