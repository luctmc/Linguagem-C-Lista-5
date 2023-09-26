/*Enunciado:Q2
TABUADA – Crie uma aplicação que apresente o resultado de uma tabuada de um número qualquer
fornecido pelo usuário, por exemplo, se o usuário fornecer o número 2, deverá ser impresso os valores
da seguinte forma:
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
(...)
2 x 10 = 20
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um número para a tabuada: ");
    scanf("%d", &numero);
    
    printf("Tabuada do %d:\n", numero);
    
    for (int i = 1; i <= 10; i++) {
        int resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }
    
    return 0;
}
