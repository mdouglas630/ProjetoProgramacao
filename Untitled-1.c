#include <stdio.h>
#include <stdlib.h>

void main(void){
    system("clear");
    int opc;
    printf("Bem vindo ao Digite.me\n");
    printf("1 - Iniciar Novo Jogo\n");
    printf("2 - Continuar Jogo\n");
    printf("3 - Historico de pontos\n");
    printf("4 - Sobre o Programa");
}

void sobre(void){
    printf("Autor do Programa: Maicon Douglas\n");
    printf("Email do Autor: pes.m.douglas.630@gmail.com\n");
    printf("Facebook do Autor: facebook.com/maicondouglas5\n");
}

void login(void){
    char login[12], senha[10];
    printf("Digite o seu login: ");
    scanf(" %c", &login);
    printf("Digite a sua senha: ");
    scanf(" %c", &senha);
}

void newplayer(void){
    char login[12], senha[10];
    printf("digite o seu novo login(até 12 caracteres): ");
    scanf(" %c", &login);
    printf("digite uma senha (até 10 caracteres): ");
    scanf(" %c", &senha);

}