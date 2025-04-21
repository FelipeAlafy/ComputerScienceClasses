#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade = 19;
    float peso = 110.5F;
    printf("Minha idade é: %d\n", idade);
    printf("Peso: %.2f\n", peso);
    return 0;
}