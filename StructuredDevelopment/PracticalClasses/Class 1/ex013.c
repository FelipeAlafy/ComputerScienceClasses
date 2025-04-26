#include <stdio.h>
#include <locale.h>

static int staticVariable = 1;
int variable = 1;

static void staticDeclaration();
void nonStaticDeclaration();

int main() {
    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i < 100; i++) {
        nonStaticDeclaration();
        staticDeclaration();
    }
    printf("Final: static %d\tand non Static %d\n", staticVariable, variable);
    return 0;
}

static void staticDeclaration() {
    staticVariable++;
    printf("Valor da variável estática: %d\n", staticVariable);
}

void nonStaticDeclaration() {
    variable++;
    printf("Valor da variável não estática: %d\n", variable);
}