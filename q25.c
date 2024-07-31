#include <stdio.h>

/*
25 - Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um algoritmo que receba o
salário fixo de um funcionário e o valor de suas vendas, calcule e mostre a comissão e o salário final do funcionário.
*/

int main() {
    float venda, salario, salario_final;

    printf("Quanto é o seu salário?\n");
    scanf("%f", &salario);

    printf("Quanto você vendeu?\n");
    scanf("%f", &venda);

    salario_final = salario + (venda * 0.4);

    printf("O seu salário final será R$ %.2f\n", salario_final);

    return 0;
}
