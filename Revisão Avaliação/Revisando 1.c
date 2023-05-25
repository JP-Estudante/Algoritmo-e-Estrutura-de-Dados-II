/*
 *Escreva um programa em C que solicita ao usu�rio o n�mero de elementos
 *de um array de float e utiliza a fun��o calloc para alocar dinamicamente
 *mem�ria para esse array. Em seguida, preencha o array com valores informados
 *pelo usu�rio e exiba a soma dos elementos na tela.
 */

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int tam;
    printf("Tamanho do array: ");
    scanf("%d", &tam);

    float *array = (float *)calloc(tam, sizeof(float));

    if (array == NULL)
    {
        printf("[Aviso] Erro na aloca��o da mem�ria!");
        return 1;
    }

    for (int i = 0; i < tam; i++)
    {
        printf("Array[%d]: ", i + 1);
        scanf("%f", &array[i]);
    }

    printf("\n***Imprimindo o Array***");
    for (int i = 0; i < tam; i++)
    {
        printf("\nArray[%d]: %.1f", i + 1, array[i]);
    };
}