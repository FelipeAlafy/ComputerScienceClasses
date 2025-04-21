#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Olá, Mundo!\n");

    /*printf("Digite um numero: ");
    int n;
    scanf("%i", &n);

    n = n + 1;
    printf("%d\n", n);
    n = n - 1;
    printf("%d\n", n);
    n++;
    printf("%d\n", n);
    n--;
    printf("%d\n", n);
    n = n * 2;
    printf("%d\n", n);
    n = n / 2;
    printf("%d\n", n);
    n = n % 2;
    printf("%d\n", n);

    int rest = n % 2;
    if (rest == 0) {
        printf("O número %i é par.", n);
    } else {
        printf("O número %i é impar.", n);
    }*/


    int x, y, res;
    char op;

    printf("Digite a operação: ");
    scanf("%c", &op);

    printf("Insira um numero inteiro: ");
    scanf("%d", &x);
    printf("Insira o segundo número: ");
    scanf("%d", &y);

    switch (op) {
        case '+':
            res = x + y;
            printf("Resultado de %d + %d = %d\n", x, y, res);
            break;
        case '-':
            res = x - y;
            printf("Resultado de %d - %d = %d\n", x, y, res);
            break;
        case '*':
            res = x * y;
            printf("Resultado de %d * %d = %d\n", x, y, res);
            break;
        case '/':
            res = x / y;
            printf("Resultado de %d / %d = %d\n", x, y, res);
            break;
        default:
            printf("Você inseriu uma opção inválida, use apenas + - * / na próxima execução.\n");
            break;
    }

    return 0;
}