#include<stdio.h>

void main(){
    int valor;
    printf("Digite 1 ou 2: ");
    scanf(" %d", &valor);

    switch(valor){
        case 1:
            printf("O valor digitado é %d\n", valor);
            break;
        case 2:
            printf("O valor digitado é %d\n", valor);
            break;
        default:
            printf("Valor inválido.\n");
    }
}