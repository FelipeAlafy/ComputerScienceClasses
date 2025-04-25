#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Pessoa {
  char nome[20];
  int idade;
};

int main() {
  setlocale(LC_ALL, "Portuguese");
  struct Pessoa pessoas[5];

  for (int i = 0; i < 5; i++) {
    printf("Digite o nome para a pessoa %d:\n>> ", i + 1);
    scanf("%s", pessoas[i].nome);

    printf("Digite a idade para a pessoa %d:\n>> ", i + 1);
    scanf("%d", &pessoas[i].idade);
  }

  char nome[20];
  int pos = 0;
  printf("Digite o nome que deseja buscar:\n>> ");
  scanf("%s", nome);


  for (int i = 0; i < 5; i++) {
    if (strcmp(pessoas[i].nome, nome) == 0) {
      pos = i;
      break;
    }
  }

  if (pos == 0) {
    printf("Nome não encontrado.");
    return 0;
  }
  printf("Posicao: %d\n", pos);
  printf("Nome: %s\n", pessoas[pos].nome);
  printf("Idade: %d\n", pessoas[pos].idade);
  return 0;
}