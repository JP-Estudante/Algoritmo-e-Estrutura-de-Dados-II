#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct Node
{
    char nome[50];
    struct Node *next;
} Node;

typedef struct Lista
{
    Node *head;
} Lista;

void iniciarLista(Lista *lista)
{
    lista->head = NULL;
}

void inserirNome(Lista *lista, char *nome)
{
    // Cria um novo n�
    Node *newNode = (Node *)malloc(sizeof(Node));
    strcpy(newNode->nome, nome);
    newNode->next = NULL;

    // Se a lista estiver vazia, o novo n� se torna o primeiro n�
    if (lista->head == NULL)
    {
        lista->head = newNode;
    }
    else
    {
        // Encontra o �ltimo n� da lista
        Node *last = lista->head;
        while (last->next != NULL)
        {
            last = last->next;
        }
        // Atualiza o ponteiro do �ltimo n� para apontar para o novo n�
        last->next = newNode;
    }
}

void excluirNome(Lista *lista, char *nome)
{
    if (lista->head == NULL)
    {
        printf("Lista vazia. Nenhum nome para excluir.\n");
        return;
    }

    Node *current = lista->head;
    Node *previous = NULL;

    // Verifica se o primeiro n� cont�m o nome a ser exclu�do
    if (strcmp(current->nome, nome) == 0)
    {
        lista->head = current->next;
        free(current);
        printf("Nome '%s' exclu�do com sucesso.\n", nome);
        return;
    }

    // Percorre a lista para encontrar o n� com o nome a ser exclu�do
    while (current != NULL)
    {
        if (strcmp(current->nome, nome) == 0)
        {
            previous->next = current->next;
            free(current);
            printf("Nome '%s' exclu�do com sucesso.\n", nome);
            return;
        }
        previous = current;
        current = current->next;
    }

    // Caso o nome n�o seja encontrado na lista
    printf("Nome '%s' n�o encontrado na lista.\n", nome);
}

void imprimirLista(Lista *lista)
{
    if (lista->head == NULL)
    {
        printf("Lista vazia. Nenhum nome para imprimir.\n");
        return;
    }

    Node *current = lista->head;
    printf("Nomes na lista:\n");
    while (current != NULL)
    {
        printf("%s\n", current->nome);
        current = current->next;
    }
}

void liberarLista(Lista *lista)
{
    Node *current = lista->head;
    Node *next;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }

    lista->head = NULL;
}

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    Lista minhaLista;
    iniciarLista(&minhaLista);

    inserirNome(&minhaLista, "Jo�o");
    inserirNome(&minhaLista, "Maria");
    inserirNome(&minhaLista, "Pedro");

    imprimirLista(&minhaLista);

    excluirNome(&minhaLista, "Maria");
}