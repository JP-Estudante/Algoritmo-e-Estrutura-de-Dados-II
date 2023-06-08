/*Faça um programa que verifique se um número informado pelo usuário é par ou ímpar.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int num;

    printf("Numero: ");
        scanf("%d", &num);

        if (num %2 == 0){
            printf("Numero Par");
        }else{
            printf("Numero Impar");
        }
}
