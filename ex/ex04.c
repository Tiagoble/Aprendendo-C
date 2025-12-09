#include<stdio.h>

//calcular a área de um triângulo
int main(){
    float base;
    float altura;
    float area;
    printf("Digite a base: ");
    scanf(" %f", &base);
    printf("Digite a altura: ");
    scanf(" %f", &altura);

    area = (base * altura) / 2;
    
    printf("A área do triângulo é: %.2f\n", area);
    return 0;
}