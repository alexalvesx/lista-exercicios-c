#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, resul, result2;
    int op;

    printf("Escolha uma operação matemática:\n");
    printf("1 - Soma\n");
    printf("2 - Elevar os dois números ao quadrado\n")
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Opção escolhida: ");
    scanf("%d", &op);

    switch (op){
        case 1:
        printf("Digite o primeiro número da soma: ");
        scanf("%f", &n1);
        printf("Digite o segundo número da soma: ");
        scanf("%f", &n2);
        result = n1 + n2;
        printf("Resultado da soma é: %.2f\n", result);
        break;

        case 2:
        printf("Digite o primeiro número para elevar ao quadrado: ");
        scanf("%f", &n1);
        printf("Digite o segundo número para elevar ao quadrado: ");
        scanf("%f", &n2);
        result = n1 * n1;
        result2 = n2 * n2;
        printf("Resultado da elevação ao quadrado do primeiro número é: %.2f\n", result);
        printf("Resultado da elevação ao quadrado do segundo número é: %.2f\n", result2);
        break;

        case 3:
        printf("Digite o primeiro número da multiplicação: ");
        scanf("%f", &n1);
        printf("Digite o segundo número da multiplicação: ");
        scanf("%f", &n2);
        result = n1 * n2;
        printf("Resultado da multiplicação é: %.2f\n", result);
        break;

        case 4:
        printf("Digite o número que será divido: ");
        scanf("%f", &n1);
        printf("Digite o número divisor: ");
        scanf("%f", &n2);
        if(n2 == 0){
            (printf)
        }
        result = n1 / n2;
        printf("Resultado da divisão é: %.2f\n", result);
        break;
        
        default:
        printf("Opção Inválida!\n");
        break;
    }
    


    
    return(0);
}