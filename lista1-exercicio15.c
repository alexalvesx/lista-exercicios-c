#include<stdio.h> 
#include<stdlib.h> 
int main(){ //Não faz parte da atividade, inclui 'int' para rodar sem problemas
int a,b,c,i; //int
printf("Digite um numero\n"); 
scanf("%d",&a); //d
b=a%2; 
if(b==0){ 
printf("O numero %d eh par\n",a);} //d, par
else if(b!=0){ //!
printf("O numero %d eh impar\n",a);} //d, impar
} 

//alternativa e) int; d; d; par; !; d; impar