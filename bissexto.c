#include <stdio.h>

int main(){

    int ano;

    printf("Digite um ano a ser verificado: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        
            printf("%d é um ano bissexto", ano);
    }

    else{
        printf("Não é bissexto!");
    }

    return 0;
}