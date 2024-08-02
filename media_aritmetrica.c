#include <stdio.h>

int main(){

    float n1, n2, n3, n4;

    printf("Digite 4 notas: ");
    scanf("%f %f %f %f", &n1,&n2,&n3,&n4);

    printf("O valor da média aritmetrica das notas foi: %f", (n1+n2+n3+n4)/4);
    
}