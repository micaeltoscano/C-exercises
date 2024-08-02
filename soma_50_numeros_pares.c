#include <stdio.h>

int main(){

    int contador = 0, num = 0, soma = 0;

    while(contador < 51){

        if (num % 2 == 0){

            soma += num;
            contador++;
        }

        num++;
    }

    printf("O valor da soma dos primeiros 50 pares é: %d", soma);

    return 0;
}