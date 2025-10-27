#include<stdio.h>

void main(){
    float nota1, nota2, media;

    printf("Digite 2 notas: ");
    scanf(" %f %f", &nota1, &nota2);

    media = (nota1 + nota2) / 2.0;

    printf("A media é: %.2f\n", media);
}