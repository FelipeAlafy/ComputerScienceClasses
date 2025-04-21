#include <stdio.h>
#include <locale.h>

int valorGlobal = 0;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Pré modificação do valor global %d\n", valorGlobal);
    valorGlobal = num;
    printf("Pós modificação do valor global %d\n", valorGlobal);
    return 0;
}