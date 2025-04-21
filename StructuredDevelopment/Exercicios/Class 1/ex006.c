#include <stdio.h>
#include <locale.h>

int main()
{
    int num1, num2, num3;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um numero: ");
    scanf("%d", &num2);
    printf("Digite um numero: ");
    scanf("%d", &num3);

    const float media = (float) (num2 + num1 + num3) / 3;
    printf("A média dos três números é de %.2f\n", media);
    return 0;
}