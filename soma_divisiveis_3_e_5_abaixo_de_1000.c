#include <stdio.h>

int main(){

    int contador = 0, num = 0, soma = 0;

    while (contador < 1000){

        if (num % 3 == 0 && num % 5 == 0){

            soma += num;
        }
        num ++;
        contador ++;
    }

    printf("A soma dos divisores de 3 e 5 abaixo de 1000 é: %d", soma);
}