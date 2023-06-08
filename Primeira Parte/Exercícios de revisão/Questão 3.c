/*Faça um programa que calcule a área de um retângulo, cujos valores da base e altura são informados pelo usuário.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int area, base, altura;
    printf("informe a base: ");
    scanf("%d",&base);

    printf("informe a altua: ");
    scanf("%d",&altura);

    printf("\n\n");

    area = base * altura;

    printf("Base: %d * Altura: %d = Area: %d", base, altura, area);
}
