#include <stdio.h>
#include <locale.h>

void selectionSort(int vetor[], int tamanho)
{
    int i, x, indiceMenor;

    for (i = 0; i < tamanho - 1; i++)
    {
        indiceMenor = i; // Elemento atual é o menor

        // Procurar o menor elemento no restante do vetor
        for (x = i + 1; x < tamanho; x++)
        {
            if (vetor[x] < vetor[indiceMenor])
                indiceMenor = x;
        }
        // Movendo os elementos
        int temp = vetor[i];
        vetor[i] = vetor[indiceMenor];
        vetor[indiceMenor] = temp;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("***Vetor não ordenado***");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\nVetor[%d]", vetor[i]);
    }

    selectionSort(vetor, tamanho);

    printf("\n***Vetor ordenado***");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\nVetor[%d]", vetor[i]);
    }

    return 0;
}