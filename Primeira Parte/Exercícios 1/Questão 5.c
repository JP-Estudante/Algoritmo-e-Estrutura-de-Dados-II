/*Crie uma função que recebe uma string e um caractere e retorna a quantidade de vezes que o caractere aparece na string.*/

#include<stdio.h>
#include <string.h>
#include <locale.h>

int charVerificar(char string[]);
char caracter;
int countCaracter = 0;

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    char string[100];

    printf("Digite a palavra: ");
        scanf(" %s", string);

    printf("\nDigite o carácter para a busca: ");
        scanf(" %c", &caracter);

    countCaracter = charVerificar(string);

    printf("A palavra %s tem %d '%c'", string, countCaracter, caracter);  
}

int charVerificar (char string[]){
    for (int i = 0; i < (int) strlen(string); i++){
        if(string[i] == caracter){
            countCaracter++;
        }
    }
    return countCaracter;
}