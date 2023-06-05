/*Faça um programa que receba uma temperatura em Celsius e converta para Fahrenheit.*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float tempC, tempF;

    printf("Temperatura em Celsius: ");
    scanf("%f", &tempC);

    tempF = (tempC * 9/5) + 32;

    printf("%.2f °C equivale a %.2f °F.", tempC, tempF);
}
