/*3 - Fibonacci dos n�meros de camisa:
Suponha que cada jogador de um time de futebol tenha um n�mero de camisa associado.
A sequ�ncia de n�meros de camisa segue a sequ�ncia de Fibonacci, onde cada n�mero �
a soma dos dois anteriores (exceto os dois primeiros que s�o 1). Escreva uma fun��o
recursiva em C para imprimir os N primeiros n�meros de camisa da equipe.*/

#include <stdio.h>
#include <locale.h>

// Fun��o recursiva para calcular o n�mero de camisa na sequ�ncia de Fibonacci
int numerosDaCamisa(int n) {
    if (n <= 1)
        return 1;
    else
        return numerosDaCamisa(n - 1) + numerosDaCamisa(n - 2);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int nPrimeiros = 10;

    printf("N�meros das Camisas: ");
    for (int i = 0; i < nPrimeiros; i++) {
        // Chama a fun��o numerosDaCamisa para obter o n�mero de camisa correspondente ao �ndice i
        printf("[%d] ", numerosDaCamisa(i));
    }

    return 0;
}

