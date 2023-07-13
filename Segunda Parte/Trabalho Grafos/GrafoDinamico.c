#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int id;
    struct Node *next;
} Node;

typedef struct
{
    Node **adjacencyList;
    int numNodes;
} DynamicGraph;

// Código para criar um novo grafo dinâmico com o número especificado de nós
DynamicGraph *createGraph(int numNodes)
{
    DynamicGraph *graph = (DynamicGraph *)malloc(sizeof(DynamicGraph));
    graph->numNodes = numNodes;
    graph->adjacencyList = (Node **)malloc(numNodes * sizeof(Node *));

    // Inicializa a lista de adjacência com NULL
    for (int i = 0; i < numNodes; i++)
    {
        graph->adjacencyList[i] = NULL;
    }

    return graph;
}

// Código para adicionar uma aresta direcionada
void addEdge(DynamicGraph *graph, int source, int target)
{
    if (source >= 0 && source < graph->numNodes && target >= 0 && target < graph->numNodes)
    {
        // Código da aresta
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->id = target;
        newNode->next = graph->adjacencyList[source];
        graph->adjacencyList[source] = newNode;

        // Código para a aresta bidirecional:
        /*
        Node* newReverseNode = (Node*)malloc(sizeof(Node));
        newReverseNode->id = source;
        newReverseNode->next = graph->adjacencyList[target];
        graph->adjacencyList[target] = newReverseNode;
        */
    }
}

void printGraph(DynamicGraph *graph)
{
    for (int i = 0; i < graph->numNodes; i++)
    {
        printf("Node %d: ", i);
        Node *currentNode = graph->adjacencyList[i];
        while (currentNode != NULL)
        {
            printf("%d ", currentNode->id);
            currentNode = currentNode->next;
        }
        printf("\n");
    }
}

void destroyGraph(DynamicGraph *graph)
{
    for (int i = 0; i < graph->numNodes; i++)
    {
        Node *currentNode = graph->adjacencyList[i];
        while (currentNode != NULL)
        {
            Node *nextNode = currentNode->next;
            free(currentNode);
            currentNode = nextNode;
        }
    }
    free(graph->adjacencyList);
    free(graph);
}

int main()
{
    DynamicGraph *graph = createGraph(4);

    addEdge(graph, 0, 1);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 0);

    printGraph(graph);

    destroyGraph(graph);

    return 0;
}
