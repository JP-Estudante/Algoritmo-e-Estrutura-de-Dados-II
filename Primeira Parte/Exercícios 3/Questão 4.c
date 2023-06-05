#include <stdio.h>
#include <locale.h>

// Defini��o da struct Tempo que cont�m campos para horas, minutos e segundos
typedef struct
{
    int horas, minutos, segundos;

} Tempo;

// Prot�tipo da fun��o que ir� converter o tempo em segundos para horas e minutos
void converter(Tempo *t);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Declara��o da vari�vel tempo do tipo Tempo
    Tempo tempo;

    printf("Converta Seg => Hrs/Min:");
    printf("\nSegundos: ");

    // Leitura do valor de segundos informado pelo usu�rio
    scanf("%d", &tempo.segundos);

    // Chamada da fun��o que ir� converter o tempo em segundos para horas e minutos
    converter(&tempo);
}

void converter(Tempo *t)
{
    // C�lculo da quantidade de minutos e horas a partir dos segundos informados
    t->minutos = t->segundos / 60;
    t->horas = t->segundos / 3600;

    // Exibi��o do resultado da convers�o para o usu�rio
    printf("\nMinuto(s): %d [min]", t->minutos);
    printf("\nHora(s): %d [hr]", t->horas);
}
