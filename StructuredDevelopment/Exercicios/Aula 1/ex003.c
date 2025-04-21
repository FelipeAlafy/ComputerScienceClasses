#include <stdio.h>
#include <locale.h>

int main()
{
    int num1, num2;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    int soma, diferenca, produto, quociente;
    soma = num1 + num2;
    diferenca = num1 - num2;
    produto = num1 * num2;
    quociente = num1 / num2;

    printf("Resultado das operações: \n");
    printf("Soma: %d\n", soma);
    printf("Difença: %d\n", diferenca);
    printf("Produtos: %d\n", produto);
    printf("Quociente: %d\n", quociente);
    return 0;
}