/*Fa�a um programa que aloque dinamicamente um vetor de inteiros
de tamanho N preencha esse vetor com n�meros aleat�rios entre 1 e 100.
Em seguida, o programa deve imprimir o vetor e liberar a mem�ria alocada.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tamanho, i, *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL)
    {
        printf("Erro na aloca��o de mem�ria");
        return 1;
    }

    srand(time(NULL));
    for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % 100;
    }

    printf("\n  Vetor  ");
    for (i = 0; i < tamanho; i++)
    {
        printf("\n  [%d]", vetor[i]);
    }

    free(vetor);
}