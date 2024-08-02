#include <stdio.h>

int main(){

    float num;

    printf("Digite um número para exibir sua quinta parte: ");
    scanf("%f", &num);

    printf("A quinta parte de %f é: %f", num, num/5);
}