/*Faça um programa para ler um número ?x? e calcular e imprimir o valor de ?y? de acordo com as condições abaixo:

y = x , se x < 1;

y = 0 , se x = 1;

y = x² , se x > 1;*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x, y;

    printf("Numero X: ");
        scanf("%d", &x);

    if (x < 1){
        y = x;
    }else if(x == 1){
        y = 0;
    }else if(x > 1){
        y = x * x;
    }
    printf("%d", y);
}