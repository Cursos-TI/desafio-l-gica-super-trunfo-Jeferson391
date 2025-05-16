#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
        int numeroJogador, numeroComputador, resultado;
        char tipoComparacao;

        srand(time(0));
        numeroComputador = rand() % 100 + 1; //Numero aleatório de 1 a 100//

//--------------- Menu do Jogo ----------------//
        printf("\n ======= Jogo de Maior, Menor ou Igual ======= \n");
        printf("Escolha o tipo de comparação e o seu numero \n");
        printf("M. Maior \n");
        printf("M. Menor \n");
        printf("I. Igual \n");

        printf("Escolha a comparação: \n");
        scanf("%c", &tipoComparacao);

        printf("Digite seu numero (de 1 a 100): \n");
        scanf("%d", &numeroJogador);

switch (tipoComparacao)
{
case 'M':
case 'm':
        printf("Comparação por maior numero foi escolhido \n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
case 'N':
case 'n':
        printf("Comparação por menor numero foi escolhido \n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
case 'I':
case 'i':
        printf("Comparação por numeros iguais foi escolhido \n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
default:
        break;
}

        printf("O numero do jogador é: %d\n", numeroJogador);
        printf("O numero do computador é: %d\n", numeroComputador);

if (resultado == 1){
        printf("Vitória do Jogador \n");
} else if (resultado == 0){
        printf("Vitória do Computador \n");
} else {
        printf("Empate");
}

return 0;
}