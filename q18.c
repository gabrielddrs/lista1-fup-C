#include <stdio.h>

/*
18 - A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra. Faça um algoritmo
para calcular e imprimir o salário bruto e o salário líquido de um determinado funcionário. Considere que o salário
líquido é igual ao salário bruto descontando-se 10% de impostos.
*/


int main() {
    float horas_normais, horas_extras, salario_bruto, salario_liquido;

    printf("Quantas horas normais você trabalhou?\n");
    scanf("%f", &horas_normais);

    printf("Quantas horas extras você trabalhou?\n");
    scanf("%f", &horas_extras);

    salario_bruto = (horas_normais * 10) + (horas_extras * 15);
    salario_liquido = salario_bruto - (salario_bruto * 0.10);

    printf("O seu salário bruto foi R$ %.2f\n", salario_bruto);
    printf("O seu salário líquido foi R$ %.2f\n", salario_liquido);

    return 0;
}
