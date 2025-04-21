#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, times;
    char character;

    printf("Digite um caractere: ");
    scanf("%c", &character);
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Digite quantas vezes devo incrementar os valores: ");
    scanf("%d", &times);

    for (int x = 1; x <= times; x++) {
        num++;
        character++;
    }
    printf("O valor inteiro ficou em %d e o caracter ficou em %c\n", num, character);
    return 0;
}