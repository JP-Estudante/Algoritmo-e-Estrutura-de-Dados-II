/*Fa�a um programa que leia um n�mero N e em seguida leia N n�meros inteiros.
O programa deve alocar dinamicamente um vetor de tamanho N e armazenar os n�meros lidos nesse vetor.
Em seguida, o programa deve utilizar a fun��o realloc() para redimensionar o vetor para o dobro do tamanho original.
O programa deve preencher a segunda metade do vetor com os n�meros lidos anteriormente, na ordem inversa em que foram lidos.
O programa deve imprimir o vetor final e liberar a mem�ria alocada.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vetor = (int *)malloc(n * sizeof(int)); // alocando vetor de tamanho N
    if (vetor == NULL)
    {
        printf("Erro na aloca��o de mem�ria.");
        return 1;
    }

    printf("Digite %d n�meros inteiros:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    vetor = (int *)realloc(vetor, 2 * n * sizeof(int)); // redimensionando vetor para o dobro do tamanho original
    if (vetor == NULL)
    {
        printf("Erro na realoca��o de mem�ria.");
        return 1;
    }

    for (i = n; i < 2 * n; i++)
    {
        vetor[i] = vetor[2 * n - i - 1]; // preenchendo a segunda metade do vetor com os n�meros lidos na ordem inversa
    }

    printf("Vetor final: ");
    for (i = 0; i < 2 * n; i++)
    {
        printf("%d ", vetor[i]);
    }

    free(vetor); // liberando mem�ria alocada
    return 0;
}
