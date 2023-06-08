/*1 - Escreva uma fun��o em linguagem C que receba dois n�meros
inteiros como par�metros e retorne o menor valor utilizando ponteiros.
Em seguida, escreva um programa que utilize essa fun��o para imprimir
o menor valor entre dois n�meros informados pelo usu�rio.*/

#include <stdio.h>
#include <locale.h>

void locale()
{
    setlocale(LC_ALL, "Portuguese");
}

void menorValor(int a, int b, int *menor)
{
    if (a < b)
    {
        *menor = a;
    }
    else
    {
        *menor = b;
    }
}

int main()
{
    locale();

    int A, B, result;

    printf("Informe o valor de A: ");
    scanf("%d", &A);

    printf("Informe o valor de B: ");
    scanf("%d", &B);

    menorValor(A, B, &result);

    if (result != A || result != B)
    {
        printf("O menor valor �: %d", result);
    }
    else
    {
        printf("Os dois valores s�o iguais");
    }
}