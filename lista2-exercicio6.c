#include <stdio.h>
#include <locale.h> // Evitar bugs com acento


int main(){
    setlocale(LC_ALL, "Portuguese");

    char vogal;

    printf("Escolha uma vogal: \n");
    printf("A \n");
    printf("E \n");
    printf("I \n");
    printf("O \n");
    printf("U \n");
    printf("Vogal escolhida: ")
    scanf("%c", &vogal);

    switch (vogal) {
        case 'a':
        case 'A':
        printf("Arara");
        break;

        case 'e':
        case 'E':
        printf("Elefante");
        break;

        case 'I':
        case 'i':
        printf("Iguana");

        case 'O':
        case 'o':
        printf("Ouriço");
        break;

        case 'U':
        case 'u':
        printf("Urubu");
        break;

        default:
        printf("Opção inválida!");
        break;
    }

    return(0);

}