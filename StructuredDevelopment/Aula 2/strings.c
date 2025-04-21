#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char str[100];

    printf("Digite uma string: ");
    scanf("%s", str);

    for (int i = 0; i < 100; i++) {
      str[i] = toupper(str[i]);
    }

    printf("Nova string: %s\n", str);
    return 0;
}