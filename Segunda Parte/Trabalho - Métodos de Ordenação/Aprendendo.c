#include <stdio.h>
#include <locale.h>

// Função para trocar os elementos de posição
void swap(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

// Função para criar um Heap Maximo
void maxHeapify(int arr[], int tamanho, int i)
{
    /*Que nem em uma arvore binario no Heap Max do Heap Sort
    nós usamos a variavel 'esquerda' para calcular os indices
    dos filhos esquerdos de um nó no heap e o mesmo para os
    filhos direitos*/
    int maior = i;
    int esquerda = 2 * i + 1;
    // Em um array, a posição de índice 0 é reservada para a raiz do heap.
    //  2 * i + 1 é utilizado para calcular o indice do filho esquerdo
    //  2*i serve para "pular" ao próximo indice do nó e + 2 para chegar corretamnete ao indice'
    int direita = 2 * i + 2;

    if (esquerda < tamanho && arr[esquerda] > arr[maior])
        maior = esquerda;
    //'esquerda < tamanho' verifica se o indice esquerdo esta dentro do tamanho do array
    //'arr[esquerda] > arr[maior]' verifica se o filho esquerdo e maior que o pai
    //'maior = esquerda' se  for maior o 'maior' receberá o valor do filho esquerdo

    if (direita < tamanho && arr[direita] > arr[maior])
        maior = direita;

    if (maior != i) // Se o maior indice for diferente do indice atual
    {
        // Troca os elementos nos índices i e maior
        swap(&arr[i], &arr[maior]);

        // Chama recursivamente a função criarHeapMaximo para o novo índice maior
        maxHeapify(arr, tamanho, maior);
    }
}

// Função main do Heap Sort
void heapSort(int arr[], int tamanho)
{
    // Construindo o Heap máximo
    for (int i = tamanho / 2 - 1; i >= 0; i--)
        maxHeapify(arr, tamanho, i);

    // Realizando o Heap Sort
    for (int i = tamanho - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        maxHeapify(arr, i, 0);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int arr[] = {12, 11, 13, 5, 6, 7};
    int tamanho = sizeof(arr) / sizeof(arr[0]); // Dividir o tamanho total em bytes pelo tamanho de um elemento individual dá o número de elementos no array

    printf("Array antes de ordenar\n");
    for (int i = 0; i < tamanho; i++)
        printf("Array[%d]\n", arr[i]);

    heapSort(arr, tamanho);

    printf("Array após ordenar\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Array[%d]\n", arr[i]);
    }
    return 0;
}