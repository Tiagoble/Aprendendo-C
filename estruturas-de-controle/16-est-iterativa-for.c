#include<stdio.h>

void main(){
    //contando números pares de 1 a 10
    int i = 1;
    for(;i <= 10;i++){
        if(i % 2 != 0){
            continue;
        }
        printf("O valor de i é par: %d\n", i);
    }
}