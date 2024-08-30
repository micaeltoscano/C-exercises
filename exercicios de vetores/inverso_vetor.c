#include <stdio.h>

void printar_vetor(int vetorb[]){
    int i;
    for(i=0;i<20;i++){
        printf(" %d ", vetorb[i]);
    }
}

void inverter(int vetora[], int vetorb[]){
    int n; 

    for(n=0; n<20; n++){
        vetorb[n] = vetora[20-n-1];
    }

    printar_vetor(vetorb);
}

int main(){
    int vetora[20] = {1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,100,1000}, vetorb[20];
    inverter(vetora, vetorb);

}