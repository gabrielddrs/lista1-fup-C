#include <stdio.h>

/*
28 - Faça um algoritmo que calcule e mostre a área de um quadrado.
Sabe-se que: A = lado * lado;
*/

int main() {
    float lado, area;

    printf("Qual a medida de um lado do quadrado?\n");
    scanf("%f", &lado);

    area = lado * lado;

    printf("A área do quadrado é %.2f\n", area);

    return 0;
}
