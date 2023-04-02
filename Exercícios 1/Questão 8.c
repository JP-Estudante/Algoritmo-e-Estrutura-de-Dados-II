/*Função que recebe um vetor de inteiros e retorna a média dos elementos.*/

#include<stdio.h>
#include <locale.h>

double mediaVetor(int vetor[], int tamanho);

int main() {
    setlocale(LC_ALL,"Portuguese");
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    double media = mediaVetor(vetor, tamanho);
    printf("A média dos elementos do vetor é: %.2f\n", media);

    return 0;
}

double mediaVetor(int vetor[], int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    return (double)soma / tamanho;
}
