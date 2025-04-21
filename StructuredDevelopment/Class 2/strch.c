#include <stdio.h>
#include <strings.h>

int main() {
    char frase[50] = "A linguagem C é poderosa.";
    char *primeiroC = strchr(frase, 'C');

    if (primeiroC == NULL) {
        printf("C not founded.");
        return 0;
    }
    printf("O primeiro C da frase: %s\n foi encontrado na posição %d", frase, (int)(primeiroC-frase));
    return 0;
}