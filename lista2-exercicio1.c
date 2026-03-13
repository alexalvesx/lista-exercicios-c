    #include <stdio.h>
    #include <locale.h>

    int main(){
    setlocale(LC_ALL, "Portuguese");

    float A, B;
    printf("Digite 2 valores \n");
    scanf("%f", &A);
    scanf("%f", &B);

    if(A > B){
    printf("Pessoa A tem altura maior que B");

    }else if(B > A){
    printf("Pessoa B tem altura maior de A");

    }else{
    printf("Alturas equivalentes");
    }

    return(0);
    }
