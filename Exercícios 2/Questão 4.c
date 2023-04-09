/* Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o endereço de cada posição dessa matriz.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float matriz[3][3] = {{1.5, 2.6, 3.2},
                          {4.7, 5.6, 6.9},
                          {7.5, 8.9, 9.3}};
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nMatriz[%d][%d]: [%.1f][%p]", i + 1, j + 1, matriz[i][j], matriz[i][j], &matriz[i][j]);
        }
    }
}