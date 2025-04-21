#include <stdio.h>
#include <locale.h>

int valorGlobal = 0;
int valorGlobal2 = 1;

void modifica();
void imprime();

int main() {
    setlocale(LC_ALL, "Portuguese");
    imprime();
    modifica();
    imprime();
    return 0;
}

void imprime() {
    printf("Valor global: %d\n", valorGlobal);
    printf("Valor global2: %d\n", valorGlobal2);
}

void modifica() {
    valorGlobal = ++valorGlobal2;
    valorGlobal2 = ++valorGlobal;
}
