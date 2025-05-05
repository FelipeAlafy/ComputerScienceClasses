#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Pessoa {
  char nome[20];
  int idade;
  float altura;
};

int main() {
  setlocale(LC_ALL, "Portuguese");
  struct Pessoa pessoa;

  printf("Digite o nome do pessoa: ");
  fgets(pessoa.nome, 20, stdin);
  printf("Digite a idade do pessoa: ");
  scanf("%d", &pessoa.idade);
  printf("Digite a altura do pessoa: ");
  scanf("%f", &pessoa.altura);

  struct Pessoa *ptrP = &pessoa;

  printf("\n\nDados pessoais:\n");
  printf("Nome: %s", pessoa.nome);
  printf("Idade: %d\n", pessoa.idade);
  printf("Altura: %.3f\n", pessoa.altura);

  return 0;
}