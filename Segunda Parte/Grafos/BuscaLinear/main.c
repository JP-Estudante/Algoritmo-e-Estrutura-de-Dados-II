#include <stdio.h>
#include <stdlib.h>


int buscaLinear(int vetor[], int tamanho, int valor){
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == valor){
            //Retorna o índice do elemento encontrado
            return i;
        }
    }
    //Não encontrou o elemento, retorna -1
    return -1;
}



int main()
{
    int vetor[] = {10, 7, 3, 5, 2};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int vlr_procurado = 3;

    int indice = buscaLinear(vetor, tamanho, vlr_procurado);

    if(indice != -1){
        printf("O valor %d foi encontrado no indice %d.", vlr_procurado, indice);
    }
    else{
        printf("O valor %d não foi encontrado no array.", vlr_procurado);
    }


    return 0;
}
