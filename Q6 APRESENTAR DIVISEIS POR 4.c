/*Enunciado:Q6
APRESENTAR DIVISEIS POR 4 – Crie uma aplicação que exiba todos os números divisíveis por 4 que
estão entre a faixa de valores de 1 a 200.
Lucas TImponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    printf("Números divisíveis por 4 de 1 a 200:\n");

    for (int i = 1; i <= 200; i++) {
        if (i % 4 == 0) {
            printf("%d\n", i); // Se i for divisível por 4, imprima-o
        }
    }

    return 0;
}
