/* Escreva um programa em C que solicita ao usuário o número de elementos
de um array e aloca a memória necessária usando a função calloc().
Em seguida, o programa deve preencher o array com valores aleatórios
e imprimir o conteúdo do array.*/
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