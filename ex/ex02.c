#include<stdio.h>
#include<string.h>

#define TAMANHO_MAX 20

int main(){
    char string[TAMANHO_MAX];
    printf("Digite uma palavra: ");
    scanf("%19s", string);
    char stringInvertida[TAMANHO_MAX];
    
    strcpy(stringInvertida, string);

    int tamanho = strlen(string);
    int inicio = 0;
    int fim = tamanho - 1;
    char temp;

    while (inicio < fim)
    {
        temp = stringInvertida[inicio];
        stringInvertida[inicio] = stringInvertida[fim];
        stringInvertida[fim] = temp;

        inicio++;
        fim--;
    }

    int comparacao = strcmp(stringInvertida, string);

    if(comparacao == 0){
        printf("A palavra é um palíndromo!\n");
    }else{
        printf("A palavra não é um palíndromo!\n");
    }
    
    return 0;
}