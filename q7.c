#include <stdio.h>

/*
7 - O restaurante a quilo Bem-Bão cobra R$ 32.00 por cada quilo de refeição. Escreva um algoritmo que leia o peso do
prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a balança já desconte o peso do
prato.
*/

int main() {
    float peso_prato;
    float valor_pagar;

    printf("Qual o peso do prato em Kg?\n");
    scanf("%f", &peso_prato);

    valor_pagar = peso_prato * 32;

    printf("O valor do prato foi de R$ %.2f\n", valor_pagar);

    return 0;
}
