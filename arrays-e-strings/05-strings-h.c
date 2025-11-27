#include<stdio.h>
#include<string.h>

int main(){
    char str[100] = "Lorem ipsum dolor sit amet";
    char str2[100] = "Lorem ipsum dolor sit amet";
    char str3[100];

    //retorna 0 se as strings forem iguais
    int comparacao = strcmp(str, str2);
    printf("Comparação: %d\n", comparacao);

    //concatena valor ao final da string
    strcat(str2, "Concatenei");

    //retorna valor negativo se o primeiro caractere diferente encontrado for menor na primeira string
    comparacao = strcmp(str, str2);
    printf("Comparação após concatenação: %d\n", comparacao);

    //retorna valor positivo se o primeiro caractere diferente encontrado for maior na primeira string
    comparacao = strcmp(str2, str);
    printf("Comparação após concatenação: %d\n", comparacao);
    return 0;
}