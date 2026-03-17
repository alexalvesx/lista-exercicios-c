#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int i = 100;
    
    printf("------------------- NÚMEROS DE 100 A 0! ----------------\n\n");
    for (i = 100; i >= 0 ; i--) {
        printf(" - %d ", i);
        
    }

    return(0);
}