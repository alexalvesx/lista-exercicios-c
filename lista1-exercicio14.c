#include <stdio.h> 
#include <stdlib.h> 
int main() //faltou 'int' para rodar o programa principal
{ 
int idade; 
printf ("Digite a sua idade\n"); 
scanf("%d", &idade); //variável recebendo está float '%f', alterei para int '%d'
if(idade <= 12){ 
printf("Voce tem %d e eh uma criança\n", idade);} //variável recebendo está float '%f', alterei para int '%d'. Além disso tem uma " incorreta após variável idade, deve fechar após \n
else if(idade <= 19){ //após primeiro 'if' deve ser 'else if', não 'if' novamente, removi ; após 19)
printf("Voce tem %d e eh um adolescente\n", idade);} //variável recebendo está float '%f', alterei para int '%d'
else if(idade <= 60){ //após primeiro 'if' deve ser 'else if', não 'if' novamente, removi ; após 19)
printf("Voce tem %d e eh um adulto\n", idade);} //variável recebendo está float '%f', alterei para int '%d'
else{ 
printf("Voce tem %d e eh um idoso\n", idade); //variável recebendo está float '%f', alterei para int '%d'. Além disso tem uma " incorreta após variável idade, deve fechar após \n
}

} //faltou chave fechando 'main'