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

int removeNode(Node** head){
    Node* oldHead = *head;

    int value = oldHead->value; //buscando o valor do registro a ser apagado
    *head = oldHead->next; //setando o proximo elemento como o nó inicial

    free(oldHead);//liberando a memória
    return value;
}

int main(){

    Node* head = NULL; //iniciando a lista vazia

    insertNode(30, &head);

    insertNode(60, &head);

    insertNode(90, &head);

    printf("Lista: ");
    printList(head);
    
    int removeValue = removeNode(head);
    
    printf("[AVISO] O %d foi removido", removeValue);

    printf("Lista Atual\n");
    printList(head);

    return 0;
}