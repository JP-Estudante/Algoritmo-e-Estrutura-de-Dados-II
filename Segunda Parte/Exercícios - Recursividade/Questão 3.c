/*3 - Fibonacci dos números de camisa:
Suponha que cada jogador de um time de futebol tenha um número de camisa associado.
A sequência de números de camisa segue a sequência de Fibonacci, onde cada número é
a soma dos dois anteriores (exceto os dois primeiros que são 1). Escreva uma função
recursiva em C para imprimir os N primeiros números de camisa da equipe.*/

#include <stdio.h>
#include <locale.h>

// Função recursiva para calcular o número de camisa na sequência de Fibonacci
int numerosDaCamisa(int n) {
    if (n <= 1)
        return 1;
    else
        return numerosDaCamisa(n - 1) + numerosDaCamisa(n - 2);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int nPrimeiros = 10;

    printf("Números das Camisas: ");
    for (int i = 0; i < nPrimeiros; i++) {
        // Chama a função numerosDaCamisa para obter o número de camisa correspondente ao índice i
        printf("[%d] ", numerosDaCamisa(i));
    }

    return 0;
}

