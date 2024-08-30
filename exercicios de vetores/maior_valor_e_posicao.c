#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printar_vetor(int vetora[]){
    int i;
    for(i=0;i<20;i++){
        printf(" %d ", vetora[i]);
    }
}

void preencher_vetor(int vetora[]){
    int i; 
    for(i=0; i<20;i++){
        vetora[i] = rand() % 100;
    }
}

int encontrar_maior(int vetora[], int *maior){
    int i, pos = 0;
    *maior = vetora[0];

    for(i=1;i<20;i++){
        if(vetora[i] > *maior){
            *maior = vetora[i];
            pos = i;
        }
    }

    return pos;
}

int main(){
    srand(time(NULL));
    int vetora[20], maior, posicao;

    preencher_vetor(vetora);
    posicao = encontrar_maior(vetora, &maior);
    
    printf("O maior valor do vetor é: %d, na posição: %d", maior, posicao+1);

    return 0;

}