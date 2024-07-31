#include <stdio.h>

/*
14 - Calcule a área de uma pizza que possui um raio R (Defina PI=3.14 como constate).
*/

int main() {
    float raio;
    const float PI = 3.14;
    float area;

    printf("Qual o raio da pizza?\n");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A área da pizza é %.2f\n", area);

    return 0;
}
