/*Crie uma struct "Data" que contenha os campos dia, mês e ano.
Em seguida, declare uma variável do tipo "Data" e leia os valores do dia, mês e ano do usuário.
Valide se a data é válida (ou seja, se o dia está dentro do intervalo correto para o mês informado)
e imprima uma mensagem na tela informando se a data é válida ou não.*/

#include <stdio.h>
#include <locale.h>

typedef struct
{
    int dia, mes, ano;
} Data;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Data data;

    printf("\nDigite o dia, mês, ano;\nSeparados por espaço;\n\nEx: 16 04 2023;\n");
    printf("Dia Mês Ano: ");
    scanf("%d %d %d", &data.dia, &data.mes, &data.ano);

    // verifica se o dia ou mês são inválidos
    if ((data.dia < 1 || data.dia > 31) || (data.mes < 1 || data.mes > 12))
    {
        printf("Data Inválida");
        return 1;
    }
    // verifica se o dia é válido para meses com 31 dias
    else if (data.dia <= 31 && (data.mes == 1 || data.mes == 3 || data.mes == 5 || data.mes == 7 || data.mes == 8 || data.mes == 10 || data.mes == 12))
    {
        printf("Data Válida");
        return 0;
    }
    // verifica se o ano é bissexto e o dia é válido para fevereiro
    else if ((data.ano % 4 == 0 && data.ano % 100 != 0) || data.ano % 400 == 0)
    {
        if (data.mes == 2)
        {
            if (data.dia >= 1 && data.dia <= 29)
            {
                printf("Data Válida");
                return 0;
            }
            else
            {
                printf("Data Inválida");
                return 1;
            }
        }
        // se o mês não for fevereiro, verifica se o dia é válido para meses com 30 dias
        else
        {
            printf("Data Válida");
            return 0;
        }
    }
    // verifica se o dia é válido para meses com 30 dias
    else if (data.dia <= 30 && (data.mes == 4 || data.mes == 6 || data.mes == 9 || data.mes == 11))
    {
        printf("Data Válida");
        return 0;
    }
    // se não cair em nenhuma das condições anteriores, a data é inválida
    else
    {
        printf("Data Inválida");
        return 1;
    }
}
