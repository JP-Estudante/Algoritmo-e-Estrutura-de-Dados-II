/*Crie uma struct "Data" que contenha os campos dia, m�s e ano.
Em seguida, declare uma vari�vel do tipo "Data" e leia os valores do dia, m�s e ano do usu�rio.
Valide se a data � v�lida (ou seja, se o dia est� dentro do intervalo correto para o m�s informado)
e imprima uma mensagem na tela informando se a data � v�lida ou n�o.*/

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

    printf("\nDigite o dia, m�s, ano;\nSeparados por espa�o;\n\nEx: 16 04 2023;\n");
    printf("Dia M�s Ano: ");
    scanf("%d %d %d", &data.dia, &data.mes, &data.ano);

    // verifica se o dia ou m�s s�o inv�lidos
    if ((data.dia < 1 || data.dia > 31) || (data.mes < 1 || data.mes > 12))
    {
        printf("Data Inv�lida");
        return 1;
    }
    // verifica se o dia � v�lido para meses com 31 dias
    else if (data.dia <= 31 && (data.mes == 1 || data.mes == 3 || data.mes == 5 || data.mes == 7 || data.mes == 8 || data.mes == 10 || data.mes == 12))
    {
        printf("Data V�lida");
        return 0;
    }
    // verifica se o ano � bissexto e o dia � v�lido para fevereiro
    else if ((data.ano % 4 == 0 && data.ano % 100 != 0) || data.ano % 400 == 0)
    {
        if (data.mes == 2)
        {
            if (data.dia >= 1 && data.dia <= 29)
            {
                printf("Data V�lida");
                return 0;
            }
            else
            {
                printf("Data Inv�lida");
                return 1;
            }
        }
        // se o m�s n�o for fevereiro, verifica se o dia � v�lido para meses com 30 dias
        else
        {
            printf("Data V�lida");
            return 0;
        }
    }
    // verifica se o dia � v�lido para meses com 30 dias
    else if (data.dia <= 30 && (data.mes == 4 || data.mes == 6 || data.mes == 9 || data.mes == 11))
    {
        printf("Data V�lida");
        return 0;
    }
    // se n�o cair em nenhuma das condi��es anteriores, a data � inv�lida
    else
    {
        printf("Data Inv�lida");
        return 1;
    }
}
