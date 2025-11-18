#include<stdio.h>
#define quantity 3
void main(){
    float array[quantity];
    float media = 0;
    for(int i = 0; i < quantity; i++){
        printf("Digite um número: \n");
        scanf(" %f", &array[i]);
        media += array[i]; 
    }
    media /= quantity;
    printf("A média é %.2f\n", media);
}