#include <stdio.h>

int main(){
    int vetor[10], i, soma = 0;

    for(i=0; i<10; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<=10; i++){
        soma += vetor[i];
    }

    printf("O valor da soma foi: %d", soma);

    return 0;
}