/*Escreva um programa que contenha duas vari�veis inteiras. Compare seus endere�os e
exiba qual � o maior endere�o.*/

#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int x = 10, y = 5;

    printf("Endere�o X: %x", (unsigned int)&x);
    printf("\nEndere�o Y: %x", (unsigned int)&y);

    if (&x > &y)
    {
        printf("\n\nX possui um endere�o maior");
    }
    else
    {
        printf("\n\nY possui um endere�o maior");
    }
}