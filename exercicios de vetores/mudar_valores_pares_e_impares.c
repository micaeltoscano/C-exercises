#include <stdio.h>

void printar_vetor(int vetor[]){
    int i;
    for(i=0;i<10;i++){
        printf(" %d ", vetor[i]);
    }
}

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

void multiplicar_impares(int vetor[]){
    int i;
    for(i=0;i<10;i++){
        if(vetor[i] % 2 != 0){
            vetor[i]*=15;
        }
    }
    printar_vetor(vetor);
}

void alterando_pares_impares(int vetor[]){
    int i;
    for(i=0;i<10;i++){
        if(vetor[i] % 2 == 0){
            vetor[i] = 0;
        } else{
            vetor[i] = 1;
        }
    }
    printar_vetor(vetor);
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
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10}, soma = 0, maiores;
    float media = 0;

    //preencher_vetor(vetor);

    somatorio(vetor, &soma);

    media = (float)soma/10;

    maiores = valores_acima_media(vetor, &media);

    printf("O valor da media foi: %f\n", media );

    printf("Quantidade de valores acima da média: %d\n ", maiores);

    printf("Vetor multiplicando impares por 15: ");
    multiplicar_impares(vetor);
    printf("\n");
    
    printf("Alterando os valores pares e impares: ");
    alterando_pares_impares(vetor);

    return 0;
}