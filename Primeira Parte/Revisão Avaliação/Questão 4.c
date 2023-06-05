/*4 - Implemente um programa em C que utilize uma pilha para armazenar uma sequência
de números inteiros inseridos pelo usuário. O programa deve permitir que o usuário
insira um número na pilha, desempilhe o último número inserido e imprima todos os
números armazenados na pilha.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 100

typedef struct
{
    int topo;
    int base[MAX];
} Pilha;

void inicializandoPilha(Pilha *pilha)
{
    pilha->topo = -1; // pilha topo -1
}

int pilhaVazia(Pilha *pilha)
{
    return pilha->topo == -1;
}

int pilhaCheia(Pilha *pilha)
{
    return pilha->topo == MAX - 1;
}

void empilhar(Pilha *pilha, int valor)
{
    if (pilhaCheia(pilha))
        printf("[AVISO] A pilha está cheia");
    else
    {
        // Adicionando valor a pilha
        pilha->topo++;
        pilha->base[pilha->topo] = valor;
    }
}

int desempilhar(Pilha *pilha)
{
    if (pilhaVazia(pilha))
    {
        printf("[AVISO] A pilha está vazia");
        return -1;
    }
    else
    {
        // Removendo o topo da pilha
        int valor = pilha->base[pilha->topo];
        pilha->topo--;

        printf("[AVISO] %d desempilhado\n", valor);
        return valor;
    }
}

void imprimirPilha(Pilha *pilha)
{
    for (int i = 0; i <= pilha->topo; i++)
    {
        printf("%d ", pilha->base[i]);
    }
    printf("\n\n");
}

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    Pilha numero;
    inicializandoPilha(&numero);

    int opcao, valorInserido;

    do
    {
        printf("1 - Insira um numero");
        printf("\n2 - Desempilhar topo");
        printf("\n3 - Imprimir pilha");
        printf("\n0 - Sair");
        printf("\n>>> ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Insira um valor: ");
            scanf("%d", &valorInserido);

            empilhar(&numero, valorInserido);

            printf("[AVISO] %d Empilhado\n\n", valorInserido);

            system("pause");
            system("cls");
            break;

        case 2:
            valorInserido = desempilhar(&numero);

            system("pause");
            system("cls");
            break;

        case 3:
            if (pilhaVazia(&numero))
            {
                printf("[AVISO] A pilha está vazia\n\n");
                system("pause");
                system("cls");
            }
            else
            {
                printf("***Pilha***\n\n");
                imprimirPilha(&numero);

                printf("\n\n");
                system("pause");
                system("cls");
            }
            break;

        case 0:
            printf("[AVISO] Finalizando Programa!\n\n");
            break;

        default:
            printf("[AVISO] Opção Inválida!\n\n");
            system("pause");
            system("cls");
        }

    } while (opcao != 0);
}