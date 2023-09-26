/*Enunciado:Q9
FATORIAL – Crie uma aplicação que deverá solicitar do usuário um valor inteiro qualquer, com base no
valor fornecido calcule o fatorial e apresente o resultado do fatorial do valor fornecido.
Lucas TImponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    int numero;
    unsigned long long fatorial = 1;

    printf("Digite um valor inteiro para calcular o fatorial: ");
    scanf("%d", &numero);

    // Verifica se o número é negativo
    if (numero < 0) {
        printf("O fatorial não está definido para números negativos.\n");
        return 1; // Saída com erro
    }

    // Calcula o fatorial
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    printf("%d! = %llu\n", numero, fatorial);

    return 0;
}

