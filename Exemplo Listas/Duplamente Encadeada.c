#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *prev;
    struct Node *next;

} Node;

void insert(Node** head, int value){
    Node* newNode = (struct Node*) malloc(sizeof(Node));

    newNode->value = value;

    newNode->next = *head;

    newNode->prev = NULL;

    if(*head != NULL){
        (*head)->prev = newNode;
    }
    *head = newNode;
}

void printList(Node* head){
    printf("Lista: ");

    while (head != NULL)
    {
        printf("%d", head->value);
        head = head->next;
    }
    printf("\n");
}

int main(){
    Node* head = NULL;

    insert(&head, 30);
    insert(&head, 20);
    insert(&head, 10);

    printList(head);

    return 0;
}