#include <stdio.h>

int main(){

    float k;

    printf("Digite uma velocidade em Km para ser convertida em MS: ");
    scanf("%f", &k);

    printf("A velocidade convertida em MS é: %f", k/3.6);
}