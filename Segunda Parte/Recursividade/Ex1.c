#include <stdio.h>
#include <locale.h>

float calcularPontuacaoAcumulada(float pontuacoes[], int rodadaAtual)
{
    if (rodadaAtual == 0)
        return pontuacoes[0];
    else
        return pontuacoes[rodadaAtual] + calcularPontuacaoAcumulada(pontuacoes, rodadaAtual - 1);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float pontuacoes[] = {5.0, 7.0, 9.5, 10.0, 6.5};
    int totalRodadas = sizeof(pontuacoes) / sizeof(pontuacoes[0]);

    float pontuacaoAcumulada = calcularPontuacaoAcumulada(pontuacoes, totalRodadas - 1);

    printf("Pontuação Acumulada: %.2f", pontuacaoAcumulada);

    return 0;
}