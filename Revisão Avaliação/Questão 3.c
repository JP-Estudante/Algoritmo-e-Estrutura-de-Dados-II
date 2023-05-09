/*3 - Escreva um programa em linguagem C que utilize uma estrutura (struct)
para representar uma partida de futebol. A estrutura deve conter as seguintes
informações: time mandante, time visitante, placar do time mandante e placar do
time visitante. Em seguida, crie uma variável desse tipo e peça ao usuário que
informe as informações da partida. Por fim, imprima na tela os dados da partida,
incluindo o resultado final.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definindo a estrutura PartidaFutebol
typedef struct PartidaFutebol
{
    char timeMandante[20], timeVisitante[20];
    int placarTimeMandante, placarTimeVisitante;

} PartidaFutebol;

int main()
{
    // Configurando a localização para português
    setlocale(LC_ALL, "Portuguese");

    // Declarando uma variável do tipo PartidaFutebol
    PartidaFutebol PF;

    // Solicitando o nome do Time Mandante ao usuário
    printf("Nome do Time Mandante: ");
    gets(PF.timeMandante); // Usando a função gets para ler a string digitada pelo usuário
    // scanf("%s", &PF.timeMandante); // Alternativa usando a função scanf
    fflush(stdin); // Limpando o buffer de entrada

    // Solicitando o nome do Time Visitante ao usuário
    printf("Nome do Time Visitante: ");
    gets(PF.timeVisitante);
    // scanf("%s", &PF.timeVisitante);
    fflush(stdin);

    // Solicitando os placares e imprimindo na tela
    printf("\n***Placar***\n");
    printf("%s: ", PF.timeMandante);
    scanf("%d", &PF.placarTimeMandante);

    printf("\n%s: ", PF.timeVisitante);
    scanf("%d", &PF.placarTimeVisitante);

    // Verificando o vencedor ou se houve empate e imprimindo na tela
    if (PF.placarTimeMandante > PF.placarTimeVisitante)
        printf("%s VENCEU!!!", PF.timeMandante);

    else if (PF.placarTimeVisitante > PF.placarTimeMandante)
        printf("%s VENCEU!!!", PF.timeVisitante);

    else
        printf("%s e %s EMPATARAM!!!", PF.timeMandante, PF.timeVisitante);

    return 0;
}
