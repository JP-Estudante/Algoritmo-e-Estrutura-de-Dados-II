#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 10

typedef struct
{
    int numNodes;
    double adjacencyMatrix[MAX_NODES][MAX_NODES];
} ProbabilisticGraph;

ProbabilisticGraph *createGraph(int numNodes)
{
    ProbabilisticGraph *graph = (ProbabilisticGraph *)malloc(sizeof(ProbabilisticGraph));
    graph->numNodes = numNodes;

    // Inicializa a matriz de adjacência com zeros
    for (int i = 0; i < numNodes; i++)
    {
        for (int j = 0; j < numNodes; j++)
        {
            graph->adjacencyMatrix[i][j] = 0.0;
        }
    }

    return graph;
}

void addEdge(ProbabilisticGraph *graph, int source, int target, double probability)
{
    if (source >= 0 && source < graph->numNodes && target >= 0 && target < graph->numNodes)
    {
        graph->adjacencyMatrix[source][target] = probability;
    }
}

void printGraph(ProbabilisticGraph *graph)
{
    for (int i = 0; i < graph->numNodes; i++)
    {
        for (int j = 0; j < graph->numNodes; j++)
        {
            printf("%lf ", graph->adjacencyMatrix[i][j]);
        }
        printf("\n");
    }
}

void destroyGraph(ProbabilisticGraph *graph)
{
    free(graph);
}

int main()
{
    ProbabilisticGraph *graph = createGraph(4);

    addEdge(graph, 0, 1, 0.2);
    addEdge(graph, 1, 2, 0.5);
    addEdge(graph, 2, 3, 0.8);

    printGraph(graph);

    destroyGraph(graph);

    return 0;
}
