#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int i = 0;
    
    printf("----NÚMEROS DE 0 A 100!----\n");
    for (i = 0; i <= 100 ; i += 5) {
        printf(" - %d", i);
        
    }
    return(0);
}