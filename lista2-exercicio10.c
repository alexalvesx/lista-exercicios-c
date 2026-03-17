#include <stdio.h>
#include <locale.h>

int main (){
    int numero, tabuada, mult, i = 1;
    printf("-----TABUADA------\n");
    printf("Tabuada do : ");
    scanf("%d", &numero);
    printf("\nSerá multiplicado até que número?\n");
    scanf("%d", &mult);

    printf("\nTabuada do: %d\n", numero);
    for (i = 1; i <= mult; i++) {
        tabuada = numero * i;
        printf("%d X %d = %d\n", numero, i, tabuada);
        
    }
}