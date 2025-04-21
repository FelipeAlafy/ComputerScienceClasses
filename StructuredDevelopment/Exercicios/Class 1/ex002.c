#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char character;
    printf("Digite um caractere: ");
    scanf("%c", &character);
    printf("Caractere digitado foi: %d\n", character);
    return 0;
}