#include <stdio.h>
#include <locale.h>

#define MAX_SIZE 10

typedef struct
{
    int inteiros[MAX_SIZE], topo;
} Pilha;

void push(Pilha *p, int inteiro); // declaração da função push
int pop(Pilha *p);                // declaração da função pop
int isEmpty(Pilha *p);            // declaração da função isEmpty
void printPilha(Pilha *p);        // declaração da função printPilha

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Pilha pilha;
    pilha.topo = -1; // inicializa o topo da pilha com -1

    push(&pilha, 1); // insere o elemento 1 na pilha
    push(&pilha, 2); // insere o elemento 2 na pilha
    push(&pilha, 3); // insere o elemento 3 na pilha

    printf("Elemento removido: %d\n", pop(&pilha)); // remove o elemento do topo da pilha e o imprime na tela

    printf("Pilha vazia? %d\n", isEmpty(&pilha)); // verifica se a pilha está vazia e imprime o resultado na tela

    push(&pilha, 4); // insere o elemento 4 na pilha
    push(&pilha, 5); // insere o elemento 5 na pilha

    printPilha(&pilha); // imprime todos os elementos da pilha na tela

    return 0;
}

void push(Pilha *p, int inteiro)
{
    if (p->topo == MAX_SIZE - 1) // verifica se a pilha está cheia
    {
        printf("Erro: Pilha cheia!\n"); // imprime uma mensagem de erro
        return;
    }
    p->inteiros[++p->topo] = inteiro; // insere o elemento na pilha
}

int pop(Pilha *p)
{
    if (p->topo == -1) // verifica se a pilha está vazia
    {
        printf("Pilha vazia\n"); // imprime uma mensagem de erro
        return -1;
    }
    int elemento = p->inteiros[p->topo--]; // remove o elemento do topo da pilha
    return elemento;                       // retorna o elemento removido
}

int isEmpty(Pilha *p)
{
    return p->topo == -1; // retorna verdadeiro se a pilha estiver vazia, falso caso contrário
}

void printPilha(Pilha *p)
{
    if (isEmpty(p))
    {
        printf("Pilha vazia\n"); // verifica se a pilha está vazia e imprime uma mensagem de aviso
        return;
    }

    printf("Elementos: ");
    for (int i = p->topo; i >= 0; i--) // percorre todos os elementos da pilha do topo até a base
    {
        printf("%d ", p->inteiros[i]); // imprime o elemento atual
    }
    printf("\n");
}
