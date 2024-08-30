#include <stdio.h>

void preencher_vetor(int vetor[]){
    int i;
    for(i=0; i<10; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

void somatorio(int vetor[], int *soma){
    int i;
    for(i=0; i<10; i++){
        *soma += vetor[i];
    }
}

int valores_acima_media(int vetor[], float *media){
    int i, maiores = 0;
    for(i=0;i<10;i++){
        if(vetor[i] > *media){
            maiores++;
        }
    }

    return maiores;
}

int main(){
    int vetor[10], soma = 0, maiores;
    float media = 0;

    preencher_vetor(vetor);

    somatorio(vetor, &soma);

    media = (float)soma/10;

    maiores = valores_acima_media(vetor, &media);

    printf("O valor da media foi: %f\n", media );
    printf("Quantidade de valores acima da média: %d ", maiores);

    return 0;
}