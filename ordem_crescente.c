#include <stdio.h>

int main(){

    int a,b,c;

    printf("Digite o valor do primeiro número: \n");
    scanf("%d", &a);

    printf("Digite o valor do segundo número: \n");
    scanf("%d", &b);

    printf("Digite o valor do terceiro número: \n");
    scanf("%d", &c);

    if (a > b && a > c){

        if (b > c){
            printf("%d, %d, %d\n", a,b,c);
        }

        else{
            printf("%d, %d, %d\n", a,c,b);
        }

        }
    
    else if ( b > a && b > c){

        if (a > c){
            printf("%d, %d, %d\n", b,a,c);
        }

        else{
            printf("%d, %d, %d\n", b,c,a);
        }
    
    }

    else{
        if (b > a){
            printf("%d, %d, %d\n", c, b, a);
        }

        else{
            printf("%d, %d, %d\n", c,a,b);
        }
    }
    

}