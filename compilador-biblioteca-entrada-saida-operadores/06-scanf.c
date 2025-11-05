#include<stdio.h>

void main(){
    int idade;
    float altura;
    char letra_favorita;

    printf("Digite sua idade: \n");
    scanf(" %d", &idade);

    printf("Digite sua altura: \n");
    scanf(" %f", &altura);

    printf("Digite usa letra favorita: \n");
    scanf(" %c", &letra_favorita);

    printf("Sua idade é:%d\n"\
        "Sua altura é: %.2f\n"\
        "Sua letra favorita é: %c\n"\
        ,idade, altura, letra_favorita);
}