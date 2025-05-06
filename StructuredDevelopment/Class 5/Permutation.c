#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void exchange(char *a, char *b) {
  char temp = *a;
  *a = *b;
  *b = temp;
}

void permutate(char *string, int start, int end) {
  if (start == end) {
    printf("%s\n", string);
    return;
  }
  for (int i = start; i <= end; i++) {
    exchange(string + start, string + i);
    permutate(string, i + 1, end);
    exchange(string + start, string + i);
  }
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  char string[20];
  printf("Enter a string: ");
  fgets(string, 20, stdin);
  permutate(string, 0, strlen(string) - 1);
  return 0;
}