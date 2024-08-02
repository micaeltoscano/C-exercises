#include <stdio.h>

int main(){

    int soma = 0, num, contador = 0;

    while(contador != 10){

        printf("Digite um inteiro: ");
        scanf("%d", &num);

        if( num >= 0){
            soma += num;
            contador ++;
        }
        
    }

    printf("A media dos 10 valores positivos foi: %d", (soma/10));

    return 0;
}