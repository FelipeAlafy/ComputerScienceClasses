#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
  char nome[20];
  int idade;
} Pessoa;

int main() {
  setlocale(LC_ALL, "Portuguese");
  int numeroPessoas, totalPessoas = 0;
  printf("Digite a quantidade de pessoas: ");
  scanf("%d", &numeroPessoas);
  totalPessoas += numeroPessoas;
  getchar();

  Pessoa *pessoas = calloc(numeroPessoas, sizeof(Pessoa));

  if (pessoas == NULL) {
    printf("Erro ao alocar memoria, malloc");
    return 1;
  }

  for (int i = 0; i < numeroPessoas; i++) {
    printf("Digite o nome do pessoa: ");
    fgets(pessoas[i].nome, 20, stdin);
    printf("Digite a idade do pessoa: ");
    scanf("%d", &pessoas[i].idade);
    getchar();
  }

  printf("\n\nDeseja adicionar mais quantas pessoas: ");
  scanf("%d", &numeroPessoas);
  getchar();
  totalPessoas += numeroPessoas;
  pessoas = realloc(pessoas, sizeof(Pessoa) * numeroPessoas);

  if (pessoas == NULL) {
    printf("Erro ao alocar memoria, realloc");
    return 1;
  }
  for (int i = 0; i < numeroPessoas; i++) {
    printf("Digite o nome do pessoa: ");
    fgets(pessoas[i].nome, 20, stdin);
    printf("Digite a idade do pessoa: ");
    scanf("%d", &pessoas[i].idade);
  }

  int *ptrP = &pessoas[0];

  for (int i = 0; i < totalPessoas; i++) {
    printf("Nome: %s\n", pessoas[i].nome);
    printf("Idade: %d\n", pessoas[i].idade);
  }

  free(pessoas);
  return 0;
}