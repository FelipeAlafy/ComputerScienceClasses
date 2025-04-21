#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    for (int i = 0; i <= 10; i++) {
        int quociente = i * num;
        printf("%d x %d = %d\n", i, num, quociente);
    }
    return 0;
}