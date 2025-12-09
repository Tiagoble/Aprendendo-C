#include<stdio.h>

//converter um tempo em segundos para hora, minutos e segundos
int main(){
    float tempoSegundos;
    printf("Digite um tempo em segundos: ");
    scanf(" %f", &tempoSegundos);

    float horas = tempoSegundos / 3600;
    int horasInteiro = (int) horas;
    tempoSegundos = tempoSegundos - 3600;
    
    float minutos = tempoSegundos / 60;
    int minutosInteiro = (int) minutos;
    tempoSegundos = tempoSegundos - (minutosInteiro*60);

    printf("Hora: %d:%d:%.0f\n", horasInteiro, minutosInteiro, tempoSegundos);

    return 0;
}