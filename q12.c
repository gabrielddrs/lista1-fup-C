#include <stdio.h>

/*
12 - Faça um algoritmo para ler o salário de um funcionário e aumentá-lo em 15%. Após o aumento, desconte 8% de
impostos. Imprima o salário inicial, o salário com o aumento e o salário final.
*/

int main() {
    float salario, salario_aumentado, salario_descontado;

    printf("Qual o salário?\n");
    scanf("%f", &salario);

    salario_aumentado = salario * 1.5;
    salario_descontado = salario_aumentado * 0.8;

    printf("Seu novo salário é R$ %.2f\n", salario_aumentado);
    printf("Após os impostos fica R$ %.2f\n", salario_descontado);

    return 0;
}
