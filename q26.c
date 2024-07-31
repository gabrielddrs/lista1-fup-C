#include <stdio.h>

/*
26 - Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre:

(a) calcule e mostre esse peso em gramas;

(b) o novo peso se a pessoa engordar 15% sobre o peso digitado;

(c) o novo peso se a pessoa emagrecer 20% sobre o peso digitado.
*/

int main() {
    float peso, engordar, emagrecer;

    printf("Qual o seu peso?\n");
    scanf("%f", &peso);

    engordar = peso + (peso * 0.15);
    emagrecer = peso - (peso * 0.2);

    printf("O seu peso se engordar 15%% ficará %.2f Kg\n", engordar);
    printf("O seu peso se emagrecer 20%% ficará %.2f Kg\n", emagrecer);

    return 0;
}
