#include <stdio.h>

/*
6 - Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o preço do litro da
gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tanque.
*/

int main() {
    float preco_gasolina;
    float preco_pago;
    float litros_gasolina;

    printf("Qual o preço do litro da gasolina?\n");
    scanf("%f", &preco_gasolina);

    printf("Qual o valor que você pagará?\n");
    scanf("%f", &preco_pago);

    litros_gasolina = preco_pago / preco_gasolina;

    printf("A quantidade de gasolina posta foi %.2f L\n", litros_gasolina);

    return 0;
}
