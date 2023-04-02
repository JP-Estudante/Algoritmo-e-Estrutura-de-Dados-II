/*Faça um programa que calcule a soma dos números de 1 a 100.*/

#include <stdlib.h>
#include <stdio.h>

int main(){

int soma = 0, i = 1;

    for (i = 1; i <= 100; i++) {
        soma += i;
        printf("%d + %d = %d\n", i, soma, soma);
    }
}
