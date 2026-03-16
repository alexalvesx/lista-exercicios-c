#include <stdio.h>
#include <locale.h> // Evitar bugs com acento
#include <math.h> // Obrigatório para fmod (Resto de divisão pro zero decimal)

int main(){
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, result, resultquad1, resultquad2;
    int op, op2;
    int repetir = 1;

    for (;repetir == 1;){
        printf("Escolha uma operação matemática básica:\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Sair\n");
        printf("Opção escolhida: ");
        scanf("%d", &op);

        switch (op){

            case 1:
            printf("Escolha adição ou incremento:\n");
            printf("1 - Adição\n");
            printf("2 - Incremento\n");
            printf("Opção escolhida: ");
            scanf("%d", &op2);

            switch (op2){
                case 1:
                printf("Digite o primeiro número: ");
                scanf("%f", &n1);
                printf("Digite o segundo número: ");
                scanf("%f", &n2);
                result = n1 + n2;
                printf("O resultado é: %.2f", result);
                repetir = 0;
                break;

                case 2:
                printf("Digite o número a ser incrementado: ");
                scanf("%f", &n1);
                n1++;
                printf("O resultado é: %.2f", n1);
                repetir = 0;
                break;

                default:
                printf("Opção Inválida!\n\n");

            }

            break;

            case 2:
            printf("Escolha subtração ou decremento:\n");
            printf("1 - Subtração\n");
            printf("2 - Decremento\n");
            printf("Opção escolhida: ");
            scanf("%d", &op2);

            switch (op2){
                case 1:
                printf("Digite o primeiro número: ");
                scanf("%f", &n1);
                printf("Digite o segundo número: ");
                scanf("%f", &n2);
                result = n1 - n2;
                printf("O resultado é: %.2f", result);
                repetir = 0;
                break;

                case 2:
                printf("Digite o número a ser decrementado: ");
                scanf("%f", &n1);
                n1--;
                printf("O resultado é: %.2f", n1);
                repetir = 0;
                break;

                default:
                printf("Opção Inválida!\n\n");

            }

            break;

            case 3:
            printf("Escolha multiplicação ou soma dos quadrados dos números:\n");
            printf("1 - Multiplicação\n");
            printf("2 - Soma dos quadrados dos números\n");
            printf("Opção escolhida: ");
            scanf("%d", &op2);

            switch (op2){
                case 1:
                printf("Digite o primeiro número: ");
                scanf("%f", &n1);
                printf("Digite o segundo número: ");
                scanf("%f", &n2);
                result = n1 * n2;
                printf("O resultado é: %.2f", result);
                repetir = 0;
                break;

                case 2:
                printf("Digite o primeiro número: ");
                scanf("%f", &n1);
                printf("Digite o segundo número: ");
                scanf("%f", &n2);
                resultquad1 = n1 * n1;
                resultquad2 = n2 * n2;
                result = resultquad1 + resultquad2;
                printf("O resultado é: %.2f", result);
                repetir = 0;
                break;

                default:
                printf("Opção Inválida!\n\n");

            }

            break;

            case 4:
            printf("Escolha divisão ou módulo (resto da divisão):\n");
            printf("1 - Divisão\n");
            printf("2 - Módulo (resto da divisão)\n");
            printf("Opção escolhida: ");
            scanf("%d", &op2);

            switch (op2){
                case 1:
                printf("Digite o dividendo: ");
                scanf("%f", &n1);
                printf("Digite o divisor: ");
                scanf("%f", &n2);

                //conferindo a divisão por zero           
                if (n2 == 0) {
                    printf("Erro matemático: Divisão por zero!\n");
                    } else {
                    result = n1 / n2;
                    printf("O resultado é: %.2f", result);
                    repetir = 0;
                    break;
                    }
                
                case 2:
                printf("Digite o dividendo: ");
                scanf("%f", &n1);
                printf("Digite o divisor: ");
                scanf("%f", &n2);

                //conferindo a divisão por zero           
                if (n2 == 0) {
                    printf("Erro matemático: Divisão por zero!\n");
                    } else {
                    result = fmod(n1 , n2);
                    printf("O resultado é: %.2f", result);
                    repetir = 0;
                    break;
                    }

                default:
                printf("Opção Inválida!\n\n");

            }

            break;

            case 5:
            repetir = 0;
            break;

            default:
            printf("Opção Inválida!\n\n");
            break;

        }
    }

    return(0);

}