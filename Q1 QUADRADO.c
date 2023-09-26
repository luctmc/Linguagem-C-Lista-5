/*Enunciado: Q1
QUADRADO – Crie uma aplicação de percorra do número 15 ao número 50 e apresente o valor ao
quadrado de cada um dos valores entre 15 e 50.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int i;
    
    printf("Valores ao quadrado de 15 a 50:\n");
    
    for (i = 15; i <= 50; i++) {
        int quadrado = i * i;
        printf("%d ao quadrado é %d\n", i, quadrado);
    }
    
    return 0;
}
