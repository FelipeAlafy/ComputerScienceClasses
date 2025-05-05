#include <stdio.h>
#include <locale.h>

typedef struct {
  char name[50];
  int age;
} pessoa;

int main() {
  setlocale(LC_ALL, "Portuguese");

  pessoa p = {"Felipe Alafy", 19};

  pessoa *ptr = &p;

  printf("O nome é %s\n", ptr->name);
  printf("A idade é %d\n", ptr->age);

  return 0;
}