#include <stdio.h>

int main(){

    int contador = 0, num, soma = 0;

    while (contador != 10){

        printf("Digite o %d numero inteiro: ", (contador+1));
        scanf("%d", &num);

        soma += num;

        contador ++;
    }

    printf("A soma dos 10 numeros foi: %d", soma);
    
    return 0;
    }