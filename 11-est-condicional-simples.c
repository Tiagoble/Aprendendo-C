#include<stdio.h>

void main(){
    int x;
    printf("Digite um inteiro: ");
    scanf("%d", &x);

    if(x % 2 == 0){
        printf("O número %d é par.\n", x);
    }else{
        printf("O número %d é ímpar\n", x);
    }
}