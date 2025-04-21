#include <stdio.h>
#include <locale.h>

float calculaAreaDoTriangulo(float base, float altura);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float base, altura;
    printf("Digite a base do triângulo, pode ser número com ponto flutuante: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    float area = calculaAreaDoTriangulo(base, altura);
    printf("A área do triangulo cuja base é de %.2f e altura de %.2f é igual a %.2f\n", base, altura, area);
}

float calculaAreaDoTriangulo(float base, float altura)
{
    return (base * altura)/2;
}