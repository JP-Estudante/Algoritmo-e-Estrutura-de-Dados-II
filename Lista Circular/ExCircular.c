#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    struct Node *next;
} Node;

// fun??o que cria inicializa a lista
Node *createList()
{
    return NULL;
}

// Fun??o que verificar? se a lista esta vazia
int is_empty(Node *head)
{
    return head == NULL;
}

// Fun??o que cria um novo n? no inicio da lista
Node *insertBeginnig(Node *head, int data)
{
    // Alocando mem?ria
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;

    if (is_empty(head))
    {
        newNode->next = newNode;
        return newNode;
    }
    else
    {
        // Se a lista n?o for vazia
        Node *last = head;
        while (last->next != head)
        {
            last = last->next;
        }
        newNode->next = head;
        last->next = newNode;
        return newNode;
    }
}

void printList(Node *head)
{
    if (is_empty(head))
    {
        printf("Lista Vazia");
    }
    else
    {
        Node *current = head;

        do
        {
            printf("%d", current->data);
            current = current->next;
        } while (current != head);
        printf("\n");
    }
}

// Fun??o para cria??o de item no final da lista
Node *insertEnd(Node *head, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    if (is_empty(head))
    {
        newNode->next = newNode;
        return newNode;
    }
    else
    {
        Node *last = head;
    }
    while (last->next != head)
    {
        last = last->next;
    }

    newNode->next = head;
    last->next = newNode;
    return head;
}

// fun??o que remove um item da lista

Node *removeNode(Node *head, int data)
{
    if (is_empty(head))
    {
        printf("A lista j? esta vazia");
        return head;
    }
    // Removendo o ?nico registro da lista
    else if (head->data == data && head->next == head)
    {
        free(head);
        return NULL;
    }
    // Remo??o de um n? no inicio ou no meio da lista
    else
    {
        // buscar o n? no inicio oi no meio da lista
        Node *previous = head;
        Node *current = head->next;

        while (current != head && current->data != data)
        {
            previous = current;
            current = current->next;
        }

        if (current == head && current->data != data)
        {
            printf("O valor solicitado n?o foi encontrado");
            return head;
        }

        // Se o n? ? o primeiro da lista
        else if (current == head)
        {
            Node *last = head;

            while (last->next != head)
            {
                last = last->next;
            }
            head = head->next;
            last->next = head;
        }
        // Remove o n? da lista
        else
        {
            previous->next = current->next;
        }

        free(current);
        return head;
    }
}

int main()
{
    Node *head = createList();

    // inserindo dados na lista
    head = insertBeginnig(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);

    printf("Lista: ");
    printList(head);

    printf("Removendo Elemento");
    head = removeNode(head, 10);

    printf("Lista: ");
    printList(head);

    return 0;
}