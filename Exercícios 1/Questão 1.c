/*Crie um programa que tenha uma função que calcula a média aritmética de três números.*/

#include <stdio.h>

int num, num2, num3, total = 0;
int function();

int main(){
    
    printf("Informe o primeiro numero: ");
        scanf("%d",&num);

    printf("Informe o segundo numero: ");
        scanf("%d",&num);

    printf("Informe o terceiro numero: ");
        scanf("%d",&num);

    function();

}

int function(){
    
    total = num + num2 + num3;
    total / 3;

    printf("A media aritimetica e: %d",total);

    return total;
}