#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
 float c, f;

 printf("Digite a temperatura em graus celsius \n");
 scanf("%f", &c);

 f = (9* c + 160)/5;

 printf("A temperatura em graus fahrenheit é %.1f", f);

 return(0);

}
