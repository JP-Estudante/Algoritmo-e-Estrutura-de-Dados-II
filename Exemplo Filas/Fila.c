#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 10

typedef struct
{
    int dados[TAM];
    int inicio;
    int fim;

} Fila;

// Para inicializar a Fila
void inicializandoFila(Fila *fila)
{
    fila->inicio = -1;
    fila->fim = -1;
}

// Para verificar se a fila esta vazia
int verificaVazia(Fila *fila)
{
    return (fila->inicio == -1);
}

// Para verificar se a fila esta cheia
int verificaCheia(Fila *fila)
{
    return (fila->fim == TAM - 1);
}

// Para ADD um elemento na fila
void adicionarElemento(Fila *fila, int elemento)
{
    if (verificaCheia(fila))
    {
        printf("[AVISO] Fila Cheia");
        return;
    }

    if (verificaVazia(fila))
    {
        fila->inicio = 0;
    }

    fila->fim++;
    fila->dados[fila->fim] = elemento;
}

void exibirFila(Fila *fila)
{
    if (verificaVazia(fila))
    {
        printf("[AVISO] Fila Vazia");
        return;
    }

    printf("\nElementos na Fila\n");
    for (int i = fila->inicio; i <= fila->fim; i++)
    {
        printf("| %d |", fila->dados[i]);
    }
}

int removeElemento(Fila *fila)
{
    if (verificaVazia(fila))
    {
        printf("[AVISO] Fila atualmente vazia");
        return -1;
    }

    int elemento = fila->dados[fila->inicio];

    if (fila->inicio == fila->fim)
    {
        inicializandoFila(fila);
    }
    else
    {
        fila->inicio++;
    }
    return elemento;
}

int buscaPrimeiro(Fila *fila)
{
    if (verificaVazia(fila))
    {
        printf("[AVISO] A fila está vazia");
        return -1;
    }

    return fila->dados[fila->inicio];
}

int buscaTamanho(Fila *fila)
{
    if (verificaVazia(fila))
    {
        return 0;
    }
    return (fila->fim - fila->inicio + 1);
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    
    Fila fila1;
    inicializandoFila(&fila1);

    adicionarElemento(&fila1, 10);
    adicionarElemento(&fila1, 01);

    exibirFila(&fila1);
    printf("\n1º Elemento: %d", buscaPrimeiro(&fila1));

    printf("\n");

    removeElemento(&fila1);

    printf("\nTamanho da Fila: %d \n", buscaTamanho(&fila1));

    exibirFila(&fila1);
}