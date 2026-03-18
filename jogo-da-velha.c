#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int rodada, venceu = 0;
    char p1 = '1', p2 = '2', p3 = '3', p4 = '4', p5 = '5', p6 ='6', p7 = '7', p8 = '8', p9 = '9', escolha;
    printf("--------------- JOGO DA VELHA ---------------\n");
    printf("---------------- Vamos jogar! ---------------\n\n");

    for (rodada = 1; rodada <= 9; rodada++) {

            printf("                  %c | %c | %c                         \n", p1, p2, p3);
            printf("                ----+---+----                        \n");
            printf("                  %c | %c | %c                         \n", p4, p5, p6);
            printf("                ----+---+----                        \n");
            printf("                  %c | %c | %c                         \n\n", p7, p8, p9);

        if  (rodada % 2 == 1){
            printf("Sua vez bola! escolha uma posição de acordo com o número:");
            scanf(" %c", &escolha);

            switch (escolha) {
                case '1':
                if (p1 == '1') {
                    p1 = 'O';
                    
                }   else {
                    printf("\nCASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '2':
                if (p2 == '2') {
                    p2 = 'O';
                    
                }   else {
                    printf("\nCASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '3':
                if (p3 == '3') {
                    p3 = 'O';
                    
                }   else {
                    printf("\nCASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '4':
                if (p4 == '4') {
                    p4 = 'O';
                    
                }   else {
                    printf("\nCASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '5':
                if (p5 == '5') {
                    p5 = 'O';
                    
                }   else {
                    printf("\nCASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '6':
                if (p6 == '6') {
                    p6 = 'O';
                    
                }   else {
                    printf("\nCASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '7':
                if (p7 == '7') {
                    p7 = 'O';
                    
                }   else {
                    printf("\nCASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '8':
                if (p8 == '8') {
                    p8 = 'O';
                    
                }   else {
                    printf("\nCASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '9':
                if (p9 == '9') {
                    p9 = 'O';
                    
                }   else {
                    printf("\nCASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;  
                
            }

            if ((p1 == 'O' && p2 == 'O' && p3 == 'O') || 
            (p4 == 'O' && p5 == 'O' && p6 == 'O') || 
            (p7 == 'O' && p8 == 'O' && p9 == 'O') ||

            (p1 == 'O' && p4 == 'O' && p7 == 'O') || 
            (p2 == 'O' && p5 == 'O' && p8 == 'O') || 
            (p3 == 'O' && p6 == 'O' && p9 == 'O') ||
            
            (p1 == 'O' && p5 == 'O' && p9 == 'O') || 
            (p3 == 'O' && p5 == 'O' && p7 == 'O')
            ){
                venceu = 1;
                rodada = 10;

            }   else {
                    
            }

        } else {
            printf("\nSua vez X! escolha uma posição de acordo com o número:");
            scanf(" %c", &escolha);

            switch (escolha) {
                case '1':
                if (p1 == '1') {
                    p1 = 'X';
                    
                }   else {
                    printf("\nCASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '2':
                if (p2 == '2') {
                    p2 = 'X';
                    
                }   else {
                    printf("CASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '3':
                if (p3 == '3') {
                    p3 = 'X';
                    
                }   else {
                    printf("CASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '4':
                if (p4 == '4') {
                    p4 = 'X';
                    
                }   else {
                    printf("CASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '5':
                if (p5 == '5') {
                    p5 = 'X';
                    
                }   else {
                    printf("CASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '6':
                if (p6 == '6') {
                    p6 = 'X';
                    
                }   else {
                    printf("CASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '7':
                if (p7 == '7') {
                    p7 = 'X';
                    
                }   else {
                    printf("CASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '8':
                if (p8 == '8') {
                    p8 = 'X';
                    
                }   else {
                    printf("CASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;

                case '9':
                if (p9 == '9') {
                    p9 = 'X';
                    
                }   else {
                    printf("CASA JÁ PREENCHIDA! Escolha outra posição\n");
                    rodada--;
                }
                break;
                
            }

            if ((p1 == 'X' && p2 == 'X' && p3 == 'X') || 
                (p4 == 'X' && p5 == 'X' && p6 == 'X') || 
                (p7 == 'X' && p8 == 'X' && p9 == 'X') ||

                (p1 == 'X' && p4 == 'X' && p7 == 'X') || 
                (p2 == 'X' && p5 == 'X' && p8 == 'X') || 
                (p3 == 'X' && p6 == 'X' && p9 == 'X') ||
            
                (p1 == 'X' && p5 == 'X' && p9 == 'X') || 
                (p3 == 'X' && p5 == 'X' && p7 == 'X')
                ){
                    venceu = 2;
                    rodada = 10;

                }  else {
                    
                }  

        } 
    }
            if (venceu == 1){
                printf("--------------- BOLA VENCEU!!! ---------------\n");
            }   else if (venceu == 2) {
                printf("---------------X VENCEU!!! ---------------\n");
            }   else {
                printf("--------------- DEU VELHA :D ---------------\n");
            }

            printf("                  %c | %c | %c                         \n", p1, p2, p3);
            printf("                ----+---+----                        \n");
            printf("                  %c | %c | %c                         \n", p4, p5, p6);
            printf("                ----+---+----                        \n");
            printf("                  %c | %c | %c                         \n\n", p7, p8, p9);

    return(0);
    }
