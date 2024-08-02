#include <stdio.h>

int main(){

    float num;

    printf("Digite um número real que será elevado ao quadrado: ");
    scanf("%f", &num);

    printf("%f ao quadrado é: %f", num, num*num);
}