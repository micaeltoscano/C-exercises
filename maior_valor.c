#include <stdio.h>

int main(){

    int a,b,c,maior = 0;

    printf("Digite o valor do primeiro número: \n");
    scanf("%d", &a);

    printf("Digite o valor do segundo número: \n");
    scanf("%d", &b);

    printf("Digite o valor do terceiro número: \n");
    scanf("%d", &c);

    if (a > maior){
        maior = a;
    }

    if (b > maior){
        maior = b;
    }

    if (c > maior){
        maior = c;
    }

    printf("O maior valor foi: %d\n", maior);
    
}