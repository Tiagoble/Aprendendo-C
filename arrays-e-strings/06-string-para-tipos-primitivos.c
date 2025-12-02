#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//atoi 
//atol
//atof
int main(){
    char stringValue[10] = "123456789";
    int integerValue = atoi(stringValue);
    printf("Value: %d\n", integerValue);

    char stringValue2 [10] = "12.9";
    float decimalValue = atof(stringValue2);
    printf("Value: %.2f\n", decimalValue);

    char stringValue3[12] = "12345678910";
    long int longValue = atol(stringValue3);
    printf("Value: %li\n", longValue);
    return 0;
}