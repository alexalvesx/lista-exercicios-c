#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

float n1, n2, media;
printf("Digite a primeira nota \n");
scanf("%f", &n1);

printf("Digite a segunda nota \n");
scanf("%f", &n2);

media = (n1 + n2)/2;

if(media < 5){
    printf("Reprovado");

}else if(media >= 5.1 && media <= 6.9){
    printf("Recuperação");

}else if(media >= 7 && media <= 10){
printf("Aprovado");

}else{
    printf("Nota inválida");
}
return(0);

}
