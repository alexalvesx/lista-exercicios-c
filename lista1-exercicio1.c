#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

    int idade1, idade2;
    printf("Digite a idade da primeira pessoa \n");
    scanf("%d", &idade1);
    printf("Digite a idade da segunda pessoa \n");
    scanf("%d", &idade2);

    if(idade1 > idade2){
    printf("Pessoa A tem idade maior que pessoa B");

    }else if(idade2 > idade1){
    printf("Pessoa B tem idade maior de pessoa A");

    }else{
    printf("Idades equivalentes");
    }

    return(0);
    }


