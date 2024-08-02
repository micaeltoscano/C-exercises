#include <stdio.h>

int main(){
    
    int num1, num2, primo, n;

    printf("Digite um intervalo de dois numeros (considere o primeiro intervalo sendo SEMPRE maior que o segundo): ");
    scanf("%d %d", &num1, &num2);

    while(num1 <= num2){

        primo = 1;
        
        if (num1 <= 1){
            primo = 0;
        }

        else{
            
            n = 2;
            while(n*n <= num1){

                if(num1 % n == 0){
                    primo = 0;
                    break;
                }
                n++;
            }
        }

        if(primo){
            printf("%d\n e primo!", num1);
        }

        else{
            printf("%d\n nao é primo!", num1);
        }
        num1++;
    }
}