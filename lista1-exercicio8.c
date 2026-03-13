#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

float n1, n2, n3;
printf("Digite o primeiro número \n");
scanf("%f", &n1);
printf("Digite o segundo número \n");
scanf("%f", &n2);
printf("Digite o terceiro número \n");
scanf("%f", &n3);

       if(n1 <= n2 && n1 <= n3 && n2 <= n3){
printf("Sequência de números crescentes: \n %.2f \n %.2f \n %.2f", n1, n2, n3);
} else if(n1 <= n2 && n1 <= n3 && n3 <= n2) {
printf("Sequência de números crescentes: \n %.2f \n %.2f \n %.2f", n1, n3, n2);
} else if(n2 <= n1 && n2 <= n3 && n1 <= n3) {
printf("Sequência de números crescentes: \n %.2f \n %.2f \n %.2f", n2, n1, n3);
}else if(n2 <= n1 && n2 <= n3 && n3 <= n1){
printf("Sequência de números crescentes: \n %.2f \n %.2f \n %.2f", n2, n3, n1);
} else if(n3 <= n1 && n3 <= n2 && n1 <= n2) {
printf("Sequência de números crescentes: \n %.2f \n %.2f \n %.2f", n3, n1, n2);
} else if(n3 <= n1 && n3 <= n2 && n2 <= n1) {
printf("Sequência de números crescentes: \n %.2f \n %.2f \n %.2f", n3, n2, n1);
}

return(0);
}