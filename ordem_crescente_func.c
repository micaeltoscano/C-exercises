#include <stdio.h>

float verificacao(int a, int b, int c){
    int maior, meio, menor;

    if (a > b && a > c){

        maior = a;
        if(b > c){
            meio = b;
            menor = c;
        }

        else{
            meio = c;
            menor = b;
        }
    }

    else if (b > a && b > c){
        maior = b;

        if (a > c){
            meio = a;
            menor = b;
        }

        else{
            meio = b;
            menor = a;
        }
    }

    else{
        maior = c;

        if (a > b){
            meio = a;
            menor = b;
        }

        else{
            meio = b;
            menor = a;
        }
    }
    
    printf("Os valores em ordem crescente foram: %d, %d, %d", menor, meio, maior);

    return 0;
}

int main(){

    int a,b,c;

    printf("Digite o valor do primeiro número: \n");
    scanf("%d", &a);

    printf("Digite o valor do segundo número: \n");
    scanf("%d", &b);

    printf("Digite o valor do terceiro número: \n");
    scanf("%d", &c);

    verificacao(a,b,c);

}