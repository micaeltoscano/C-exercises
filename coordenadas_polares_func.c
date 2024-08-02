#include <stdio.h>
#include <math.h>

float conversoes(float x, float y){

    float soma, raio, div, angulo;

    soma = pow(x,2) + pow(y,2);
    raio = sqrt(soma);

    div = y/x;
    angulo = atan(div);

    printf("(%f, %f)", raio, angulo);
    return raio;
}

int main(){

    float x,y;

    printf("Digite o valor de x: \n");
    scanf("%f", &x);

    printf("Digite o valor de y: \n");
    scanf("%f", &y);

    conversoes(x,y);

}