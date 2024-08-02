#include <stdio.h>

int main(){

    int num1, num2, num3, soma;

    printf("Digite 3 números que serão somados: ");
    scanf("%d %d %d", &num1,&num2,&num3);

    soma = num1 + num2 + num3;

    printf("O resultado da soma é: %d\n", soma);
}