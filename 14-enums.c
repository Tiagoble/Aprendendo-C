#include<stdio.h>

enum nivelAcesso {Admin, Operador, Padrao};

void main(){
    char nome[15];
    enum nivelAcesso nivel;
    printf("Digite seu nome: ");
    scanf(" %s", &nome);

    int controlador = 1;

    while (controlador){
        printf("Digite seu nivel de acesso: 0(Admin), 1(Operador), 2(Padrão)" );
        scanf(" %d", &nivel);

        if(nivel >= 0 && nivel <=2){
            switch(nivel){
            case Admin:
                printf("Olá %s, Seu nivel de acesso é Admin\n", nome);
                break;
            case Operador:
                printf("Olá %s, Seu nivel de acesso é Operador\n", nome);
                break;
            case Padrao:
                printf("Olá %s, Seu nivel de acesso é Padrão\n", nome);
                break;
            }
            controlador = 0;
        }else{
            printf("Escolha um valor de 0 a 2\n");
        }
    }
}