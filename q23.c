#include <stdio.h>

/*
23 - Um tonel de refresco é feito com 8 partes de água mineral e 2 partes de suco de maracujá. Faça um algoritmo para
calcular quantos litros de água e de suco são necessários para se fazer X litros de refresco (informados pelo
usuário).
*/

int main() {
    float refresco, agua, suco;

    printf("Escreva a quantidade de refresco em litros:\n");
    scanf("%f", &refresco);

    agua = (refresco * 8) / 10;
    suco = (refresco * 2) / 10;

    printf("Litros de água: %.2fL\n", agua);
    printf("Litros de suco de maracujá: %.2fL\n", suco);

    return 0;
}
