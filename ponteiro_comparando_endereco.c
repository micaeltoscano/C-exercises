#include <stdio.h>

int main(){

    int a = 100,b,c;
    int *r, *t, *p;

    r = &a;
    t = &b;

    if (r > t){
        printf("%p > %p", r, t);
    }

    else{
         printf("%p > %p", t, r);
    }

    
}