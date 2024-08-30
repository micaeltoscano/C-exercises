#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printar_matriz(int matriz[][5], int linha, int coluna){
    int i, j;

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
}   

void preencher_matriz(int matriz[][5], int linha, int coluna){
    int i, j;

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            matriz[i][j] = rand() % 100;
        }
    }
}   

int maior_elemento(int matriz[][5], int linha, int coluna, int *linha_maior, int *coluna_maior){
    int i, j, maior = matriz[0][0];

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                *linha_maior = i;
                *coluna_maior = j;
            }
        }
    }

    return maior;
}   

int main(){
    srand(time(NULL));
    int matriz[4][5], linha_maior = 0, coluna_maior = 0, valor_maior = 0;

    preencher_matriz(matriz, 4, 5);

    valor_maior = maior_elemento(matriz, 4,5, &linha_maior, &coluna_maior);

    printar_matriz(matriz, 4,5);

    printf("O maior valor é: %d, localizado na linha: %d e na coluna: %d", valor_maior, linha_maior+1, coluna_maior+1);

    return 0;

}