#include <stdio.h>

/*
4 - A padaria Hotpão vende certa quantidade de pães franceses e uma quantidade de broas a cada dia. Cada pãozinho
custa R$ 0.50 e a broa custa R$ 1.50. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães e
broas (juntos), e quanto deve guardar numa conta de poupança (10% do total arrecadado). Você foi contratado
para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de
broas, e depois calcular os dados solicitados.
*/

int main() {
    // Declaração das variáveis
    float qtd_pao, qtd_broa;
    float total_arrecadado, poupanca;

    // Solicitação e leitura das quantidades vendidas
    printf("Quantidade de pães vendidos:\n");
    scanf("%f", &qtd_pao);

    printf("Quantidade de broas vendidas:\n");
    scanf("%f", &qtd_broa);

    // Cálculo do total arrecadado e da poupança
    total_arrecadado = (qtd_pao * 0.50) + (qtd_broa * 1.50);
    poupanca = total_arrecadado * 0.10;

    // Impressão dos resultados
    printf("A quantidade vendida foi de R$ %.2f\n", total_arrecadado);
    printf("A quantidade que deverá ser posta na poupança é R$ %.2f\n", poupanca);

    return 0;
}
