#include <stdio.h>

int main(){

    int num;

    printf("Digite um número para verificar se é impar ou par: ");
    scanf("%d", &num);

    if(num % 2 == 0){

        printf("O número %d é par", num);
    }

    else{

        printf("O número %d é impar", num);
    }
}