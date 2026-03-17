//CALCULAR MÉDIA DE 3 NOTAS, ADICIONAR CONDIÇÕES DE ACRÉSCIMO OU NÃO DE 0,5 NA MÉDIA,
//AVALIAR SE ESTARÁ APROVADO (7,0 OU MAIS), RECUPERAÇÃO (5 E MENOR QUE 7), REPROVADO (MENOR QUE 5)
//PERGUNTAR SE ACRESCENTARÁ 0,5 E AVALIAR NOVAMENTE APÓS ACRÉSCIMO.


#include <stdio.h>
#include <locale.h>

int main (){
    float nota1, nota2, nota3, media;
    int acrescimo;
    printf("Digite as três notas: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7){
        printf("A média é %.2f \nAprovado!\n", media);

    } else if (media < 7 && media >= 5) {
        printf("Média de %.2f, situação é de recuperação, acrescentar 0,5 ponto de trabalho extra?\n", media);
        printf("1 - Sim\n2 - Não\nOpção escolhida: ");
        scanf("%d", &acrescimo);

        if (acrescimo == 1){
            media = media + 0.5;

            if (media >= 7){
                printf("A média é %.2f \nAprovado!", media);

            } else {
                printf("A média é %.2f \nRecuperação!", media);
            }
            
        } else {
            printf("A média é %.2f \nRecuperação!", media);
        }

    } else if (media < 5 && media >= 0) {
        printf("Média de %.2f, situação é de reprovação, acrescentar 0,5 ponto de trabalho extra?", media);
        printf("1 - Sim\n2 - Não\nOpção escolhida: ");
        scanf("%d", &acrescimo);

        if (acrescimo == 1){
            media = media + 0.5;

            if (media >= 5){
                printf("A média é %.2f \nRecuperação!", media);

            } else {
                printf("A média é %.2f \nReprovado!", media);
            }
            
        } else {
            printf("A média é %.2f \nReprovado!", media);
        }
    }

    return(0);
}