/*3 - Escreva um programa em linguagem C que utilize uma estrutura (struct)
para representar uma partida de futebol. A estrutura deve conter as seguintes
informa��es: time mandante, time visitante, placar do time mandante e placar do
time visitante. Em seguida, crie uma vari�vel desse tipo e pe�a ao usu�rio que
informe as informa��es da partida. Por fim, imprima na tela os dados da partida,
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
    // Configurando a localiza��o para portugu�s
    setlocale(LC_ALL, "Portuguese");

    // Declarando uma vari�vel do tipo PartidaFutebol
    PartidaFutebol PF;

    // Solicitando o nome do Time Mandante ao usu�rio
    printf("Nome do Time Mandante: ");
    gets(PF.timeMandante); // Usando a fun��o gets para ler a string digitada pelo usu�rio
    // scanf("%s", &PF.timeMandante); // Alternativa usando a fun��o scanf
    fflush(stdin); // Limpando o buffer de entrada

    // Solicitando o nome do Time Visitante ao usu�rio
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
