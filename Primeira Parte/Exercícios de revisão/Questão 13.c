/* Solicitar a idade de várias pessoas e imprimir: Total de pessoas com menos de 21 anos. Total de
pessoas com mais de 50 anos. O programa termina quando idade for =-99*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int i = 0, idade[20] = {0}, menorT = 0, maiorT = 0;
    printf("Digite -99 para sair\n");
    while(i != 20){

        printf("Digite a %dª idade: ", i + 1);
            scanf("%d", &idade[i]);
        if (idade[i] == -99){
            break;
        }
        i++;
    }
    for (i = 0; i < 21; i++){
        if (idade[i] < 21){
            menorT += 1;
        }else if(idade[i] > 50){
            maiorT += 1;
        }
    }
    printf("\nTotal de pessoas com menos de 21 anos: %d", menorT);
    printf("\nTotal de pessoas com mais de 50 anos: %d", maiorT);
}