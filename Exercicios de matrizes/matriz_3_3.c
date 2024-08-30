#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printar_matriz(int matriz[][3], int linha, int coluna){
    int i, j;

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
}  

void printar_vetor(int vetor[], int tamanho){
    int i;

    for(i=0; i<tamanho; i++){
        printf(" %d ", vetor[i]);
    }

}

void preencher_matriz(int matriz[][3], int linha, int coluna){
    int i, j;

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            matriz[i][j] = rand() % 100;
        }
    }
}   

void soma_diagonal(int matriz[][3], int linha, int coluna, int *soma, int vetord[]){
    int i, j;

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            if(i == j){
                *soma += matriz[i][j];
                vetord[i] = matriz[i][j]; 
            }
        }
    }
}

void diagonal_secundaria(int matriz[][3], int *soma_secundaria, int vetorm[]){
    int i;

    for(i=0;i<3;i++){
        *soma_secundaria += matriz[i][(2-i)];
        vetorm[i] = matriz[i][(2-i)];
    }
}

void matriz_transposta(int matriz[][3], int linha, int coluna, int matrizT[][3]){
    int i, j;

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            matrizT[i][j] = matriz[j][i];
        }
    }
}

int maior_linha(int matriz[][3], int linha, int coluna, int *soma_linha, int *linha_maior){
    int i, j, linha_maior_soma = 0;

    for(i=0;i<linha;i++){
        *soma_linha = 0;
        for(j=0;j<coluna;j++){
            *soma_linha += matriz[i][j];
        }

        if(*soma_linha > *linha_maior){
            *linha_maior = *soma_linha;
            linha_maior_soma = i;
        }

    }

    return linha_maior_soma;
}

int main(){
    srand(time(NULL));
    int matriz[3][3], soma = 0, soma_secundaria = 0, vetord[3], vetorm[3], matrizT[3][3], soma_linha = 0, linha_maior = 0, linha_maior_soma;

    preencher_matriz(matriz, 3, 3);

    printar_matriz(matriz, 3,3);

    soma_diagonal(matriz, 3, 3, &soma, vetord);

    printf("A soma da diagonal principal é: %d\n", soma);

    printf("Os numeros da diagonal principal são: ");
    printar_vetor(vetord, 3);

    printf("\n");

    diagonal_secundaria(matriz, &soma_secundaria, vetorm);

    printf("A soma da diagonal secundaria é: %d\n", soma_secundaria);

    printf("Os numeros da diagonal secundaria são: ");
    printar_vetor(vetorm, 3);

    printf("\n");

    matriz_transposta(matriz, 3,3, matrizT);
    printf("A matriz transposta é: \n ");
    printar_matriz(matrizT,3,3);

    linha_maior_soma = maior_linha(matriz,3,3,&soma_linha, &linha_maior);
    printf("A linha com maior somatorio é: %d, com %d de soma", linha_maior_soma+1, linha_maior);

    return 0;

}