#include <stdio.h>
#define pi 3.14159

int main(){

    float g;
    printf("Digite um ângulo em graus para ser convertido em radiano: ");
    scanf("%f", &g);

    printf("O ângulo em radianos é de: %f", g*(pi/180));
}