/*2 - Verificação de empate:
Suponha que você tenha dois vetores que representam o número de gols marcados
e sofridos por duas equipes em um jogo de futebol. Escreva uma função recursiva
em C para verificar se o jogo terminou em empate (os dois times marcaram a mesma quantidade de gols).*/

#include <stdio.h>
#include <locale.h>

void verificaTerminouEmpate(int gols1[], int gols2[], int tamanho)
{
    int totalGols1 = 0;
    int totalGols2 = 0;

    for (int i = 0; i < tamanho; i++)
    {
        totalGols1 += gols1[i];
        totalGols2 += gols2[i];
    }

    // Verificando se o jogo terminou em empate
    if (totalGols1 == totalGols2)
        printf("O jogo terminou em empate.\n");
    else
        printf("O jogo não terminou em empate.\n");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int golsTime1[] = {2, 1, 3}; // Gols marcados pelo time 1 em cada partida
    int golsTime2[] = {1, 3, 2}; // Gols marcados pelo time 2 em cada partida

    int tamanho = sizeof(golsTime1) / sizeof(golsTime1[0]); // Tamanho dos vetores

    verificaTerminouEmpate(golsTime1, golsTime2, tamanho);

    return 0;
}