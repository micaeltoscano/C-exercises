#include <stdio.h>

int main(){

    int a = 5, *b, **c, ***d;
    b = &a;
    c = &b;
    d = &c;

    printf("Numero original: %d\n, numero dobrado: %d\n, numero triplicado: %d\n, numero quadruplicado: %d\n", a, (*b*2), (**c*3), (***d*4));
}