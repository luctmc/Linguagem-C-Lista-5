/*Enunciado:Q8
BASE E EXPOENTE – Crie um programa que apresente como resultado o valor de uma potência de uma
base qualquer elevada a um expoente qualquer, ou seja, BE, em que B é o valor da BASE e E o valor do
EXPOENTE. Os valores da base e do expoente devem ser fornecidos pelo usuário. Dica: Inicie com
valore de base e expoente baixos, como por exemplo base 3 e expoente 4, 34 = 81.
Lucas TImponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    double base, expoente, resultado = 1.0;

    printf("Digite o valor da base: ");
    scanf("%lf", &base);

    printf("Digite o valor do expoente: ");
    scanf("%lf", &expoente);

    // Verificando se o expoente é negativo
    if (expoente < 0) {
        printf("O expoente deve ser um número não negativo.\n");
        return 1; // Saída com erro
    }

    // Calculando a potência
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    printf("%.2lf^%.2lf = %.2lf\n", base, expoente, resultado);

    return 0;
}
