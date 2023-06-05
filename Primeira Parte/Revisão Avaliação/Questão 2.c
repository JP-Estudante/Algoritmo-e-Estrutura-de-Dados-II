/*2 - Escreva um programa que receba um vetor de inteiros
de tamanho N e encontre o maior e o menor elemento do vetor
utilizando ponteiros. Em seguida, imprima o maior e o menor
elemento na tela.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função que busca o maior e o menor valor do vetor utilizando ponteiros
void buscaValor(int *pVetor, int tamanhoVet, int *maior, int *menor)
{
    int i;
    *maior = pVetor[0]; // inicializa o maior valor com o primeiro elemento do vetor
    *menor = pVetor[0]; // inicializa o menor valor com o primeiro elemento do vetor

    for (i = 1; i < tamanhoVet; i++)
    {
        if (pVetor[i] > *maior) // atualiza o valor de maior se o elemento atual do vetor for maior que o atual valor de maior
            *maior = pVetor[i];

        if (pVetor[i] < *menor) // atualiza o valor de menor se o elemento atual do vetor for menor que o atual valor de menor
            *menor = pVetor[i];
    }
}

// Função principal
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tamanho = 0, i, menor, maior;

    printf("Qual é o tamanho do vetor? ");
    scanf("%d", &tamanho);

    int vetor[tamanho]; // declara o vetor com o tamanho informado pelo usuário

    printf("Informe");
    for (i = 0; i < tamanho; i++)
    {
        printf("\nIndíce %d: ", i + 1);
        scanf("%d", &vetor[i]); // preenche o vetor com valores informados pelo usuário
    }

    buscaValor(vetor, tamanho, &menor, &maior); // chama a função buscaValor passando o vetor, seu tamanho e os endereços das variáveis menor e maior

    printf("O maior: %d", maior);   // imprime o valor do maior elemento do vetor
    printf("\nO menor: %d", menor); // imprime o valor do menor elemento do vetor

    return 0; // finaliza o programa
}
