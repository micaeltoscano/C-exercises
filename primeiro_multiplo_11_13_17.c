#include <stdio.h>

int main(){

    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    while(1){

        if (n % 11 == 0 || n% 13 == 0 || n % 17 == 0){

            printf("O primeiro numero divisivel por 11, 13 ou 17 foi: %d", n);
            break;
        }

        n ++;
    }


}