#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int rodada = 1, escolha;
    char p1 = '1', p2 = '2', p3 = '3', p4 = '4', p5 = '5', p6 ='6', p7 = '7', p8 = '8', p9 = '9';
    printf("------- JOGO DA VELHA -------\n");
    printf("-------- Vamos jogar! -------\n");

    for (rodada == 1; rodada <= 9; rodada++) {

            printf("                  %c | %c | %c                         \n", p1, p2, p3);
            printf("                ----+---+----                        \n");
            printf("                  %c | %c | %c                         \n", p4, p5, p6);
            printf("                ----+---+----                        \n");
            printf("                  %c | %c | %c                         \n", p7, p8, p9);

        if  (rodada % 2 = 1){
            printf("Sua vez bola! escolha uma posição de acordo com o número:\n");
            scanf(" %c", escolha);

            switch (escolha) {
                case '1':
                if (p1 == '1') {
                    p1 = 'O';
                    
                }   else {
                    printf("CASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '2':
                if (p1 == '2') {
                    p1 = 'O';
                    
                }   else {
                    printf("CASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '3':
                if (p1 == '3') {
                    p1 = 'O';
                    
                }   else {
                    printf("CASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '4':
                if (p1 == '4') {
                    p1 = 'O';
                    
                }   else {
                    printf("CASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }

                case '4':
                if (p1 == '4') {
                    p1 = 'O';
                    
                }   else {
                    printf("CASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '5':
                if (p1 == '5') {
                    p1 = 'O';
                    
                }   else {
                    printf("CASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }

                case '6':
                if (p1 == '6') {
                    p1 = 'O';
                    
                }   else {
                    printf("CASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '7':
                if (p1 == '7') {
                    p1 = 'O';
                    
                }   else {
                    printf("CASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '8':
                if (p1 == '8') {
                    p1 = 'O';
                    
                }   else {
                    printf("CASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '9':
                if (p1 == '9') {
                    p1 = 'O';
                    
                }   else {
                    printf("CASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                if ((p1 == 'O' && p2 == 'O' && p3 == 'O') || 
                (p4 == 'O' && p5 == 'O' && p6 == 'O' || )
                (p7 == 'O' && p8 == 'O' && p9 == 'O' ||)

                (p1 == 'O' && p4 == 'O' && p7 == 'O') || 
                (p2 == 'O' && p5 == 'O' && p8 == 'O' || )
                (p3 == 'O' && p6 == 'O' && p9 == 'O' ||)
            
                (p1 == 'O' && p5 == 'O' && p9 == 'O') || 
                (p3 == 'O' && p5 == 'O' && p7 == 'O' || )
                );
                
            }
        } 
    }


    return(0);
    }
