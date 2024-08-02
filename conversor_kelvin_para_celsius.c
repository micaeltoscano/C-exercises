#include <stdio.h>

int main(){

    float k;
    printf("Digite uma temperatura em Kelvin para ser convertida em Celsius: ");
    scanf("%f", &k);

    printf("A temperatura convertida em Celsius é: %f", k-273.15);
}