#include<stdio.h>
#include<math.h>
// calcular a área e o volume de uma esfera

#define PI 3.1415

int main(){
    float raio;
    float area;
    float volume;
    printf("Digite o raio da esfera: ");
    scanf(" %f", &raio);
    area = 4*PI*(raio * raio);

    volume = (4*(PI*(raio*raio*raio))) / 3;

    printf("A área da esfera é: %.2f\nE o volume da esfera é: %.2f\n", area, volume);
    return 0;
}