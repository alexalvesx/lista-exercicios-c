#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    printf("Lista de sobremesas, escolha uma de acordo com o número \n");
    printf("1 - Sorvete \n");
    printf("2 - Açaí \n");
    printf("3 - Chocolate \n");
    printf("4 - Bolo \n");
    scanf("%d", &opcao);


    switch(opcao){
case 1:
    printf("Você escolheu sorvete");
    break;

case 2:
    printf("Você escolheu açaí");
    break;

case 3:
    printf("Você escolheu chocolate");
    break;

case 4:
    printf("Você escolheu bolo");
    break;
default:
    printf("Opção de escolha inválida, escolha um dos números");

    }



return(0);

}
