#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura para representar um n� adjacente
struct AdjListNode
{
    int dest;
    struct AdjListNode *next;
};

// Estrutura para representar a lista de adjac�ncia de um v�rtice
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

// Fun��o para criar um novo n� adjacente
struct AdjListNode *newAdjListNode(int dest)
{
    struct AdjListNode *newNode = (struct AdjListNode *)malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

// Fun��o para criar um grafo com um n�mero espec�fico de v�rtices
struct Graph *createGraph(int numVertices)
{
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->numVertices = numVertices;

    // Cria um array de listas de adjac�ncia
    graph->array = (struct AdjList *)malloc(numVertices * sizeof(struct AdjList));

    // Inicializa cada lista de adjac�ncia como vazia
    int i;
    for (i = 0; i < numVertices; ++i)
        graph->array[i].head = NULL;

    return graph;
}

// Fun��o para adicionar uma aresta n�o direcionada ao grafo
void addEdge(struct Graph *graph, int src, int dest)
{
    // Adiciona uma aresta do v�rtice src para o v�rtice dest
    struct AdjListNode *newNode = newAdjListNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;

    // Como o grafo � n�o direcionado, tamb�m adicionamos uma aresta de dest para src
    newNode = newAdjListNode(src);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}

// Fun��o para imprimir o grafo
void printGraph(struct Graph *graph)
{
    int v;
    for (v = 0; v < graph->numVertices; ++v)
    {
        struct AdjListNode *temp = graph->array[v].head;
        printf("Lista de adjac�ncia do v�rtice %d\n", v);
        while (temp)
        {
            printf(" -> %d", temp->dest);
            temp = temp->next;
        }
        printf("\n");
    }
}

// Fun��o principal
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
