#include <stdio.h>
#include <locale.h>

// Definição da struct Tempo que contém campos para horas, minutos e segundos
typedef struct
{
    int horas, minutos, segundos;

} Tempo;

// Protótipo da função que irá converter o tempo em segundos para horas e minutos
void converter(Tempo *t);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Declaração da variável tempo do tipo Tempo
    Tempo tempo;

    printf("Converta Seg => Hrs/Min:");
    printf("\nSegundos: ");

    // Leitura do valor de segundos informado pelo usuário
    scanf("%d", &tempo.segundos);

    // Chamada da função que irá converter o tempo em segundos para horas e minutos
    converter(&tempo);
}

void converter(Tempo *t)
{
    // Cálculo da quantidade de minutos e horas a partir dos segundos informados
    t->minutos = t->segundos / 60;
    t->horas = t->segundos / 3600;

    // Exibição do resultado da conversão para o usuário
    printf("\nMinuto(s): %d [min]", t->minutos);
    printf("\nHora(s): %d [hr]", t->horas);
}
