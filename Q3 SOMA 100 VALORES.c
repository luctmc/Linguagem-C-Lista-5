/*Enunciado:Q3
SOMA 100 VALORES – Crie uma aplicação que percorra do número 1 ao número 100, ao final deverá
ser exibida a soma de todos os valores entre 1 e 100 (1+2+3+4+5+6+7+...97+98+97+100).
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("A soma dos valores de 1 a 100 é: %d\n", soma);

    return 0;
}

