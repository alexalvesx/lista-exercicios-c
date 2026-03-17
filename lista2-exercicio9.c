#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int idade, maioridade = 0, i;
    printf("-----COMPARATIVO DE MAIOR IDADE-----\n");
    printf("-------------5 IDADES---------------\n");
    for (i = 1; i <= 5; i++){
        printf("Digite a idade: ");
        scanf("%d", &idade);
        if(idade > maioridade){
            maioridade = idade;
        } else {

        }
  
    }

    printf("\nA maior idade é: %d", maioridade);

    return(0);
}