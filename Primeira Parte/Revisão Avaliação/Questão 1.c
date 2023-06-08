/*1 - Escreva uma função em linguagem C que receba dois números
inteiros como parâmetros e retorne o menor valor utilizando ponteiros.
Em seguida, escreva um programa que utilize essa função para imprimir
o menor valor entre dois números informados pelo usuário.*/

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
        printf("O menor valor é: %d", result);
    }
    else
    {
        printf("Os dois valores são iguais");
    }
}