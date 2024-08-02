#include <stdio.h>

int main(){

    int a = 100,b = 900;
    int *r, *t;

    r = &a;
    t = &b;

    if (*r > *t){
        printf("%d > %d", *r, *t);
    }

    else{
         printf("%d > %d", *t, *r);
    }
    
}