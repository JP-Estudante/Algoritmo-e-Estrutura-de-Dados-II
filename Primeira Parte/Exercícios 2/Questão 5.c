/*Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o endereço das posições contendo valores pares.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int array[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº elemento: ", i + 1);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 5; i++)
    {
        // int *endereco = &array[i];
        if (array[i] % 2 == 0)
        {
            printf("\nArray[%d]", array[i]);
            printf("[%p]", &array[i]);
        }
        else
        {
            printf("\nArray[%d]", array[i]);
        }
    }
}