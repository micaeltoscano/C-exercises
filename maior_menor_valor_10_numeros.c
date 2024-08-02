#include <stdio.h>

int main(){

    int maior = 0, num, contador = 0, menor = 9999;

    while(contador != 10){

        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num > maior){
            maior = num;
        }

        if(num < menor){
            menor = num;
        }

        contador ++;
    }

    printf("maior: %d, menor: %d", maior, menor);
}