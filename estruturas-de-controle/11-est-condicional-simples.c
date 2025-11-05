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

    int y;

    printf("\nDigite um inteiro: ");
    scanf(" %d", &y);

    if(y < 0){
        printf("O número é negativo.\n");
    }else if(y == 0){
        printf("O número é igual a zero\n");
    }else{
        printf("O número é positivo.\n");
    }
}