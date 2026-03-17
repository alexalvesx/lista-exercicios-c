#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float num, soma;
    int i = 1;

    for (i = 1; i <= 3; i++){
        printf("Digite o número: \n");
        scanf("%f", &num);
        soma = soma + num;
    }
    printf("Total da soma é: %.2f", soma);
}