/*Crie uma struct chamada "Aluno" que tenha os seguintes campos:
matrícula, nome, nota1, nota2  e média. Em seguida, declare um array
de Aluno com tamanho 5 e leia os dados de 5 alunos, calculando a média
de cada um. Por fim, imprima a média de cada aluno na tela.*/

#include <stdio.h>
#include <locale.h>

#define MAX_ALUNOS 5

typedef struct
{
    int matricula, nota1, nota2;
    char nome[20];
    float media;
} Aluno;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Aluno aluno[MAX_ALUNOS];
    int i;

    for (i = 0; i < MAX_ALUNOS; i++)
    {
        printf("Matrícula: ");
        scanf("%d", &aluno[i].matricula);

        printf("Nome: ");
        fflush(stdin);
        fgets(aluno[i].nome, 20, stdin);

        printf("1º Nota: ");
        scanf("%d", &aluno[i].nota1);

        printf("2º Nota: ");
        scanf("%d", &aluno[i].nota2);

        aluno[i].media = (aluno[i].nota1 + aluno[i].nota2) / 2;
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nMatricula: %d", aluno[i].matricula);
        printf("\nNome: %s", aluno[i].nome);
        printf("\nMédia: %.2f", aluno[i].media);
    }
}