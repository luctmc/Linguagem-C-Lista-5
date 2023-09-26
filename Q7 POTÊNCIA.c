/*Enunciado:Q7
POTÊNCIA – Crie uma aplicação que apresenta o resultado das potências de 3, variando do expoente
0 até o expoente 15. Deve ser considerado que qualquer número elevado a zero é 1, e elevado a 1 é
ele próprio. Deverá ser apresentado, observando a seguinte definição:
30 = 1
31 = 3
32 = 9
(...)
315=14348907
Lucas TImponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    printf("Potências de 3:\n");

    for (int expoente = 0; expoente <= 15; expoente++) {
        long long resultado = 1; // Usamos long long para armazenar números grandes

        for (int i = 1; i <= expoente; i++) {
            resultado *= 3;
        }

        printf("3^%d = %lld\n", expoente, resultado);
    }

    return 0;
}
