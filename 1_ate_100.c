#include <stdio.h>

int main(){

    int num, contador_geral = 0;

    while (contador_geral < 3){
        num = 0;

        while(num < 100){
            printf(" %d ", num);
            num++;
        }

        contador_geral++;
    }

    return 0;
}