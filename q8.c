#include <stdio.h>

/*
8 - Faça um algoritmo que permita entrar com o dia e o mês de uma data e informar quantos dias se passaram desde
o início do ano. Esqueça a questão dos anos bissextos e considere sempre que um mês possui 30 dias.
*/

int main() {
    int dia, mes, dias_passados;

    printf("Qual o dia?\n");
    scanf("%d", &dia);

    printf("Qual o mês?\n");
    scanf("%d", &mes);

    dias_passados = (mes - 1) * 30 + dia;

    printf("Dias passados desde o começo do ano: %d\n", dias_passados);

    return 0;
}
