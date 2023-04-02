/*Preencha um vetor de inteiros com 10 posições com números aleatórios entre 0 e 100.*/

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

#define Max 101

int main(){
    setlocale(LC_ALL,"Portuguese");
        int vetorInt[10];
        srand(time(NULL));

    for (int i = 0; i < 10; i++){
        vetorInt[i] = rand() % Max;
    }

    for (int i = 0; i < 10; i++){
        printf("\nVetor[%d]: %d",i+1 ,vetorInt[i]);
    }

    return 0;
}