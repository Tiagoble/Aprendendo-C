#include<stdio.h>

void main(){
    int i = 0;
    int entrada = 1;

    while(entrada != 0){
        printf("O valor de i é %d\n", i);
        i++;

        printf("Você gostaria de pausar o programa?\nDigite 1 para continuar\nDigite 0 para pausar\n");
        scanf(" %d", &entrada);
    }
    
    printf("Programa Pausado.\n");

    do{
        printf("Você gostaria continuar contando?\n1 - continuar\n0 - finalizar programa\n");
        scanf(" %d", &entrada);

        printf("O valor de i é %d\n", i);
        i++;
    }while(entrada != 0);
printf("Programa encerrado.");
}