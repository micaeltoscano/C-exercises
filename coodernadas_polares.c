#include <stdio.h>
#include <math.h>

int main(){

    float x,y, soma, raio, div, angulo;

    printf("Digite o valor de x: \n");
    scanf("%f", &x);

    printf("Digite o valor de y: \n");
    scanf("%f", &y);

    soma = pow(x,2) + pow(y,2);

    raio = sqrt(soma);

    div = (y/x);

    angulo = atan(div);

    printf("(%f, %f)", raio, angulo);

}