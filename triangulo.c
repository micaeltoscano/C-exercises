#include <stdio.h>

int main(){

    float a,b,c;

    printf("Digite os lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a < (b+c) && b < (a+c) && c < (b+c)){

        if((a == b) && (a == c)){
            printf("É um triangulo equilatero!");
        }

        else if((a == b) || (a == c) || (b == c)){
            printf("É um triangulo isosceles!");
        }

        else{
            printf("É um triangulo escaleno!");
        }
    }

    else{
        printf("Não é um triangulo!");
    }
}