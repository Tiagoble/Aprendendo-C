#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//sprintf
int main(){
    char string[100];
    int number = 1234;
    float PI = 3.1415;

    sprintf(string, "Float: %.4f, Inteiro: %d", PI, number);
    printf("String: %s\n", &string);
}