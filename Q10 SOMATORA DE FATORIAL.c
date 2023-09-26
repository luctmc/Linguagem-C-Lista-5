/*Enunciado:Q10
SOMATORA DE FATORIAL – Crie um programa que efetue a leitura de 5 valores inteiros quaisquer
fornecidos pelo usuário, no final o programa deverá apresentar o total do somatório da fatorial de cada
valor lido.
Lucas TImponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

// Função para calcular o fatorial de um número
unsigned long long calcularFatorial(int numero) {
    unsigned long long fatorial = 1;

    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main() {
    int valores[5];
    unsigned long long somatorioFatoriais = 0;

    printf("Digite 5 valores inteiros:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
    }

    // Calcula o somatório dos fatoriais
    for (int i = 0; i < 5; i++) {
        unsigned long long fatorial = calcularFatorial(valores[i]);
        somatorioFatoriais += fatorial;
    }

    printf("O somatório dos fatoriais é: %llu\n", somatorioFatoriais);

    return 0;
}
