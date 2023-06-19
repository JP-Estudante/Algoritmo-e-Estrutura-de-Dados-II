/*Para exemplificar o M�todo Heap Sort, eu elaborei um cen�rio onde ir�
ordenar o nivel de habilidade de um personagem de um jogo de video-game*/

/*Explicar o que s�o n�s, pais, filhos, e folhas no Heap Binario*/

#include <stdio.h>
#include <locale.h>

// Fun��o que troca os elementos de posi��o
void swap(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

// Fun��o para criar um Heap M�ximo
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

// Fun��o principal do Heap Sort
void heapSort(int xp[], int tamanho)
{
    // Construir o Heap M�ximo
    for (int i = tamanho / 2 - 1; i >= 0; i--) //(tamanho / 2) - 1 vai ser o indice do pai mais alto
        maxHeapify(xp, tamanho, i);

    /*Para verificar todos os n�s pais, utilizamos a express�o (tamanho / 2) - 1
    como �ndice inicial no loop. Isso permite que iteremos sobre todos os n�s do heap e verifiquemos
    se seus filhos s�o maiores que eles.

    Se alterarmos o �ndice inicial para 0, o programa ainda funcionaria, mas percorreria tamb�m os n�s
    folhas, que n�o precisam ser ordenados, diminuindo a efici�ncia do algoritmo.
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
                                                    // elemento individual d� o n�mero de elementos no array

    printf("============================\n");
    printf("=== ScoreBoard do Jogo ===\n");
    printf("============================\n\n");

    printf("[Pr� aplica��o do Heap Sort]\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("----------------------------\n");
        printf("Jogador %d\n", i + 1);
        printf("N�vel: [%d]\n", nivel[i]);
    }

    heapSort(nivel, tamanho);

    printf("\n============================\n");
    printf("=== ScoreBoard do Jogo ===\n");
    printf("============================\n\n");

    printf("\n[P�s aplica��o do Heap Sort]\n");

     for (int i = 0; i < tamanho; i++)
    {
        printf("----------------------------\n");
        printf("Jogador %d\n", i + 1);
        printf("N�vel: [%d]\n", nivel[i]);
    }

    printf("============================\n");

    return 0;
}