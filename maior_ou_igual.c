#include <stdio.h>

int main(){

    float n1, n2, maior;

    printf("Digite dois números: ");
    scanf("%f %f", &n1, &n2);

    if(n1 > n2){

        maior = n1;
    }
        
    else{

        maior = n2;
    }

    printf("O maior número digitado foi %f", maior);

    if(n1 == n2){
        
    printf("Os numeros digitados são iguais");
    }

}