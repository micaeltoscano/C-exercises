#include <stdio.h>

int main(){

    int num;

    printf("Digite o numero a ser testado: ");
    scanf("%d", &num);

    if(num % 3 == 0 && num % 5 == 0){
        printf("O número não é divisível nem por 3 nem por 5!");
    }

    else if (num % 5 == 0){
        printf("É divisivel por 5!");
    }

    else if (num % 3 == 0){
        printf("É divisivel por 3");
    }

    else{
        printf("O número não é divisível nem por 3 nem por 5!");
    }

    return 0;
}