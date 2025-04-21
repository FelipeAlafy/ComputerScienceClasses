#include <stdio.h>
#include <locale.h>

int soma(int num1, int num2);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um numero: ");
    scanf("%d", &num2);

    const int res = soma(num1, num2);

    printf("%i + %i = %i\n", num1, num2, res);
    return 0;
}

int soma(int num1, int num2)
{
    return num1 + num2;
}