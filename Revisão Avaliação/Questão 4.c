/*4 - Implemente um programa em C que utilize uma pilha para armazenar uma sequ�ncia
de n�meros inteiros inseridos pelo usu�rio. O programa deve permitir que o usu�rio
insira um n�mero na pilha, desempilhe o �ltimo n�mero inserido e imprima todos os
n�meros armazenados na pilha.*/

#include <stdio.h>
#include <locale.h>

#define MAX 100

typedef struct Pilha
{
    int topo;       // �ndice do topo da pilha
    int itens[MAX]; // vetor que armazena os itens da pilha
} Pilha;

// Inicializa a pilha, definindo o topo como -1 (pilha vazia)
void inicializarPilha(Pilha *pilha);

// Insere um valor na pilha, incrementando o topo
// Retorna 1 se a inser��o foi bem sucedida, 0 caso contr�rio
int empilharPilha(Pilha *pilha, int valor);

// Remove o item no topo da pilha, decrementando o topo
// Retorna o valor removido, ou -1 caso a pilha esteja vazia
int desempilharPilha(Pilha *pilha);

// Imprime todos os itens da pilha, a partir do topo
void printPilha(Pilha *pilha);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Pilha pilha;
    inicializarPilha(&pilha);
    int opcao = 1;
    int valor;

    while (opcao != 0)
    {
        printf("1 - Empilhar\n2 - Desempilhar\n0 - Sair\nEscolha uma op��o: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            empilharPilha(&pilha, valor);
            printPilha(&pilha);
            break;
        case 2:
            valor = desempilharPilha(&pilha);
            if (valor != -1)
            {
                printf("Valor desempilhado: %d\n", valor);
                printPilha(&pilha);
            }
            else
            {
                printf("A pilha est� vazia!\n");
            }
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Op��o inv�lida!\n");
        }
    }

    return 0;
}

void inicializarPilha(Pilha *pilha)
{
    pilha->topo = -1; // Inicializa o topo com -1 (pilha vazia)
}

int empilharPilha(Pilha *pilha, int valor)
{
    if (pilha->topo < MAX - 1) // Verifica se a pilha n�o est� cheia
    {
        pilha->topo++;                     // Incrementa o topo
        pilha->itens[pilha->topo] = valor; // Insere o valor no topo
        return 1;                          // Retorna 1, indicando que a inser��o foi bem sucedida
    }
    else
    {
        return 0; // Retorna 0, indicando que a pilha est� cheia
    }
}

void printPilha(Pilha *pilha) //Fun��o para mostrar a pilha
{
    printf("\nPilha: ");
    for (int i = pilha->topo; i >= 0; i--)
    {
        printf("%d ", pilha->itens[i]);
    }
    printf("\n");
}