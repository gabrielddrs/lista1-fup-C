#include <stdio.h>

/*
13 - Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma: CENTENA = x DEZENA = y
UNIDADE = z
*/

int main() {
    int num, x, y, z;

    printf("Qual o número de 3 dígitos?\n");
    scanf("%d", &num);

    x = num / 100;
    y = (num % 100) / 10;
    z = (num % 100) % 10;

    printf("CENTENA = %d DEZENA = %d UNIDADE = %d\n", x, y, z);

    return 0;
}
