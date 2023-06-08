/*Faça um programa que calcule a média de 10 números informados pelo usuário utilizando o comando while.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int i = 1, num, media = 0, result;
    
    while(i != 11){
        
        printf("\nInforme o %d numero: ",i);
        scanf("%d", &num);
        
        media = num + media;
        
        i++;
    }
    result = media / 10;  
    printf("A media dos 10 numeros e: %d",result);
}