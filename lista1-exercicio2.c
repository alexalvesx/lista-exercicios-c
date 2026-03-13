#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

float n1, n2, soma, sub, mult, div;
    printf("Digite o primeiro número \n");
    scanf("%f", &n1);
    printf("Digite o segundo número \n");
    scanf("%f", &n2);

soma = n1 + n2;
printf("O resultado da soma é: %.2f", soma);
printf("\n");

sub = n1 - n2;
printf("O resultado da subtração é: %.2f", sub);
printf("\n");

mult = n1 * n2;
printf("O resultado da multiplicação é %.2f", mult);
printf("\n");

if(div =! 0){
div = n1 / n2;
printf("O resultado da divisão é: %.2f", div);
printf("\n");

}else{
printf("Não é possível dividor por 0");
printf("\n");
}
return(0);

}
