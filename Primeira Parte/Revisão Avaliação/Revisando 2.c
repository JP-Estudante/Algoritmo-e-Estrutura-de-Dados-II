/*Escreva um programa em C que declare uma vari�vel inteira e um ponteiro para essa vari�vel. 
Atribua um valor � vari�vel e imprima o valor tanto diretamente quanto atrav�s do ponteiro.*/

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