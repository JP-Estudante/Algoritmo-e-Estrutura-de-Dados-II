#include <stdio.h>
#include <locale.h>

void bubbleSort(int vetor[], int tamanho)
{
    // Executando um loop for para percorrer todo o vetor;
    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int x = 0; x < tamanho - i - 1; x++)
        {
            if (vetor[x] > vetor[x + 1])
            {
                // Troca os elementos se estiverem fora de ordem;
                int temp = vetor[x]; // Guardando o maior valor da pos x;
                vetor[x] = vetor[x + 1];
                vetor[x + 1] = temp;
            }
        }
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

    bubbleSort(vetor, tamanho);

    printf("\n***Vetor ordenado***");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\nVetor[%d]", vetor[i]);
    }

    return 0;
}