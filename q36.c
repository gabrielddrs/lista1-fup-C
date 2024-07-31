#include <stdio.h>

/*
36 - Para viajar de avião, o perímetro da bagagem de mão não deve ultrapassar 45 polegadas (1 polegada equivale a
2.54cm). Solicite as informações de altura, largura e comprimento da bagagem do usuário (em centímetros) e
retorne o perímetro equivalente em centímetros e em polegadas. Utilize uma constante para o valor de 1 polegada
em centímetros.
*/

int main() {
    float altura_cm, largura_cm, comprimento_cm, perimetro_cm, perimetro_polegadas;

    printf("Digite a altura da bagagem em centímetros:\n");
    scanf("%f", &altura_cm);

    printf("Digite a largura da bagagem em centímetros:\n");
    scanf("%f", &largura_cm);

    printf("Digite o comprimento da bagagem em centímetros:\n");
    scanf("%f", &comprimento_cm);

    perimetro_cm = 2 * (altura_cm + largura_cm + comprimento_cm);
    perimetro_polegadas = perimetro_cm / 2.54;

    printf("O perímetro da bagagem em centímetros é: %.2f cm\n", perimetro_cm);
    printf("O perímetro da bagagem em polegadas é: %.2f polegadas\n", perimetro_polegadas);

    return 0;
}
