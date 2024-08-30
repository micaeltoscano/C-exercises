#include <stdio.h>

void printar_vetor(int vetorc[]){
    int i;
    for(i=0;i<20;i++){
        printf(" %d ", vetorc[i]);
    }
}

void intercalar(int vetora[], int vetorb[], int vetorc[]){
    int i;

    for(i=0; i<20;i++){
        vetorc[2*i] = vetora[i];
        vetorc[((2*i)+1)] = vetorb[i];
    }

    printar_vetor(vetorc);
}

int main(){
    int vetora[10] = {1,2,3,4,5,6,7,8,9,10}, vetorb[10] = {1,2,3,4,5,6,7,8,9,10}, vetorc[20];

    intercalar(vetora, vetorb, vetorc);
    
}