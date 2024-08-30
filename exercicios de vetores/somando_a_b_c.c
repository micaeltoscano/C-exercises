#include <stdio.h>

void printar_vetor(int vetorc[]){
    int i;
    for(i=0;i<10;i++){
        printf(" %d ", vetorc[i]);
    }
}

void soma(int vetora[], int vetorb[], int vetorc[]){
    int i;

    for(i=0; i<10;i++){
        vetorc[i] = vetora[i] + vetorb[i];
    }

    printar_vetor(vetorc);
}

int main(){
    int vetora[10] = {1,2,3,4,5,6,7,8,9,10}, vetorb[10] = {1,2,3,4,5,6,7,8,9,10}, vetorc[10];

    printf("O vetor c: ");
    soma(vetora, vetorb, vetorc);
}