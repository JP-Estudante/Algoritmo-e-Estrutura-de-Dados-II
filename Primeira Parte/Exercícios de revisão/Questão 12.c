/*Escrever um programa que leia, valores inteiros, até ser lido o valor-99. Quando isso acontecer
o programa deverá escrever a soma e a média dos valores lidos.*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num[99], i, soma = 0, count = 0;
    float media;
    for (i = 0; i < 99; i++){
        printf("Digite o %dº valor: ",i+1);
        scanf("%d",&num[i]);

        soma += num[i];
        count++;
    }
    printf("A soma: %d\n", soma);
    if (count > 0) {
        media = (float)soma/count;
        printf("A média: %.2f\n", media);
    } else {
        printf("Nenhum valor válido foi lido.\n");
    }
    return 0;
}