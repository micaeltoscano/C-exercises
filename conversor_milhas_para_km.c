#include <stdio.h>

int main(){

    float m;
    printf("Digite o valor da velocidade em milhas: ");
    scanf("%f", &m);

    printf("A velocidade convertida em KM é: %f", 1.61*m);
}