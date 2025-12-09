#include<stdio.h>
#include<string.h>

int main(){
    int array[2][5][5];

    for(int x = 0; x < 2; x++){
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                array[x][i][j] = j + i + x;
            }
        }
    }

    for (int x = 0; x < 2; x++){
        for (int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                printf("Array[%d][%d][%d] = %d\n", x, i, j, array[x][i][j]);
            }
        }
        
    }
    
    return 0;
}