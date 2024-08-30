#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printar_vetor(int vetorb[]){
    int i;
    for(i=0;i<16;i++){
        printf(" %d ", vetorb[i]);
    }
}

void preencher_vetor(int vetora[]){
    int i;

    for(i=0; i<16;i++){
        vetora[i] = rand() % 100;
    }

    printar_vetor(vetora);
}

void trocar_valor(int vetora[], int vetorb[]){
    int i;

    for(i=0;i<8;i++){
        vetorb[i] = vetora[i+8];
    }

    for(i=8;i<16;i++){
        vetorb[i] = vetora[i-8];
    }
}

int main(){
    srand(time(NULL));
    int vetora[16], vetorb[16];

    printf("Vetor A: \n");
    preencher_vetor(vetora);
    
    trocar_valor(vetora, vetorb);

    printf("Vetor após troca: \n");
    printar_vetor(vetorb);

    return 0;
}