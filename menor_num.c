#include <stdio.h>

int main(){

    float n1, n2, menor;

    printf("Digite o primeiro e o segundo número: ");
    scanf("%f %f", &n1, &n2);

    if (n1 > n2){

        menor = n2;
    }

    else{

        menor = n1;
    }

    printf("O menor valor foi: %f", menor);

}

    