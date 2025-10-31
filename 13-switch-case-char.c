#include<stdio.h>
#include <ctype.h>

void main(){
    char letra;
    printf("Digite uma letra entre A, B ou C: ");
    scanf(" %c", &letra);
    letra = toupper(letra);

    switch(letra){
        case 'A':
            printf("Você digitou %c\n", letra);
            break;
        case 'B':
            printf("Você digitou %c\n", letra);
            break;
        case 'C':
            printf("Você digitou %c\n", letra);
            break;
        default:
            printf("Você digitou uma letra diferente de A, B e C\n");
    }
}