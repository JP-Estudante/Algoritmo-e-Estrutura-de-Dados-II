/*Faça um programa que lê a operação (+,-,/,*) e dois números e exibe o resultado.*/

#include <stdlib.h>
#include <stdio.h>


int main(){
    int num1, num2, result;
    char operacao;
    printf("Insira um numero: ");
        scanf("%d",&num1);

    printf("\nInsira um outro numero: ");
        scanf("%d",&num2);

        printf("\nUse os sinais\n");
        printf("+ [Para Soma]");
        printf("\n- [Para Subtracao]");
        printf("\n* [Para Multiplicacao]");
        printf("\n/ [Para Divisao]");
        printf("\n>>> ");
        scanf(" %c", &operacao);
        
        switch (operacao)
        {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d", num1, num2, result);
            break;
        
        case '-':
            result = num1 - num2;
            printf("%d - %d = %d", num1, num2, result);
            break;
        
        case '*':
            result = num1 * num2;
            printf("%d * %d = %d", num1, num2, result);
            break;
        
        case '/':
            result = num1 / num2;
            printf("%d / %d = %d", num1, num2, result);
            break;
        
        default:
            printf("Operacao Invalida");
            return 0;
        }

      //printf("\nResultado: %.d\n", result);
      return 0;
}