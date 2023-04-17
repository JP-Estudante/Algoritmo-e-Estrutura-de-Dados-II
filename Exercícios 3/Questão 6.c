/*Implemente uma pilha  que armazene 5 n�meros inteiros
e possua as opera��es de empilhar (push), desempilhar (pop)
e imprimir o topo (top) da pilha.*/

#include <stdio.h>
#include <locale.h>

#define TAM_MAX 5

typedef struct
{
    int elementos[TAM_MAX];
    int topo; // indice do elemento no topo da pilha
} Pilha;

void push(Pilha *p, int elemento); // declara��o da fun��o push
int pop(Pilha *p);                 // declara��o da fun��o pop

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Pilha pilha;
    pilha.topo = -1; // inicializa o �ndice do topo como -1, indicando que a pilha est� vazia

    push(&pilha, 5); // empilha o elemento 5 na pilha
    push(&pilha, 6); // empilha o elemento 6 na pilha
    push(&pilha, 7); // empilha o elemento 7 na pilha
    push(&pilha, 8); // empilha o elemento 8 na pilha
    push(&pilha, 9); // empilha o elemento 9 na pilha

    printf("Pilha Atual:\n");
    for (int i = pilha.topo; i >= 0; i--) // percorre a pilha do topo at� a base, imprimindo os elementos
    {
        printf("    %d\n", pilha.elementos[i]);
    }

    printf("AVISO: Removendo elemento da pilha\n");
    pop(&pilha); // remove o elemento no topo da pilha

    if (pilha.topo == -1) // verifica se a pilha est� vazia
    {
        printf("Erro: Pilha Vazia\n");
        return -1;
    }

    printf("Pilha Atual:\n");
    for (int i = pilha.topo; i >= 0; i--) // percorre a pilha do topo at� a base, imprimindo os elementos
    {
        printf("    %d\n", pilha.elementos[i]);
    }
}

void push(Pilha *p, int elemento) // fun��o para empilhar elementos na pilha
{
    if (p->topo == TAM_MAX - 1) // verifica se a pilha est� cheia
    {
        printf("Erro: Pilha Cheia");
        return;
    }
    p->elementos[++p->topo] = elemento; // adiciona o elemento no topo da pilha
}

int pop(Pilha *p) // fun��o para desempilhar elementos da pilha
{
    if (p->topo == -1) // verifica se a pilha est� vazia
    {
        printf("Erro: Pilha Vazia");
        return -1;
    }
    int elemento = p->elementos[p->topo--]; // remove o elemento no topo da pilha e atualiza o �ndice do topo
    return elemento;
}