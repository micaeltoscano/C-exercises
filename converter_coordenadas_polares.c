#include <stdio.h>
#include <math.h>

float converter(float x, float y){

    float raio, angulo, angulo_rad, x_convertido, y_convertido;

    raio = sqrt(pow(x,2) + pow(y,2));

    angulo = atan(y/x);

    angulo_rad = (angulo * 3.14) / 180;

    x_convertido = raio * cos(angulo_rad);
    y_convertido = raio * sin(angulo_rad);

    printf(" %f, %f", x_convertido, y_convertido);

    return 0;
}


int main(){

    float x,y;

    printf("Digite o valor de x: \n");
    scanf("%f", &x);

    printf("Digite o valor de y: \n");
    scanf("%f", &y);

    converter(x,y);
}