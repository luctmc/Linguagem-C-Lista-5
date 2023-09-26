/*Enunciado:Q4
SOMAR PARES – Crie uma aplicação que percorra os valores na faixa de 1 a 500 e que no final apresente
a soma de todos os valores pares existentes dentro da faixa percorrida.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i <= 500; i++) {
        if (i % 2 == 0) {
            soma += i; // Se i for par, adicione-o à soma
        }
    }

    printf("A soma dos valores pares de 1 a 500 é: %d\n", soma);

    return 0;
}

