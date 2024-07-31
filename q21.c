#include <stdio.h>

/*
21 - A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml, garrafa de 600 ml e
garrafa de 2 litros. Se um comerciante compra uma determinada quantidade de cada formato, faça um algoritmo
para calcular quantos litros de refrigerante ele comprou.
*/

int main() {
    int qtd_lata = 350;
    int qtd_garrafa_pequena = 600;
    int qtd_garrafa_grande = 2;
    float total;

    printf("Quantidade de latas de 350ml compradas:\n");
    scanf("%d", &qtd_lata);

    printf("Quantidade de garrafas de 350ml compradas:\n");
    scanf("%d", &qtd_garrafa_pequena);

    printf("Quantidade de garrafas de 2L compradas:\n");
    scanf("%d", &qtd_garrafa_grande);

    total = (qtd_lata * 0.35) + (qtd_garrafa_pequena * 0.60) + (qtd_garrafa_grande * 2);

    printf("A quantidade de refrigerante em Litros é %.2fL\n", total);

    return 0;
}
