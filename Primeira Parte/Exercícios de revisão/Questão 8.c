/*Faça um programa que leia um número inteiro e verifique se o número é divisível por 5 e por 3 ao mesmo tempo.*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, somaDosAlgarismos = 0;
    char num[999]; //Numero digitado

    printf("Entrada do Numero: ");
        scanf("%s", num);

    int tamanhoNum = strlen(num); //"strlen(num);" utilizada para medir o tamanho da string e armazenar na variável "tamanhoNum"
    if (num[tamanhoNum-1] == '5' || num[tamanhoNum-1] == '0' ){//se "num" terminar com 5 ou 0 continua, se não ELSE...

        //laço para fazer a soma dos numeros digitados onde '\0' e o "ponto final" da string
        for(i = 0; num[i] != '\0'; i++){ //soma o algarismo recebe a variavel num que faz a subtração do numero em codigo ASCII
            somaDosAlgarismos += num[i] - '0'; //Ex.: '0' vale 48 em ASCII; '1' vale 49 em ASCII; 
        }                                     //Faz a subtração de 49 - 48 = 1 que e o caracter digitado pelo usuario

            if (somaDosAlgarismos % 3 == 0) {   //Verifica se é divisivel por 3

        printf("O numero é divisível por 5 e por 3 ao mesmo tempo.\n");

        } else {
            printf("O número não é divisível por 3 e 5 ao mesmo tempo.\n");
        }
    }else {
        printf("\nPara um número ser divisível por 3 e 5 ao mesmo tempo,");
        printf("\núltimo dígito deve ser 5 ou 0, e não e o caso do número digitado\n");
    }
    return 0;
}