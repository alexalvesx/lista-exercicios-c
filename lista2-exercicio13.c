#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float num, soma;
    int i = 1;
    printf("----- SOMA DE 10 NUMEROS -----\n");
    for (i = 1; i <= 10; i++){
        printf("Digite o número: ");
        scanf("%f", &num);
        soma = soma + num;
    }
    printf("Total da soma é: %.2f", soma);

    return(0);
}