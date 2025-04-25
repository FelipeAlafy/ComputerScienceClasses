#include <stdio.h>
#include <locale.h>
#include <string.h>

struct Endereco {
  char rua[50];
  int numero;
  char bairro[50];
  char cidade[50];
  int cep;
};

struct Pessoa {
  char nome[20];
  int idade;
  struct Endereco endereco;
};


int main() {
  setlocale(LC_ALL, "Portuguese");
  struct Pessoa pessoa1;

  strcpy(pessoa1.nome, "Felipe");
  pessoa1.idade = 18;
  pessoa1.endereco.cep = 18;
  pessoa1.endereco.numero = 90;
  strcpy(pessoa1.endereco.bairro, "Parque Real");
  strcpy(pessoa1.endereco.cidade, "Pouso Alegre");
  strcpy(pessoa1.endereco.rua, "Maria Augusta Fagundes");

  printf("Nome: %s\n", pessoa1.nome);
  printf("Idade: %d\n", pessoa1.idade);
  printf("Endereco: %s\n", pessoa1.endereco.bairro);
  printf("Cidade: %s\n", pessoa1.endereco.cidade);
  printf("Rua: %s\n", pessoa1.endereco.rua);
  printf("Numero: %d\n", pessoa1.endereco.numero);
}


