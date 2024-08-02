#include <stdio.h>

int main(){

    float p;
    printf("Digite o valor em polegadas para ser convertido em cm: ");
    scanf("%f", &p);

    printf("O valor convertido em cm é de %f",  p*2.54);
}