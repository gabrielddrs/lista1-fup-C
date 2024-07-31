#include <stdio.h>

/*
2 - A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as dimensões de um terreno
e depois exibir a área do terreno.
*/

int main() {
    // Declaração das variáveis
    float comprimento;
    float largura;
    float area;

    // Solicitação e leitura da largura
    printf("Qual a largura em Metros?\n");
    scanf("%f", &largura);

    // Solicitação e leitura do comprimento
    printf("Qual o comprimento em Metros?\n");
    scanf("%f", &comprimento);

    // Cálculo da área
    area = comprimento * largura;

    // Impressão da área
    printf("A área do retângulo é: %.2f m²\n", area);

    return 0;
}
