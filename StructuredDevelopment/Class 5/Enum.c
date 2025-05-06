#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

enum DaysOfWeek {
  Sunday,
  Monday,
  Tuesday,
  Wednesday,
  Thursday,
  Friday,
  Saturday,
  AnotherDay
};

int main() {
  setlocale(LC_ALL, "Portuguese");
  enum DaysOfWeek day = AnotherDay;

  switch(day) {
    case Sunday:
      printf("Hoje é domingo!");
      break;
    case Monday:
      printf("Hoje é segunda!");
      break;
    case Tuesday:
      printf("Hoje é terça!");
      break;
    case Wednesday:
      printf("Hoje é quarta!");
      break;
    case Thursday:
      printf("Hoje é quinta!");
      break;
    case Friday:
      printf("Hoje é sexta!");
      break;
    case Saturday:
      printf("Hoje é sábado!");
      break;
    default:
      printf("Hoje é OCTOFEIRA!");
      break;
  }

  return 0;
}