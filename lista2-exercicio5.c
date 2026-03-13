#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, result, result2;
    int op, op2;
    int repetir = 1;
    for (;repetir == 1;){
    printf("Escolha uma operação matemática básica:\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
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
        printf("Digite o segundo número: ";)
        scanf("%f", &n2);
        result = n1 + n2;
        printf("O resultado é: %f", result);
        break;

        case 2:
        printf("Digite o número a ser incrementado: ");
        scanf("%f", &n1);
        n1++;
        printf("O resultado é: %f", result);
        break;

        default:
        printf("Opção Inválida");

       }

       default:
       printf("Opção Inválida");
       break;

    }
}

    return(0);

}