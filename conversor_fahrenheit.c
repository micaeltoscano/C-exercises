#include <stdio.h>

int main(){

    float faren, cel;

    printf("Digite uma temperatura em graus: ");
    scanf("%f", &cel);

    faren = cel*(9.0/5.0)+32.0;

    printf("A temperatura em fahrenheit é: %f", faren);
}