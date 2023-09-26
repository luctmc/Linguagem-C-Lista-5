/*Enunciado:Q5
EXIBIR ÍMPARES – Crie uma aplicação que percorra os valores em uma faixa de 1 a 20 e apresente
todos os valores ímpares existentes dentro desta faixa de valores.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    printf("Valores ímpares de 1 a 20:\n");

    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i); // Se i for ímpar, imprima-o
        }
    }

    return 0;
}
