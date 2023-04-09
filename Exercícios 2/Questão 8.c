/*Faça um programa que leia um número N e em seguida leia N números inteiros.
O programa deve alocar dinamicamente um vetor de tamanho N e armazenar os números lidos nesse vetor.
Em seguida, o programa deve utilizar a função realloc() para redimensionar o vetor para o dobro do tamanho original.
O programa deve preencher a segunda metade do vetor com os números lidos anteriormente, na ordem inversa em que foram lidos.
O programa deve imprimir o vetor final e liberar a memória alocada.*/

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
        printf("Erro na alocação de memória.");
        return 1;
    }

    printf("Digite %d números inteiros:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    vetor = (int *)realloc(vetor, 2 * n * sizeof(int)); // redimensionando vetor para o dobro do tamanho original
    if (vetor == NULL)
    {
        printf("Erro na realocação de memória.");
        return 1;
    }

    for (i = n; i < 2 * n; i++)
    {
        vetor[i] = vetor[2 * n - i - 1]; // preenchendo a segunda metade do vetor com os números lidos na ordem inversa
    }

    printf("Vetor final: ");
    for (i = 0; i < 2 * n; i++)
    {
        printf("%d ", vetor[i]);
    }

    free(vetor); // liberando memória alocada
    return 0;
}
