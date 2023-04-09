/*Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e
exiba qual é o maior endereço.*/

#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int x = 10, y = 5;

    printf("Endereço X: %x", (unsigned int)&x);
    printf("\nEndereço Y: %x", (unsigned int)&y);

    if (&x > &y)
    {
        printf("\n\nX possui um endereço maior");
    }
    else
    {
        printf("\n\nY possui um endereço maior");
    }
}