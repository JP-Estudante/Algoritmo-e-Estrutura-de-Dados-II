/*Elabore uma função que preencha uma matriz com valores sequenciais de 1 a 9.*/

#include <stdio.h>

void preencheMatriz(int matriz[][3], int linhas, int colunas);

int main() {
    int matriz[3][3];

    preencheMatriz(matriz, 3, 3);

    // Imprime a matriz preenchida
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void preencheMatriz(int matriz[][3], int linhas, int colunas) {
    int valor = 1;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = valor;
            valor++;
        }
    }
}
