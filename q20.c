#include <stdio.h>

/*
20 - Uma confecção produz X blusas de lã e para isto gasta certa quantidade de novelos. Faça um algoritmo para calcular quantos novelos de lã ela gasta por blusa.
*/

int main() {
    int novelo_total, camisas_feitas;
    float novelo_por_camisa;

    printf("Quantidade de camisas que foram feitas:\n");
    scanf("%d", &camisas_feitas);

    printf("Quantidade de lã utilizadas para fazer as camisas:\n");
    scanf("%d", &novelo_total);

    novelo_por_camisa = (float)novelo_total / camisas_feitas;

    printf("A quantidade de novelos de lã por camisa é de %.2f\n", novelo_por_camisa);

    return 0;
}
