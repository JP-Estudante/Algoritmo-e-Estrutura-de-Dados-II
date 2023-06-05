#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// função que cria inicializa a lista
Node *createList()
{
    return NULL;
}

// Função que verifica se a lista está vazia
int is_empty(Node *head)
{
    return head == NULL;
}

// Função que cria um novo nó no início da lista
Node *insertBeginning(Node *head, int data)
{
    // Alocando memória
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;

    if (is_empty(head))
    {
        newNode->next = newNode;
        return newNode;
    }
    else
    {
        // Se a lista não for vazia
        Node *last = head;
        while (last->next != head)
        {
            last = last->next;
        }
        newNode->next = head;
        last->next = newNode;
        head = newNode; // atualiza o head da lista para o novo nó criado
        return head;
    }
}

// Função que imprime a lista
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

// Função para criação de item no final da lista
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

// Função que remove um item da lista
Node *removeNode(Node *head, int data)
{
    if (is_empty(head))
    {
        printf("A lista já está vazia");
        return head;
    }
    // Removendo o único registro da lista
    else if (head->data == data && head->next == head)
    {
        free(head);
        return NULL;
    }
    // Remoção de um nó no início ou no meio da lista
    else
    {
        // buscar o nó no início ou no meio da lista
        Node *previous = head;
        Node *current = head->next;

        while (current != head && current->data != data)
        {
            previous = current;
            current = current->next;
        }

        if (current == head && current->data != data)
        {
            printf("O valor solicitado não foi encontrado");
            return head;
        }

        // Se o nó é o primeiro da lista
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
        // Remove o nó da lista
        else
        {
            previous->next = current->next;
        }

        free(current);
        return head;
    }
}

// comente o que é importante
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
