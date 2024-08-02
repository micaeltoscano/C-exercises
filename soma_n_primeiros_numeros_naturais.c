#include <stdio.h>

int main(){

    int contador = 0, num = 0, soma = 0, n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while (contador < (n+1)){

        soma += num;
        contador ++;
        num++;
    }

    printf("A soma é de %d", soma);

    return 0;
}