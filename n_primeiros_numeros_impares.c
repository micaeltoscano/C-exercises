#include <stdio.h>

int main(){

    int n, contador = 0, num = 0;

    printf("Digite a quantidade de numeros naturais impares que serao mostrados: ");
    scanf("%d", &n);

    while(contador < n){

        if(num % 2 != 0){
            printf(" %d ", num);

            contador++;
        }

        num++;
    }
}