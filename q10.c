#include <stdio.h>
#include <math.h>

/*
10 - Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano. Cada ponto é um par
ordenado (x, y).
*/

int main() {
    double x1, y1, x2, y2;
    double d;

    printf("Qual o X1?\n");
    scanf("%lf", &x1);

    printf("Qual o Y1?\n");
    scanf("%lf", &y1);

    printf("Qual o X2?\n");
    scanf("%lf", &x2);

    printf("Qual o Y2?\n");
    scanf("%lf", &y2);

    // Calcula a distância euclidiana
    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("A distância entre os pontos é: %.2f\n", d);

    return 0;
}
