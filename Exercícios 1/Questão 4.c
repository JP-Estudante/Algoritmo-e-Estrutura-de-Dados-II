/*Crie uma função que recebe uma palavra e retorna a quantidade de vogais presentes.*/
#include <stdio.h>
#include <string.h>

int verificarVogais(char palavra[]);

int main(){
    char palavra[100];
    int vogais = 0;

    printf("Digite a palavra: ");
        scanf("%s", palavra);

    vogais = verificarVogais(palavra);

    printf("A palavra %s tem %d vogais", palavra, vogais);   
    return 0;
}

int verificarVogais(char palavra[]){
    int contaVogais = 0;
    for (int i = 0; i < (int) strlen(palavra); i++){
            if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            contaVogais++;
            }
    }
    return contaVogais;
}