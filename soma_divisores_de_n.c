#include <stdio.h>

int main(){

    int n, contador = 0, num = 1, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while(contador < (n - 1)){

        if(n % num == 0){
            soma += num;
        }

        num++;
        contador++;
    }

    printf("A soma dos divisores de %d é %d", n, soma);
    return 0;
}