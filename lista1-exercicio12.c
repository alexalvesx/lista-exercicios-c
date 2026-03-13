#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char  nome[51];
    float nota1, nota2, media;

    printf("Digite o nome do aluno: \n");
    scanf("%50[^\n]", &nome);
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) /2;

    if (media < 5 && media >= 0){
        printf("Nome do aluno: %s \n A média é: %.2f \n A situação é REPROVADO!", nome, media);
    } else if (media >= 5 && media <= 6.9) {
        printf("Nome do aluno: %s \n A média é: %.2f \n A situação é RECUPERAÇÃO!", nome, media);
    } else if (media >= 7 && media <= 10) {
        printf("Nome do aluno: %s \n A média é: %.2f \n A situação é APROVADO!", nome, media);
    } else {
        printf("NOTAS INVÁLIDAS! \n Valor das notas deve ser de 0 à 10");
    }
    return(0);

}