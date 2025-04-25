#include <stdio.h>
#include <locale.h>
#include <string.h>

struct Pessoa {
  char nome[20];
  int idade;
};

void bubbleSort(struct Pessoa *pessoas, int tam);

int main() {
  setlocale(LC_ALL, "Portuguese");
  struct Pessoa pessoas[3];
  for (int i = 0; i < 3; i++) {
    printf("Digite o nome do pessoa: ");
    scanf("%s", pessoas[i].nome);
    printf("Digite a idade do pessoa: ");
    scanf("%d", &pessoas[i].idade);
  }

  bubbleSort(pessoas, 3);

  for (int i = 0; i < 3; i++) {
    printf("Nome: %s\n", pessoas[i].nome);
    printf("Idade: %d\n", pessoas[i].idade);
  }

  return 0;
}

void bubbleSort(struct Pessoa *pessoas, int tam) {
  for (int i = 0; i < tam; i++) {
    for (int j = 0; j < tam - i - 1; j++) {
      if (pessoas[j].idade > pessoas[j + 1].idade) {
        struct Pessoa p = pessoas[j];
        pessoas[j] = pessoas[j + 1];
        pessoas[j + 1] = p;
      }
    }
  }
}