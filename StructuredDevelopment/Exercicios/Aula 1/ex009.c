#include <stdio.h>
#include <locale.h>

void parOuImpar(int num);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1;
    printf("Digite um numero: ");
    scanf("%d", &num1);

    parOuImpar(num1);
    return 0;
}

void parOuImpar(int num) {
    if (num % 2 == 0) {
      printf("Par");
    } else {
      printf("Impar");
    }
}