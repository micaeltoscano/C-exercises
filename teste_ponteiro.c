#include <stdio.h>

int main ( ) {
    int i = 5, *p = &i;
    
    

//respostas: *p+2 = 7, **&p = 5, 3**p = 15, **&p+4 = 9

    printf ("%d %d %d %d \n", *p+2, **&p, 3**p, **&p+4);
}
