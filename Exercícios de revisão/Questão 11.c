/* Informe o tipo de carro (A, B e C). Informe o percurso rodado em km e calcule o consumo
estimado, conforme o tipo, sendo (A=8, B=9 e C=12) km/litro*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int percursoRodado;
    char tipoCarro;
    printf("Informe o tipo de carro:\n");
    printf("A - Consumo de 8 km/litro\n");
    printf("B - Consumo de 9 km/litro\n");
    printf("C - Consumo de 12 km/litro\n");
    printf(">>> ");
    scanf(" %c", &tipoCarro);

    if (tipoCarro != 'A' && tipoCarro != 'a' && tipoCarro != 'B' && tipoCarro != 'b' && tipoCarro != 'C' && tipoCarro != 'c'){
    printf("\nTipo de carro inválido");
    return 0;
    }

    printf("\nInforme agora o percurso rodado: ");
    scanf("%d", &percursoRodado);

    if (tipoCarro == 'A' || tipoCarro == 'a'){
        percursoRodado *= 8;
    }

    if (tipoCarro == 'B' || tipoCarro == 'b'){
        percursoRodado *= 9;
    }

    if (tipoCarro == 'C' || tipoCarro == 'c'){
        percursoRodado *= 12;
    }

    printf("\nO consumo estimado é de %d Km/l", percursoRodado);
}