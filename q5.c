#include <stdio.h>

/*
5 - Escreva um algoritmo para ler a idade de uma pessoa, e exibir quantos dias de vida ela possui. Considere sempre
anos completos, e que um ano possui 365 dias.
Ex: Uma pessoa com 19 anos possui pouco mais de 6935 dias de vida;
Veja um exemplo de saída: Maria, você já viveu pouco mais de 6935 dias.
*/

int main() {
    int idade;

    printf("Qual sua idade?\n");
    scanf("%d", &idade);

    int dias_vividos = idade * 365;

    printf("Você possui %d anos de idade e viveu %d dias\n", idade, dias_vividos);

    return 0;
}
