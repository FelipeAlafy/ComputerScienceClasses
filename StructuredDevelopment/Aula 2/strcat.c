#include <stdio.h>
#include <string.h>

int main() {
    char str1[40] = "Olá, Mundo!";
    const char str2[14] = "Felipe Alafy.";

    strcat(str1, " ");
    printf("%s\n", str1);
    strcat(str1, str2);
    printf("%s\n", str1);

    return 0;
}