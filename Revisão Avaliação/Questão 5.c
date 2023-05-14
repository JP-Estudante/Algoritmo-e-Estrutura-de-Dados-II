/*5 - Escreva um programa em linguagem C que implemente uma lista simplesmente encadeada
 para armazenar nomes de alunos. O programa deve permitir as seguintes operações:

- Inserir um nome na lista;
- Excluir um nome da lista;
- Imprimir os nomes presentes na lista.*/
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
    // Cria um novo nó
    Node *newNode = (Node *)malloc(sizeof(Node));
    strcpy(newNode->nome, nome);
    newNode->next = NULL;

    // Se a lista estiver vazia, o novo nó se torna o primeiro nó
    if (lista->head == NULL)
    {
        lista->head = newNode;
    }
    else
    {
        // Encontra o último nó da lista
        Node *last = lista->head;
        while (last->next != NULL)
        {
            last = last->next;
        }
        // Atualiza o ponteiro do último nó para apontar para o novo nó
        last->next = newNode;
    }
}

void excluirNome(Lista *lista, char *nome)
{
    if (lista->head == NULL)
    {
        printf("Lista vazia. Nenhum nome para excluir.\n\n");
        return;
    }

    Node *current = lista->head;
    Node *previous = NULL;

    // Verifica se o primeiro nó contém o nome a ser excluído
    if (strcmp(current->nome, nome) == 0)
    {
        lista->head = current->next;
        free(current);
        return;
    }

    // Percorre a lista para encontrar o nó com o nome a ser excluído
    while (current != NULL)
    {
        if (strcmp(current->nome, nome) == 0)
        {
            previous->next = current->next;
            free(current);
            return;
        }
        previous = current;
        current = current->next;
    }

    // Caso o nome não seja encontrado na lista
    printf("Nome '%s' não encontrado na lista.\n", nome);
}

void imprimirLista(Lista *lista)
{
    if (lista->head == NULL)
    {
        printf("Lista vazia. Nenhum nome para imprimir.\n");
        return;
    }

    Node *current = lista->head;
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

int verificarNome(Lista *lista, char *nome)
{
    Node *current = lista->head;

    while (current != NULL)
    {
        if (strcmp(current->nome, nome) == 0)
        {
            return 1; // O nome foi encontrado na lista
        }
        current = current->next;
    }

    // O nome não foi encontrado na lista
    return 0;
}

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    Lista minhaLista;
    iniciarLista(&minhaLista);
    int opcao;
    char nome[50];

    do
    {

        printf("Menu de opções...");
        printf("\n1 - Adicionar nomes a lista");
        printf("\n2 - Remover nome da lista");
        printf("\n3 - Exibir nome da lista");
        printf("\n>>> ");
        scanf("%d", &opcao);
        getchar(); // Consumir o caractere de nova linha

        switch (opcao)
        {
        case 1:

            printf("\nDigite 'r' para retornar ao menu!");
            printf("\nDigite o nome: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = '\0'; // para remover o caracter de nova linha

            while (strcmp(nome, "r") != 0)
            {
                inserirNome(&minhaLista, nome);

                printf("\nDigite o nome: ");
                fgets(nome, sizeof(nome), stdin);
                nome[strcspn(nome, "\n")] = '\0'; // para remover o caracter de nova linha
            }
            printf("\n");
            system("pause");
            system("cls");
            break;

        case 2:
            printf("\nDigite 'r' para retornar ao menu!");
            printf("\nNome a excluir: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = '\0'; // para remover o caracter de nova linha

            if (strcmp(nome, "r") == 0)
            {
                printf("Retornando ao menu...\n");
                printf("\n");
                system("pause");
                system("cls");
                break;
            }

            if (verificarNome(&minhaLista, nome))
            {
                excluirNome(&minhaLista, nome);
                printf("Nome: '%s' excluído.\n", nome);
                printf("\n");
                system("pause");
                system("cls");
            }
            else
            {
                printf("O nome '%s' não foi encontrado na lista.\n", nome);
                printf("\n");
                system("pause");
                system("cls");
            }
            break;

        case 3:
            printf("\n**Nomes na Lista**\n");
            imprimirLista(&minhaLista);

            printf("\n");
            system("pause");
            system("cls");

            break;
        }
    } while (opcao != 0);
}