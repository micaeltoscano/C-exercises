#include <stdio.h>

int main(){
    int vetor[10], i, soma = 0;
    float media = 0;

    for(i=0; i<10; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<10; i++){
        soma += vetor[i];
    }

    media = (float)soma/10;

    printf("O valor da media foi: %f", media );

    return 0;
}