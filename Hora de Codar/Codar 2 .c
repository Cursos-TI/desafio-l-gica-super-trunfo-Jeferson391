#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("======== Jogo de Jokenpô ======== \n");
    printf("Faça sua escolha: \n");
    printf("1. Pedra \n");
    printf("2. Papel \n");
    printf("3. Tesoura \n");

    scanf("%d", &escolhaJogador);


    switch (escolhaJogador){
    case 1:
        printf("Jogador: Pedra \n");
    break;
    case 2:
        printf("Jogador: Papel \n");
    break;
    case 3:
        printf("Jogador: Tesoura \n");
    break;
    default:
        printf("Valor invalido \n");
    break;
}

    escolhaComputador = rand() % 3 + 1;

    switch (escolhaComputador){
    case 1:
        printf("Computador: Pedra \n");
    break;
    case 2:
        printf("Computador: Papel \n");
    break;
    case 3:
        printf("Computador: Tesoura \n");
    break;
}
    if (escolhaJogador == escolhaComputador){
        printf("Escolhas foram as mesamas, impate");
    } else if ((escolhaJogador == 1) && (escolhaComputador == 3) ||
              (escolhaJogador == 2) && (escolhaComputador == 1) ||
              (escolhaJogador == 3) && (escolhaComputador == 2))

{
    printf("Vitória do Jogador \n");
} else {
    printf("Vitória do Computador \n");
}

return 0;
}