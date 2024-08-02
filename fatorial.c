#include <stdio.h>

int main(){

    int n, contador = 1, contador2 = 1;
    float fat, e=0;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    while(contador < n){
        fat = 1;
        contador2 = contador; 

        while (contador2 != 0){
            fat *= contador2;
            contador2--;
        }
        
        e += (1/fat);
        contador ++;
    }

    printf("%f", e);
}