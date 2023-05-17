/*
 *Escreva um programa em C que solicita ao usuário o tamanho de um array de inteiros e,
 *em seguida, utiliza a função malloc para alocar dinamicamente memória para esse array.
 *Em seguida, preencha o array com valores informados pelo usuário e exiba os elementos na tela.
 */

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    int tam;

    printf("Tamanho do Array: ");
    scanf("%d", &tam);

    //int array[tam];

    // int* numeros = (int*)malloc(5 * sizeof(int));

    int *array = (int *)malloc(tam * sizeof(int));
    if(array == NULL){
        printf("[AVISO] Erro na alocação de memória!");
        return 1;
    }

    for (int i = 0; i < tam; i++)
    {
        printf("Array[%d]", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\n***Imprimindo o Array***");
    for (int i = 0; i < tam; i++)
    {
        printf("\nArray[%d] = %d", i + 1, array[i]);
    }

    free(array);
    return 0;
}
