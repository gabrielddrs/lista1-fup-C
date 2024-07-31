#include <stdio.h>

/*
32 - S. João recebeu seu salário e precisa pagar duas contas que estão atrasadas. Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. Faça um algoritmo que calcule e mostre quanto restará do salário do
João.
*/

int main() {
    float conta1, conta2;

    printf("Qual o valor da primeira conta?\n");
    scanf("%f", &conta1);

    printf("Qual o valor da segunda conta?\n");
    scanf("%f", &conta2);

    conta1 = conta1 + (conta1 * 0.02);
    conta2 = conta2 + (conta2 * 0.02);

    printf("O valor a pagar da primeira conta será R$ %.2f\n", conta1);
    printf("O valor a pagar da segunda conta será R$ %.2f\n", conta2);

    return 0;
}
