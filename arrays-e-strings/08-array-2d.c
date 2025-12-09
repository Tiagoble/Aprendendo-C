#include<stdio.h>
#include<string.h>

int main(){
    int array[10][10];

    for(int i=0; i < 10; i++){
        for(int j=0; j < 10; j++){
            array[i][j] = 0;
            printf("Linha i: %d | Coluna j: %d\n", i, j);
        }
    }
    return 0;
}