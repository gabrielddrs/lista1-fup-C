#include <stdio.h>

/*
19 - A granja Frangote possui um controle automatizado de cada frango da sua produção. No pé direito do frango há
um anel com um chip de identificação; no pé esquerdo são dois anéis para indicar o tipo de alimento que ele deve
consumir. Sabendo que o anel com chip custa R$4,00 e o anel de alimento custa R$3,50, faça um algoritmo para
calcular o gasto total da granja para marcar todos os seus frangos.
*/


int main() {
    float anel_chip = 4.00;
    float anel_comida = 3.50;
    float custo_aneis = anel_chip + (anel_comida * 2);
    int frangos;
    float custo_frango;

    printf("Quantos frangos tem na granja?\n");
    scanf("%d", &frangos);

    custo_frango = custo_aneis * frangos;

    printf("O custo para marcar todos os frangos será de R$ %.2f\n", custo_frango);

    return 0;
}
