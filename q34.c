#include <stdio.h>

/*
34 - Faça um algoritmo que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Essa pessoa
vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. Sabe-se
que a cotação do dólar é de R$ 5.65, do marco alemão é de R$ 3.27 e da libra esterlina é de R$ 7.48. O algoritmo
deve fazer as conversões e mostrá-las;
*/

int main() {
    float reais;
    const float dolares = 5.65;
    const float marcos = 3.27;
    const float libras = 7.48;
    float reais_p_dolar, reais_p_marco, reais_p_libras;

    printf("Qual o valor que você levará para a viagem em reais?\n");
    scanf("%f", &reais);

    reais_p_dolar = reais / dolares;
    reais_p_marco = reais / marcos;
    reais_p_libras = reais / libras;

    printf("A quantidade que você terá de dólares é: %.2f\n", reais_p_dolar);
    printf("A quantidade que você terá de marcos alemães é: %.2f\n", reais_p_marco);
    printf("A quantidade que você terá de libras esterlinas é: %.2f\n", reais_p_libras);

    return 0;
}
