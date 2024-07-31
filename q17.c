#include <stdio.h>

/*
17 - Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Faça um algoritmo para ler
uma temperatura Celsius e imprimi-la em Fahrenheit (pesquise como fazer este tipo de conversão).
*/

int main() {
    float celsius, fahrenheit;

    printf("Escreva a temperatura em graus:\n");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("A temperatura em fahrenheit é %.2f°F\n", fahrenheit);

    return 0;
}
