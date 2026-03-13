#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    if( n1 > n2) {
    printf("O primeiro número é maior!");
    } else if (n2 > n1) {
    printf("Segundo número é maior!");
    } else {
    printf("Os números são iguais!"); 
    }
    return(0);
}