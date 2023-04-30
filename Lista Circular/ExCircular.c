#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// fun��o que cria inicializa a lista
Node *createList()
{
    return NULL;
}

// Fun��o que verifica se a lista est� vazia
int is_empty(Node *head)
{
    return head == NULL;
}

// Fun��o que cria um novo n� no in�cio da lista
Node *insertBeginning(Node *head, int data)
{
    // Alocando mem�ria
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;

    if (is_empty(head))
    {
        newNode->next = newNode;
        return newNode;
    }
    else
    {
        // Se a lista n�o for vazia
        Node *last = head;
        while (last->next != head)
        {
            last = last->next;
        }
        newNode->next = head;
        last->next = newNode;
        head = newNode; // atualiza o head da lista para o novo n� criado
        return head;
    }
}

// Fun��o que imprime a lista
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
            printf("\n%d", current->data);
            current = current->next;
        } while (current != head);
        printf("\n");
    }
}

// Fun��o para cria��o de item no final da lista
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
        while (last->next != head)
        {
            last = last->next;
        }
        newNode->next = head;
        last->next = newNode;
        return head;
    }
}

// Fun��o que remove um item da lista
Node *removeNode(Node *head, int data)
{
    if (is_empty(head))
    {
        printf("A lista j� est� vazia");
        return head;
    }
    // Removendo o �nico registro da lista
    else if (head->data == data && head->next == head)
    {
        free(head);
        return NULL;
    }
    // Remo��o de um n� no in�cio ou no meio da lista
    else
    {
        // buscar o n� no in�cio ou no meio da lista
        Node *previous = head;
        Node *current = head->next;

        while (current != head && current->data != data)
        {
            previous = current;
            current = current->next;
        }

        if (current == head && current->data != data)
        {
            printf("O valor solicitado n�o foi encontrado");
            return head;
        }

        // Se o n� � o primeiro da lista
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
        // Remove o n� da lista
        else
        {
            previous->next = current->next;
        }

        free(current);
        return head;
    }
}

// comente o que � importante
int main()
{
    Node *head = createList();

    // inserindo dados na lista
    head = insertBeginning(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);

    // Imprime a lista
    printf("Lista: ");
    printList(head);

    // Remove um elemento da lista
    printf("\nRemovendo Elemento\n");
    head = removeNode(head, 10);

    // Imprime a lista novamente
    printf("Lista: ");
    printList(head);

    return 0;
}
