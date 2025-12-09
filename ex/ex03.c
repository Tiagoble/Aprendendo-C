#include<stdio.h>
#include<string.h>
//calcular a media de três valores
int main(){
    float value[4];
    for(int i = 0; i < 3; i++){
        printf("Digite um valor: ");
        scanf(" %f", &value[i]);
        value[3] += value[i];
    }
    float media = value[3] / 3;
    printf("Valor 1: %.2f | Valor 2: %.2f | Valor 3: %.2f | Média: %.2f\n", value[0], value[1], value[2], media);

    return 0;
}

