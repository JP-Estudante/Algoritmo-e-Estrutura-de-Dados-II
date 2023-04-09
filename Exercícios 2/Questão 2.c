/*Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em seguida, compare seus endereço e exiba o conteúdo da variáveis com maior endereço.*/

#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int X = 0, Y = 0;

    printf("Informe o valor da variável X: ");
    scanf("%d", &X);

    printf("Informe o valor da variável Y: ");
    scanf("%d", &Y);

    int *ponteiroX = &X;
    int *PonteiroY = &Y;

    printf("\nEndereço de X: %x", (unsigned int)&X);
    printf("\nEndereço de Y: %x", (unsigned int)&Y);

    if (ponteiroX > PonteiroY)
    {
        printf("\n\nX = %d é maior", *ponteiroX);
    }
    else
    {
        printf("\n\nY = %d é maior", *PonteiroY);
    }
}