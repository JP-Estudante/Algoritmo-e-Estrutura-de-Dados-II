/*
 *Crie uma fun��o em C que receba dois inteiros por refer�ncia (ponteiros)
 *e troque seus valores. Teste a fun��o no programa principal.
 */

#include <stdio.h>
#include <locale.h>

void trocaValor(int *ponteiro1, int *ponteiro2)
{
    int aux = *ponteiro1;

    *ponteiro1 = *ponteiro2;
    *ponteiro2 = aux;
}

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    int numero1 = 3, numero2 = 6;

    printf("Antes da troca: \nnumero 1: %d \nnumero 2: %d\n", numero1, numero2);
    trocaValor(&numero1, &numero2);
    printf("\nAp�s a troca: \nnumero 1: %d \nnumero 2: %d\n", numero1, numero2);
}