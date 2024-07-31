#include <stdio.h>

/*
27 - Faça um algoritmo que calcule e mostre a área de um trapézio.
Sabe-se que: A = (base maior + base menor) * altura) /2;
*/

int main() {
    float altura, base_menor, base_maior, area;

    printf("Qual a medida da altura do trapézio?\n");
    scanf("%f", &altura);

    printf("Qual a medida da base menor do trapézio?\n");
    scanf("%f", &base_menor);

    printf("Qual a medida da base maior do trapézio?\n");
    scanf("%f", &base_maior);

    area = ((base_menor + base_maior) * altura) / 2;

    printf("A área do trapézio é: %.2f\n", area);

    return 0;
}
