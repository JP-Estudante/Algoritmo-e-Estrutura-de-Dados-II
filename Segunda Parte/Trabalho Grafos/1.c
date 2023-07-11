#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura para representar um nó adjacente
struct AdjListNode
{
    int dest;
    struct AdjListNode *next;
};

// Estrutura para representar a lista de adjacência de um vértice
struct AdjList
{
    struct AdjListNode *head;
};

// Estrutura para representar um grafo
struct Graph
{
    int numVertices;
    struct AdjList *array;
};

// Função para criar um novo nó adjacente
struct AdjListNode *newAdjListNode(int dest)
{
    struct AdjListNode *newNode = (struct AdjListNode *)malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

// Função para criar um grafo com um número específico de vértices
struct Graph *createGraph(int numVertices)
{
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->numVertices = numVertices;

    // Cria um array de listas de adjacência
    graph->array = (struct AdjList *)malloc(numVertices * sizeof(struct AdjList));

    // Inicializa cada lista de adjacência como vazia
    int i;
    for (i = 0; i < numVertices; ++i)
        graph->array[i].head = NULL;

    return graph;
}

// Função para adicionar uma aresta não direcionada ao grafo
void addEdge(struct Graph *graph, int src, int dest)
{
    // Adiciona uma aresta do vértice src para o vértice dest
    struct AdjListNode *newNode = newAdjListNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;

    // Como o grafo é não direcionado, também adicionamos uma aresta de dest para src
    newNode = newAdjListNode(src);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}

// Função para imprimir o grafo
void printGraph(struct Graph *graph)
{
    int v;
    for (v = 0; v < graph->numVertices; ++v)
    {
        struct AdjListNode *temp = graph->array[v].head;
        printf("Lista de adjacência do vértice %d\n", v);
        while (temp)
        {
            printf(" -> %d", temp->dest);
            temp = temp->next;
        }
        printf("\n");
    }
}

// Função principal
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numVertices = 5;
    struct Graph *graph = createGraph(numVertices);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    printGraph(graph);

    return 0;
}
