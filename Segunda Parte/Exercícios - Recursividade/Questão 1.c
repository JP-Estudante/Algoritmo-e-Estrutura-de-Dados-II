/*1 - Contagem regressiva do tempo de jogo:
Suponha que voc� queira implementar uma contagem regressiva de um jogo de futebol,
onde o tempo de jogo � dividido em per�odos de 45 minutos. Escreva uma fun��o recursiva
em C para imprimir a contagem regressiva do tempo de jogo.*/

#include <stdio.h>

void contagemRegressiva(int minutos)
{
    // Caso base: quando n�o h� mais tempo restante
    if (minutos == 0)
        printf("Apito final! Fim do jogo!\n");
    else
    {
        // Imprimir o tempo restante
        printf("Tempo restante: %d minutos\n", minutos);

        // Chamada recursiva para o pr�ximo per�odo
        contagemRegressiva(minutos - 45);
    }
}

int main()
{
    int tempoTotal = 90; // Tempo total de jogo em minutos
    contagemRegressiva(tempoTotal);

    return 0;
}