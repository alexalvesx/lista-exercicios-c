#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade <= 12){
        printf("Você é uma criança");
    } else if (idade <= 19) {
        printf("Você é um adolescente");
    } else if (idade <= 60) {
        printf("Você é um adulto");
    } else if (idade > 60) {
        printf("Você é um idoso");
    }
    
    return(0);
}