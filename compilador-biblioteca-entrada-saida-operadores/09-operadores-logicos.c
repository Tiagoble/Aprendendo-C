#include<stdio.h>

void main(){
    int a=1, b=2;

    printf("a = %d, b = %d\n",a,b);

    //menor que
    printf("a < b : %d\n", a < b);

    //maior que
    printf("a > b : %d\n", a > b);

    //equivalente
    printf("a == b : %d\n", a == b);

    //menor ou igual
    printf("a <= b : %d\n", a <= b);

    //maior ou igual
    printf("a >= b : %d\n", a >= b);

    //diferente
    printf("a != b : %d\n", a != b);
    

    //operador relacional retorna verdadeiro
    int verdadeiro = 1==1;

    //operador de negação inverte valor
    int negar = !verdadeiro;
    printf("Valor: %d\n", verdadeiro);
    printf("Valor negado: %d\n", negar);


    //operadores relacionais com retorno true ou false (!=0, 0)
    int relacional1 = (5 > 3);
    int relacional2 = (5 > 4);

    printf("5 > 3? %d\n", relacional1);
    printf("5 > 4? %d\n", relacional2);

    //operador AND
    int comparadacao_and = relacional1 && relacional2;
    printf("%d and %d = %d\n", relacional1, relacional2, comparadacao_and);

    //operador OR
    int comparadacao_or = (5 > 6) || (6 > 8);
    printf("(5 > 6) OR (6 > 8): %d\n", comparadacao_or);
    printf("(5 > 6) OR (8 > 5): %d\n", (5 > 6) || (8 > 5));

    printf("Valor negativo negado: %d\n",!(-8));
}