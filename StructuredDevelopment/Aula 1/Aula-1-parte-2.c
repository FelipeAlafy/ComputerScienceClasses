#include <stdio.h>
#include <locale.h>

int ParImpar(int valor);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x = 1;
    int limite = 100;

    /*while (x <= limite)
    {
        if (x % 2 == 0) {
            printf("%d é par.\n", x);
        } else {
            printf("%d é impar.\n", x);
        }
        x++;
    }*/

    for (int x = 1; x <= 100; x++) {
        int res = ParImpar(x);
        printf("o valor %d é %d\n", x, res);
    }

    return 0;
}

int ParImpar(int valor) {
    if (valor % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}