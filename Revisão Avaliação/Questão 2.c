/*2 - Escreva um programa que receba um vetor de inteiros
de tamanho N e encontre o maior e o menor elemento do vetor
utilizando ponteiros. Em seguida, imprima o maior e o menor
elemento na tela.*/

#include <stdio.h>
#include <locale.h>

void locale()
{
    setlocale(LC_ALL, "Portuguese");
}

void buscaValor(int *pVetor, int tamanhoVet, int *maior, int *menor)
{
    int i;
    *maior = pVetor[0];
    *menor = pVetor[0];

    for (i = 1; i < tamanhoVet; i++)
    {
        if (pVetor[i] > *maior)
            *maior = pVetor[i];

        if (pVetor[i] < *menor)
            *menor = pVetor[i];
    }
}

int main()
{
    locale();
    int i, n = 0, vetor[n], menor, maior;

    printf("Qual é o tamanho do vetor? ");
    scanf("%d", &n);

    printf("Informe");
    for (i = 0; i < n; i++)
    {
        printf("\nIndíce %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    buscaValor(n, vetor, &menor, &maior);

    printf("O maior: %d", maior);
    printf("\nO menor: %d", menor);

    return 0;
}