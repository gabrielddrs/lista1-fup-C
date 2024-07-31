#include <stdio.h>

/*
35 - Escreva um algoritmo que converta um intervalo de tempo dado em minutos, em horas, minutos e segundos. Por
exemplo, se o tempo dado for 145.87 min., o algoritmo deve fornecer 2 h 25 min. 52.2 s.
*/

int main() {
    float segundos, minutos, horas, tempo_minutos;

    printf("Digite o intervalo de tempo em minutos:\n");
    scanf("%f", &tempo_minutos);

    horas = tempo_minutos / 60;
    minutos = (int)tempo_minutos % 60;
    segundos = (tempo_minutos - ((int)horas * 60) - minutos) * 60;

    printf("O intervalo de tempo convertido é %.0fh %.0fmin %.0fs\n", horas, minutos, segundos);

    return 0;
}
