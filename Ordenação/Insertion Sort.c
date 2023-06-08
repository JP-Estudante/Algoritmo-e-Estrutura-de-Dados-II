#include <stdio.h>
#include <locale.h>

void insertionSort(int vetor[], int tamanho)
{
    int i, x, chave;

    for (i = 1; i < tamanho; i++)
    {
        chave = vetor[i];

        x = i - 1;
        while (x >= 0 && vetor[x] > chave)
        {
            // Move o elemento para a direita
            vetor[x + 1] = vetor[x];
            x--;
        }
        // Inserindo a chave na pos correta
        vetor[x + 1] = chave;
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

    insertionSort(vetor, tamanho);

    printf("\n***Vetor ordenado***");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\nVetor[%d]", vetor[i]);
    }

    return 0;
}