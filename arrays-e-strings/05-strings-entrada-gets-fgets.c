#include<stdio.h>

int main(){
    char str[20];
    printf("Digite seu nome: ");
    fgets(str, 20, stdin);
    printf("Seu nome é: %s", str);
    return 0;
}