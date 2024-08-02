#include <stdio.h>

int main(){

    char sexo;
    float alt;

    printf("Digite o sua altura ");
    scanf("%f", &alt);

    printf("Digite seu sexo (h para homem e m para mulher): ");
    scanf("%c", &sexo);

    if(sexo == 'h'){
        
        printf("O peso ideal é: %f", (72.7 * alt) - 58);
    }

    else if (sexo == 'f'){
        printf("O seu peso ideal é: %f", (62.1*alt) - 44);
    }
}