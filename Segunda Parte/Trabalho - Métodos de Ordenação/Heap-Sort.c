/*Para exemplificar o Método Heap Sort, eu elaborei um cenário onde irá
ordenar o nivel de habilidade de um personagem de um jogo de video-game*/

/*Explicar o que são nós, pais, filhos, e folhas no Heap Binario*/

#include <stdio.h>
#include <locale.h>

// Função que troca os elementos de posição
void swap(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

// Função para criar um Heap Máximo
void maxHeapify(int xp[], int tamanho, int i)
{
    int maior = i;
    int proximoJogadorEsquerda = 2 * i + 1;
    int proximoJogadorDireita = 2 * i + 2;

    if (proximoJogadorEsquerda < tamanho && xp[proximoJogadorEsquerda] < xp[maior])
        maior = proximoJogadorEsquerda;

    if (proximoJogadorDireita < tamanho && xp[proximoJogadorDireita] < xp[maior])
        maior = proximoJogadorDireita;

    if (maior != i)
    {
        swap(&xp[i], &xp[maior]);
        maxHeapify(xp, tamanho, maior);
    }
}

// Função principal do Heap Sort
void heapSort(int xp[], int tamanho)
{
    // Construir o Heap Máximo
    for (int i = tamanho / 2 - 1; i >= 0; i--) //(tamanho / 2) - 1 vai ser o indice do pai mais alto
        maxHeapify(xp, tamanho, i);

    /*Para verificar todos os nós pais, utilizamos a expressão (tamanho / 2) - 1
    como índice inicial no loop. Isso permite que iteremos sobre todos os nós do heap e verifiquemos
    se seus filhos são maiores que eles.

    Se alterarmos o índice inicial para 0, o programa ainda funcionaria, mas percorreria também os nós
    folhas, que não precisam ser ordenados, diminuindo a eficiência do algoritmo.
    */

    // Realizando o Heap Sort
    for (int i = tamanho - 1; i > 0; i--)
    {
        swap(&xp[0], &xp[i]);
        maxHeapify(xp, i, 0);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int nivel[] = {104, 91, 68, 136, 178, 20};
    int tamanho = sizeof(nivel) / sizeof(nivel[0]); // Dividir o tamanho total em bytes pelo tamanho de um
                                                    // elemento individual dá o número de elementos no array

    printf("============================\n");
    printf("=== ScoreBoard do Jogo ===\n");
    printf("============================\n\n");

    printf("[Pré aplicação do Heap Sort]\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("----------------------------\n");
        printf("Jogador %d\n", i + 1);
        printf("Nível: [%d]\n", nivel[i]);
    }

    heapSort(nivel, tamanho);

    printf("\n============================\n");
    printf("=== ScoreBoard do Jogo ===\n");
    printf("============================\n\n");

    printf("\n[Pós aplicação do Heap Sort]\n");

     for (int i = 0; i < tamanho; i++)
    {
        printf("----------------------------\n");
        printf("Jogador %d\n", i + 1);
        printf("Nível: [%d]\n", nivel[i]);
    }

    printf("============================\n");

    return 0;
}