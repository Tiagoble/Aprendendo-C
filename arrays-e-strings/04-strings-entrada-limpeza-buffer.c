#include<stdio.h>

int main(){
    char str[20];
    printf("Digite seu nome: ");
    setbuf(stdin, NULL);
    scanf("%s", &str);
    setbuf(stdin, NULL);
    printf("Seu nome é: %s\n", str);
    return 0;
}