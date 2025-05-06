#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct {
  char name[100];
  int age;
} People;

void printPeople(People *people) {
  printf("Name: %s\n", people->name);
  printf("Age: %d\n", people->age);
}

void changePeopleName(People *people, char *newName) {
  strcpy(people->name, newName);
}

void changePeopleAge(People *people, int newAge) {
  people->age = newAge;
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  People people = {.name= "Felipe Alafy Rodrigues Silva", .age= 19};
  printPeople(&people);
  changePeopleName(&people, "Denis Alexandre Queiroz Santana");
  changePeopleAge(&people, 20);
  printPeople(&people);

  return 0;
}
