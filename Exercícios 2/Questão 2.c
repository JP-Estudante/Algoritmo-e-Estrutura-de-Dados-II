/*Escreva um programa que contenha duas vari�veis inteiras. Leia essas vari�veis do teclado. Em seguida, compare seus endere�o e exiba o conte�do da vari�veis com maior endere�o.*/

#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int X = 0, Y = 0;

    printf("Informe o valor da vari�vel X: ");
    scanf("%d", &X);

    printf("Informe o valor da vari�vel Y: ");
    scanf("%d", &Y);

    int *ponteiroX = &X;
    int *PonteiroY = &Y;

    printf("\nEndere�o de X: %x", (unsigned int)&X);
    printf("\nEndere�o de Y: %x", (unsigned int)&Y);

    if (ponteiroX > PonteiroY)
    {
        printf("\n\nX = %d � maior", *ponteiroX);
    }
    else
    {
        printf("\n\nY = %d � maior", *PonteiroY);
    }
}