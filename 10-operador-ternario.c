#include<stdio.h>

void main(){
    int x, y, maior;

    printf("digite dois valores: \n");
    scanf(" %d %d", &x, &y);

    maior = x > y? x : y; 

    printf("Maior valor: %d\n", maior);
}