#include<stdio.h>

void main(){
    //catacteres
    char caractere; // -128 127 
    caractere = 'a';

    unsigned char caractere2; // 0 255

    printf("Valor char: %c\n", caractere);

    //números inteiros
    int inteiro;
    long int inteiro_longo;
    short int inteiro_curto;

    inteiro = 100000;
    inteiro_longo = 1000000000;
    inteiro_curto = 100;

    unsigned int inteiro2;
    unsigned long int inteiro_longo2;
    unsigned short int inteiro_curto2; 

    printf("Valor inteiro: %d\n", inteiro);
    printf("Valor inteiro curto: %i\n", inteiro_curto);
    printf("Valor inteiro longo: %li\n", inteiro_longo);
    printf("Todos valores inteiros: %d - %d - %d\n", inteiro, inteiro_curto, inteiro_longo);

    //números reais
    float real;
    double real_duplo;
    long double real_duplo_longo = 1.2e-3L; // 0.0012

    real = 100.00f;
    real_duplo = 100000.00;

    printf("Valor número real: %f\n", real);
    printf("Valor número real duplo: %f\n", real_duplo);
    printf("Valor número real duplo longo: %e\n", (double)real_duplo_longo);
    //constante nomeada
    const int MAX = 100;

    printf("Valor da constante: %i", MAX);   

    //String
    char nome[] = "Tiago";

    printf("\nMeu nome: %s\n", nome);

    //impressão de endereço de memória
    int variavel;
    printf("Endereço da variável: %p\n",&variavel);
}