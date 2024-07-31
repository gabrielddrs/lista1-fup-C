#include <stdio.h>

/*
11 - Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um algoritmo para
converter este tempo em anos, meses e dias. Assuma que cada mês possui sempre 30 dias.
*/

int main() {
    int dias, meses, anos;

    printf("Quantos dias estamos sem acidentes?\n");
    scanf("%d", &dias);

    meses = dias / 30;
    anos = dias / 360;

    printf("Estamos a %d dias sem acidentes!\n", dias);
    printf("Estamos a %d meses sem acidentes!\n", meses);
    printf("Estamos a %d anos sem acidentes!\n", anos);

    return 0;
}
