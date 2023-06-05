/*Faça uma função em C que receba um número inteiro e imprima a tabuada de multiplicação desse número até o 10.*/

#include <stdio.h>

int num;
int tabuada();

int main(){
    printf("Informe um numero: ");
        scanf("%d", &num);
    
    tabuada();
}

int tabuada(){
    int resul;
    for (int i = 0; i < 11; i++){
        resul = i * num;
        printf("%d x %d = %d\n", i, num, resul);
    }

    return resul;
}