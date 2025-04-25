#include <stdio.h>
#include <locale.h>

struct Pessoa {
  char nome[20];
  int idade;
};

int main() {
  setlocale(LC_ALL, "Portuguese");
  struct Pessoa pessoas[3];

  for (int i = 0; i < 3; i++) {
    printf("Digite o nome: ");
    scanf("%s", pessoas[i].nome);

    printf("Digite a idade: ");
    scanf("%d", &pessoas[i].idade);
  }

  for (int i = 0; i < 3; i++) {
    printf("Nome: %s\n", pessoas[i].nome);
    printf("Idade: %d\n", pessoas[i].idade);
  }
}