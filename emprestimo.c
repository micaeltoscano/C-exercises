#include <stdio.h>

int main(){

    float salario, parcela;

    printf("Digite o valor do seu salário: ");
    scanf("%f", &salario);

    printf("Digite o valor de uma parcela do seu emprestimo: ");
    scanf("%f", &parcela);

    if(parcela > (0.20*salario)){

        printf("Emprestimo não concedido!");
    }

    else{

        printf("Emprestimo concedido!");
    }
}