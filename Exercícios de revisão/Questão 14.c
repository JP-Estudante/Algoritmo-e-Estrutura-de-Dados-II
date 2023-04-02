/*Um comerciante comprou um produto e quer vend�-lo com lucro de 45% se o valor da compra for menor que 20,00; caso contr�rio, o lucro ser� de 30%. Entrar com o valor do produto e
imprimir o valor da venda.*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float porcent, valorC;
    
    printf("Informe o valor da Compra: ");
    scanf("%f",&valorC);

    if (valorC < 20){
        
        porcent = ((valorC * 45) / 100);
        porcent += valorC;
    
        printf("%.2f + %%45 = %.2f", valorC, porcent);
    }

    if (valorC >= 20){
        
        porcent = ((valorC * 30) / 100);
        porcent += valorC;
    
        printf("%.2f + %%30 = %.2f", valorC, porcent);
    }
    return 0;
}