#include <stdio.h>

/*
9 - Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendidas
respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usuário forneça a quantidade de camisetas
pequenas, médias e grandes referentes a uma venda, e a máquina informe quanto será o valor arrecadado.
*/

int main() {
    float qtd_camisa_p, qtd_camisa_m, qtd_camisa_g;
    float valor_arrecadado;

    printf("Quantidade de camisas P compradas:\n");
    scanf("%f", &qtd_camisa_p);

    printf("Quantidade de camisas M compradas:\n");
    scanf("%f", &qtd_camisa_m);

    printf("Quantidade de camisas G compradas:\n");
    scanf("%f", &qtd_camisa_g);

    valor_arrecadado = (qtd_camisa_p * 10) + (qtd_camisa_m * 12) + (qtd_camisa_g * 15);

    printf("O valor arrecadado na venda foi de R$ %.2f\n", valor_arrecadado);

    return 0;
}
