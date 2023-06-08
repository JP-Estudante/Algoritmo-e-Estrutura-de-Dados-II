/*Crie um programa com uma função que recebe um vetor de inteiros e retorna a soma de todos os seus elementos.*/
#include<stdio.h>
#include <string.h>
#include <locale.h>

int somaVetor(int vetor[], int tamanho);

int main(){
    setlocale(LC_ALL,"Portuguese");
    int tamanho;
    printf("Informe o tamanho do vetor: ");
        scanf("%d", &tamanho);

    int vetor[tamanho];
    printf("\nInforme os valores do vetor");
        for(int i = 0; i < tamanho; i++){
            printf("\nDigite o %dº valor: ", i+1);
                scanf("%d", &vetor[i]);
        }
    int soma = somaVetor(vetor, tamanho);
        printf("A soma do vetor é: %d", soma);
}

int somaVetor(int vetor[], int tamanho){
    int soma = 0;
    for (int i = 0; i < tamanho; i++){
        soma += vetor[i];
    }
    return soma;
}