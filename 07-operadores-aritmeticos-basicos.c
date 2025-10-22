#include<stdio.h>

void main(){
    int a = 1, b = -2 , c = 3;

    //positivo
    printf("positivo 1 é %i\n", +a);
    printf("positivo (-2) é %i\n", +b);

    //negativo
    printf("negativo (1) é %i\n", -a);
    printf("negativo (-2) é %i\n", -b);

    //adição 
    printf("adição de 1 + (-2) %i\n", a + b);

    //subtração
    printf("subtração de 1 - (-2) %i\n", a - b);

    //divisão
    printf("Divisão de -2/1 %i\n", b / a);

    //multiplicação
    printf("multiplicação de 2*5 é %i\n", 2*5);

    //modulo
    printf("modulo de 3%%2 %i\n", c % 2);

}