#include <stdio.h>

int main(){

    float n1,n2,n3, media;

    printf("Digite o valor das 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = ((n1*1) + (n2*1) + (n3*2)) / 3;

    if (media > 60){
        printf("Aprovado!");
    }

    else{
        printf("Reprovado!");
    }
}