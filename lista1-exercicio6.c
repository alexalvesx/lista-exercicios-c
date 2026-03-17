#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

int i;

printf("N�meros pares de 1 a 30 \n");

for(i = 1; i <= 30; i++){
if(i % 2 != 0){
    printf("Número impar: %d \n",i );
}
else{

}
}
return(0);
}