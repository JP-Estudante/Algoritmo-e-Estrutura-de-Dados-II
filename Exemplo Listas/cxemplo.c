#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int value;
    struct Node* next;

} Node;

void insertNode(int value, Node** head){
    Node* newNode = (Node*) malloc(sizeof(Node));

    newNode->value = value;
    newNode->next = *head;

    *head = newNode; //deixando como primeiro elemento da lista
}

void printList(Node* head){ //função para exibir os itens da lista
    Node* current = head;

    while(current != NULL){
        printf("%d", current->value);//exibindo o item da lista

        current = current->next;//indo para o proximo item da lista
    }
}

int main(){

    Node* head = NULL;

    insertNode(30, &head);
    printf("Lista: ");
    printList(head);
    printf("\n");

    insertNode(60, &head);
    printList(head);
    printf("\n");

    insertNode(90, &head);
    printList(head);
    printf("\n");
}