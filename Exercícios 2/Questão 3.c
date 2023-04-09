/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
endereço de cada posição desse array.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numeros[10] = {1.5, 2.4, 3.7, 4.2, 5.9, 6.8, 7.3, 8.1, 9.6, 10.0};

    int i;

    for (i = 0; i <= numeros[i]; i++)
    {
        printf("\nNúmeros [%.1f]", numeros[i]);
        printf("[%p]", &numeros[i]);
    }
    printf("\n          ^      ^");
    printf("\n        Valor Endereço");
}