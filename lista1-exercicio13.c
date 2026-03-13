#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int diariatotal, escolha;

    printf(" Escolha entre as opções abaixo: \n");
    printf(" 1 - 3 dias, diária de R$ 80 reais\n");
    printf(" 2 - 5 dias, diará de R$ 100 reais\n");
    printf(" 3 - 10 dias,diária de R$ 150 reais\n");
    scanf(" %d", &escolha);

    switch (escolha){
        case 1:
        diariatotal = 3 * 80;
        printf(" Valor para ficar 3 dias: R$ %d reais",diariatotal);
        break;

        case 2:
        diariatotal = 5 * 100;
        printf(" Valor para ficar 5 dias: R$ %d reais",diariatotal);
        break;

        case 3:
        diariatotal = 10 * 150;
        printf(" Valor para ficar 10 dias: R$ %d reais",diariatotal);
        break;

        default:
        printf(" Opção inválida!\n Escolha 1, 2 ou 3");

    }
    return(0);

}