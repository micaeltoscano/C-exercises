#include <stdio.h>
#include <math.h>

int main(){

    float num;
    printf("Digite um valor que, caso positivo, terá sua raiz calculada: ");
    scanf("%f", &num);

    if(num>0){

        printf("O valor da raiz quadrada do número é: %f", sqrt(num));
    }

    else{

        printf("Não foi possível calcular a raiz quadrada.");
    }
}