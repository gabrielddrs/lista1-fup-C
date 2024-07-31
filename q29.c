#include <stdio.h>

/*
29 - Faça um algoritmo que calcule e mostre a área de um losango.
Sabe-se que: A = (diagonal maior * diagonal menor) /2;
*/

int main() {
    float diagonal_menor, diagonal_maior, area;

    printf("Qual a medida da diagonal maior do losango?\n");
    scanf("%f", &diagonal_maior);

    printf("Qual a medida da diagonal menor do losango?\n");
    scanf("%f", &diagonal_menor);

    area = (diagonal_maior * diagonal_menor) / 2;

    printf("A área do losango é %.2f\n", area);

    return 0;
}
