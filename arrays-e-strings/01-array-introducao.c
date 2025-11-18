#include<stdio.h>

void main(){
    float n[3];
    printf("Digite três números: ");
    scanf(" %f %f %f", &n[0], &n[1], &n[2]);
    float media = (n[0] + n[1] + n[2]) / 3;
    printf("A média é: %.2f", media);
}