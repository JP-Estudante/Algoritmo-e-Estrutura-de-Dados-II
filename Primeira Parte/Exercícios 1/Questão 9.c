/*Função que recebe uma matriz de inteiros e calcula a soma de todos os elementos.*/

#include<stdio.h>

#define LINHAS 3
#define COLUNAS 3

int sumMatrix(int matrix[][COLUNAS], int rows);

int main() {
    int matrix[LINHAS][COLUNAS];
    int i, j;
    
    // Lendo os elementos da matriz
    printf("Digite os elementos da matriz %d x %d:\n", LINHAS, COLUNAS);
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Chamando a função para calcular a soma dos elementos
    int sum = sumMatrix(matrix, LINHAS);
    
    // Imprimindo a soma dos elementos
    printf("A soma dos elementos da matriz é: %d\n", sum);
    
    return 0;
}

int sumMatrix(int matrix[][COLUNAS], int rows) {
    int sum = 0;
    int i, j;
    
    // Calculando a soma dos elementos da matriz
    for (i = 0; i < rows; i++) {
        for (j = 0; j < COLUNAS; j++) {
            sum += matrix[i][j];
        }
    }
    
    return sum;
}