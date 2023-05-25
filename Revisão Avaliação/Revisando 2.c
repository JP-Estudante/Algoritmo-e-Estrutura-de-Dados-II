/*Escreva um programa em C que declare uma variável inteira e um ponteiro para essa variável. 
Atribua um valor à variável e imprima o valor tanto diretamente quanto através do ponteiro.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"PORTUGUESE");

    int numero;
    int *ponteiro = &numero;

    numero = 26;

    printf("%d\n",numero);
    printf("%d",*ponteiro);
}