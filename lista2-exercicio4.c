#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    int escolha, i = 1;

    do {
        
        printf("HUMBURGUERIA X RATÃO\n");
        printf("1 - X-Burger\n");
        printf("2 - X-Salada\n");
        printf("3 - X-Egg\n");
        printf("4 - X-Tudo\n");
        printf("5 - X-Ratão\n");
        printf("0 - Sair\n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
            printf("X-burger, valor R$ 15,90\n");
            break;
            
            case 2:
            printf("X-Salada, valor R$ 17,90\n");
            break;

            case 3:
            printf("X-Egg, valor R$ 19,90\n");
            break;

            case 4:
            printf("X-Tudo, valor R$ 25,50\n");
            break;

            case 5:
            printf("X-Ratão, valor R$ 29,99\n");
            break;

            case 0:
            i = 0;
            break;

            default:
            printf("Opção inválida!\n");
            break;

        }

        if (i != 0){
            printf("\nPressione ENTER para retornar ao menu");
            getchar();
            getchar();
            system("cls");
               
        }
        
    } while (i != 0);

    return (0);
}
