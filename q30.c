#include <stdio.h>

/*
30 - Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a quantidade de salários mínimos que ganha esse funcionário.
*/

int main() {
    float salario_min, salario_funcionario, qtd_minimo_funcionario;

    printf("Qual o valor do salário mínimo?\n");
    scanf("%f", &salario_min);

    printf("Qual o valor do salário do funcionário?\n");
    scanf("%f", &salario_funcionario);

    qtd_minimo_funcionario = salario_funcionario / salario_min;

    printf("O funcionário Jubileu recebe %.2f salários mínimos\n", qtd_minimo_funcionario);

    return 0;
}
