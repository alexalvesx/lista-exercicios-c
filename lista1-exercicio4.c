#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

float comprimento, largura, altura, cubo;

printf("Digite o comprimento do cubo \n");
scanf("%f", &comprimento);

printf("Digite a largura do cubo \n");
scanf("%f", &largura);

printf("Digite a altura do cubo \n");
scanf("%f", &altura);

cubo = comprimento * largura * altura;

printf("O volume do cubo é de %.2f", cubo);


}
