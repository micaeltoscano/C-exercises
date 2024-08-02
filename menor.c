#include <stdio.h>

int main(){

    int num, primeiro = 1, menor, maior = 0, loop = 1;

    while(loop){

        printf("Digite um numero (negativo para parar): ");
        scanf("%d", &num);

        if(num < 0){
            loop = 0;
        }

        else if(primeiro){
            menor = num;
            primeiro = 0;
            }

        else if(menor > num){
            menor = num;
            }

        else if(num > maior){
            maior = num;
            }

    }
    printf("O menor valor digitado foi: %d e o maior foi: %d", menor, maior);
}