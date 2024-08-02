#include <stdio.h>

int main(){

    int num = 1, contador = 0;

    while(contador < 5){

        if( num % 3 == 0){
            printf(" %d ", num);
            contador++;
        }
        num++;   
    }

    return 0;

}