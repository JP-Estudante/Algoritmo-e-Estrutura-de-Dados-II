/* Escreva um programa em C que solicita ao usu�rio o n�mero de elementos
de um array e aloca a mem�ria necess�ria usando a fun��o calloc().
Em seguida, o programa deve preencher o array com valores aleat�rios
e imprimir o conte�do do array.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int elementos, i, *array;

    printf("Digite o tamanho do Array: ");
    scanf("%d", &elementos);

    array = (int *)calloc(elementos, sizeof(int));
    srand(time(NULL));

    for (i = 0; i < elementos; i++)
    {
        array[i] = rand() % 100;
    }

    printf("\n  Array  ");
    for (i = 0; i < elementos; i++)
    {
        printf("\n  [%d]", array[i]);
    }

    free(array);
}