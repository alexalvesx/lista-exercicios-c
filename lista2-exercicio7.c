#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int n = 0;
    printf("Números impares e pares:\n");
    for (n = 0; n <= 200; n++){
        if (n % 2 == 0){
            printf("Número par: %d\n", n);
        } else {
            printf("Número impar: %d\n", n);
        }
    }
}