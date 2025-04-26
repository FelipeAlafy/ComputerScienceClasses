#include <stdio.h>
#include <locale.h>

int staticVariable();

int main() {
    setlocale(LC_ALL, "Portuguese");
    int valor = staticVariable();
    printf("%d\n", valor);
    return 0;
}

int staticVariable() {
    static int staticVariable = 0;
    return ++staticVariable;
}