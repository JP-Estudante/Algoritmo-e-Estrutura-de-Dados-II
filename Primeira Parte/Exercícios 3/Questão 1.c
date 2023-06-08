/*Crie uma struct chamada "Pessoa" que tenha os seguintes campos:
nome, idade, altura e peso. Em seguida, declare uma variável dessa
struct e preencha-a com informações de uma pessoa fictícia. Por fim,
imprima os dados da pessoa na tela.*/
#include <stdio.h>

struct Pessoa
{
    char nome[20];
    int idade, altura, peso;
};

int main()
{
    struct Pessoa pessoa;

    printf("Nome: ");
    fgets(pessoa.nome, 20, stdin);
    fflush(stdin);

    printf("Idade: ");
    scanf("%d", &pessoa.idade);

    printf("Altura[cm]: ");
    scanf("%d", &pessoa.altura);

    printf("Peso:[kg]: ");
    scanf("%d", &pessoa.peso);

    printf("\n\n**PESSOA**\n\nNome: %s", pessoa.nome);
    printf("Idade: %d", pessoa.idade);
    printf("\nAltura[cm]: %d", pessoa.altura);
    printf("\nPeso[kg]: %d", pessoa.peso);
}