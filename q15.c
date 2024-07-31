#include <stdio.h>

/*
15 - Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e
válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.
*/

int main() {
    float total_eleitores, nulos, brancos, validos;

    printf("Quantos votos nulos tiveram?\n");
    scanf("%f", &nulos);

    printf("Quantos votos em branco tiveram?\n");
    scanf("%f", &brancos);

    printf("Quantos votos válidos tiveram?\n");
    scanf("%f", &validos);

    printf("Quantos eleitores tiveram?\n");
    scanf("%f", &total_eleitores);

    float pct_nulos = (nulos / total_eleitores) * 100;
    float pct_brancos = (brancos / total_eleitores) * 100;
    float pct_validos = (validos / total_eleitores) * 100;

    printf("O percentual de votos nulos foi: %.2f%%\n", pct_nulos);
    printf("O percentual de votos em branco foi: %.2f%%\n", pct_brancos);
    printf("O percentual de votos válidos foi: %.2f%%\n", pct_validos);

    return 0;
}
