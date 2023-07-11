#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int vetor[], int esquerda, int direita, int valor){
    while(esquerda <= direita){
        int meio = esquerda + (direita - esquerda) / 2;

        //Verifica se o valor está no meio do array
        if(vetor[meio] == valor){
            return meio;
        }

        //Se o valor for maior que o elemento do meio,
        //vai buscar na metade da direita do array
        if(vetor[meio] < valor){
            esquerda = meio + 1;
        }
        else{
            direita = meio;
        }
    }

    //Valor não existe no vetor
    return -1;
}



int main()
{
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int valorProcurado = 40;

    int indice = buscaBinaria(vetor, 0, tamanho - 1, valorProcurado);

    if(indice != -1){
        printf("O valor %d foi encontrado no indice %d", valorProcurado, indice);
    }
    else{
        printf("O valor %d não foi encontrado nesse array!", valorProcurado);
    }

    return 0;
}
