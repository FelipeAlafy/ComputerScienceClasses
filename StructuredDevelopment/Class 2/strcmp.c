#include <stdio.h>
#include <string.h>

int main(){
    int resultado = strcmp("hello", "HALLO");

    if(resultado == 0){
      printf("As strings tem o mesmo valor.");
    } else if (resultado < 0) {
        printf("A primeira string é menor que a segunda.");
    } else {
      printf("A primeira string é maior que a segunda.");
    }
    return 0;
}