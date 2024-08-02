#include <stdio.h>

int main(){

    int a = 10, *b, **c, ***d;

    b = &a;
    c = &b;
    d = &c;

    printf("%d %d %d %d", *b*2, **c*3,***d*4, **&b);
    
}