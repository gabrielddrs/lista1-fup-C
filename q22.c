#include <stdio.h>

/*
22 - Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu poupar. Faça um algoritmo
para ler a quantidade de cada tipo de moeda, e imprimir o valor total economizado, em reais. Considere que
existam moedas de 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo moeda de um tipo, a
quantidade respectiva é zero.
*/

int main() {
    int moedas_5, moedas_10, moedas_25, moedas_50, moedas_1;

    printf("Quantas moedas de 5 centavos?\n");
    scanf("%d", &moedas_5);

    printf("Quantas moedas de 10 centavos?\n");
    scanf("%d", &moedas_10);

    printf("Quantas moedas de 25 centavos?\n");
    scanf("%d", &moedas_25);

    printf("Quantas moedas de 50 centavos?\n");
    scanf("%d", &moedas_50);

    printf("Quantas moedas de 1 real?\n");
    scanf("%d", &moedas_1);

    double total_reais = (moedas_5 * 0.05) + (moedas_10 * 0.10) + (moedas_25 * 0.25) + (moedas_50 * 0.50) + (moedas_1 * 1.00);

    printf("O valor total economizado é: R$ %.2f\n", total_reais);

    return 0;
}
